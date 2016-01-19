// ClientServer wrapper for vtkInteractorStyleSwitch object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkInteractorStyleSwitch.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkInteractorStyleSwitchClientServerNewCommand(void* /*ctx*/)
{
  return vtkInteractorStyleSwitch::New();
}


int VTK_EXPORT vtkInteractorStyleSwitchCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkInteractorStyleSwitch *op = vtkInteractorStyleSwitch::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkInteractorStyleSwitch.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInteractorStyleSwitch  *temp20;
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
    vtkInteractorStyleSwitch  *temp20;
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
    vtkInteractorStyleSwitch  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("SetAutoAdjustCameraClippingRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAutoAdjustCameraClippingRange(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCurrentStyle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInteractorStyle  *temp20;
      {
      temp20 = (op)->GetCurrentStyle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCurrentStyleToJoystickActor",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCurrentStyleToJoystickActor();
      return 1;
      }
    }
  if (!strcmp("SetCurrentStyleToJoystickCamera",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCurrentStyleToJoystickCamera();
      return 1;
      }
    }
  if (!strcmp("SetCurrentStyleToTrackballActor",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCurrentStyleToTrackballActor();
      return 1;
      }
    }
  if (!strcmp("SetCurrentStyleToTrackballCamera",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCurrentStyleToTrackballCamera();
      return 1;
      }
    }
  if (!strcmp("SetCurrentStyleToMultiTouchCamera",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCurrentStyleToMultiTouchCamera();
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
  if (!strcmp("SetDefaultRenderer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderer  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer"))
      {
      op->SetDefaultRenderer(temp0);
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

  {
    const char* commandName = "vtkInteractorStyleSwitchBase";
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
  vtkmsg << "Object type: vtkInteractorStyleSwitch, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkInteractorStyleSwitch_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkInteractorStyleSwitch", vtkInteractorStyleSwitchClientServerNewCommand);
    csi->AddCommandFunction("vtkInteractorStyleSwitch", vtkInteractorStyleSwitchCommand);
    }
}
