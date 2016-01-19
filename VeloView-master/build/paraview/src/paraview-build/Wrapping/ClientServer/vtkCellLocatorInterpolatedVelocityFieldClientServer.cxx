// ClientServer wrapper for vtkCellLocatorInterpolatedVelocityField object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkCellLocatorInterpolatedVelocityField.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkCellLocatorInterpolatedVelocityFieldClientServerNewCommand(void* /*ctx*/)
{
  return vtkCellLocatorInterpolatedVelocityField::New();
}


int VTK_EXPORT vtkCellLocatorInterpolatedVelocityFieldCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkCellLocatorInterpolatedVelocityField *op = vtkCellLocatorInterpolatedVelocityField::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkCellLocatorInterpolatedVelocityField.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("GetClassName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetClassName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsA",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsA(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NewInstance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCellLocatorInterpolatedVelocityField  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SafeDownCast",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObject  *temp0;
    vtkCellLocatorInterpolatedVelocityField  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCellLocatorInterpolatedVelocityField  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLastCellLocator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractCellLocator  *temp20;
      {
      temp20 = (op)->GetLastCellLocator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCellLocatorPrototype",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractCellLocator  *temp20;
      {
      temp20 = (op)->GetCellLocatorPrototype();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCellLocatorPrototype",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractCellLocator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractCellLocator"))
      {
      op->SetCellLocatorPrototype(temp0);
      return 1;
      }
    }
  if (!strcmp("CopyParameters",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractInterpolatedVelocityField  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractInterpolatedVelocityField"))
      {
      op->CopyParameters(temp0);
      return 1;
      }
    }
  if (!strcmp("AddDataSet",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataSet  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSet"))
      {
      op->AddDataSet(temp0);
      return 1;
      }
    }
  if (!strcmp("FunctionValues",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    int      temp20;
    if(temp0 &&
      temp1)
      {
      temp20 = (op)->FunctionValues(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLastCellId",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetLastCellId(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLastCellId",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLastCellId(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkCompositeInterpolatedVelocityField";
    if (arlu->HasCommandFunction(commandName) &&
        arlu->CallCommandFunction(commandName, op, method, msg, resultStream)) { return 1; }
  }
  if(resultStream.GetNumberOfMessages() > 0 &&
     resultStream.GetCommand(0) == vtkClientServerStream::Error &&
     resultStream.GetNumberOfArguments(0) > 1)
    {
    /* A superclass wrapper prepared a special message. */
    return 0;
    }
  vtkOStrStreamWrapper vtkmsg;
  vtkmsg << "Object type: vtkCellLocatorInterpolatedVelocityField, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkCellLocatorInterpolatedVelocityField_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkCellLocatorInterpolatedVelocityField", vtkCellLocatorInterpolatedVelocityFieldClientServerNewCommand);
    csi->AddCommandFunction("vtkCellLocatorInterpolatedVelocityField", vtkCellLocatorInterpolatedVelocityFieldCommand);
    }
}
