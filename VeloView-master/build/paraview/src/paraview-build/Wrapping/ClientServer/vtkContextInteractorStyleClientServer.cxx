// ClientServer wrapper for vtkContextInteractorStyle object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkContextInteractorStyle.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkContextInteractorStyleClientServerNewCommand(void* /*ctx*/)
{
  return vtkContextInteractorStyle::New();
}


int VTK_EXPORT vtkContextInteractorStyleCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkContextInteractorStyle *op = vtkContextInteractorStyle::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkContextInteractorStyle.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkContextInteractorStyle  *temp20;
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
    vtkContextInteractorStyle  *temp20;
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
    vtkContextInteractorStyle  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScene",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkContextScene  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkContextScene"))
      {
      op->SetScene(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScene",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkContextScene  *temp20;
      {
      temp20 = (op)->GetScene();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("OnSceneModified",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnSceneModified();
      return 1;
      }
    }
  if (!strcmp("OnMouseMove",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnMouseMove();
      return 1;
      }
    }
  if (!strcmp("OnLeftButtonDown",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnLeftButtonDown();
      return 1;
      }
    }
  if (!strcmp("OnLeftButtonUp",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnLeftButtonUp();
      return 1;
      }
    }
  if (!strcmp("OnMiddleButtonDown",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnMiddleButtonDown();
      return 1;
      }
    }
  if (!strcmp("OnMiddleButtonUp",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnMiddleButtonUp();
      return 1;
      }
    }
  if (!strcmp("OnRightButtonDown",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnRightButtonDown();
      return 1;
      }
    }
  if (!strcmp("OnRightButtonUp",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnRightButtonUp();
      return 1;
      }
    }
  if (!strcmp("OnMouseWheelForward",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnMouseWheelForward();
      return 1;
      }
    }
  if (!strcmp("OnMouseWheelBackward",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnMouseWheelBackward();
      return 1;
      }
    }
  if (!strcmp("OnChar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnChar();
      return 1;
      }
    }
  if (!strcmp("OnKeyPress",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnKeyPress();
      return 1;
      }
    }
  if (!strcmp("OnKeyRelease",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnKeyRelease();
      return 1;
      }
    }

  {
    const char* commandName = "vtkInteractorStyle";
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
  vtkmsg << "Object type: vtkContextInteractorStyle, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkContextInteractorStyle_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkContextInteractorStyle", vtkContextInteractorStyleClientServerNewCommand);
    csi->AddCommandFunction("vtkContextInteractorStyle", vtkContextInteractorStyleCommand);
    }
}
