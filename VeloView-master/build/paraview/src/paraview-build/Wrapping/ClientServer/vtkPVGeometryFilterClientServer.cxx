// ClientServer wrapper for vtkPVGeometryFilter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPVGeometryFilter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPVGeometryFilterClientServerNewCommand(void* /*ctx*/)
{
  return vtkPVGeometryFilter::New();
}


int VTK_EXPORT vtkPVGeometryFilterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPVGeometryFilter *op = vtkPVGeometryFilter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPVGeometryFilter.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVGeometryFilter  *temp20;
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
    vtkPVGeometryFilter  *temp20;
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
    vtkPVGeometryFilter  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetOutlineFlag",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutlineFlag();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseOutline",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseOutline(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseOutline",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseOutline();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseStrips",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseStrips(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseStrips",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseStrips();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseStripsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseStripsOn();
      return 1;
      }
    }
  if (!strcmp("UseStripsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseStripsOff();
      return 1;
      }
    }
  if (!strcmp("SetForceUseStrips",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetForceUseStrips(temp0);
      return 1;
      }
    }
  if (!strcmp("GetForceUseStrips",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetForceUseStrips();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ForceUseStripsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ForceUseStripsOn();
      return 1;
      }
    }
  if (!strcmp("ForceUseStripsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ForceUseStripsOff();
      return 1;
      }
    }
  if (!strcmp("SetGenerateCellNormals",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateCellNormals(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateCellNormals",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateCellNormals();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateCellNormalsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellNormalsOn();
      return 1;
      }
    }
  if (!strcmp("GenerateCellNormalsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellNormalsOff();
      return 1;
      }
    }
  if (!strcmp("SetTriangulate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTriangulate(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTriangulate",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTriangulate();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TriangulateOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TriangulateOn();
      return 1;
      }
    }
  if (!strcmp("TriangulateOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TriangulateOff();
      return 1;
      }
    }
  if (!strcmp("SetNonlinearSubdivisionLevel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNonlinearSubdivisionLevel(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNonlinearSubdivisionLevel",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNonlinearSubdivisionLevel();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetController",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMultiProcessController  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMultiProcessController"))
      {
      op->SetController(temp0);
      return 1;
      }
    }
  if (!strcmp("GetController",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkMultiProcessController  *temp20;
      {
      temp20 = (op)->GetController();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPassThroughCellIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPassThroughCellIds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPassThroughCellIds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPassThroughCellIds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PassThroughCellIdsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassThroughCellIdsOn();
      return 1;
      }
    }
  if (!strcmp("PassThroughCellIdsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassThroughCellIdsOff();
      return 1;
      }
    }
  if (!strcmp("SetPassThroughPointIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPassThroughPointIds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPassThroughPointIds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPassThroughPointIds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PassThroughPointIdsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassThroughPointIdsOn();
      return 1;
      }
    }
  if (!strcmp("PassThroughPointIdsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PassThroughPointIdsOff();
      return 1;
      }
    }
  if (!strcmp("SetGenerateProcessIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateProcessIds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateProcessIds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetGenerateProcessIds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateProcessIdsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateProcessIdsOn();
      return 1;
      }
    }
  if (!strcmp("GenerateProcessIdsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateProcessIdsOff();
      return 1;
      }
    }
  if (!strcmp("SetHideInternalAMRFaces",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetHideInternalAMRFaces(temp0);
      return 1;
      }
    }
  if (!strcmp("GetHideInternalAMRFaces",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetHideInternalAMRFaces();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HideInternalAMRFacesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->HideInternalAMRFacesOn();
      return 1;
      }
    }
  if (!strcmp("HideInternalAMRFacesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->HideInternalAMRFacesOff();
      return 1;
      }
    }
  if (!strcmp("SetUseNonOverlappingAMRMetaDataForOutlines",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseNonOverlappingAMRMetaDataForOutlines(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseNonOverlappingAMRMetaDataForOutlines",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseNonOverlappingAMRMetaDataForOutlines();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseNonOverlappingAMRMetaDataForOutlinesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseNonOverlappingAMRMetaDataForOutlinesOn();
      return 1;
      }
    }
  if (!strcmp("UseNonOverlappingAMRMetaDataForOutlinesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseNonOverlappingAMRMetaDataForOutlinesOff();
      return 1;
      }
    }
  if (!strcmp("POINT_OFFSETS",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerVectorKey  *temp20;
      {
      temp20 = (op)->POINT_OFFSETS();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("VERTS_OFFSETS",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerVectorKey  *temp20;
      {
      temp20 = (op)->VERTS_OFFSETS();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LINES_OFFSETS",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerVectorKey  *temp20;
      {
      temp20 = (op)->LINES_OFFSETS();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("POLYS_OFFSETS",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerVectorKey  *temp20;
      {
      temp20 = (op)->POLYS_OFFSETS();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("STRIPS_OFFSETS",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerVectorKey  *temp20;
      {
      temp20 = (op)->STRIPS_OFFSETS();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkDataObjectAlgorithm";
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
  vtkmsg << "Object type: vtkPVGeometryFilter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPVGeometryFilter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPVGeometryFilter", vtkPVGeometryFilterClientServerNewCommand);
    csi->AddCommandFunction("vtkPVGeometryFilter", vtkPVGeometryFilterCommand);
    }
}
