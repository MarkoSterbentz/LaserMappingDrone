// ClientServer wrapper for vtkTexture object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkTexture.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkTextureClientServerNewCommand(void* /*ctx*/)
{
  return vtkTexture::New();
}


int VTK_EXPORT vtkTextureCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkTexture *op = vtkTexture::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkTexture.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTexture  *temp20;
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
    vtkTexture  *temp20;
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
    vtkTexture  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Render",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderer  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer"))
      {
      op->Render(temp0);
      return 1;
      }
    }
  if (!strcmp("PostRender",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderer  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer"))
      {
      op->PostRender(temp0);
      return 1;
      }
    }
  if (!strcmp("ReleaseGraphicsResources",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkWindow  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkWindow"))
      {
      op->ReleaseGraphicsResources(temp0);
      return 1;
      }
    }
  if (!strcmp("Load",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderer  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer"))
      {
      op->Load(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRepeat",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRepeat();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRepeat",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRepeat(temp0);
      return 1;
      }
    }
  if (!strcmp("RepeatOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RepeatOn();
      return 1;
      }
    }
  if (!strcmp("RepeatOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RepeatOff();
      return 1;
      }
    }
  if (!strcmp("GetEdgeClamp",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEdgeClamp();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEdgeClamp",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEdgeClamp(temp0);
      return 1;
      }
    }
  if (!strcmp("EdgeClampOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EdgeClampOn();
      return 1;
      }
    }
  if (!strcmp("EdgeClampOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EdgeClampOff();
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
  if (!strcmp("SetQuality",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetQuality(temp0);
      return 1;
      }
    }
  if (!strcmp("GetQuality",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetQuality();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetQualityToDefault",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityToDefault();
      return 1;
      }
    }
  if (!strcmp("SetQualityTo16Bit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityTo16Bit();
      return 1;
      }
    }
  if (!strcmp("SetQualityTo32Bit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityTo32Bit();
      return 1;
      }
    }
  if (!strcmp("GetMapColorScalarsThroughLookupTable",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMapColorScalarsThroughLookupTable();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMapColorScalarsThroughLookupTable",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMapColorScalarsThroughLookupTable(temp0);
      return 1;
      }
    }
  if (!strcmp("MapColorScalarsThroughLookupTableOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MapColorScalarsThroughLookupTableOn();
      return 1;
      }
    }
  if (!strcmp("MapColorScalarsThroughLookupTableOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MapColorScalarsThroughLookupTableOff();
      return 1;
      }
    }
  if (!strcmp("SetLookupTable",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkScalarsToColors  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkScalarsToColors"))
      {
      op->SetLookupTable(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLookupTable",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkScalarsToColors  *temp20;
      {
      temp20 = (op)->GetLookupTable();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMappedScalars",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkUnsignedCharArray  *temp20;
      {
      temp20 = (op)->GetMappedScalars();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTransform",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTransform  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTransform"))
      {
      op->SetTransform(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTransform",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTransform  *temp20;
      {
      temp20 = (op)->GetTransform();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBlendingMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetBlendingMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBlendingMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBlendingMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPremultipliedAlpha",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetPremultipliedAlpha();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPremultipliedAlpha",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPremultipliedAlpha(temp0);
      return 1;
      }
    }
  if (!strcmp("PremultipliedAlphaOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PremultipliedAlphaOn();
      return 1;
      }
    }
  if (!strcmp("PremultipliedAlphaOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PremultipliedAlphaOff();
      return 1;
      }
    }
  if (!strcmp("GetRestrictPowerOf2ImageSmaller",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRestrictPowerOf2ImageSmaller();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRestrictPowerOf2ImageSmaller",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRestrictPowerOf2ImageSmaller(temp0);
      return 1;
      }
    }
  if (!strcmp("RestrictPowerOf2ImageSmallerOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RestrictPowerOf2ImageSmallerOn();
      return 1;
      }
    }
  if (!strcmp("RestrictPowerOf2ImageSmallerOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RestrictPowerOf2ImageSmallerOff();
      return 1;
      }
    }
  if (!strcmp("IsTranslucent",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->IsTranslucent();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkImageAlgorithm";
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
  vtkmsg << "Object type: vtkTexture, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkTexture_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkTexture", vtkTextureClientServerNewCommand);
    csi->AddCommandFunction("vtkTexture", vtkTextureCommand);
    }
}
