// ClientServer wrapper for vtkCubeAxesActor object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkCubeAxesActor.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkCubeAxesActorClientServerNewCommand(void* /*ctx*/)
{
  return vtkCubeAxesActor::New();
}


int VTK_EXPORT vtkCubeAxesActorCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkCubeAxesActor *op = vtkCubeAxesActor::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkCubeAxesActor.  "
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
    vtkCubeAxesActor  *temp20;
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
    vtkCubeAxesActor  *temp20;
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
    vtkCubeAxesActor  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderOpaqueGeometry",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkViewport  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport"))
      {
      temp20 = (op)->RenderOpaqueGeometry(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderTranslucentGeometry",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkViewport  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport"))
      {
      temp20 = (op)->RenderTranslucentGeometry(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderTranslucentPolygonalGeometry",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkViewport  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport"))
      {
      temp20 = (op)->RenderTranslucentPolygonalGeometry(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderOverlay",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkViewport  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport"))
      {
      temp20 = (op)->RenderOverlay(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HasTranslucentPolygonalGeometry",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->HasTranslucentPolygonalGeometry();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRebuildAxes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRebuildAxes(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRebuildAxes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetRebuildAxes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBounds",method) && msg.GetNumberOfArguments(0) == 8)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    double   temp4;
    double   temp5;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      op->SetBounds(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("SetBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->SetBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,6) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRenderedBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->GetRenderedBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("SetXAxisRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetXAxisRange(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetXAxisRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetXAxisRange(temp0);
      return 1;
      }
    }
  if (!strcmp("SetYAxisRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetYAxisRange(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetYAxisRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetYAxisRange(temp0);
      return 1;
      }
    }
  if (!strcmp("SetZAxisRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetZAxisRange(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetZAxisRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetZAxisRange(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXAxisRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetXAxisRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetYAxisRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetYAxisRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAxisLabels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkStringArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAxisLabels(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAxisLabels",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkStringArray  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkStringArray"))
      {
      op->SetAxisLabels(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetZAxisRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetZAxisRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScreenSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScreenSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScreenSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetScreenSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLabelOffset",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLabelOffset(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLabelOffset",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetLabelOffset();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTitleOffset",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTitleOffset(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTitleOffset",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetTitleOffset();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCamera",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCamera  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCamera"))
      {
      op->SetCamera(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCamera",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCamera  *temp20;
      {
      temp20 = (op)->GetCamera();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFlyMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFlyMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFlyModeMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetFlyModeMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFlyModeMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetFlyModeMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFlyMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetFlyMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFlyModeToOuterEdges",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetFlyModeToOuterEdges();
      return 1;
      }
    }
  if (!strcmp("SetFlyModeToClosestTriad",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetFlyModeToClosestTriad();
      return 1;
      }
    }
  if (!strcmp("SetFlyModeToFurthestTriad",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetFlyModeToFurthestTriad();
      return 1;
      }
    }
  if (!strcmp("SetFlyModeToStaticTriad",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetFlyModeToStaticTriad();
      return 1;
      }
    }
  if (!strcmp("SetFlyModeToStaticEdges",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetFlyModeToStaticEdges();
      return 1;
      }
    }
  if (!strcmp("SetXTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetXTitle(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXTitle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetXTitle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetXUnits",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetXUnits(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXUnits",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetXUnits();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetYTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetYTitle(temp0);
      return 1;
      }
    }
  if (!strcmp("GetYTitle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetYTitle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetYUnits",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetYUnits(temp0);
      return 1;
      }
    }
  if (!strcmp("GetYUnits",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetYUnits();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetZTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetZTitle(temp0);
      return 1;
      }
    }
  if (!strcmp("GetZTitle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetZTitle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetZUnits",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetZUnits(temp0);
      return 1;
      }
    }
  if (!strcmp("GetZUnits",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetZUnits();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetXLabelFormat",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetXLabelFormat(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXLabelFormat",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetXLabelFormat();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetYLabelFormat",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetYLabelFormat(temp0);
      return 1;
      }
    }
  if (!strcmp("GetYLabelFormat",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetYLabelFormat();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetZLabelFormat",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetZLabelFormat(temp0);
      return 1;
      }
    }
  if (!strcmp("GetZLabelFormat",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetZLabelFormat();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInertia",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInertia(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInertiaMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInertiaMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInertiaMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInertiaMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInertia",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInertia();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCornerOffset",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCornerOffset(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCornerOffset",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetCornerOffset();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("SetEnableDistanceLOD",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnableDistanceLOD(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEnableDistanceLOD",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEnableDistanceLOD();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDistanceLODThreshold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDistanceLODThreshold(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDistanceLODThresholdMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDistanceLODThresholdMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDistanceLODThresholdMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDistanceLODThresholdMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDistanceLODThreshold",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDistanceLODThreshold();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEnableViewAngleLOD",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnableViewAngleLOD(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEnableViewAngleLOD",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEnableViewAngleLOD();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetViewAngleLODThreshold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetViewAngleLODThreshold(temp0);
      return 1;
      }
    }
  if (!strcmp("GetViewAngleLODThresholdMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetViewAngleLODThresholdMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetViewAngleLODThresholdMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetViewAngleLODThresholdMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetViewAngleLODThreshold",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetViewAngleLODThreshold();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetXAxisVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetXAxisVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXAxisVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetXAxisVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("XAxisVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->XAxisVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("XAxisVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->XAxisVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetYAxisVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetYAxisVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetYAxisVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetYAxisVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("YAxisVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->YAxisVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("YAxisVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->YAxisVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetZAxisVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetZAxisVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetZAxisVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetZAxisVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ZAxisVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ZAxisVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("ZAxisVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ZAxisVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetXAxisLabelVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetXAxisLabelVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXAxisLabelVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetXAxisLabelVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("XAxisLabelVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->XAxisLabelVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("XAxisLabelVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->XAxisLabelVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetYAxisLabelVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetYAxisLabelVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetYAxisLabelVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetYAxisLabelVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("YAxisLabelVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->YAxisLabelVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("YAxisLabelVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->YAxisLabelVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetZAxisLabelVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetZAxisLabelVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetZAxisLabelVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetZAxisLabelVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ZAxisLabelVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ZAxisLabelVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("ZAxisLabelVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ZAxisLabelVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetXAxisTickVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetXAxisTickVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXAxisTickVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetXAxisTickVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("XAxisTickVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->XAxisTickVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("XAxisTickVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->XAxisTickVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetYAxisTickVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetYAxisTickVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetYAxisTickVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetYAxisTickVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("YAxisTickVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->YAxisTickVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("YAxisTickVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->YAxisTickVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetZAxisTickVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetZAxisTickVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetZAxisTickVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetZAxisTickVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ZAxisTickVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ZAxisTickVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("ZAxisTickVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ZAxisTickVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetXAxisMinorTickVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetXAxisMinorTickVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXAxisMinorTickVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetXAxisMinorTickVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("XAxisMinorTickVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->XAxisMinorTickVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("XAxisMinorTickVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->XAxisMinorTickVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetYAxisMinorTickVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetYAxisMinorTickVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetYAxisMinorTickVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetYAxisMinorTickVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("YAxisMinorTickVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->YAxisMinorTickVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("YAxisMinorTickVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->YAxisMinorTickVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetZAxisMinorTickVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetZAxisMinorTickVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetZAxisMinorTickVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetZAxisMinorTickVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ZAxisMinorTickVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ZAxisMinorTickVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("ZAxisMinorTickVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ZAxisMinorTickVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetDrawXGridlines",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawXGridlines(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawXGridlines",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDrawXGridlines();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawXGridlinesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawXGridlinesOn();
      return 1;
      }
    }
  if (!strcmp("DrawXGridlinesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawXGridlinesOff();
      return 1;
      }
    }
  if (!strcmp("SetDrawYGridlines",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawYGridlines(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawYGridlines",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDrawYGridlines();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawYGridlinesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawYGridlinesOn();
      return 1;
      }
    }
  if (!strcmp("DrawYGridlinesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawYGridlinesOff();
      return 1;
      }
    }
  if (!strcmp("SetDrawZGridlines",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawZGridlines(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawZGridlines",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDrawZGridlines();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawZGridlinesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawZGridlinesOn();
      return 1;
      }
    }
  if (!strcmp("DrawZGridlinesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawZGridlinesOff();
      return 1;
      }
    }
  if (!strcmp("SetDrawXInnerGridlines",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawXInnerGridlines(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawXInnerGridlines",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDrawXInnerGridlines();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawXInnerGridlinesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawXInnerGridlinesOn();
      return 1;
      }
    }
  if (!strcmp("DrawXInnerGridlinesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawXInnerGridlinesOff();
      return 1;
      }
    }
  if (!strcmp("SetDrawYInnerGridlines",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawYInnerGridlines(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawYInnerGridlines",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDrawYInnerGridlines();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawYInnerGridlinesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawYInnerGridlinesOn();
      return 1;
      }
    }
  if (!strcmp("DrawYInnerGridlinesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawYInnerGridlinesOff();
      return 1;
      }
    }
  if (!strcmp("SetDrawZInnerGridlines",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawZInnerGridlines(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawZInnerGridlines",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDrawZInnerGridlines();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawZInnerGridlinesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawZInnerGridlinesOn();
      return 1;
      }
    }
  if (!strcmp("DrawZInnerGridlinesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawZInnerGridlinesOff();
      return 1;
      }
    }
  if (!strcmp("SetDrawXGridpolys",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawXGridpolys(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawXGridpolys",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDrawXGridpolys();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawXGridpolysOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawXGridpolysOn();
      return 1;
      }
    }
  if (!strcmp("DrawXGridpolysOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawXGridpolysOff();
      return 1;
      }
    }
  if (!strcmp("SetDrawYGridpolys",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawYGridpolys(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawYGridpolys",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDrawYGridpolys();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawYGridpolysOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawYGridpolysOn();
      return 1;
      }
    }
  if (!strcmp("DrawYGridpolysOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawYGridpolysOff();
      return 1;
      }
    }
  if (!strcmp("SetDrawZGridpolys",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawZGridpolys(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawZGridpolys",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDrawZGridpolys();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawZGridpolysOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawZGridpolysOn();
      return 1;
      }
    }
  if (!strcmp("DrawZGridpolysOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawZGridpolysOff();
      return 1;
      }
    }
  if (!strcmp("GetTitleTextProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkTextProperty  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetTitleTextProperty(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLabelTextProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkTextProperty  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetLabelTextProperty(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetXAxesLinesProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetXAxesLinesProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXAxesLinesProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetXAxesLinesProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetYAxesLinesProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetYAxesLinesProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetYAxesLinesProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetYAxesLinesProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetZAxesLinesProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetZAxesLinesProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetZAxesLinesProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetZAxesLinesProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetXAxesGridlinesProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetXAxesGridlinesProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXAxesGridlinesProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetXAxesGridlinesProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetYAxesGridlinesProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetYAxesGridlinesProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetYAxesGridlinesProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetYAxesGridlinesProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetZAxesGridlinesProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetZAxesGridlinesProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetZAxesGridlinesProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetZAxesGridlinesProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetXAxesInnerGridlinesProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetXAxesInnerGridlinesProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXAxesInnerGridlinesProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetXAxesInnerGridlinesProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetYAxesInnerGridlinesProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetYAxesInnerGridlinesProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetYAxesInnerGridlinesProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetYAxesInnerGridlinesProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetZAxesInnerGridlinesProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetZAxesInnerGridlinesProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetZAxesInnerGridlinesProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetZAxesInnerGridlinesProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetXAxesGridpolysProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetXAxesGridpolysProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXAxesGridpolysProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetXAxesGridpolysProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetYAxesGridpolysProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetYAxesGridpolysProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetYAxesGridpolysProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetYAxesGridpolysProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetZAxesGridpolysProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetZAxesGridpolysProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetZAxesGridpolysProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetZAxesGridpolysProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTickLocation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTickLocation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTickLocationMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTickLocationMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTickLocationMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTickLocationMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTickLocation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTickLocation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTickLocationToInside",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTickLocationToInside();
      return 1;
      }
    }
  if (!strcmp("SetTickLocationToOutside",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTickLocationToOutside();
      return 1;
      }
    }
  if (!strcmp("SetTickLocationToBoth",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTickLocationToBoth();
      return 1;
      }
    }
  if (!strcmp("SetLabelScaling",method) && msg.GetNumberOfArguments(0) == 6)
    {
    bool   temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetLabelScaling(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetUseTextActor3D",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseTextActor3D(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseTextActor3D",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseTextActor3D();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUse2DMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUse2DMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUse2DMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUse2DMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSaveTitlePosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSaveTitlePosition(temp0);
      return 1;
      }
    }
  if (!strcmp("SetOrientedBounds",method) && msg.GetNumberOfArguments(0) == 8)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    double   temp4;
    double   temp5;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      op->SetOrientedBounds(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("SetOrientedBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->SetOrientedBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOrientedBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetOrientedBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,6) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseOrientedBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseOrientedBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseOrientedBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseOrientedBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAxisBaseForX",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetAxisBaseForX(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetAxisBaseForX",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetAxisBaseForX(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAxisBaseForX",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetAxisBaseForX();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAxisBaseForY",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetAxisBaseForY(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetAxisBaseForY",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetAxisBaseForY(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAxisBaseForY",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetAxisBaseForY();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAxisBaseForZ",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetAxisBaseForZ(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetAxisBaseForZ",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetAxisBaseForZ(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAxisBaseForZ",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetAxisBaseForZ();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAxisOrigin",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetAxisOrigin(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetAxisOrigin",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetAxisOrigin(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAxisOrigin",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetAxisOrigin();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseAxisOrigin",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseAxisOrigin(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseAxisOrigin",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseAxisOrigin();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGridLineLocation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGridLineLocation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGridLineLocation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGridLineLocation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetStickyAxes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetStickyAxes(temp0);
      return 1;
      }
    }
  if (!strcmp("GetStickyAxes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStickyAxes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StickyAxesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StickyAxesOn();
      return 1;
      }
    }
  if (!strcmp("StickyAxesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StickyAxesOff();
      return 1;
      }
    }
  if (!strcmp("SetCenterStickyAxes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCenterStickyAxes(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCenterStickyAxes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCenterStickyAxes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CenterStickyAxesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CenterStickyAxesOn();
      return 1;
      }
    }
  if (!strcmp("CenterStickyAxesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CenterStickyAxesOff();
      return 1;
      }
    }

  {
    const char* commandName = "vtkActor";
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
  vtkmsg << "Object type: vtkCubeAxesActor, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkCubeAxesActor_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkCubeAxesActor", vtkCubeAxesActorClientServerNewCommand);
    csi->AddCommandFunction("vtkCubeAxesActor", vtkCubeAxesActorCommand);
    }
}
