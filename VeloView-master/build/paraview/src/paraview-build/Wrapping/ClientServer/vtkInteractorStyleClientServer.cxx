// ClientServer wrapper for vtkInteractorStyle object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkInteractorStyle.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkInteractorStyleClientServerNewCommand(void* /*ctx*/)
{
  return vtkInteractorStyle::New();
}


int VTK_EXPORT vtkInteractorStyleCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkInteractorStyle *op = vtkInteractorStyle::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkInteractorStyle.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInteractorStyle  *temp20;
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
    vtkInteractorStyle  *temp20;
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
    vtkInteractorStyle  *temp20;
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
  if (!strcmp("SetEnabled",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnabled(temp0);
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
  if (!strcmp("GetAutoAdjustCameraClippingRangeMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutoAdjustCameraClippingRangeMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAutoAdjustCameraClippingRangeMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutoAdjustCameraClippingRangeMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAutoAdjustCameraClippingRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutoAdjustCameraClippingRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AutoAdjustCameraClippingRangeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutoAdjustCameraClippingRangeOn();
      return 1;
      }
    }
  if (!strcmp("AutoAdjustCameraClippingRangeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutoAdjustCameraClippingRangeOff();
      return 1;
      }
    }
  if (!strcmp("FindPokedRenderer",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->FindPokedRenderer(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetState",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetState();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUseTimers",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseTimers();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseTimers",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseTimers(temp0);
      return 1;
      }
    }
  if (!strcmp("UseTimersOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseTimersOn();
      return 1;
      }
    }
  if (!strcmp("UseTimersOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseTimersOff();
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
  if (!strcmp("SetHandleObservers",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetHandleObservers(temp0);
      return 1;
      }
    }
  if (!strcmp("GetHandleObservers",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetHandleObservers();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HandleObserversOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->HandleObserversOn();
      return 1;
      }
    }
  if (!strcmp("HandleObserversOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->HandleObserversOff();
      return 1;
      }
    }
  if (!strcmp("OnMouseMove",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnMouseMove();
      return 1;
      }
    }
  if (!strcmp("OnLeftButtonDown",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnLeftButtonDown();
      return 1;
      }
    }
  if (!strcmp("OnLeftButtonUp",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnLeftButtonUp();
      return 1;
      }
    }
  if (!strcmp("OnMiddleButtonDown",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnMiddleButtonDown();
      return 1;
      }
    }
  if (!strcmp("OnMiddleButtonUp",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnMiddleButtonUp();
      return 1;
      }
    }
  if (!strcmp("OnRightButtonDown",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnRightButtonDown();
      return 1;
      }
    }
  if (!strcmp("OnRightButtonUp",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnRightButtonUp();
      return 1;
      }
    }
  if (!strcmp("OnMouseWheelForward",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnMouseWheelForward();
      return 1;
      }
    }
  if (!strcmp("OnMouseWheelBackward",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnMouseWheelBackward();
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
  if (!strcmp("OnKeyDown",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnKeyDown();
      return 1;
      }
    }
  if (!strcmp("OnKeyUp",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnKeyUp();
      return 1;
      }
    }
  if (!strcmp("OnKeyPress",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnKeyPress();
      return 1;
      }
    }
  if (!strcmp("OnKeyRelease",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnKeyRelease();
      return 1;
      }
    }
  if (!strcmp("OnExpose",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnExpose();
      return 1;
      }
    }
  if (!strcmp("OnConfigure",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnConfigure();
      return 1;
      }
    }
  if (!strcmp("OnEnter",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnEnter();
      return 1;
      }
    }
  if (!strcmp("OnLeave",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnLeave();
      return 1;
      }
    }
  if (!strcmp("OnTimer",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnTimer();
      return 1;
      }
    }
  if (!strcmp("Rotate",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Rotate();
      return 1;
      }
    }
  if (!strcmp("Spin",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Spin();
      return 1;
      }
    }
  if (!strcmp("Pan",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Pan();
      return 1;
      }
    }
  if (!strcmp("Dolly",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Dolly();
      return 1;
      }
    }
  if (!strcmp("Zoom",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Zoom();
      return 1;
      }
    }
  if (!strcmp("UniformScale",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UniformScale();
      return 1;
      }
    }
  if (!strcmp("StartState",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->StartState(temp0);
      return 1;
      }
    }
  if (!strcmp("StopState",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StopState();
      return 1;
      }
    }
  if (!strcmp("StartAnimate",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartAnimate();
      return 1;
      }
    }
  if (!strcmp("StopAnimate",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StopAnimate();
      return 1;
      }
    }
  if (!strcmp("StartRotate",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartRotate();
      return 1;
      }
    }
  if (!strcmp("EndRotate",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndRotate();
      return 1;
      }
    }
  if (!strcmp("StartZoom",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartZoom();
      return 1;
      }
    }
  if (!strcmp("EndZoom",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndZoom();
      return 1;
      }
    }
  if (!strcmp("StartPan",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartPan();
      return 1;
      }
    }
  if (!strcmp("EndPan",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndPan();
      return 1;
      }
    }
  if (!strcmp("StartSpin",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartSpin();
      return 1;
      }
    }
  if (!strcmp("EndSpin",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndSpin();
      return 1;
      }
    }
  if (!strcmp("StartDolly",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartDolly();
      return 1;
      }
    }
  if (!strcmp("EndDolly",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndDolly();
      return 1;
      }
    }
  if (!strcmp("StartUniformScale",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartUniformScale();
      return 1;
      }
    }
  if (!strcmp("EndUniformScale",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndUniformScale();
      return 1;
      }
    }
  if (!strcmp("StartTimer",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartTimer();
      return 1;
      }
    }
  if (!strcmp("EndTimer",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndTimer();
      return 1;
      }
    }
  if (!strcmp("StartTwoPointer",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartTwoPointer();
      return 1;
      }
    }
  if (!strcmp("EndTwoPointer",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndTwoPointer();
      return 1;
      }
    }
  if (!strcmp("HighlightProp",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp"))
      {
      op->HighlightProp(temp0);
      return 1;
      }
    }
  if (!strcmp("HighlightActor2D",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkActor2D  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkActor2D"))
      {
      op->HighlightActor2D(temp0);
      return 1;
      }
    }
  if (!strcmp("HighlightProp3D",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp3D  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp3D"))
      {
      op->HighlightProp3D(temp0);
      return 1;
      }
    }
  if (!strcmp("SetPickColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetPickColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetPickColor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetPickColor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPickColor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetPickColor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMouseWheelMotionFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMouseWheelMotionFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMouseWheelMotionFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMouseWheelMotionFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTDxStyle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTDxInteractorStyle  *temp20;
      {
      temp20 = (op)->GetTDxStyle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTDxStyle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTDxInteractorStyle  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTDxInteractorStyle"))
      {
      op->SetTDxStyle(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkInteractorObserver";
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
  vtkmsg << "Object type: vtkInteractorStyle, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkInteractorStyle_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkInteractorStyle", vtkInteractorStyleClientServerNewCommand);
    csi->AddCommandFunction("vtkInteractorStyle", vtkInteractorStyleCommand);
    }
}
