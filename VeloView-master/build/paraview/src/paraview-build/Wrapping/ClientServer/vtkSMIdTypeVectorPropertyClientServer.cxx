// ClientServer wrapper for vtkSMIdTypeVectorProperty object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSMIdTypeVectorProperty.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSMIdTypeVectorPropertyClientServerNewCommand(void* /*ctx*/)
{
  return vtkSMIdTypeVectorProperty::New();
}


int VTK_EXPORT vtkSMIdTypeVectorPropertyCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSMIdTypeVectorProperty *op = vtkSMIdTypeVectorProperty::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSMIdTypeVectorProperty.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMIdTypeVectorProperty  *temp20;
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
    vtkSMIdTypeVectorProperty  *temp20;
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
    vtkSMIdTypeVectorProperty  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfElements",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetNumberOfElements();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfElements",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfElements(temp0);
      return 1;
      }
    }
  if (!strcmp("SetElement",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    vtkIdType   temp1;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->SetElement(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetElements",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<vtkIdType > temp0(msg, 0, 2);
    int      temp20;
    if(temp0)
      {
      temp20 = (op)->SetElements(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetElements",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<vtkIdType > temp0(msg, 0, 2);
    unsigned int      temp1;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->SetElements(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUncheckedElements",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<vtkIdType > temp0(msg, 0, 2);
    int      temp20;
    if(temp0)
      {
      temp20 = (op)->SetUncheckedElements(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUncheckedElements",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<vtkIdType > temp0(msg, 0, 2);
    unsigned int      temp1;
    int      temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->SetUncheckedElements(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetElements1",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->SetElements1(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetElements2",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkIdType   temp1;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->SetElements2(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetElements3",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkIdType   temp0;
    vtkIdType   temp1;
    vtkIdType   temp2;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->SetElements3(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetElement",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetElement(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUncheckedElement",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetUncheckedElement(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUncheckedElement",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    vtkIdType   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetUncheckedElement(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfUncheckedElements",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetNumberOfUncheckedElements();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetArgumentIsArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetArgumentIsArray();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetArgumentIsArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetArgumentIsArray(temp0);
      return 1;
      }
    }
  if (!strcmp("ArgumentIsArrayOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ArgumentIsArrayOn();
      return 1;
      }
    }
  if (!strcmp("ArgumentIsArrayOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ArgumentIsArrayOff();
      return 1;
      }
    }
  if (!strcmp("Copy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProperty"))
      {
      op->Copy(temp0);
      return 1;
      }
    }
  if (!strcmp("ClearUncheckedElements",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearUncheckedElements();
      return 1;
      }
    }
  if (!strcmp("ResetToXMLDefaults",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResetToXMLDefaults();
      return 1;
      }
    }

  {
    const char* commandName = "vtkSMVectorProperty";
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
  vtkmsg << "Object type: vtkSMIdTypeVectorProperty, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSMIdTypeVectorProperty_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSMIdTypeVectorProperty", vtkSMIdTypeVectorPropertyClientServerNewCommand);
    csi->AddCommandFunction("vtkSMIdTypeVectorProperty", vtkSMIdTypeVectorPropertyCommand);
    }
}
