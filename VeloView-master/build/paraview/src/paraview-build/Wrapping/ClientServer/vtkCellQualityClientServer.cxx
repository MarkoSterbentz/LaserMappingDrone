// ClientServer wrapper for vtkCellQuality object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkCellQuality.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkCellQualityClientServerNewCommand(void* /*ctx*/)
{
  return vtkCellQuality::New();
}


int VTK_EXPORT vtkCellQualityCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkCellQuality *op = vtkCellQuality::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkCellQuality.  "
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
    vtkCellQuality  *temp20;
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
    vtkCellQuality  *temp20;
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
    vtkCellQuality  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasure",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetQualityMeasure(temp0);
      return 1;
      }
    }
  if (!strcmp("GetQualityMeasure",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetQualityMeasure();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToArea",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToArea();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToAspectBeta",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToAspectBeta();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToAspectFrobenius",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToAspectFrobenius();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToAspectGamma",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToAspectGamma();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToAspectRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToAspectRatio();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToCollapseRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToCollapseRatio();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToCondition",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToCondition();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToDiagonal",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToDiagonal();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToDimension",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToDimension();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToDistortion",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToDistortion();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToJacobian",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToJacobian();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToMaxAngle",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToMaxAngle();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToMaxAspectFrobenius",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToMaxAspectFrobenius();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToMaxEdgeRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToMaxEdgeRatio();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToMedAspectFrobenius",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToMedAspectFrobenius();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToMinAngle",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToMinAngle();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToOddy",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToOddy();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToRadiusRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToRadiusRatio();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToRelativeSizeSquared",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToRelativeSizeSquared();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToScaledJacobian",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToScaledJacobian();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToShapeAndSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToShapeAndSize();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToShape",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToShape();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToShearAndSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToShearAndSize();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToShear",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToShear();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToSkew",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToSkew();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToStretch",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToStretch();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToTaper",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToTaper();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToVolume",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToVolume();
      return 1;
      }
    }
  if (!strcmp("SetQualityMeasureToWarpage",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQualityMeasureToWarpage();
      return 1;
      }
    }
  if (!strcmp("SetUnsupportedGeometry",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUnsupportedGeometry(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUnsupportedGeometry",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetUnsupportedGeometry();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUndefinedQuality",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUndefinedQuality(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUndefinedQuality",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetUndefinedQuality();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TriangleStripArea",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TriangleStripArea(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PixelArea",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->PixelArea(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PolygonArea",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->PolygonArea(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkDataSetAlgorithm";
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
  vtkmsg << "Object type: vtkCellQuality, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkCellQuality_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkCellQuality", vtkCellQualityClientServerNewCommand);
    csi->AddCommandFunction("vtkCellQuality", vtkCellQualityCommand);
    }
}
