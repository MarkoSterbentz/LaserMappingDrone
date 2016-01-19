// ClientServer wrapper for vtkInteractorStyleFlight object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkInteractorStyleFlight.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkInteractorStyleFlightClientServerNewCommand(void* /*ctx*/)
{
  return vtkInteractorStyleFlight::New();
}


int VTK_EXPORT vtkInteractorStyleFlightCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkInteractorStyleFlight *op = vtkInteractorStyleFlight::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkInteractorStyleFlight.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInteractorStyleFlight  *temp20;
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
    vtkInteractorStyleFlight  *temp20;
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
    vtkInteractorStyleFlight  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMotionStepSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMotionStepSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMotionStepSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMotionStepSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMotionAccelerationFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMotionAccelerationFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMotionAccelerationFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMotionAccelerationFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAngleStepSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAngleStepSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAngleStepSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetAngleStepSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAngleAccelerationFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAngleAccelerationFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAngleAccelerationFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetAngleAccelerationFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDisableMotion",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDisableMotion(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDisableMotion",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDisableMotion();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DisableMotionOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DisableMotionOn();
      return 1;
      }
    }
  if (!strcmp("DisableMotionOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DisableMotionOff();
      return 1;
      }
    }
  if (!strcmp("SetRestoreUpVector",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRestoreUpVector(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRestoreUpVector",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRestoreUpVector();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RestoreUpVectorOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RestoreUpVectorOn();
      return 1;
      }
    }
  if (!strcmp("RestoreUpVectorOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RestoreUpVectorOff();
      return 1;
      }
    }
  if (!strcmp("GetDefaultUpVector",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetDefaultUpVector();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDefaultUpVector",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetDefaultUpVector(temp0);
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
  if (!strcmp("OnTimer",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnTimer();
      return 1;
      }
    }
  if (!strcmp("ForwardFly",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ForwardFly();
      return 1;
      }
    }
  if (!strcmp("ReverseFly",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReverseFly();
      return 1;
      }
    }
  if (!strcmp("StartForwardFly",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartForwardFly();
      return 1;
      }
    }
  if (!strcmp("EndForwardFly",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndForwardFly();
      return 1;
      }
    }
  if (!strcmp("StartReverseFly",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartReverseFly();
      return 1;
      }
    }
  if (!strcmp("EndReverseFly",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndReverseFly();
      return 1;
      }
    }

  {
    const char* commandName = "vtkInteractorStyle";
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
  vtkmsg << "Object type: vtkInteractorStyleFlight, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkInteractorStyleFlight_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkInteractorStyleFlight", vtkInteractorStyleFlightClientServerNewCommand);
    csi->AddCommandFunction("vtkInteractorStyleFlight", vtkInteractorStyleFlightCommand);
    }
}
