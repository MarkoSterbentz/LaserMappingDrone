// ClientServer wrapper for vtkMeshQuality object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkMeshQuality.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkMeshQualityClientServerNewCommand(void* /*ctx*/)
{
  return vtkMeshQuality::New();
}


int VTK_EXPORT vtkMeshQualityCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkMeshQuality *op = vtkMeshQuality::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkMeshQuality.  "
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
    vtkMeshQuality  *temp20;
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
    vtkMeshQuality  *temp20;
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
    vtkMeshQuality  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSaveCellQuality",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSaveCellQuality(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSaveCellQuality",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSaveCellQuality();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SaveCellQualityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SaveCellQualityOn();
      return 1;
      }
    }
  if (!strcmp("SaveCellQualityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SaveCellQualityOff();
      return 1;
      }
    }
  if (!strcmp("SetTriangleQualityMeasure",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTriangleQualityMeasure(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTriangleQualityMeasure",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTriangleQualityMeasure();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTriangleQualityMeasureToArea",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTriangleQualityMeasureToArea();
      return 1;
      }
    }
  if (!strcmp("SetTriangleQualityMeasureToEdgeRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTriangleQualityMeasureToEdgeRatio();
      return 1;
      }
    }
  if (!strcmp("SetTriangleQualityMeasureToAspectRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTriangleQualityMeasureToAspectRatio();
      return 1;
      }
    }
  if (!strcmp("SetTriangleQualityMeasureToRadiusRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTriangleQualityMeasureToRadiusRatio();
      return 1;
      }
    }
  if (!strcmp("SetTriangleQualityMeasureToAspectFrobenius",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTriangleQualityMeasureToAspectFrobenius();
      return 1;
      }
    }
  if (!strcmp("SetTriangleQualityMeasureToMinAngle",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTriangleQualityMeasureToMinAngle();
      return 1;
      }
    }
  if (!strcmp("SetTriangleQualityMeasureToMaxAngle",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTriangleQualityMeasureToMaxAngle();
      return 1;
      }
    }
  if (!strcmp("SetTriangleQualityMeasureToCondition",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTriangleQualityMeasureToCondition();
      return 1;
      }
    }
  if (!strcmp("SetTriangleQualityMeasureToScaledJacobian",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTriangleQualityMeasureToScaledJacobian();
      return 1;
      }
    }
  if (!strcmp("SetTriangleQualityMeasureToRelativeSizeSquared",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTriangleQualityMeasureToRelativeSizeSquared();
      return 1;
      }
    }
  if (!strcmp("SetTriangleQualityMeasureToShape",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTriangleQualityMeasureToShape();
      return 1;
      }
    }
  if (!strcmp("SetTriangleQualityMeasureToShapeAndSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTriangleQualityMeasureToShapeAndSize();
      return 1;
      }
    }
  if (!strcmp("SetTriangleQualityMeasureToDistortion",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTriangleQualityMeasureToDistortion();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasure",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetQuadQualityMeasure(temp0);
      return 1;
      }
    }
  if (!strcmp("GetQuadQualityMeasure",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetQuadQualityMeasure();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToEdgeRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToEdgeRatio();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToAspectRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToAspectRatio();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToRadiusRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToRadiusRatio();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToMedAspectFrobenius",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToMedAspectFrobenius();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToMaxAspectFrobenius",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToMaxAspectFrobenius();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToMaxEdgeRatios",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToMaxEdgeRatios();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToSkew",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToSkew();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToTaper",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToTaper();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToWarpage",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToWarpage();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToArea",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToArea();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToStretch",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToStretch();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToMinAngle",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToMinAngle();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToMaxAngle",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToMaxAngle();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToOddy",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToOddy();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToCondition",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToCondition();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToJacobian",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToJacobian();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToScaledJacobian",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToScaledJacobian();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToShear",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToShear();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToShape",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToShape();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToRelativeSizeSquared",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToRelativeSizeSquared();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToShapeAndSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToShapeAndSize();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToShearAndSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToShearAndSize();
      return 1;
      }
    }
  if (!strcmp("SetQuadQualityMeasureToDistortion",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetQuadQualityMeasureToDistortion();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasure",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTetQualityMeasure(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTetQualityMeasure",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTetQualityMeasure();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToEdgeRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToEdgeRatio();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToAspectRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToAspectRatio();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToRadiusRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToRadiusRatio();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToAspectFrobenius",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToAspectFrobenius();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToMinAngle",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToMinAngle();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToCollapseRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToCollapseRatio();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToAspectBeta",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToAspectBeta();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToAspectGamma",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToAspectGamma();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToVolume",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToVolume();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToCondition",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToCondition();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToJacobian",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToJacobian();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToScaledJacobian",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToScaledJacobian();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToShape",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToShape();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToRelativeSizeSquared",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToRelativeSizeSquared();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToShapeAndSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToShapeAndSize();
      return 1;
      }
    }
  if (!strcmp("SetTetQualityMeasureToDistortion",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTetQualityMeasureToDistortion();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasure",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetHexQualityMeasure(temp0);
      return 1;
      }
    }
  if (!strcmp("GetHexQualityMeasure",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetHexQualityMeasure();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToEdgeRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToEdgeRatio();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToMedAspectFrobenius",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToMedAspectFrobenius();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToMaxAspectFrobenius",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToMaxAspectFrobenius();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToMaxEdgeRatios",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToMaxEdgeRatios();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToSkew",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToSkew();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToTaper",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToTaper();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToVolume",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToVolume();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToStretch",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToStretch();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToDiagonal",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToDiagonal();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToDimension",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToDimension();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToOddy",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToOddy();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToCondition",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToCondition();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToJacobian",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToJacobian();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToScaledJacobian",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToScaledJacobian();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToShear",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToShear();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToShape",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToShape();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToRelativeSizeSquared",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToRelativeSizeSquared();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToShapeAndSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToShapeAndSize();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToShearAndSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToShearAndSize();
      return 1;
      }
    }
  if (!strcmp("SetHexQualityMeasureToDistortion",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetHexQualityMeasureToDistortion();
      return 1;
      }
    }
  if (!strcmp("TriangleArea",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TriangleArea(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TriangleEdgeRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TriangleEdgeRatio(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TriangleAspectRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TriangleAspectRatio(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TriangleRadiusRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TriangleRadiusRatio(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TriangleAspectFrobenius",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TriangleAspectFrobenius(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TriangleMinAngle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TriangleMinAngle(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TriangleMaxAngle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TriangleMaxAngle(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TriangleCondition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TriangleCondition(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TriangleScaledJacobian",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TriangleScaledJacobian(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TriangleRelativeSizeSquared",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TriangleRelativeSizeSquared(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TriangleShape",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TriangleShape(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TriangleShapeAndSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TriangleShapeAndSize(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TriangleDistortion",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TriangleDistortion(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadEdgeRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadEdgeRatio(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadAspectRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadAspectRatio(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadRadiusRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadRadiusRatio(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadMedAspectFrobenius",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadMedAspectFrobenius(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadMaxAspectFrobenius",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadMaxAspectFrobenius(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadMinAngle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadMinAngle(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadMaxEdgeRatios",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadMaxEdgeRatios(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadSkew",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadSkew(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadTaper",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadTaper(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadWarpage",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadWarpage(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadArea",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadArea(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadStretch",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadStretch(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadMaxAngle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadMaxAngle(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadOddy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadOddy(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadCondition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadCondition(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadJacobian",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadJacobian(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadScaledJacobian",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadScaledJacobian(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadShear",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadShear(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadShape",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadShape(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadRelativeSizeSquared",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadRelativeSizeSquared(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadShapeAndSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadShapeAndSize(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadShearAndSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadShearAndSize(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("QuadDistortion",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->QuadDistortion(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetEdgeRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetEdgeRatio(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetAspectRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetAspectRatio(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetRadiusRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetRadiusRatio(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetAspectFrobenius",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetAspectFrobenius(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetMinAngle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetMinAngle(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetCollapseRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetCollapseRatio(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetAspectBeta",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetAspectBeta(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetAspectGamma",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetAspectGamma(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetVolume",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetVolume(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetCondition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetCondition(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetJacobian",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetJacobian(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetScaledJacobian",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetScaledJacobian(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetShape",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetShape(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetRelativeSizeSquared",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetRelativeSizeSquared(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetShapeandSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetShapeandSize(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TetDistortion",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->TetDistortion(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexEdgeRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexEdgeRatio(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexMedAspectFrobenius",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexMedAspectFrobenius(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexMaxAspectFrobenius",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexMaxAspectFrobenius(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexMaxEdgeRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexMaxEdgeRatio(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexSkew",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexSkew(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexTaper",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexTaper(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexVolume",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexVolume(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexStretch",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexStretch(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexDiagonal",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexDiagonal(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexDimension",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexDimension(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexOddy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexOddy(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexCondition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexCondition(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexJacobian",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexJacobian(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexScaledJacobian",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexScaledJacobian(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexShear",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexShear(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexShape",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexShape(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexRelativeSizeSquared",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexRelativeSizeSquared(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexShapeAndSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexShapeAndSize(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexShearAndSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexShearAndSize(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HexDistortion",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      temp20 = (op)->HexDistortion(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRatio(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRatio();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RatioOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RatioOn();
      return 1;
      }
    }
  if (!strcmp("RatioOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RatioOff();
      return 1;
      }
    }
  if (!strcmp("SetVolume",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVolume(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVolume",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetVolume();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("VolumeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->VolumeOn();
      return 1;
      }
    }
  if (!strcmp("VolumeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->VolumeOff();
      return 1;
      }
    }
  if (!strcmp("SetCompatibilityMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCompatibilityMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCompatibilityMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCompatibilityMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CompatibilityModeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CompatibilityModeOn();
      return 1;
      }
    }
  if (!strcmp("CompatibilityModeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CompatibilityModeOff();
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
  vtkmsg << "Object type: vtkMeshQuality, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkMeshQuality_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkMeshQuality", vtkMeshQualityClientServerNewCommand);
    csi->AddCommandFunction("vtkMeshQuality", vtkMeshQualityCommand);
    }
}
