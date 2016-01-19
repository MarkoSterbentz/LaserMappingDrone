// ClientServer wrapper for vtkVolumeRayCastSpaceLeapingImageFilter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkVolumeRayCastSpaceLeapingImageFilter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkVolumeRayCastSpaceLeapingImageFilterClientServerNewCommand(void* /*ctx*/)
{
  return vtkVolumeRayCastSpaceLeapingImageFilter::New();
}


int VTK_EXPORT vtkVolumeRayCastSpaceLeapingImageFilterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkVolumeRayCastSpaceLeapingImageFilter *op = vtkVolumeRayCastSpaceLeapingImageFilter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkVolumeRayCastSpaceLeapingImageFilter.  "
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
    vtkVolumeRayCastSpaceLeapingImageFilter  *temp20;
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
    vtkVolumeRayCastSpaceLeapingImageFilter  *temp20;
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
    vtkVolumeRayCastSpaceLeapingImageFilter  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCurrentScalars",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataArray  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray"))
      {
      op->SetCurrentScalars(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCurrentScalars",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataArray  *temp20;
      {
      temp20 = (op)->GetCurrentScalars();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIndependentComponents",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIndependentComponents(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIndependentComponents",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetIndependentComponents();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetComputeGradientOpacity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetComputeGradientOpacity(temp0);
      return 1;
      }
    }
  if (!strcmp("GetComputeGradientOpacity",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetComputeGradientOpacity();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ComputeGradientOpacityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeGradientOpacityOn();
      return 1;
      }
    }
  if (!strcmp("ComputeGradientOpacityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeGradientOpacityOff();
      return 1;
      }
    }
  if (!strcmp("SetComputeMinMax",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetComputeMinMax(temp0);
      return 1;
      }
    }
  if (!strcmp("GetComputeMinMax",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetComputeMinMax();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ComputeMinMaxOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeMinMaxOn();
      return 1;
      }
    }
  if (!strcmp("ComputeMinMaxOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeMinMaxOff();
      return 1;
      }
    }
  if (!strcmp("SetUpdateGradientOpacityFlags",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUpdateGradientOpacityFlags(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUpdateGradientOpacityFlags",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUpdateGradientOpacityFlags();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UpdateGradientOpacityFlagsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UpdateGradientOpacityFlagsOn();
      return 1;
      }
    }
  if (!strcmp("UpdateGradientOpacityFlagsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UpdateGradientOpacityFlagsOff();
      return 1;
      }
    }
  if (!strcmp("GetLastMinMaxBuildTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetLastMinMaxBuildTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLastMinMaxFlagTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetLastMinMaxFlagTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTableShift",method) && msg.GetNumberOfArguments(0) == 6)
    {
    float    temp0;
    float    temp1;
    float    temp2;
    float    temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetTableShift(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetTableShift",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[4];
    if(msg.GetArgument(0, 2, temp0, 4))
      {
      op->SetTableShift(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTableShift",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float   *temp20;
      {
      temp20 = (op)->GetTableShift();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,4) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTableScale",method) && msg.GetNumberOfArguments(0) == 6)
    {
    float    temp0;
    float    temp1;
    float    temp2;
    float    temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetTableScale(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetTableScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[4];
    if(msg.GetArgument(0, 2, temp0, 4))
      {
      op->SetTableScale(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTableScale",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float   *temp20;
      {
      temp20 = (op)->GetTableScale();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,4) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTableSize",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetTableSize(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetTableSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[4];
    if(msg.GetArgument(0, 2, temp0, 4))
      {
      op->SetTableSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTableSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetTableSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,4) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfIndependentComponents",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfIndependentComponents();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCache",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkImageData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageData"))
      {
      op->SetCache(temp0);
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
  vtkmsg << "Object type: vtkVolumeRayCastSpaceLeapingImageFilter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkVolumeRayCastSpaceLeapingImageFilter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkVolumeRayCastSpaceLeapingImageFilter", vtkVolumeRayCastSpaceLeapingImageFilterClientServerNewCommand);
    csi->AddCommandFunction("vtkVolumeRayCastSpaceLeapingImageFilter", vtkVolumeRayCastSpaceLeapingImageFilterCommand);
    }
}
