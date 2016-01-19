// ClientServer wrapper for vtkImageReslice object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkImageReslice.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkImageResliceClientServerNewCommand(void* /*ctx*/)
{
  return vtkImageReslice::New();
}


int VTK_EXPORT vtkImageResliceCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkImageReslice *op = vtkImageReslice::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkImageReslice.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageReslice  *temp20;
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
    vtkImageReslice  *temp20;
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
    vtkImageReslice  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetResliceAxes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix4x4  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix4x4"))
      {
      op->SetResliceAxes(temp0);
      return 1;
      }
    }
  if (!strcmp("GetResliceAxes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkMatrix4x4  *temp20;
      {
      temp20 = (op)->GetResliceAxes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetResliceAxesDirectionCosines",method) && msg.GetNumberOfArguments(0) == 11)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    double   temp4;
    double   temp5;
    double   temp6;
    double   temp7;
    double   temp8;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6) &&
      msg.GetArgument(0, 9, &temp7) &&
      msg.GetArgument(0, 10, &temp8))
      {
      op->SetResliceAxesDirectionCosines(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8);
      return 1;
      }
    }
  if (!strcmp("SetResliceAxesDirectionCosines",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[9];
    if(msg.GetArgument(0, 2, temp0, 9))
      {
      op->SetResliceAxesDirectionCosines(temp0);
      return 1;
      }
    }
  if (!strcmp("GetResliceAxesDirectionCosines",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[9];
    if(msg.GetArgument(0, 2, temp0, 9))
      {
      op->GetResliceAxesDirectionCosines(temp0);
      return 1;
      }
    }
  if (!strcmp("GetResliceAxesDirectionCosines",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetResliceAxesDirectionCosines();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,9) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetResliceAxesOrigin",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetResliceAxesOrigin(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetResliceAxesOrigin",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetResliceAxesOrigin(temp0);
      return 1;
      }
    }
  if (!strcmp("GetResliceAxesOrigin",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetResliceAxesOrigin(temp0);
      return 1;
      }
    }
  if (!strcmp("GetResliceAxesOrigin",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetResliceAxesOrigin();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetResliceTransform",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractTransform  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractTransform"))
      {
      op->SetResliceTransform(temp0);
      return 1;
      }
    }
  if (!strcmp("GetResliceTransform",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractTransform  *temp20;
      {
      temp20 = (op)->GetResliceTransform();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInformationInput",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkImageData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageData"))
      {
      op->SetInformationInput(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInformationInput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageData  *temp20;
      {
      temp20 = (op)->GetInformationInput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTransformInputSampling",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTransformInputSampling(temp0);
      return 1;
      }
    }
  if (!strcmp("TransformInputSamplingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TransformInputSamplingOn();
      return 1;
      }
    }
  if (!strcmp("TransformInputSamplingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TransformInputSamplingOff();
      return 1;
      }
    }
  if (!strcmp("GetTransformInputSampling",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTransformInputSampling();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAutoCropOutput",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAutoCropOutput(temp0);
      return 1;
      }
    }
  if (!strcmp("AutoCropOutputOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutoCropOutputOn();
      return 1;
      }
    }
  if (!strcmp("AutoCropOutputOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutoCropOutputOff();
      return 1;
      }
    }
  if (!strcmp("GetAutoCropOutput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutoCropOutput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetWrap",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetWrap(temp0);
      return 1;
      }
    }
  if (!strcmp("GetWrap",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetWrap();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("WrapOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WrapOn();
      return 1;
      }
    }
  if (!strcmp("WrapOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WrapOff();
      return 1;
      }
    }
  if (!strcmp("SetMirror",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMirror(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMirror",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMirror();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MirrorOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MirrorOn();
      return 1;
      }
    }
  if (!strcmp("MirrorOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MirrorOff();
      return 1;
      }
    }
  if (!strcmp("SetBorder",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBorder(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBorder",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetBorder();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("BorderOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BorderOn();
      return 1;
      }
    }
  if (!strcmp("BorderOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BorderOff();
      return 1;
      }
    }
  if (!strcmp("SetInterpolationMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInterpolationMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInterpolationModeMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInterpolationModeMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInterpolationModeMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInterpolationModeMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInterpolationMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInterpolationMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInterpolationModeToNearestNeighbor",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetInterpolationModeToNearestNeighbor();
      return 1;
      }
    }
  if (!strcmp("SetInterpolationModeToLinear",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetInterpolationModeToLinear();
      return 1;
      }
    }
  if (!strcmp("SetInterpolationModeToCubic",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetInterpolationModeToCubic();
      return 1;
      }
    }
  if (!strcmp("GetInterpolationModeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetInterpolationModeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInterpolator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractImageInterpolator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractImageInterpolator"))
      {
      op->SetInterpolator(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInterpolator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractImageInterpolator  *temp20;
      {
      temp20 = (op)->GetInterpolator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSlabMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSlabMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSlabModeMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSlabModeMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSlabModeMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSlabModeMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSlabMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSlabMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSlabModeToMin",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSlabModeToMin();
      return 1;
      }
    }
  if (!strcmp("SetSlabModeToMax",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSlabModeToMax();
      return 1;
      }
    }
  if (!strcmp("SetSlabModeToMean",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSlabModeToMean();
      return 1;
      }
    }
  if (!strcmp("SetSlabModeToSum",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetSlabModeToSum();
      return 1;
      }
    }
  if (!strcmp("GetSlabModeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetSlabModeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSlabNumberOfSlices",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSlabNumberOfSlices(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSlabNumberOfSlices",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSlabNumberOfSlices();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSlabTrapezoidIntegration",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSlabTrapezoidIntegration(temp0);
      return 1;
      }
    }
  if (!strcmp("SlabTrapezoidIntegrationOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SlabTrapezoidIntegrationOn();
      return 1;
      }
    }
  if (!strcmp("SlabTrapezoidIntegrationOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SlabTrapezoidIntegrationOff();
      return 1;
      }
    }
  if (!strcmp("GetSlabTrapezoidIntegration",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSlabTrapezoidIntegration();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSlabSliceSpacingFraction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSlabSliceSpacingFraction(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSlabSliceSpacingFraction",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetSlabSliceSpacingFraction();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOptimization",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOptimization(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOptimization",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOptimization();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("OptimizationOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OptimizationOn();
      return 1;
      }
    }
  if (!strcmp("OptimizationOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OptimizationOff();
      return 1;
      }
    }
  if (!strcmp("SetScalarShift",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScalarShift(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarShift",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetScalarShift();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScalarScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScalarScale(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarScale",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetScalarScale();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutputScalarType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutputScalarType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutputScalarType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutputScalarType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBackgroundColor",method) && msg.GetNumberOfArguments(0) == 6)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetBackgroundColor(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetBackgroundColor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[4];
    if(msg.GetArgument(0, 2, temp0, 4))
      {
      op->SetBackgroundColor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBackgroundColor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetBackgroundColor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,4) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBackgroundLevel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBackgroundLevel(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBackgroundLevel",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetBackgroundLevel();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutputSpacing",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetOutputSpacing(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetOutputSpacing",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetOutputSpacing(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutputSpacing",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetOutputSpacing();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutputSpacingToDefault",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputSpacingToDefault();
      return 1;
      }
    }
  if (!strcmp("SetOutputOrigin",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetOutputOrigin(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetOutputOrigin",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetOutputOrigin(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutputOrigin",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetOutputOrigin();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutputOriginToDefault",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputOriginToDefault();
      return 1;
      }
    }
  if (!strcmp("SetOutputExtent",method) && msg.GetNumberOfArguments(0) == 8)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    int      temp4;
    int      temp5;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      op->SetOutputExtent(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("SetOutputExtent",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->SetOutputExtent(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutputExtent",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetOutputExtent();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,6) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutputExtentToDefault",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputExtentToDefault();
      return 1;
      }
    }
  if (!strcmp("SetOutputDimensionality",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutputDimensionality(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutputDimensionality",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutputDimensionality();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("ReportReferences",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkGarbageCollector  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGarbageCollector"))
      {
      op->ReportReferences(temp0);
      return 1;
      }
    }
  if (!strcmp("SetInterpolate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInterpolate(temp0);
      return 1;
      }
    }
  if (!strcmp("InterpolateOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InterpolateOn();
      return 1;
      }
    }
  if (!strcmp("InterpolateOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InterpolateOff();
      return 1;
      }
    }
  if (!strcmp("GetInterpolate",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInterpolate();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetStencilData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkImageStencilData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageStencilData"))
      {
      op->SetStencilData(temp0);
      return 1;
      }
    }
  if (!strcmp("GetStencil",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageStencilData  *temp20;
      {
      temp20 = (op)->GetStencil();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGenerateStencilOutput",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateStencilOutput(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateStencilOutput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateStencilOutput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateStencilOutputOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateStencilOutputOn();
      return 1;
      }
    }
  if (!strcmp("GenerateStencilOutputOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateStencilOutputOff();
      return 1;
      }
    }
  if (!strcmp("GetStencilOutputPort",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAlgorithmOutput  *temp20;
      {
      temp20 = (op)->GetStencilOutputPort();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetStencilOutput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageStencilData  *temp20;
      {
      temp20 = (op)->GetStencilOutput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetStencilOutput",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkImageStencilData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageStencilData"))
      {
      op->SetStencilOutput(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkThreadedImageAlgorithm";
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
  vtkmsg << "Object type: vtkImageReslice, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkImageReslice_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkImageReslice", vtkImageResliceClientServerNewCommand);
    csi->AddCommandFunction("vtkImageReslice", vtkImageResliceCommand);
    }
}
