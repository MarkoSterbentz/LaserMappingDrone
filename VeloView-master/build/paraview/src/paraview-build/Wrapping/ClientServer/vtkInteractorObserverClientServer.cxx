// ClientServer wrapper for vtkInteractorObserver object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkInteractorObserver.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkInteractorObserverCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkInteractorObserver *op = vtkInteractorObserver::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkInteractorObserver.  "
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
    vtkInteractorObserver  *temp20;
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
    vtkInteractorObserver  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEnabled",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnabled(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEnabled",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEnabled();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EnabledOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnabledOn();
      return 1;
      }
    }
  if (!strcmp("EnabledOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnabledOff();
      return 1;
      }
    }
  if (!strcmp("On",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->On();
      return 1;
      }
    }
  if (!strcmp("Off",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Off();
      return 1;
      }
    }
  if (!strcmp("SetInteractor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderWindowInteractor  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderWindowInteractor"))
      {
      op->SetInteractor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInteractor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderWindowInteractor  *temp20;
      {
      temp20 = (op)->GetInteractor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPriority",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPriority(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPriorityMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetPriorityMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPriorityMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetPriorityMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPriority",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetPriority();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PickingManagedOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PickingManagedOn();
      return 1;
      }
    }
  if (!strcmp("PickingManagedOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PickingManagedOff();
      return 1;
      }
    }
  if (!strcmp("SetPickingManaged",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPickingManaged(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPickingManaged",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetPickingManaged();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetKeyPressActivation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetKeyPressActivation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetKeyPressActivation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetKeyPressActivation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("KeyPressActivationOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->KeyPressActivationOn();
      return 1;
      }
    }
  if (!strcmp("KeyPressActivationOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->KeyPressActivationOff();
      return 1;
      }
    }
  if (!strcmp("SetKeyPressActivationValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char     temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetKeyPressActivationValue(temp0);
      return 1;
      }
    }
  if (!strcmp("GetKeyPressActivationValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char     temp20;
      {
      temp20 = (op)->GetKeyPressActivationValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDefaultRenderer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderer  *temp20;
      {
      temp20 = (op)->GetDefaultRenderer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDefaultRenderer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderer  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer"))
      {
      op->SetDefaultRenderer(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCurrentRenderer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderer  *temp20;
      {
      temp20 = (op)->GetCurrentRenderer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCurrentRenderer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderer  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer"))
      {
      op->SetCurrentRenderer(temp0);
      return 1;
      }
    }
  if (!strcmp("OnChar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnChar();
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
  vtkmsg << "Object type: vtkInteractorObserver, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkInteractorObserver_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkInteractorObserver", vtkInteractorObserverCommand);
    }
}
