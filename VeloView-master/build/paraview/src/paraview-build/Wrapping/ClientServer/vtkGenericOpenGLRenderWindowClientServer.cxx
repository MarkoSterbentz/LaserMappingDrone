// ClientServer wrapper for vtkGenericOpenGLRenderWindow object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkGenericOpenGLRenderWindow.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkGenericOpenGLRenderWindowClientServerNewCommand(void* /*ctx*/)
{
  return vtkGenericOpenGLRenderWindow::New();
}


int VTK_EXPORT vtkGenericOpenGLRenderWindowCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkGenericOpenGLRenderWindow *op = vtkGenericOpenGLRenderWindow::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkGenericOpenGLRenderWindow.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkGenericOpenGLRenderWindow  *temp20;
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
    vtkGenericOpenGLRenderWindow  *temp20;
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
    vtkGenericOpenGLRenderWindow  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("SetFrontBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFrontBuffer(temp0);
      return 1;
      }
    }
  if (!strcmp("SetFrontLeftBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFrontLeftBuffer(temp0);
      return 1;
      }
    }
  if (!strcmp("SetFrontRightBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFrontRightBuffer(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBackBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBackBuffer(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBackLeftBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBackLeftBuffer(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBackRightBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBackRightBuffer(temp0);
      return 1;
      }
    }
  if (!strcmp("PushState",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PushState();
      return 1;
      }
    }
  if (!strcmp("PopState",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PopState();
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
  if (!strcmp("SetParentInfo",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetParentInfo(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScreenSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetScreenSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
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
  if (!strcmp("SetFullScreen",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFullScreen(temp0);
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
  if (!strcmp("SetNextWindowInfo",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNextWindowInfo(temp0);
      return 1;
      }
    }
  if (!strcmp("CreateAWindow",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CreateAWindow();
      return 1;
      }
    }
  if (!strcmp("DestroyWindow",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DestroyWindow();
      return 1;
      }
    }
  if (!strcmp("SetIsDirect",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIsDirect(temp0);
      return 1;
      }
    }
  if (!strcmp("SetSupportsOpenGL",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSupportsOpenGL(temp0);
      return 1;
      }
    }
  if (!strcmp("SetIsCurrent",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIsCurrent(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkOpenGLRenderWindow";
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
  vtkmsg << "Object type: vtkGenericOpenGLRenderWindow, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkGenericOpenGLRenderWindow_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkGenericOpenGLRenderWindow", vtkGenericOpenGLRenderWindowClientServerNewCommand);
    csi->AddCommandFunction("vtkGenericOpenGLRenderWindow", vtkGenericOpenGLRenderWindowCommand);
    }
}
