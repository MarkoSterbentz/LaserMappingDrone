// ClientServer wrapper for vtkInteractorStyleRubberBand3D object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkInteractorStyleRubberBand3D.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkInteractorStyleRubberBand3DClientServerNewCommand(void* /*ctx*/)
{
  return vtkInteractorStyleRubberBand3D::New();
}


int VTK_EXPORT vtkInteractorStyleRubberBand3DCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkInteractorStyleRubberBand3D *op = vtkInteractorStyleRubberBand3D::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkInteractorStyleRubberBand3D.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInteractorStyleRubberBand3D  *temp20;
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
    vtkInteractorStyleRubberBand3D  *temp20;
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
    vtkInteractorStyleRubberBand3D  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("OnMouseMove",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnMouseMove();
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
  if (!strcmp("SetRenderOnMouseMove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRenderOnMouseMove(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRenderOnMouseMove",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetRenderOnMouseMove();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderOnMouseMoveOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RenderOnMouseMoveOn();
      return 1;
      }
    }
  if (!strcmp("RenderOnMouseMoveOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RenderOnMouseMoveOff();
      return 1;
      }
    }
  if (!strcmp("GetInteraction",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInteraction();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetStartPosition",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetStartPosition();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetEndPosition",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetEndPosition();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkInteractorStyleTrackballCamera";
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
  vtkmsg << "Object type: vtkInteractorStyleRubberBand3D, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkInteractorStyleRubberBand3D_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkInteractorStyleRubberBand3D", vtkInteractorStyleRubberBand3DClientServerNewCommand);
    csi->AddCommandFunction("vtkInteractorStyleRubberBand3D", vtkInteractorStyleRubberBand3DCommand);
    }
}
