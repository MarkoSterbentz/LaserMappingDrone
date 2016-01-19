// ClientServer wrapper for vtkInteractorStyleImage object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkInteractorStyleImage.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkInteractorStyleImageClientServerNewCommand(void* /*ctx*/)
{
  return vtkInteractorStyleImage::New();
}


int VTK_EXPORT vtkInteractorStyleImageCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkInteractorStyleImage *op = vtkInteractorStyleImage::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkInteractorStyleImage.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInteractorStyleImage  *temp20;
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
    vtkInteractorStyleImage  *temp20;
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
    vtkInteractorStyleImage  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetWindowLevelStartPosition",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetWindowLevelStartPosition();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetWindowLevelCurrentPosition",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetWindowLevelCurrentPosition();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
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
  if (!strcmp("OnChar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnChar();
      return 1;
      }
    }
  if (!strcmp("WindowLevel",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WindowLevel();
      return 1;
      }
    }
  if (!strcmp("Pick",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Pick();
      return 1;
      }
    }
  if (!strcmp("Slice",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Slice();
      return 1;
      }
    }
  if (!strcmp("StartWindowLevel",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartWindowLevel();
      return 1;
      }
    }
  if (!strcmp("EndWindowLevel",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndWindowLevel();
      return 1;
      }
    }
  if (!strcmp("StartPick",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartPick();
      return 1;
      }
    }
  if (!strcmp("EndPick",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndPick();
      return 1;
      }
    }
  if (!strcmp("StartSlice",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartSlice();
      return 1;
      }
    }
  if (!strcmp("EndSlice",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EndSlice();
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
  if (!strcmp("GetInteractionModeMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInteractionModeMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInteractionModeMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInteractionModeMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("SetInteractionModeToImage2D",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetInteractionModeToImage2D();
      return 1;
      }
    }
  if (!strcmp("SetInteractionModeToImage3D",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetInteractionModeToImage3D();
      return 1;
      }
    }
  if (!strcmp("SetInteractionModeToImageSlicing",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetInteractionModeToImageSlicing();
      return 1;
      }
    }
  if (!strcmp("SetXViewRightVector",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetXViewRightVector(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetXViewRightVector",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetXViewRightVector(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXViewRightVector",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetXViewRightVector();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetXViewUpVector",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetXViewUpVector(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetXViewUpVector",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetXViewUpVector(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXViewUpVector",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetXViewUpVector();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetYViewRightVector",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetYViewRightVector(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetYViewRightVector",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetYViewRightVector(temp0);
      return 1;
      }
    }
  if (!strcmp("GetYViewRightVector",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetYViewRightVector();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetYViewUpVector",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetYViewUpVector(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetYViewUpVector",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetYViewUpVector(temp0);
      return 1;
      }
    }
  if (!strcmp("GetYViewUpVector",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetYViewUpVector();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetZViewRightVector",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetZViewRightVector(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetZViewRightVector",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetZViewRightVector(temp0);
      return 1;
      }
    }
  if (!strcmp("GetZViewRightVector",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetZViewRightVector();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetZViewUpVector",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetZViewUpVector(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetZViewUpVector",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetZViewUpVector(temp0);
      return 1;
      }
    }
  if (!strcmp("GetZViewUpVector",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetZViewUpVector();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCurrentImageProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageProperty  *temp20;
      {
      temp20 = (op)->GetCurrentImageProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  vtkmsg << "Object type: vtkInteractorStyleImage, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkInteractorStyleImage_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkInteractorStyleImage", vtkInteractorStyleImageClientServerNewCommand);
    csi->AddCommandFunction("vtkInteractorStyleImage", vtkInteractorStyleImageCommand);
    }
}
