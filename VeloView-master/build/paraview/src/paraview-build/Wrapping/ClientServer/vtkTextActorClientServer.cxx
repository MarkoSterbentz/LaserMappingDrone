// ClientServer wrapper for vtkTextActor object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkTextActor.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkTextActorClientServerNewCommand(void* /*ctx*/)
{
  return vtkTextActor::New();
}


int VTK_EXPORT vtkTextActorCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkTextActor *op = vtkTextActor::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkTextActor.  "
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
    vtkTextActor  *temp20;
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
    vtkTextActor  *temp20;
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
    vtkTextActor  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ShallowCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp"))
      {
      op->ShallowCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("SetInput",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInput(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetInput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMinimumSize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetMinimumSize(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetMinimumSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetMinimumSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMinimumSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetMinimumSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaximumLineHeight",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumLineHeight(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaximumLineHeight",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetMaximumLineHeight();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTextScaleMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTextScaleMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTextScaleModeMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTextScaleModeMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTextScaleModeMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTextScaleModeMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTextScaleMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTextScaleMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTextScaleModeToNone",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTextScaleModeToNone();
      return 1;
      }
    }
  if (!strcmp("SetTextScaleModeToProp",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTextScaleModeToProp();
      return 1;
      }
    }
  if (!strcmp("SetTextScaleModeToViewport",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTextScaleModeToViewport();
      return 1;
      }
    }
  if (!strcmp("SetUseBorderAlign",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseBorderAlign(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseBorderAlign",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseBorderAlign();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseBorderAlignOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseBorderAlignOn();
      return 1;
      }
    }
  if (!strcmp("UseBorderAlignOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseBorderAlignOff();
      return 1;
      }
    }
  if (!strcmp("SetAlignmentPoint",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAlignmentPoint(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAlignmentPoint",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAlignmentPoint();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOrientation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOrientation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOrientation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetOrientation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTextProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextProperty"))
      {
      op->SetTextProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTextProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTextProperty  *temp20;
      {
      temp20 = (op)->GetTextProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetConstrainedFontSize",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkViewport  *temp0;
    int      temp1;
    int      temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->SetConstrainedFontSize(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetConstrainedFontSize",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkTextActor  *temp0;
    vtkViewport  *temp1;
    int      temp2;
    int      temp3;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextActor") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkViewport") &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->SetConstrainedFontSize(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNonLinearFontScale",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetNonLinearFontScale(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SpecifiedToDisplay",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkViewport  *temp1;
    int      temp2;
    if(temp0 &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkViewport") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SpecifiedToDisplay(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("DisplayToSpecified",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkViewport  *temp1;
    int      temp2;
    if(temp0 &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkViewport") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->DisplayToSpecified(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("ComputeScaledFont",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkViewport  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport"))
      {
      op->ComputeScaledFont(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScaledTextProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTextProperty  *temp20;
      {
      temp20 = (op)->GetScaledTextProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFontScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkViewport  *temp0;
    float    temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport"))
      {
      temp20 = (op)->GetFontScale(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkTexturedActor2D";
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
  vtkmsg << "Object type: vtkTextActor, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkTextActor_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkTextActor", vtkTextActorClientServerNewCommand);
    csi->AddCommandFunction("vtkTextActor", vtkTextActorCommand);
    }
}
