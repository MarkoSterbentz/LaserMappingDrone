// ClientServer wrapper for vtkRenderer object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkRenderer.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkRendererClientServerNewCommand(void* /*ctx*/)
{
  return vtkRenderer::New();
}


int VTK_EXPORT vtkRendererCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkRenderer *op = vtkRenderer::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkRenderer.  "
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
    vtkRenderer  *temp20;
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
    vtkRenderer  *temp20;
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
    vtkRenderer  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddActor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp"))
      {
      op->AddActor(temp0);
      return 1;
      }
    }
  if (!strcmp("AddVolume",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp"))
      {
      op->AddVolume(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveActor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp"))
      {
      op->RemoveActor(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveVolume",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp"))
      {
      op->RemoveVolume(temp0);
      return 1;
      }
    }
  if (!strcmp("AddLight",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkLight  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkLight"))
      {
      op->AddLight(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveLight",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkLight  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkLight"))
      {
      op->RemoveLight(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveAllLights",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllLights();
      return 1;
      }
    }
  if (!strcmp("GetLights",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkLightCollection  *temp20;
      {
      temp20 = (op)->GetLights();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLightCollection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkLightCollection  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkLightCollection"))
      {
      op->SetLightCollection(temp0);
      return 1;
      }
    }
  if (!strcmp("CreateLight",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CreateLight();
      return 1;
      }
    }
  if (!strcmp("MakeLight",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkLight  *temp20;
      {
      temp20 = (op)->MakeLight();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTwoSidedLighting",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTwoSidedLighting();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTwoSidedLighting",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTwoSidedLighting(temp0);
      return 1;
      }
    }
  if (!strcmp("TwoSidedLightingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TwoSidedLightingOn();
      return 1;
      }
    }
  if (!strcmp("TwoSidedLightingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TwoSidedLightingOff();
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
  if (!strcmp("GetAutomaticLightCreation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutomaticLightCreation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAutomaticLightCreation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAutomaticLightCreation(temp0);
      return 1;
      }
    }
  if (!strcmp("AutomaticLightCreationOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutomaticLightCreationOn();
      return 1;
      }
    }
  if (!strcmp("AutomaticLightCreationOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutomaticLightCreationOff();
      return 1;
      }
    }
  if (!strcmp("UpdateLightsGeometryToFollowCamera",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->UpdateLightsGeometryToFollowCamera();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVolumes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkVolumeCollection  *temp20;
      {
      temp20 = (op)->GetVolumes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetActors",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkActorCollection  *temp20;
      {
      temp20 = (op)->GetActors();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetActiveCamera",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCamera  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCamera"))
      {
      op->SetActiveCamera(temp0);
      return 1;
      }
    }
  if (!strcmp("GetActiveCamera",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCamera  *temp20;
      {
      temp20 = (op)->GetActiveCamera();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MakeCamera",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCamera  *temp20;
      {
      temp20 = (op)->MakeCamera();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetErase",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetErase(temp0);
      return 1;
      }
    }
  if (!strcmp("GetErase",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetErase();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EraseOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EraseOn();
      return 1;
      }
    }
  if (!strcmp("EraseOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EraseOff();
      return 1;
      }
    }
  if (!strcmp("SetDraw",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDraw(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDraw",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDraw();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawOn();
      return 1;
      }
    }
  if (!strcmp("DrawOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawOff();
      return 1;
      }
    }
  if (!strcmp("CaptureGL2PSSpecialProp",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp"))
      {
      temp20 = (op)->CaptureGL2PSSpecialProp(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGL2PSSpecialPropCollection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPropCollection  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPropCollection"))
      {
      op->SetGL2PSSpecialPropCollection(temp0);
      return 1;
      }
    }
  if (!strcmp("AddCuller",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCuller  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCuller"))
      {
      op->AddCuller(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveCuller",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCuller  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCuller"))
      {
      op->RemoveCuller(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCullers",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCullerCollection  *temp20;
      {
      temp20 = (op)->GetCullers();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAmbient",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetAmbient(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetAmbient",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetAmbient(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAmbient",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetAmbient();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAllocatedRenderTime",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAllocatedRenderTime(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAllocatedRenderTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetAllocatedRenderTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTimeFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetTimeFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("DeviceRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DeviceRender();
      return 1;
      }
    }
  if (!strcmp("DeviceRenderTranslucentPolygonalGeometry",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DeviceRenderTranslucentPolygonalGeometry();
      return 1;
      }
    }
  if (!strcmp("Clear",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Clear();
      return 1;
      }
    }
  if (!strcmp("VisibleActorCount",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->VisibleActorCount();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("VisibleVolumeCount",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->VisibleVolumeCount();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ComputeVisiblePropBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->ComputeVisiblePropBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("ComputeVisiblePropBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->ComputeVisiblePropBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,6) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ResetCameraClippingRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResetCameraClippingRange();
      return 1;
      }
    }
  if (!strcmp("ResetCameraClippingRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->ResetCameraClippingRange(temp0);
      return 1;
      }
    }
  if (!strcmp("ResetCameraClippingRange",method) && msg.GetNumberOfArguments(0) == 8)
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
      op->ResetCameraClippingRange(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("SetNearClippingPlaneTolerance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNearClippingPlaneTolerance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNearClippingPlaneToleranceMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetNearClippingPlaneToleranceMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNearClippingPlaneToleranceMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetNearClippingPlaneToleranceMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNearClippingPlaneTolerance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetNearClippingPlaneTolerance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ResetCamera",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResetCamera();
      return 1;
      }
    }
  if (!strcmp("ResetCamera",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->ResetCamera(temp0);
      return 1;
      }
    }
  if (!strcmp("ResetCamera",method) && msg.GetNumberOfArguments(0) == 8)
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
      op->ResetCamera(temp0,temp1,temp2,temp3,temp4,temp5);
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
  if (!strcmp("GetVTKWindow",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkWindow  *temp20;
      {
      temp20 = (op)->GetVTKWindow();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBackingStore",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBackingStore(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBackingStore",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetBackingStore();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("BackingStoreOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BackingStoreOn();
      return 1;
      }
    }
  if (!strcmp("BackingStoreOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BackingStoreOff();
      return 1;
      }
    }
  if (!strcmp("SetInteractive",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInteractive(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInteractive",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInteractive();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InteractiveOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InteractiveOn();
      return 1;
      }
    }
  if (!strcmp("InteractiveOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InteractiveOff();
      return 1;
      }
    }
  if (!strcmp("SetLayer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLayer(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLayer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLayer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPreserveDepthBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPreserveDepthBuffer(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPreserveDepthBuffer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPreserveDepthBuffer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PreserveDepthBufferOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PreserveDepthBufferOn();
      return 1;
      }
    }
  if (!strcmp("PreserveDepthBufferOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PreserveDepthBufferOff();
      return 1;
      }
    }
  if (!strcmp("Transparent",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->Transparent();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("WorldToView",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WorldToView();
      return 1;
      }
    }
  if (!strcmp("ViewToWorld",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ViewToWorld();
      return 1;
      }
    }
  if (!strcmp("GetZ",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    double   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetZ(temp0,temp1);
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
  if (!strcmp("GetLastRenderTimeInSeconds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetLastRenderTimeInSeconds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfPropsRendered",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfPropsRendered();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PickProp",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    vtkAssemblyPath  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->PickProp(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PickProp",method) && msg.GetNumberOfArguments(0) == 6)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    vtkAssemblyPath  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->PickProp(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StereoMidpoint",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StereoMidpoint();
      return 1;
      }
    }
  if (!strcmp("GetTiledAspectRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetTiledAspectRatio();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsActiveCameraCreated",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->IsActiveCameraCreated();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseDepthPeeling",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseDepthPeeling(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseDepthPeeling",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseDepthPeeling();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseDepthPeelingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseDepthPeelingOn();
      return 1;
      }
    }
  if (!strcmp("UseDepthPeelingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseDepthPeelingOff();
      return 1;
      }
    }
  if (!strcmp("SetOcclusionRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOcclusionRatio(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOcclusionRatioMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetOcclusionRatioMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetOcclusionRatioMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetOcclusionRatioMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetOcclusionRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetOcclusionRatio();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaximumNumberOfPeels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumNumberOfPeels(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaximumNumberOfPeels",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMaximumNumberOfPeels();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLastRenderingUsedDepthPeeling",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLastRenderingUsedDepthPeeling();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDelegate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRendererDelegate  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRendererDelegate"))
      {
      op->SetDelegate(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDelegate",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRendererDelegate  *temp20;
      {
      temp20 = (op)->GetDelegate();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSelector",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkHardwareSelector  *temp20;
      {
      temp20 = (op)->GetSelector();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBackgroundTexture",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTexture  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTexture"))
      {
      op->SetBackgroundTexture(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBackgroundTexture",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTexture  *temp20;
      {
      temp20 = (op)->GetBackgroundTexture();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTexturedBackground",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTexturedBackground(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTexturedBackground",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetTexturedBackground();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TexturedBackgroundOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TexturedBackgroundOn();
      return 1;
      }
    }
  if (!strcmp("TexturedBackgroundOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TexturedBackgroundOff();
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

  {
    const char* commandName = "vtkViewport";
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
  vtkmsg << "Object type: vtkRenderer, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkRenderer_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkRenderer", vtkRendererClientServerNewCommand);
    csi->AddCommandFunction("vtkRenderer", vtkRendererCommand);
    }
}
