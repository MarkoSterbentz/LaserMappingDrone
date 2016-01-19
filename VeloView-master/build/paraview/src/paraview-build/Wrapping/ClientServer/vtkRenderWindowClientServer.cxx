// ClientServer wrapper for vtkRenderWindow object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkRenderWindow.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkRenderWindowClientServerNewCommand(void* /*ctx*/)
{
  return vtkRenderWindow::New();
}


int VTK_EXPORT vtkRenderWindowCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkRenderWindow *op = vtkRenderWindow::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkRenderWindow.  "
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
    vtkRenderWindow  *temp20;
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
    vtkRenderWindow  *temp20;
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
    vtkRenderWindow  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("HasRenderer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderer  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer"))
      {
      temp20 = (op)->HasRenderer(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRenderLibrary",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetRenderLibrary();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRenderers",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRendererCollection  *temp20;
      {
      temp20 = (op)->GetRenderers();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CaptureGL2PSSpecialProps",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCollection  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCollection"))
      {
      op->CaptureGL2PSSpecialProps(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCapturingGL2PSSpecialProps",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCapturingGL2PSSpecialProps();
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
  if (!strcmp("Start",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Start();
      return 1;
      }
    }
  if (!strcmp("Finalize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Finalize();
      return 1;
      }
    }
  if (!strcmp("Frame",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Frame();
      return 1;
      }
    }
  if (!strcmp("WaitForCompletion",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WaitForCompletion();
      return 1;
      }
    }
  if (!strcmp("CopyResultFrame",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyResultFrame();
      return 1;
      }
    }
  if (!strcmp("MakeRenderWindowInteractor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderWindowInteractor  *temp20;
      {
      temp20 = (op)->MakeRenderWindowInteractor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HideCursor",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->HideCursor();
      return 1;
      }
    }
  if (!strcmp("ShowCursor",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ShowCursor();
      return 1;
      }
    }
  if (!strcmp("SetCursorPosition",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetCursorPosition(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetCurrentCursor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCurrentCursor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCurrentCursor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCurrentCursor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFullScreen",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFullScreen(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFullScreen",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetFullScreen();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FullScreenOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->FullScreenOn();
      return 1;
      }
    }
  if (!strcmp("FullScreenOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->FullScreenOff();
      return 1;
      }
    }
  if (!strcmp("SetBorders",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBorders(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBorders",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetBorders();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("BordersOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BordersOn();
      return 1;
      }
    }
  if (!strcmp("BordersOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BordersOff();
      return 1;
      }
    }
  if (!strcmp("GetStereoCapableWindow",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStereoCapableWindow();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StereoCapableWindowOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StereoCapableWindowOn();
      return 1;
      }
    }
  if (!strcmp("StereoCapableWindowOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StereoCapableWindowOff();
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
  if (!strcmp("GetStereoRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStereoRender();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("StereoRenderOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StereoRenderOn();
      return 1;
      }
    }
  if (!strcmp("StereoRenderOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StereoRenderOff();
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
  if (!strcmp("GetAlphaBitPlanes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAlphaBitPlanes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AlphaBitPlanesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AlphaBitPlanesOn();
      return 1;
      }
    }
  if (!strcmp("AlphaBitPlanesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AlphaBitPlanesOff();
      return 1;
      }
    }
  if (!strcmp("SetPointSmoothing",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPointSmoothing(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPointSmoothing",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPointSmoothing();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PointSmoothingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PointSmoothingOn();
      return 1;
      }
    }
  if (!strcmp("PointSmoothingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PointSmoothingOff();
      return 1;
      }
    }
  if (!strcmp("SetLineSmoothing",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLineSmoothing(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLineSmoothing",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLineSmoothing();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LineSmoothingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LineSmoothingOn();
      return 1;
      }
    }
  if (!strcmp("LineSmoothingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LineSmoothingOff();
      return 1;
      }
    }
  if (!strcmp("SetPolygonSmoothing",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPolygonSmoothing(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolygonSmoothing",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPolygonSmoothing();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PolygonSmoothingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PolygonSmoothingOn();
      return 1;
      }
    }
  if (!strcmp("PolygonSmoothingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PolygonSmoothingOff();
      return 1;
      }
    }
  if (!strcmp("GetStereoType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStereoType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("SetStereoTypeToCrystalEyes",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetStereoTypeToCrystalEyes();
      return 1;
      }
    }
  if (!strcmp("SetStereoTypeToRedBlue",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetStereoTypeToRedBlue();
      return 1;
      }
    }
  if (!strcmp("SetStereoTypeToInterlaced",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetStereoTypeToInterlaced();
      return 1;
      }
    }
  if (!strcmp("SetStereoTypeToLeft",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetStereoTypeToLeft();
      return 1;
      }
    }
  if (!strcmp("SetStereoTypeToRight",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetStereoTypeToRight();
      return 1;
      }
    }
  if (!strcmp("SetStereoTypeToDresden",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetStereoTypeToDresden();
      return 1;
      }
    }
  if (!strcmp("SetStereoTypeToAnaglyph",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetStereoTypeToAnaglyph();
      return 1;
      }
    }
  if (!strcmp("SetStereoTypeToCheckerboard",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetStereoTypeToCheckerboard();
      return 1;
      }
    }
  if (!strcmp("SetStereoTypeToSplitViewportHorizontal",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetStereoTypeToSplitViewportHorizontal();
      return 1;
      }
    }
  if (!strcmp("GetStereoTypeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetStereoTypeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StereoUpdate",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StereoUpdate();
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
  if (!strcmp("StereoRenderComplete",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StereoRenderComplete();
      return 1;
      }
    }
  if (!strcmp("SetAnaglyphColorSaturation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAnaglyphColorSaturation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAnaglyphColorSaturationMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetAnaglyphColorSaturationMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAnaglyphColorSaturationMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetAnaglyphColorSaturationMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAnaglyphColorSaturation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetAnaglyphColorSaturation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAnaglyphColorMask",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAnaglyphColorMask(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetAnaglyphColorMask",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetAnaglyphColorMask(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAnaglyphColorMask",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetAnaglyphColorMask();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("WindowRemap",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WindowRemap();
      return 1;
      }
    }
  if (!strcmp("SetSwapBuffers",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSwapBuffers(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSwapBuffers",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSwapBuffers();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SwapBuffersOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SwapBuffersOn();
      return 1;
      }
    }
  if (!strcmp("SwapBuffersOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SwapBuffersOff();
      return 1;
      }
    }
  if (!strcmp("SetPixelData",method) && msg.GetNumberOfArguments(0) == 8)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkClientServerStreamDataArg<unsigned char   > temp4(msg, 0, 6);
    int      temp5;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->SetPixelData(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPixelData",method) && msg.GetNumberOfArguments(0) == 8)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkUnsignedCharArray  *temp4;
    int      temp5;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkUnsignedCharArray") &&
      msg.GetArgument(0, 7, &temp5))
      {
      temp20 = (op)->SetPixelData(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRGBAPixelData",method) && msg.GetNumberOfArguments(0) == 8)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    int      temp4;
    vtkFloatArray  *temp5;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkFloatArray"))
      {
      temp20 = (op)->GetRGBAPixelData(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRGBAPixelData",method) && msg.GetNumberOfArguments(0) == 9)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkClientServerStreamDataArg<float  > temp4(msg, 0, 6);
    int      temp5;
    int      temp6;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6))
      {
      temp20 = (op)->SetRGBAPixelData(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRGBAPixelData",method) && msg.GetNumberOfArguments(0) == 9)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkFloatArray  *temp4;
    int      temp5;
    int      temp6;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkFloatArray") &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6))
      {
      temp20 = (op)->SetRGBAPixelData(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReleaseRGBAPixelData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    if(temp0)
      {
      op->ReleaseRGBAPixelData(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRGBACharPixelData",method) && msg.GetNumberOfArguments(0) == 8)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    int      temp4;
    vtkUnsignedCharArray  *temp5;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkUnsignedCharArray"))
      {
      temp20 = (op)->GetRGBACharPixelData(temp0,temp1,temp2,temp3,temp4,temp5);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRGBACharPixelData",method) && msg.GetNumberOfArguments(0) == 9)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkClientServerStreamDataArg<unsigned char   > temp4(msg, 0, 6);
    int      temp5;
    int      temp6;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6))
      {
      temp20 = (op)->SetRGBACharPixelData(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRGBACharPixelData",method) && msg.GetNumberOfArguments(0) == 9)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkUnsignedCharArray  *temp4;
    int      temp5;
    int      temp6;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkUnsignedCharArray") &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6))
      {
      temp20 = (op)->SetRGBACharPixelData(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetZbufferData",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkClientServerStreamDataArg<float  > temp4(msg, 0, 6);
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      temp4)
      {
      temp20 = (op)->GetZbufferData(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetZbufferData",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkFloatArray  *temp4;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkFloatArray"))
      {
      temp20 = (op)->GetZbufferData(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetZbufferData",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkClientServerStreamDataArg<float  > temp4(msg, 0, 6);
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      temp4)
      {
      temp20 = (op)->SetZbufferData(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetZbufferData",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkFloatArray  *temp4;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkFloatArray"))
      {
      temp20 = (op)->SetZbufferData(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetZbufferDataAtPoint",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    float    temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetZbufferDataAtPoint(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAAFrames",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAAFrames();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAAFrames",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAAFrames(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFDFrames",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetFDFrames();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFDFrames",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFDFrames(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseConstantFDOffsets",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseConstantFDOffsets();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseConstantFDOffsets",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseConstantFDOffsets(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSubFrames",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSubFrames();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSubFrames",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSubFrames(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNeverRendered",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNeverRendered();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAbortRender",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAbortRender();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAbortRender",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAbortRender(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInAbortCheck",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInAbortCheck();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInAbortCheck",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInAbortCheck(temp0);
      return 1;
      }
    }
  if (!strcmp("CheckAbortStatus",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->CheckAbortStatus();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetIsPicking",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetIsPicking();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIsPicking",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIsPicking(temp0);
      return 1;
      }
    }
  if (!strcmp("IsPickingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->IsPickingOn();
      return 1;
      }
    }
  if (!strcmp("IsPickingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->IsPickingOff();
      return 1;
      }
    }
  if (!strcmp("GetEventPending",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEventPending();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CheckInRenderStatus",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->CheckInRenderStatus();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ClearInRenderStatus",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearInRenderStatus();
      return 1;
      }
    }
  if (!strcmp("SetDesiredUpdateRate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDesiredUpdateRate(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDesiredUpdateRate",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDesiredUpdateRate();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfLayers",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfLayers();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfLayers",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfLayers(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfLayersMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfLayersMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfLayersMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfLayersMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInteractor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderWindowInteractor  *temp20;
      {
      temp20 = (op)->GetInteractor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInteractor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderWindowInteractor  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderWindowInteractor"))
      {
      op->SetInteractor(temp0);
      return 1;
      }
    }
  if (!strcmp("UnRegister",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObjectBase  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObjectBase"))
      {
      op->UnRegister(temp0);
      return 1;
      }
    }
  if (!strcmp("SetWindowInfo",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetWindowInfo(temp0);
      return 1;
      }
    }
  if (!strcmp("SetNextWindowInfo",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNextWindowInfo(temp0);
      return 1;
      }
    }
  if (!strcmp("SetParentInfo",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetParentInfo(temp0);
      return 1;
      }
    }
  if (!strcmp("InitializeFromCurrentContext",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->InitializeFromCurrentContext();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MakeCurrent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MakeCurrent();
      return 1;
      }
    }
  if (!strcmp("IsCurrent",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->IsCurrent();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsDrawable",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->IsDrawable();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetForceMakeCurrent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetForceMakeCurrent();
      return 1;
      }
    }
  if (!strcmp("ReportCapabilities",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->ReportCapabilities();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SupportsOpenGL",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->SupportsOpenGL();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsDirect",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->IsDirect();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDepthBufferSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDepthBufferSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetColorBufferSizes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    int      temp20;
    if(temp0)
      {
      temp20 = (op)->GetColorBufferSizes(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPainterDeviceAdapter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPainterDeviceAdapter  *temp20;
      {
      temp20 = (op)->GetPainterDeviceAdapter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("GetMultiSamples",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMultiSamples();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("GetStencilCapable",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStencilCapable();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StencilCapableOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StencilCapableOn();
      return 1;
      }
    }
  if (!strcmp("StencilCapableOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StencilCapableOff();
      return 1;
      }
    }
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("SetReportGraphicErrors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetReportGraphicErrors(temp0);
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("SetReportGraphicErrorsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetReportGraphicErrorsOn();
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("SetReportGraphicErrorsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetReportGraphicErrorsOff();
      return 1;
      }
    }
#endif
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("GetReportGraphicErrors",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetReportGraphicErrors();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
#endif
  if (!strcmp("CheckGraphicError",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CheckGraphicError();
      return 1;
      }
    }
  if (!strcmp("HasGraphicError",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->HasGraphicError();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLastGraphicErrorString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetLastGraphicErrorString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkWindow";
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
  vtkmsg << "Object type: vtkRenderWindow, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkRenderWindow_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkRenderWindow", vtkRenderWindowClientServerNewCommand);
    csi->AddCommandFunction("vtkRenderWindow", vtkRenderWindowCommand);
    }
}
