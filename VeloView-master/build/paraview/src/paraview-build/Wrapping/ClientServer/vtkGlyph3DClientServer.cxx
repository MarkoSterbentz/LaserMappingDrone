// ClientServer wrapper for vtkGlyph3D object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkGlyph3D.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkGlyph3DClientServerNewCommand(void* /*ctx*/)
{
  return vtkGlyph3D::New();
}


int VTK_EXPORT vtkGlyph3DCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkGlyph3D *op = vtkGlyph3D::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkGlyph3D.  "
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
    vtkGlyph3D  *temp20;
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
    vtkGlyph3D  *temp20;
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
    vtkGlyph3D  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSourceData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPolyData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPolyData"))
      {
      op->SetSourceData(temp0);
      return 1;
      }
    }
  if (!strcmp("SetSourceData",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkPolyData  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPolyData"))
      {
      op->SetSourceData(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetSourceConnection",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkAlgorithmOutput  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkAlgorithmOutput"))
      {
      op->SetSourceConnection(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetSourceConnection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAlgorithmOutput  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAlgorithmOutput"))
      {
      op->SetSourceConnection(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSource",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkPolyData  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetSource(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScaling",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScaling(temp0);
      return 1;
      }
    }
  if (!strcmp("ScalingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScalingOn();
      return 1;
      }
    }
  if (!strcmp("ScalingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScalingOff();
      return 1;
      }
    }
  if (!strcmp("GetScaling",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScaling();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScaleMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScaleMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScaleMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScaleMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScaleModeToScaleByScalar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScaleModeToScaleByScalar();
      return 1;
      }
    }
  if (!strcmp("SetScaleModeToScaleByVector",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScaleModeToScaleByVector();
      return 1;
      }
    }
  if (!strcmp("SetScaleModeToScaleByVectorComponents",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScaleModeToScaleByVectorComponents();
      return 1;
      }
    }
  if (!strcmp("SetScaleModeToDataScalingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScaleModeToDataScalingOff();
      return 1;
      }
    }
  if (!strcmp("GetScaleModeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetScaleModeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetColorMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetColorMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetColorMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetColorMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetColorModeToColorByScale",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetColorModeToColorByScale();
      return 1;
      }
    }
  if (!strcmp("SetColorModeToColorByScalar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetColorModeToColorByScalar();
      return 1;
      }
    }
  if (!strcmp("SetColorModeToColorByVector",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetColorModeToColorByVector();
      return 1;
      }
    }
  if (!strcmp("GetColorModeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetColorModeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScaleFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScaleFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScaleFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetScaleFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetRange(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetRange(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOrient",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOrient(temp0);
      return 1;
      }
    }
  if (!strcmp("OrientOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OrientOn();
      return 1;
      }
    }
  if (!strcmp("OrientOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OrientOff();
      return 1;
      }
    }
  if (!strcmp("GetOrient",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOrient();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetClamping",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetClamping(temp0);
      return 1;
      }
    }
  if (!strcmp("ClampingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClampingOn();
      return 1;
      }
    }
  if (!strcmp("ClampingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClampingOff();
      return 1;
      }
    }
  if (!strcmp("GetClamping",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetClamping();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetVectorMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVectorMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVectorMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetVectorMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetVectorModeToUseVector",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetVectorModeToUseVector();
      return 1;
      }
    }
  if (!strcmp("SetVectorModeToUseNormal",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetVectorModeToUseNormal();
      return 1;
      }
    }
  if (!strcmp("SetVectorModeToVectorRotationOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetVectorModeToVectorRotationOff();
      return 1;
      }
    }
  if (!strcmp("GetVectorModeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetVectorModeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIndexMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIndexMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIndexMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetIndexMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIndexModeToScalar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetIndexModeToScalar();
      return 1;
      }
    }
  if (!strcmp("SetIndexModeToVector",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetIndexModeToVector();
      return 1;
      }
    }
  if (!strcmp("SetIndexModeToOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetIndexModeToOff();
      return 1;
      }
    }
  if (!strcmp("GetIndexModeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetIndexModeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGeneratePointIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGeneratePointIds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGeneratePointIds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGeneratePointIds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GeneratePointIdsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePointIdsOn();
      return 1;
      }
    }
  if (!strcmp("GeneratePointIdsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePointIdsOff();
      return 1;
      }
    }
  if (!strcmp("SetPointIdsName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPointIdsName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPointIdsName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetPointIdsName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFillCellData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFillCellData(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFillCellData",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetFillCellData();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FillCellDataOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->FillCellDataOn();
      return 1;
      }
    }
  if (!strcmp("FillCellDataOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->FillCellDataOff();
      return 1;
      }
    }
  if (!strcmp("IsPointVisible",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkDataSet  *temp0;
    vtkIdType   temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSet") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->IsPointVisible(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSourceTransform",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTransform  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTransform"))
      {
      op->SetSourceTransform(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSourceTransform",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTransform  *temp20;
      {
      temp20 = (op)->GetSourceTransform();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetMTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  vtkmsg << "Object type: vtkGlyph3D, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkGlyph3D_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkGlyph3D", vtkGlyph3DClientServerNewCommand);
    csi->AddCommandFunction("vtkGlyph3D", vtkGlyph3DCommand);
    }
}
