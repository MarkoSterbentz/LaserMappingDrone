// ClientServer wrapper for vtkMapper object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkMapper.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkMapperCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkMapper *op = vtkMapper::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkMapper.  "
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
    vtkMapper  *temp20;
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
    vtkMapper  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ShallowCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractMapper  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractMapper"))
      {
      op->ShallowCopy(temp0);
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
  if (!strcmp("Render",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkRenderer  *temp0;
    vtkActor  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkActor"))
      {
      op->Render(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("ReleaseGraphicsResources",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkWindow  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkWindow"))
      {
      op->ReleaseGraphicsResources(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLookupTable",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkScalarsToColors  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkScalarsToColors"))
      {
      op->SetLookupTable(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLookupTable",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkScalarsToColors  *temp20;
      {
      temp20 = (op)->GetLookupTable();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CreateDefaultLookupTable",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CreateDefaultLookupTable();
      return 1;
      }
    }
  if (!strcmp("SetScalarVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScalarVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScalarVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScalarVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScalarVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("ScalarVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScalarVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetStatic",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetStatic(temp0);
      return 1;
      }
    }
  if (!strcmp("GetStatic",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStatic();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StaticOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StaticOn();
      return 1;
      }
    }
  if (!strcmp("StaticOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StaticOff();
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
  if (!strcmp("SetColorModeToDefault",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetColorModeToDefault();
      return 1;
      }
    }
  if (!strcmp("SetColorModeToMapScalars",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetColorModeToMapScalars();
      return 1;
      }
    }
  if (!strcmp("SetColorModeToDirectScalars",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetColorModeToDirectScalars();
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
  if (!strcmp("SetInterpolateScalarsBeforeMapping",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInterpolateScalarsBeforeMapping(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInterpolateScalarsBeforeMapping",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInterpolateScalarsBeforeMapping();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InterpolateScalarsBeforeMappingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InterpolateScalarsBeforeMappingOn();
      return 1;
      }
    }
  if (!strcmp("InterpolateScalarsBeforeMappingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InterpolateScalarsBeforeMappingOff();
      return 1;
      }
    }
  if (!strcmp("SetUseLookupTableScalarRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseLookupTableScalarRange(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseLookupTableScalarRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseLookupTableScalarRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseLookupTableScalarRangeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseLookupTableScalarRangeOn();
      return 1;
      }
    }
  if (!strcmp("UseLookupTableScalarRangeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseLookupTableScalarRangeOff();
      return 1;
      }
    }
  if (!strcmp("SetScalarRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetScalarRange(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetScalarRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetScalarRange(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetScalarRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetImmediateModeRendering",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetImmediateModeRendering(temp0);
      return 1;
      }
    }
  if (!strcmp("GetImmediateModeRendering",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetImmediateModeRendering();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ImmediateModeRenderingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ImmediateModeRenderingOn();
      return 1;
      }
    }
  if (!strcmp("ImmediateModeRenderingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ImmediateModeRenderingOff();
      return 1;
      }
    }
  if (!strcmp("SetGlobalImmediateModeRendering",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGlobalImmediateModeRendering(temp0);
      return 1;
      }
    }
  if (!strcmp("GlobalImmediateModeRenderingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GlobalImmediateModeRenderingOn();
      return 1;
      }
    }
  if (!strcmp("GlobalImmediateModeRenderingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GlobalImmediateModeRenderingOff();
      return 1;
      }
    }
  if (!strcmp("GetGlobalImmediateModeRendering",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGlobalImmediateModeRendering();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScalarMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScalarMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScalarMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToDefault",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToDefault();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToUsePointData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToUsePointData();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToUseCellData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToUseCellData();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToUsePointFieldData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToUsePointFieldData();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToUseCellFieldData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToUseCellFieldData();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToUseFieldData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToUseFieldData();
      return 1;
      }
    }
  if (!strcmp("SelectColorArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SelectColorArray(temp0);
      return 1;
      }
    }
  if (!strcmp("SelectColorArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SelectColorArray(temp0);
      return 1;
      }
    }
  if (!strcmp("SetFieldDataTupleId",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFieldDataTupleId(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFieldDataTupleId",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetFieldDataTupleId();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ColorByArrayComponent",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->ColorByArrayComponent(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("ColorByArrayComponent",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->ColorByArrayComponent(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetArrayId",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetArrayId();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetArrayAccessMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetArrayAccessMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetArrayComponent",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetArrayComponent();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetScalarModeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetScalarModeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetResolveCoincidentTopology",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetResolveCoincidentTopology(temp0);
      return 1;
      }
    }
  if (!strcmp("GetResolveCoincidentTopology",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetResolveCoincidentTopology();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetResolveCoincidentTopologyToDefault",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetResolveCoincidentTopologyToDefault();
      return 1;
      }
    }
  if (!strcmp("SetResolveCoincidentTopologyToOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetResolveCoincidentTopologyToOff();
      return 1;
      }
    }
  if (!strcmp("SetResolveCoincidentTopologyToPolygonOffset",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetResolveCoincidentTopologyToPolygonOffset();
      return 1;
      }
    }
  if (!strcmp("SetResolveCoincidentTopologyToShiftZBuffer",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetResolveCoincidentTopologyToShiftZBuffer();
      return 1;
      }
    }
  if (!strcmp("SetResolveCoincidentTopologyPolygonOffsetParameters",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetResolveCoincidentTopologyPolygonOffsetParameters(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetResolveCoincidentTopologyPolygonOffsetFaces",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetResolveCoincidentTopologyPolygonOffsetFaces(temp0);
      return 1;
      }
    }
  if (!strcmp("GetResolveCoincidentTopologyPolygonOffsetFaces",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetResolveCoincidentTopologyPolygonOffsetFaces();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetResolveCoincidentTopologyZShift",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetResolveCoincidentTopologyZShift(temp0);
      return 1;
      }
    }
  if (!strcmp("GetResolveCoincidentTopologyZShift",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetResolveCoincidentTopologyZShift();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,6) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->GetBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRenderTime",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRenderTime(temp0);
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
  if (!strcmp("GetInputAsDataSet",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataSet  *temp20;
      {
      temp20 = (op)->GetInputAsDataSet();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MapScalars",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    vtkUnsignedCharArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->MapScalars(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScalarMaterialMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScalarMaterialMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarMaterialMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScalarMaterialMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScalarMaterialModeToDefault",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarMaterialModeToDefault();
      return 1;
      }
    }
  if (!strcmp("SetScalarMaterialModeToAmbient",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarMaterialModeToAmbient();
      return 1;
      }
    }
  if (!strcmp("SetScalarMaterialModeToDiffuse",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarMaterialModeToDiffuse();
      return 1;
      }
    }
  if (!strcmp("SetScalarMaterialModeToAmbientAndDiffuse",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarMaterialModeToAmbientAndDiffuse();
      return 1;
      }
    }
  if (!strcmp("GetScalarMaterialModeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetScalarMaterialModeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetIsOpaque",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetIsOpaque();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSupportsSelection",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetSupportsSelection();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkAbstractMapper3D";
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
  vtkmsg << "Object type: vtkMapper, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkMapper_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkMapper", vtkMapperCommand);
    }
}
