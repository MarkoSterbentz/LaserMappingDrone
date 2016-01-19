// ClientServer wrapper for vtkPVRenderView object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPVRenderView.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPVRenderViewClientServerNewCommand(void* /*ctx*/)
{
  return vtkPVRenderView::New();
}


int VTK_EXPORT vtkPVRenderViewCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPVRenderView *op = vtkPVRenderView::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPVRenderView.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVRenderView  *temp20;
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
    vtkPVRenderView  *temp20;
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
    vtkPVRenderView  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInteractionMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInteractionMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInteractionMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInteractionMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Initialize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->Initialize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNonCompositedRenderer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderer  *temp20;
      {
      temp20 = (op)->GetNonCompositedRenderer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRenderer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderer  *temp20;
      {
      temp20 = (op)->GetRenderer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("SetActiveCamera",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCamera  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCamera"))
      {
      op->SetActiveCamera(temp0);
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
  if (!strcmp("GetInteractor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVGenericRenderWindowInteractor  *temp20;
      {
      temp20 = (op)->GetInteractor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInteractorStyle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVInteractorStyle  *temp20;
      {
      temp20 = (op)->GetInteractorStyle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("StillRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StillRender();
      return 1;
      }
    }
  if (!strcmp("InteractiveRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InteractiveRender();
      return 1;
      }
    }
  if (!strcmp("SetStillRenderImageReductionFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetStillRenderImageReductionFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetStillRenderImageReductionFactorMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStillRenderImageReductionFactorMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetStillRenderImageReductionFactorMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStillRenderImageReductionFactorMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetStillRenderImageReductionFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStillRenderImageReductionFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInteractiveRenderImageReductionFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInteractiveRenderImageReductionFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInteractiveRenderImageReductionFactorMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInteractiveRenderImageReductionFactorMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInteractiveRenderImageReductionFactorMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInteractiveRenderImageReductionFactorMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInteractiveRenderImageReductionFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInteractiveRenderImageReductionFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRemoteRenderingThreshold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRemoteRenderingThreshold(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRemoteRenderingThreshold",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetRemoteRenderingThreshold();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLODRenderingThreshold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLODRenderingThreshold(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLODRenderingThreshold",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetLODRenderingThreshold();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLODResolution",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLODResolution(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLODResolutionMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetLODResolutionMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLODResolutionMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetLODResolutionMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLODResolution",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetLODResolution();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseOutlineForLODRendering",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseOutlineForLODRendering(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseOutlineForLODRendering",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseOutlineForLODRendering();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ConfigureCompressor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->ConfigureCompressor(temp0);
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
  if (!strcmp("SetUseLightKit",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseLightKit(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseLightKit",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseLightKit();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseLightKitOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseLightKitOn();
      return 1;
      }
    }
  if (!strcmp("UseLightKitOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseLightKitOff();
      return 1;
      }
    }
  if (!strcmp("StreamingUpdate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[24];
    if(msg.GetArgument(0, 2, temp0, 24))
      {
      op->StreamingUpdate(temp0);
      return 1;
      }
    }
  if (!strcmp("DeliverStreamedPieces",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    vtkClientServerStreamDataArg<unsigned int    > temp1(msg, 0, 3);
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1)
      {
      op->DeliverStreamedPieces(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("USE_LOD",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->USE_LOD();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LOD_RESOLUTION",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationDoubleKey  *temp20;
      {
      temp20 = (op)->LOD_RESOLUTION();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("USE_OUTLINE_FOR_LOD",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->USE_OUTLINE_FOR_LOD();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RENDER_EMPTY_IMAGES",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->RENDER_EMPTY_IMAGES();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NEED_ORDERED_COMPOSITING",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->NEED_ORDERED_COMPOSITING();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("VIEW_PLANES",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationDoubleVectorKey  *temp20;
      {
      temp20 = (op)->VIEW_PLANES();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("REQUEST_STREAMING_UPDATE",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationRequestKey  *temp20;
      {
      temp20 = (op)->REQUEST_STREAMING_UPDATE();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("REQUEST_PROCESS_STREAMED_PIECE",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationRequestKey  *temp20;
      {
      temp20 = (op)->REQUEST_PROCESS_STREAMED_PIECE();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SelectCells",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[4];
    if(msg.GetArgument(0, 2, temp0, 4))
      {
      op->SelectCells(temp0);
      return 1;
      }
    }
  if (!strcmp("SelectCells",method) && msg.GetNumberOfArguments(0) == 6)
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
      op->SelectCells(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SelectPoints",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[4];
    if(msg.GetArgument(0, 2, temp0, 4))
      {
      op->SelectPoints(temp0);
      return 1;
      }
    }
  if (!strcmp("SelectPoints",method) && msg.GetNumberOfArguments(0) == 6)
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
      op->SelectPoints(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SelectPolygonPoints",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkIdType   temp1;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SelectPolygonPoints(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SelectPolygonCells",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    vtkIdType   temp1;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SelectPolygonCells(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SelectPolygon",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    vtkIdType   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SelectPolygon(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetLastSelection",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSelection  *temp20;
      {
      temp20 = (op)->GetLastSelection();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseInteractiveRenderingForScreenshots",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseInteractiveRenderingForScreenshots(temp0);
      return 1;
      }
    }
  if (!strcmp("UseInteractiveRenderingForScreenshotsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseInteractiveRenderingForScreenshotsOn();
      return 1;
      }
    }
  if (!strcmp("UseInteractiveRenderingForScreenshotsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseInteractiveRenderingForScreenshotsOff();
      return 1;
      }
    }
  if (!strcmp("GetUseInteractiveRenderingForScreenshots",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseInteractiveRenderingForScreenshots();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseOffscreenRenderingForScreenshots",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseOffscreenRenderingForScreenshots(temp0);
      return 1;
      }
    }
  if (!strcmp("UseOffscreenRenderingForScreenshotsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseOffscreenRenderingForScreenshotsOn();
      return 1;
      }
    }
  if (!strcmp("UseOffscreenRenderingForScreenshotsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseOffscreenRenderingForScreenshotsOff();
      return 1;
      }
    }
  if (!strcmp("GetUseOffscreenRenderingForScreenshots",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseOffscreenRenderingForScreenshots();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseOffscreenRendering",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseOffscreenRendering(temp0);
      return 1;
      }
    }
  if (!strcmp("UseOffscreenRenderingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseOffscreenRenderingOn();
      return 1;
      }
    }
  if (!strcmp("UseOffscreenRenderingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseOffscreenRenderingOff();
      return 1;
      }
    }
  if (!strcmp("GetUseOffscreenRendering",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseOffscreenRendering();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRemoteRenderingAvailable",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetRemoteRenderingAvailable();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoteRenderingAvailableOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoteRenderingAvailableOff();
      return 1;
      }
    }
  if (!strcmp("GetUsedLODForLastRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUsedLODForLastRender();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InvalidateCachedSelection",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InvalidateCachedSelection();
      return 1;
      }
    }
  if (!strcmp("GetZbufferDataAtPoint",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    double   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetZbufferDataAtPoint(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPiece",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkInformation  *temp0;
    vtkPVDataRepresentation  *temp1;
    vtkDataObject  *temp2;
    unsigned long     temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPVDataRepresentation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkDataObject") &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetPiece(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("GetPieceProducer",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformation  *temp0;
    vtkPVDataRepresentation  *temp1;
    vtkAlgorithmOutput  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPVDataRepresentation"))
      {
      temp20 = (op)->GetPieceProducer(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPieceLOD",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkPVDataRepresentation  *temp1;
    vtkDataObject  *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPVDataRepresentation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkDataObject"))
      {
      op->SetPieceLOD(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetPieceProducerLOD",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformation  *temp0;
    vtkPVDataRepresentation  *temp1;
    vtkAlgorithmOutput  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPVDataRepresentation"))
      {
      temp20 = (op)->GetPieceProducerLOD(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MarkAsRedistributable",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkPVDataRepresentation  *temp1;
    bool   temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPVDataRepresentation") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->MarkAsRedistributable(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetStreamable",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkPVDataRepresentation  *temp1;
    bool   temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPVDataRepresentation") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetStreamable(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetNextStreamedPiece",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkPVDataRepresentation  *temp1;
    vtkDataObject  *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPVDataRepresentation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkDataObject"))
      {
      op->SetNextStreamedPiece(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetCurrentStreamedPiece",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformation  *temp0;
    vtkPVDataRepresentation  *temp1;
    vtkDataObject  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPVDataRepresentation"))
      {
      temp20 = (op)->GetCurrentStreamedPiece(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDeliverToAllProcesses",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkPVDataRepresentation  *temp1;
    bool   temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPVDataRepresentation") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetDeliverToAllProcesses(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetDeliverToClientAndRenderingProcesses",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkInformation  *temp0;
    vtkPVDataRepresentation  *temp1;
    bool   temp2;
    bool   temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPVDataRepresentation") &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetDeliverToClientAndRenderingProcesses(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetRequiresDistributedRendering",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkInformation  *temp0;
    vtkPVDataRepresentation  *temp1;
    bool   temp2;
    bool   temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPVDataRepresentation") &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetRequiresDistributedRendering(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetRequiresDistributedRenderingLOD",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkPVDataRepresentation  *temp1;
    bool   temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPVDataRepresentation") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetRequiresDistributedRenderingLOD(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("RegisterPropForHardwareSelection",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPVDataRepresentation  *temp0;
    vtkProp  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkProp"))
      {
      op->RegisterPropForHardwareSelection(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("UnRegisterPropForHardwareSelection",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPVDataRepresentation  *temp0;
    vtkProp  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkProp"))
      {
      op->UnRegisterPropForHardwareSelection(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLightSwitch",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLightSwitch(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLightSwitch",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetLightSwitch();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LightSwitchOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LightSwitchOn();
      return 1;
      }
    }
  if (!strcmp("LightSwitchOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LightSwitchOff();
      return 1;
      }
    }
  if (!strcmp("SetShowAnnotation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetShowAnnotation(temp0);
      return 1;
      }
    }
  if (!strcmp("SetOrientationAxesInteractivity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOrientationAxesInteractivity(temp0);
      return 1;
      }
    }
  if (!strcmp("SetOrientationAxesVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOrientationAxesVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("SetOrientationAxesLabelColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetOrientationAxesLabelColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetOrientationAxesOutlineColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetOrientationAxesOutlineColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetCenterAxesVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCenterAxesVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("SetCenterOfRotation",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetCenterOfRotation(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetRotationFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRotationFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("SetNonInteractiveRenderDelay",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNonInteractiveRenderDelay(temp0);
      return 1;
      }
    }
  if (!strcmp("SetKeyLightWarmth",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetKeyLightWarmth(temp0);
      return 1;
      }
    }
  if (!strcmp("SetKeyLightIntensity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetKeyLightIntensity(temp0);
      return 1;
      }
    }
  if (!strcmp("SetKeyLightElevation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetKeyLightElevation(temp0);
      return 1;
      }
    }
  if (!strcmp("SetKeyLightAzimuth",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetKeyLightAzimuth(temp0);
      return 1;
      }
    }
  if (!strcmp("SetFillLightWarmth",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFillLightWarmth(temp0);
      return 1;
      }
    }
  if (!strcmp("SetKeyToFillRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetKeyToFillRatio(temp0);
      return 1;
      }
    }
  if (!strcmp("SetFillLightElevation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFillLightElevation(temp0);
      return 1;
      }
    }
  if (!strcmp("SetFillLightAzimuth",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFillLightAzimuth(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBackLightWarmth",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBackLightWarmth(temp0);
      return 1;
      }
    }
  if (!strcmp("SetKeyToBackRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetKeyToBackRatio(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBackLightElevation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBackLightElevation(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBackLightAzimuth",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBackLightAzimuth(temp0);
      return 1;
      }
    }
  if (!strcmp("SetHeadLightWarmth",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetHeadLightWarmth(temp0);
      return 1;
      }
    }
  if (!strcmp("SetKeyToHeadRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetKeyToHeadRatio(temp0);
      return 1;
      }
    }
  if (!strcmp("SetMaintainLuminance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaintainLuminance(temp0);
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
  if (!strcmp("SetMaximumNumberOfPeels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumNumberOfPeels(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBackground",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetBackground(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetBackground2",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetBackground2(temp0,temp1,temp2);
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
  if (!strcmp("SetGradientBackground",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGradientBackground(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTexturedBackground",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTexturedBackground(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAmbientColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetAmbientColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetSpecularColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetSpecularColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetDiffuseColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetDiffuseColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetIntensity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIntensity(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLightType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLightType(temp0);
      return 1;
      }
    }
  if (!strcmp("SetStereoCapableWindow",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetStereoCapableWindow(temp0);
      return 1;
      }
    }
  if (!strcmp("SetStereoRender",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetStereoRender(temp0);
      return 1;
      }
    }
  if (!strcmp("SetStereoType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetStereoType(temp0);
      return 1;
      }
    }
  if (!strcmp("SetMultiSamples",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMultiSamples(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAlphaBitPlanes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAlphaBitPlanes(temp0);
      return 1;
      }
    }
  if (!strcmp("SetStencilCapable",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetStencilCapable(temp0);
      return 1;
      }
    }
  if (!strcmp("SetCamera2DManipulators",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[9];
    if(msg.GetArgument(0, 2, temp0, 9))
      {
      op->SetCamera2DManipulators(temp0);
      return 1;
      }
    }
  if (!strcmp("SetCamera3DManipulators",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[9];
    if(msg.GetArgument(0, 2, temp0, 9))
      {
      op->SetCamera3DManipulators(temp0);
      return 1;
      }
    }
  if (!strcmp("Update",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Update();
      return 1;
      }
    }
  if (!strcmp("UpdateLOD",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UpdateLOD();
      return 1;
      }
    }
  if (!strcmp("GetUseLODForInteractiveRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseLODForInteractiveRender();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUseDistributedRenderingForStillRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseDistributedRenderingForStillRender();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUseDistributedRenderingForInteractiveRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseDistributedRenderingForInteractiveRender();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetStillRenderProcesses",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetStillRenderProcesses();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInteractiveRenderProcesses",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetInteractiveRenderProcesses();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDataDistributionMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetDataDistributionMode(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDeliveryManager",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVDataDeliveryManager  *temp20;
      {
      temp20 = (op)->GetDeliveryManager();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Deliver",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    unsigned int      temp1;
    vtkClientServerStreamDataArg<unsigned int    > temp2(msg, 0, 4);
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2)
      {
      op->Deliver(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetUseOrderedCompositing",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseOrderedCompositing();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRenderEmptyImages",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetRenderEmptyImages();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUpdateTimeStamp",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetUpdateTimeStamp();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CopyViewUpdateOptions",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVRenderView  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVRenderView"))
      {
      op->CopyViewUpdateOptions(temp0);
      return 1;
      }
    }
  if (!strcmp("AddPropToRenderer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp"))
      {
      op->AddPropToRenderer(temp0);
      return 1;
      }
    }
  if (!strcmp("RemovePropFromRenderer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp"))
      {
      op->RemovePropFromRenderer(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkPVView";
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
  vtkmsg << "Object type: vtkPVRenderView, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPVRenderView_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPVRenderView", vtkPVRenderViewClientServerNewCommand);
    csi->AddCommandFunction("vtkPVRenderView", vtkPVRenderViewCommand);
    }
}
