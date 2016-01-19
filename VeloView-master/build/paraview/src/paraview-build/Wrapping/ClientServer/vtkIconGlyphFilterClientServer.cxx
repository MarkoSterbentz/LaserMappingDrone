// ClientServer wrapper for vtkIconGlyphFilter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkIconGlyphFilter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkIconGlyphFilterClientServerNewCommand(void* /*ctx*/)
{
  return vtkIconGlyphFilter::New();
}


int VTK_EXPORT vtkIconGlyphFilterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkIconGlyphFilter *op = vtkIconGlyphFilter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkIconGlyphFilter.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIconGlyphFilter  *temp20;
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
    vtkIconGlyphFilter  *temp20;
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
    vtkIconGlyphFilter  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIconSize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetIconSize(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetIconSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetIconSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIconSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetIconSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIconSheetSize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetIconSheetSize(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetIconSheetSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetIconSheetSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIconSheetSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetIconSheetSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDisplaySize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetDisplaySize(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetDisplaySize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetDisplaySize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDisplaySize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetDisplaySize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseIconSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseIconSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseIconSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseIconSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseIconSizeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseIconSizeOn();
      return 1;
      }
    }
  if (!strcmp("UseIconSizeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseIconSizeOff();
      return 1;
      }
    }
  if (!strcmp("SetIconScaling",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIconScaling(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIconScaling",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetIconScaling();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIconScalingToScalingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetIconScalingToScalingOff();
      return 1;
      }
    }
  if (!strcmp("SetIconScalingToScalingArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetIconScalingToScalingArray();
      return 1;
      }
    }
  if (!strcmp("SetPassScalars",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPassScalars(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPassScalars",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetPassScalars();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PassScalarsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassScalarsOn();
      return 1;
      }
    }
  if (!strcmp("PassScalarsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassScalarsOff();
      return 1;
      }
    }
  if (!strcmp("SetGravity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGravity(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGravity",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGravity();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGravityToTopRight",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetGravityToTopRight();
      return 1;
      }
    }
  if (!strcmp("SetGravityToTopCenter",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetGravityToTopCenter();
      return 1;
      }
    }
  if (!strcmp("SetGravityToTopLeft",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetGravityToTopLeft();
      return 1;
      }
    }
  if (!strcmp("SetGravityToCenterRight",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetGravityToCenterRight();
      return 1;
      }
    }
  if (!strcmp("SetGravityToCenterCenter",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetGravityToCenterCenter();
      return 1;
      }
    }
  if (!strcmp("SetGravityToCenterLeft",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetGravityToCenterLeft();
      return 1;
      }
    }
  if (!strcmp("SetGravityToBottomRight",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetGravityToBottomRight();
      return 1;
      }
    }
  if (!strcmp("SetGravityToBottomCenter",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetGravityToBottomCenter();
      return 1;
      }
    }
  if (!strcmp("SetGravityToBottomLeft",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetGravityToBottomLeft();
      return 1;
      }
    }
  if (!strcmp("SetOffset",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetOffset(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetOffset",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetOffset(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOffset",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetOffset();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkPolyDataAlgorithm";
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
  vtkmsg << "Object type: vtkIconGlyphFilter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkIconGlyphFilter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkIconGlyphFilter", vtkIconGlyphFilterClientServerNewCommand);
    csi->AddCommandFunction("vtkIconGlyphFilter", vtkIconGlyphFilterCommand);
    }
}
