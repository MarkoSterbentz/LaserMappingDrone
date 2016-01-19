// ClientServer wrapper for vtkParallelRenderManager object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkParallelRenderManager.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkParallelRenderManagerCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkParallelRenderManager *op = vtkParallelRenderManager::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkParallelRenderManager.  "
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
    vtkParallelRenderManager  *temp20;
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
    vtkParallelRenderManager  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MakeRenderWindow",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderWindow  *temp20;
      {
      temp20 = (op)->MakeRenderWindow();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MakeRenderer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderer  *temp20;
      {
      temp20 = (op)->MakeRenderer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("SetRenderWindow",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderWindow  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderWindow"))
      {
      op->SetRenderWindow(temp0);
      return 1;
      }
    }
  if (!strcmp("GetController",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkMultiProcessController  *temp20;
      {
      temp20 = (op)->GetController();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetController",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMultiProcessController  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMultiProcessController"))
      {
      op->SetController(temp0);
      return 1;
      }
    }
  if (!strcmp("InitializePieces",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InitializePieces();
      return 1;
      }
    }
  if (!strcmp("InitializeOffScreen",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InitializeOffScreen();
      return 1;
      }
    }
  if (!strcmp("StartInteractor",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartInteractor();
      return 1;
      }
    }
  if (!strcmp("StartServices",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartServices();
      return 1;
      }
    }
  if (!strcmp("StopServices",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StopServices();
      return 1;
      }
    }
  if (!strcmp("StartRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartRender();
      return 1;
      }
    }
  if (!strcmp("EndRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndRender();
      return 1;
      }
    }
  if (!strcmp("SatelliteStartRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SatelliteStartRender();
      return 1;
      }
    }
  if (!strcmp("SatelliteEndRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SatelliteEndRender();
      return 1;
      }
    }
  if (!strcmp("RenderRMI",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RenderRMI();
      return 1;
      }
    }
  if (!strcmp("ResetCamera",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderer  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer"))
      {
      op->ResetCamera(temp0);
      return 1;
      }
    }
  if (!strcmp("ResetCameraClippingRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderer  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer"))
      {
      op->ResetCameraClippingRange(temp0);
      return 1;
      }
    }
  if (!strcmp("ComputeVisiblePropBoundsRMI",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->ComputeVisiblePropBoundsRMI(temp0);
      return 1;
      }
    }
  if (!strcmp("InitializeRMIs",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InitializeRMIs();
      return 1;
      }
    }
  if (!strcmp("ResetAllCameras",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResetAllCameras();
      return 1;
      }
    }
  if (!strcmp("SetParallelRendering",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetParallelRendering(temp0);
      return 1;
      }
    }
  if (!strcmp("GetParallelRendering",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetParallelRendering();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ParallelRenderingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ParallelRenderingOn();
      return 1;
      }
    }
  if (!strcmp("ParallelRenderingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ParallelRenderingOff();
      return 1;
      }
    }
  if (!strcmp("SetRenderEventPropagation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRenderEventPropagation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRenderEventPropagation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRenderEventPropagation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderEventPropagationOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RenderEventPropagationOn();
      return 1;
      }
    }
  if (!strcmp("RenderEventPropagationOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RenderEventPropagationOff();
      return 1;
      }
    }
  if (!strcmp("SetDefaultRenderEventPropagation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDefaultRenderEventPropagation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDefaultRenderEventPropagation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetDefaultRenderEventPropagation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseCompositing",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseCompositing(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseCompositing",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseCompositing();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseCompositingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseCompositingOn();
      return 1;
      }
    }
  if (!strcmp("UseCompositingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseCompositingOff();
      return 1;
      }
    }
  if (!strcmp("SetImageReductionFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetImageReductionFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetImageReductionFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetImageReductionFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaxImageReductionFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaxImageReductionFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaxImageReductionFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaxImageReductionFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetImageReductionFactorForUpdateRate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetImageReductionFactorForUpdateRate(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAutoImageReductionFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAutoImageReductionFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAutoImageReductionFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutoImageReductionFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AutoImageReductionFactorOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutoImageReductionFactorOn();
      return 1;
      }
    }
  if (!strcmp("AutoImageReductionFactorOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutoImageReductionFactorOff();
      return 1;
      }
    }
  if (!strcmp("GetRenderTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetRenderTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetImageProcessingTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetImageProcessingTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSyncRenderWindowRenderers",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSyncRenderWindowRenderers();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSyncRenderWindowRenderers",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSyncRenderWindowRenderers(temp0);
      return 1;
      }
    }
  if (!strcmp("SyncRenderWindowRenderersOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SyncRenderWindowRenderersOn();
      return 1;
      }
    }
  if (!strcmp("SyncRenderWindowRenderersOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SyncRenderWindowRenderersOff();
      return 1;
      }
    }
  if (!strcmp("AddRenderer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderer  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer"))
      {
      op->AddRenderer(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveRenderer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderer  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer"))
      {
      op->RemoveRenderer(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveAllRenderers",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllRenderers();
      return 1;
      }
    }
  if (!strcmp("SetWriteBackImages",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetWriteBackImages(temp0);
      return 1;
      }
    }
  if (!strcmp("GetWriteBackImages",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetWriteBackImages();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("WriteBackImagesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WriteBackImagesOn();
      return 1;
      }
    }
  if (!strcmp("WriteBackImagesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WriteBackImagesOff();
      return 1;
      }
    }
  if (!strcmp("SetMagnifyImages",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMagnifyImages(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMagnifyImages",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMagnifyImages();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MagnifyImagesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MagnifyImagesOn();
      return 1;
      }
    }
  if (!strcmp("MagnifyImagesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MagnifyImagesOff();
      return 1;
      }
    }
  if (!strcmp("SetMagnifyImageMethod",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMagnifyImageMethod(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMagnifyImageMethod",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMagnifyImageMethod();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMagnifyImageMethodToNearest",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetMagnifyImageMethodToNearest();
      return 1;
      }
    }
  if (!strcmp("SetMagnifyImageMethodToLinear",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetMagnifyImageMethodToLinear();
      return 1;
      }
    }
  if (!strcmp("GetPixelData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkUnsignedCharArray  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkUnsignedCharArray"))
      {
      op->GetPixelData(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPixelData",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkUnsignedCharArray  *temp4;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkUnsignedCharArray"))
      {
      op->GetPixelData(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("GetReducedPixelData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkUnsignedCharArray  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkUnsignedCharArray"))
      {
      op->GetReducedPixelData(temp0);
      return 1;
      }
    }
  if (!strcmp("GetReducedPixelData",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkUnsignedCharArray  *temp4;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkUnsignedCharArray"))
      {
      op->GetReducedPixelData(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("GetFullImageSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetFullImageSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetReducedImageSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetReducedImageSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TileWindows",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->TileWindows(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetUseRGBA",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseRGBA(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseRGBA",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseRGBA();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetForceRenderWindowSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetForceRenderWindowSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetForceRenderWindowSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetForceRenderWindowSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetForcedRenderWindowSize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetForcedRenderWindowSize(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetForcedRenderWindowSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetForcedRenderWindowSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetForcedRenderWindowSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetForcedRenderWindowSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseBackBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseBackBuffer(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseBackBuffer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseBackBuffer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseBackBufferOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseBackBufferOn();
      return 1;
      }
    }
  if (!strcmp("UseBackBufferOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseBackBufferOff();
      return 1;
      }
    }
  if (!strcmp("SetSynchronizeTileProperties",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSynchronizeTileProperties(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSynchronizeTileProperties",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSynchronizeTileProperties();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SynchronizeTilePropertiesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SynchronizeTilePropertiesOn();
      return 1;
      }
    }
  if (!strcmp("SynchronizeTilePropertiesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SynchronizeTilePropertiesOff();
      return 1;
      }
    }
  if (!strcmp("GenericStartRenderCallback",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenericStartRenderCallback();
      return 1;
      }
    }
  if (!strcmp("GenericEndRenderCallback",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenericEndRenderCallback();
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
  vtkmsg << "Object type: vtkParallelRenderManager, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkParallelRenderManager_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkParallelRenderManager", vtkParallelRenderManagerCommand);
    }
}
