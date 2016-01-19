// ClientServer wrapper for vtkFrameBufferObject2 object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkFrameBufferObject2.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkFrameBufferObject2ClientServerNewCommand(void* /*ctx*/)
{
  return vtkFrameBufferObject2::New();
}


int VTK_EXPORT vtkFrameBufferObject2Command(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkFrameBufferObject2 *op = vtkFrameBufferObject2::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkFrameBufferObject2.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFrameBufferObject2  *temp20;
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
    vtkFrameBufferObject2  *temp20;
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
    vtkFrameBufferObject2  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetContext",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderWindow  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderWindow"))
      {
      op->SetContext(temp0);
      return 1;
      }
    }
  if (!strcmp("GetContext",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderWindow  *temp20;
      {
      temp20 = (op)->GetContext();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsSupported",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderWindow  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderWindow"))
      {
      temp20 = (op)->IsSupported(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Bind",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->Bind(temp0);
      return 1;
      }
    }
  if (!strcmp("UnBind",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->UnBind(temp0);
      return 1;
      }
    }
  if (!strcmp("SaveCurrentBindings",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SaveCurrentBindings();
      return 1;
      }
    }
  if (!strcmp("SaveCurrentBuffers",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SaveCurrentBuffers();
      return 1;
      }
    }
  if (!strcmp("RestorePreviousBuffers",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RestorePreviousBuffers(temp0);
      return 1;
      }
    }
  if (!strcmp("AddColorAttachment",method) && msg.GetNumberOfArguments(0) == 5)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    vtkTextureObject  *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkTextureObject"))
      {
      op->AddColorAttachment(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("AddTexColorAttachment",method) && msg.GetNumberOfArguments(0) == 5)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    unsigned int      temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->AddTexColorAttachment(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("RemoveTexColorAttachments",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->RemoveTexColorAttachments(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveTexColorAttachment",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->RemoveTexColorAttachment(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("AddColorAttachment",method) && msg.GetNumberOfArguments(0) == 5)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    vtkRenderbuffer  *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkRenderbuffer"))
      {
      op->AddColorAttachment(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("AddRenColorAttachment",method) && msg.GetNumberOfArguments(0) == 5)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    unsigned int      temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->AddRenColorAttachment(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("RemoveRenColorAttachments",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->RemoveRenColorAttachments(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveRenColorAttachment",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->RemoveRenColorAttachment(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("AddDepthAttachment",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    vtkTextureObject  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkTextureObject"))
      {
      op->AddDepthAttachment(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("AddTexDepthAttachment",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddTexDepthAttachment(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveTexDepthAttachment",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemoveTexDepthAttachment(temp0);
      return 1;
      }
    }
  if (!strcmp("AddDepthAttachment",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    vtkRenderbuffer  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkRenderbuffer"))
      {
      op->AddDepthAttachment(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("AddRenDepthAttachment",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddRenDepthAttachment(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveRenDepthAttachment",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemoveRenDepthAttachment(temp0);
      return 1;
      }
    }
  if (!strcmp("ActivateDrawBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->ActivateDrawBuffer(temp0);
      return 1;
      }
    }
  if (!strcmp("ActivateReadBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->ActivateReadBuffer(temp0);
      return 1;
      }
    }
  if (!strcmp("DeactivateReadBuffer",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DeactivateReadBuffer();
      return 1;
      }
    }
  if (!strcmp("ActivateDrawBuffers",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->ActivateDrawBuffers(temp0);
      return 1;
      }
    }
  if (!strcmp("ActivateDrawBuffers",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<unsigned int    > temp0(msg, 0, 2);
    int      temp1;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->ActivateDrawBuffers(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DeactivateDrawBuffers",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DeactivateDrawBuffers();
      return 1;
      }
    }
  if (!strcmp("InitializeViewport",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->InitializeViewport(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("CheckFrameBufferStatus",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->CheckFrameBufferStatus(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  vtkmsg << "Object type: vtkFrameBufferObject2, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkFrameBufferObject2_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkFrameBufferObject2", vtkFrameBufferObject2ClientServerNewCommand);
    csi->AddCommandFunction("vtkFrameBufferObject2", vtkFrameBufferObject2Command);
    }
}
