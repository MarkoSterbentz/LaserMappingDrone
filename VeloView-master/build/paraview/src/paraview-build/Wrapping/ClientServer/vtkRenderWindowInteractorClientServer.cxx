// ClientServer wrapper for vtkRenderWindowInteractor object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkRenderWindowInteractor.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkRenderWindowInteractorClientServerNewCommand(void* /*ctx*/)
{
  return vtkRenderWindowInteractor::New();
}


int VTK_EXPORT vtkRenderWindowInteractorCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkRenderWindowInteractor *op = vtkRenderWindowInteractor::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkRenderWindowInteractor.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderWindowInteractor  *temp20;
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
    vtkRenderWindowInteractor  *temp20;
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
    vtkRenderWindowInteractor  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Initialize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Initialize();
      return 1;
      }
    }
  if (!strcmp("ReInitialize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReInitialize();
      return 1;
      }
    }
  if (!strcmp("UnRegister",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObjectBase  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObjectBase"))
      {
      op->UnRegister(temp0);
      return 1;
      }
    }
  if (!strcmp("Start",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Start();
      return 1;
      }
    }
  if (!strcmp("Enable",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Enable();
      return 1;
      }
    }
  if (!strcmp("Disable",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Disable();
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
  if (!strcmp("EnableRenderOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableRenderOn();
      return 1;
      }
    }
  if (!strcmp("EnableRenderOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableRenderOff();
      return 1;
      }
    }
  if (!strcmp("SetEnableRender",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnableRender(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEnableRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetEnableRender();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRenderWindow",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderWindow  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderWindow"))
      {
      op->SetRenderWindow(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRenderWindow",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderWindow  *temp20;
      {
      temp20 = (op)->GetRenderWindow();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UpdateSize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->UpdateSize(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("CreateTimer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->CreateTimer(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DestroyTimer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->DestroyTimer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CreateRepeatingTimer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned long     temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->CreateRepeatingTimer(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CreateOneShotTimer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned long     temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->CreateOneShotTimer(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsOneShotTimer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsOneShotTimer(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTimerDuration",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    unsigned long     temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetTimerDuration(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ResetTimer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->ResetTimer(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DestroyTimer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->DestroyTimer(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVTKTimerId",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetVTKTimerId(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTimerDuration",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned long     temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTimerDuration(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTimerDurationMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetTimerDurationMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTimerDurationMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetTimerDurationMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTimerDuration",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetTimerDuration();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTimerEventId",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTimerEventId(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTimerEventId",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTimerEventId();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTimerEventType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTimerEventType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTimerEventType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTimerEventType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTimerEventDuration",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTimerEventDuration(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTimerEventDuration",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTimerEventDuration();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTimerEventPlatformId",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTimerEventPlatformId(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTimerEventPlatformId",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTimerEventPlatformId();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TerminateApp",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TerminateApp();
      return 1;
      }
    }
  if (!strcmp("SetInteractorStyle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInteractorObserver  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInteractorObserver"))
      {
      op->SetInteractorStyle(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInteractorStyle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInteractorObserver  *temp20;
      {
      temp20 = (op)->GetInteractorStyle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLightFollowCamera",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLightFollowCamera(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLightFollowCamera",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLightFollowCamera();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LightFollowCameraOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LightFollowCameraOn();
      return 1;
      }
    }
  if (!strcmp("LightFollowCameraOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LightFollowCameraOff();
      return 1;
      }
    }
  if (!strcmp("SetDesiredUpdateRate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDesiredUpdateRate(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDesiredUpdateRateMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDesiredUpdateRateMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDesiredUpdateRateMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDesiredUpdateRateMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDesiredUpdateRate",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDesiredUpdateRate();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetStillUpdateRate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetStillUpdateRate(temp0);
      return 1;
      }
    }
  if (!strcmp("GetStillUpdateRateMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetStillUpdateRateMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetStillUpdateRateMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetStillUpdateRateMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetStillUpdateRate",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetStillUpdateRate();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInitialized",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInitialized();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPicker",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractPicker  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractPicker"))
      {
      op->SetPicker(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPicker",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractPicker  *temp20;
      {
      temp20 = (op)->GetPicker();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CreateDefaultPicker",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractPropPicker  *temp20;
      {
      temp20 = (op)->CreateDefaultPicker();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPickingManager",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPickingManager  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPickingManager"))
      {
      op->SetPickingManager(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPickingManager",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPickingManager  *temp20;
      {
      temp20 = (op)->GetPickingManager();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ExitCallback",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ExitCallback();
      return 1;
      }
    }
  if (!strcmp("UserCallback",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UserCallback();
      return 1;
      }
    }
  if (!strcmp("StartPickCallback",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartPickCallback();
      return 1;
      }
    }
  if (!strcmp("EndPickCallback",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndPickCallback();
      return 1;
      }
    }
  if (!strcmp("GetMousePosition",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    if(temp0 &&
      temp1)
      {
      op->GetMousePosition(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("HideCursor",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->HideCursor();
      return 1;
      }
    }
  if (!strcmp("ShowCursor",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ShowCursor();
      return 1;
      }
    }
  if (!strcmp("Render",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Render();
      return 1;
      }
    }
  if (!strcmp("FlyTo",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkRenderer  *temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->FlyTo(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("FlyTo",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkRenderer  *temp0;
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      temp1)
      {
      op->FlyTo(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("FlyToImage",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkRenderer  *temp0;
    double   temp1;
    double   temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->FlyToImage(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("FlyToImage",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkRenderer  *temp0;
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      temp1)
      {
      op->FlyToImage(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetNumberOfFlyFrames",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfFlyFrames(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfFlyFramesMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfFlyFramesMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfFlyFramesMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfFlyFramesMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfFlyFrames",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfFlyFrames();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDolly",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDolly(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDolly",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDolly();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetEventPosition",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetEventPosition();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLastEventPosition",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetLastEventPosition();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLastEventPosition",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetLastEventPosition(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLastEventPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetLastEventPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("SetEventPosition",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetEventPosition(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetEventPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetEventPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("SetEventPositionFlipY",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetEventPositionFlipY(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetEventPositionFlipY",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetEventPositionFlipY(temp0);
      return 1;
      }
    }
  if (!strcmp("SetEventPosition",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetEventPosition(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetEventPositionFlipY",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetEventPositionFlipY(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetAltKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAltKey(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAltKey",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAltKey();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetControlKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetControlKey(temp0);
      return 1;
      }
    }
  if (!strcmp("GetControlKey",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetControlKey();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetShiftKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetShiftKey(temp0);
      return 1;
      }
    }
  if (!strcmp("GetShiftKey",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetShiftKey();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetKeyCode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char     temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetKeyCode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetKeyCode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char     temp20;
      {
      temp20 = (op)->GetKeyCode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRepeatCount",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRepeatCount(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRepeatCount",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRepeatCount();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetKeySym",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetKeySym(temp0);
      return 1;
      }
    }
  if (!strcmp("GetKeySym",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetKeySym();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPointerIndex",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPointerIndex(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPointerIndex",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPointerIndex();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEventInformation",method) && msg.GetNumberOfArguments(0) == 10)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    char     temp4;
    int      temp5;
    char    *temp6;
    int      temp7;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6) &&
      msg.GetArgument(0, 9, &temp7))
      {
      op->SetEventInformation(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7);
      return 1;
      }
    }
  if (!strcmp("SetEventInformation",method) && msg.GetNumberOfArguments(0) == 9)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    char     temp4;
    int      temp5;
    char    *temp6;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6))
      {
      op->SetEventInformation(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      return 1;
      }
    }
  if (!strcmp("SetEventInformationFlipY",method) && msg.GetNumberOfArguments(0) == 10)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    char     temp4;
    int      temp5;
    char    *temp6;
    int      temp7;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6) &&
      msg.GetArgument(0, 9, &temp7))
      {
      op->SetEventInformationFlipY(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7);
      return 1;
      }
    }
  if (!strcmp("SetEventInformationFlipY",method) && msg.GetNumberOfArguments(0) == 9)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    char     temp4;
    int      temp5;
    char    *temp6;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6))
      {
      op->SetEventInformationFlipY(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      return 1;
      }
    }
  if (!strcmp("SetKeyEventInformation",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    char     temp2;
    int      temp3;
    char    *temp4;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->SetKeyEventInformation(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("SetSize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetSize(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEventSize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetEventSize(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetEventSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetEventSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEventSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetEventSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FindPokedRenderer",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    vtkRenderer  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->FindPokedRenderer(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetObserverMediator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkObserverMediator  *temp20;
      {
      temp20 = (op)->GetObserverMediator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseTDx",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseTDx(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseTDx",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseTDx();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MouseMoveEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MouseMoveEvent();
      return 1;
      }
    }
  if (!strcmp("RightButtonPressEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RightButtonPressEvent();
      return 1;
      }
    }
  if (!strcmp("RightButtonReleaseEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RightButtonReleaseEvent();
      return 1;
      }
    }
  if (!strcmp("LeftButtonPressEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LeftButtonPressEvent();
      return 1;
      }
    }
  if (!strcmp("LeftButtonReleaseEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LeftButtonReleaseEvent();
      return 1;
      }
    }
  if (!strcmp("MiddleButtonPressEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MiddleButtonPressEvent();
      return 1;
      }
    }
  if (!strcmp("MiddleButtonReleaseEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MiddleButtonReleaseEvent();
      return 1;
      }
    }
  if (!strcmp("MouseWheelForwardEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MouseWheelForwardEvent();
      return 1;
      }
    }
  if (!strcmp("MouseWheelBackwardEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MouseWheelBackwardEvent();
      return 1;
      }
    }
  if (!strcmp("ExposeEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ExposeEvent();
      return 1;
      }
    }
  if (!strcmp("ConfigureEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ConfigureEvent();
      return 1;
      }
    }
  if (!strcmp("EnterEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnterEvent();
      return 1;
      }
    }
  if (!strcmp("LeaveEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LeaveEvent();
      return 1;
      }
    }
  if (!strcmp("KeyPressEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->KeyPressEvent();
      return 1;
      }
    }
  if (!strcmp("KeyReleaseEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->KeyReleaseEvent();
      return 1;
      }
    }
  if (!strcmp("CharEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CharEvent();
      return 1;
      }
    }
  if (!strcmp("ExitEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ExitEvent();
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
  vtkmsg << "Object type: vtkRenderWindowInteractor, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkRenderWindowInteractor_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkRenderWindowInteractor", vtkRenderWindowInteractorClientServerNewCommand);
    csi->AddCommandFunction("vtkRenderWindowInteractor", vtkRenderWindowInteractorCommand);
    }
}
