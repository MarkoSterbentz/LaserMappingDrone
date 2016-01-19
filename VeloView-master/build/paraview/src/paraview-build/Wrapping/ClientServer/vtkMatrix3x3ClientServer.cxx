// ClientServer wrapper for vtkMatrix3x3 object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkMatrix3x3.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkMatrix3x3ClientServerNewCommand(void* /*ctx*/)
{
  return vtkMatrix3x3::New();
}


int VTK_EXPORT vtkMatrix3x3Command(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkMatrix3x3 *op = vtkMatrix3x3::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkMatrix3x3.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkMatrix3x3  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
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
    vtkMatrix3x3  *temp20;
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
    vtkMatrix3x3  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DeepCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix3x3  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix3x3"))
      {
      op->DeepCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("DeepCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[9];
    if(msg.GetArgument(0, 2, temp0, 9))
      {
      op->DeepCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("Zero",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Zero();
      return 1;
      }
    }
  if (!strcmp("Identity",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Identity();
      return 1;
      }
    }
  if (!strcmp("Invert",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkMatrix3x3  *temp0;
    vtkMatrix3x3  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix3x3") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkMatrix3x3"))
      {
      op->Invert(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Invert",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Invert();
      return 1;
      }
    }
  if (!strcmp("Transpose",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkMatrix3x3  *temp0;
    vtkMatrix3x3  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix3x3") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkMatrix3x3"))
      {
      op->Transpose(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Transpose",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Transpose();
      return 1;
      }
    }
  if (!strcmp("Multiply3x3",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkMatrix3x3  *temp0;
    vtkMatrix3x3  *temp1;
    vtkMatrix3x3  *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix3x3") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkMatrix3x3") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkMatrix3x3"))
      {
      op->Multiply3x3(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("Adjoint",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkMatrix3x3  *temp0;
    vtkMatrix3x3  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix3x3") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkMatrix3x3"))
      {
      op->Adjoint(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Determinant",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->Determinant();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetElement",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    int      temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetElement(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetElement",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    double   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetElement(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsIdentity",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->IsIdentity();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkObject";
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
  vtkmsg << "Object type: vtkMatrix3x3, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkMatrix3x3_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkMatrix3x3", vtkMatrix3x3ClientServerNewCommand);
    csi->AddCommandFunction("vtkMatrix3x3", vtkMatrix3x3Command);
    }
}
