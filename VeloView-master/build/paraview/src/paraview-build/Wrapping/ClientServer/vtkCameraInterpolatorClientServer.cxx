// ClientServer wrapper for vtkCameraInterpolator object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkCameraInterpolator.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkCameraInterpolatorClientServerNewCommand(void* /*ctx*/)
{
  return vtkCameraInterpolator::New();
}


int VTK_EXPORT vtkCameraInterpolatorCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkCameraInterpolator *op = vtkCameraInterpolator::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkCameraInterpolator.  "
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
    vtkCameraInterpolator  *temp20;
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
    vtkCameraInterpolator  *temp20;
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
    vtkCameraInterpolator  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfCameras",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfCameras();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMinimumT",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMinimumT();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaximumT",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaximumT();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("AddCamera",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    vtkCamera  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkCamera"))
      {
      op->AddCamera(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveCamera",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemoveCamera(temp0);
      return 1;
      }
    }
  if (!strcmp("InterpolateCamera",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    vtkCamera  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkCamera"))
      {
      op->InterpolateCamera(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetInterpolationType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInterpolationType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInterpolationTypeMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInterpolationTypeMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInterpolationTypeMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInterpolationTypeMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInterpolationType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInterpolationType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInterpolationTypeToLinear",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetInterpolationTypeToLinear();
      return 1;
      }
    }
  if (!strcmp("SetInterpolationTypeToSpline",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetInterpolationTypeToSpline();
      return 1;
      }
    }
  if (!strcmp("SetInterpolationTypeToManual",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetInterpolationTypeToManual();
      return 1;
      }
    }
  if (!strcmp("SetPositionInterpolator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTupleInterpolator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTupleInterpolator"))
      {
      op->SetPositionInterpolator(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPositionInterpolator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTupleInterpolator  *temp20;
      {
      temp20 = (op)->GetPositionInterpolator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFocalPointInterpolator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTupleInterpolator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTupleInterpolator"))
      {
      op->SetFocalPointInterpolator(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFocalPointInterpolator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTupleInterpolator  *temp20;
      {
      temp20 = (op)->GetFocalPointInterpolator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetViewUpInterpolator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTupleInterpolator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTupleInterpolator"))
      {
      op->SetViewUpInterpolator(temp0);
      return 1;
      }
    }
  if (!strcmp("GetViewUpInterpolator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTupleInterpolator  *temp20;
      {
      temp20 = (op)->GetViewUpInterpolator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetViewAngleInterpolator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTupleInterpolator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTupleInterpolator"))
      {
      op->SetViewAngleInterpolator(temp0);
      return 1;
      }
    }
  if (!strcmp("GetViewAngleInterpolator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTupleInterpolator  *temp20;
      {
      temp20 = (op)->GetViewAngleInterpolator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetParallelScaleInterpolator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTupleInterpolator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTupleInterpolator"))
      {
      op->SetParallelScaleInterpolator(temp0);
      return 1;
      }
    }
  if (!strcmp("GetParallelScaleInterpolator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTupleInterpolator  *temp20;
      {
      temp20 = (op)->GetParallelScaleInterpolator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetClippingRangeInterpolator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTupleInterpolator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTupleInterpolator"))
      {
      op->SetClippingRangeInterpolator(temp0);
      return 1;
      }
    }
  if (!strcmp("GetClippingRangeInterpolator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTupleInterpolator  *temp20;
      {
      temp20 = (op)->GetClippingRangeInterpolator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetMTime();
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
  vtkmsg << "Object type: vtkCameraInterpolator, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkCameraInterpolator_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkCameraInterpolator", vtkCameraInterpolatorClientServerNewCommand);
    csi->AddCommandFunction("vtkCameraInterpolator", vtkCameraInterpolatorCommand);
    }
}
