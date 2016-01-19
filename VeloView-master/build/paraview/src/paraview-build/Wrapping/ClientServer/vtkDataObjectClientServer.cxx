// ClientServer wrapper for vtkDataObject object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkDataObject.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkDataObjectClientServerNewCommand(void* /*ctx*/)
{
  return vtkDataObject::New();
}


int VTK_EXPORT vtkDataObjectCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkDataObject *op = vtkDataObject::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkDataObject.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataObject  *temp20;
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
    vtkDataObject  *temp20;
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
    vtkDataObject  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInformation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformation  *temp20;
      {
      temp20 = (op)->GetInformation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInformation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformation  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation"))
      {
      op->SetInformation(temp0);
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
  if (!strcmp("Initialize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Initialize();
      return 1;
      }
    }
  if (!strcmp("ReleaseData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReleaseData();
      return 1;
      }
    }
  if (!strcmp("GetDataReleased",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDataReleased();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGlobalReleaseDataFlag",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGlobalReleaseDataFlag(temp0);
      return 1;
      }
    }
  if (!strcmp("GlobalReleaseDataFlagOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GlobalReleaseDataFlagOn();
      return 1;
      }
    }
  if (!strcmp("GlobalReleaseDataFlagOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GlobalReleaseDataFlagOff();
      return 1;
      }
    }
  if (!strcmp("GetGlobalReleaseDataFlag",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGlobalReleaseDataFlag();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFieldData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkFieldData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkFieldData"))
      {
      op->SetFieldData(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFieldData",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFieldData  *temp20;
      {
      temp20 = (op)->GetFieldData();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDataObjectType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDataObjectType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUpdateTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetUpdateTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetActualMemorySize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetActualMemorySize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CopyInformationFromPipeline",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformation  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation"))
      {
      op->CopyInformationFromPipeline(temp0);
      return 1;
      }
    }
  if (!strcmp("GetActiveFieldInformation",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    int      temp1;
    int      temp2;
    vtkInformation  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->GetActiveFieldInformation(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNamedFieldInformation",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    int      temp1;
    char    *temp2;
    vtkInformation  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->GetNamedFieldInformation(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoveNamedFieldInformation",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    int      temp1;
    char    *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->RemoveNamedFieldInformation(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetActiveAttribute",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkInformation  *temp0;
    int      temp1;
    char    *temp2;
    int      temp3;
    vtkInformation  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->SetActiveAttribute(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetActiveAttributeInfo",method) && msg.GetNumberOfArguments(0) == 9)
    {
    vtkInformation  *temp0;
    int      temp1;
    int      temp2;
    char    *temp3;
    int      temp4;
    int      temp5;
    int      temp6;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6))
      {
      op->SetActiveAttributeInfo(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      return 1;
      }
    }
  if (!strcmp("SetPointDataActiveScalarInfo",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    int      temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetPointDataActiveScalarInfo(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("DataHasBeenGenerated",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DataHasBeenGenerated();
      return 1;
      }
    }
  if (!strcmp("PrepareForNewData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PrepareForNewData();
      return 1;
      }
    }
  if (!strcmp("ShallowCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      op->ShallowCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("DeepCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObject"))
      {
      op->DeepCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("GetExtentType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetExtentType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Crop",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    if(temp0)
      {
      op->Crop(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAttributes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkDataSetAttributes  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAttributes(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAttributesAsFieldData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkFieldData  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAttributesAsFieldData(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAttributeTypeForArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractArray  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray"))
      {
      temp20 = (op)->GetAttributeTypeForArray(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfElements",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetNumberOfElements(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAssociationTypeAsString",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAssociationTypeAsString(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAssociationTypeFromString",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAssociationTypeFromString(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DATA_TYPE_NAME",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationStringKey  *temp20;
      {
      temp20 = (op)->DATA_TYPE_NAME();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DATA_OBJECT",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationDataObjectKey  *temp20;
      {
      temp20 = (op)->DATA_OBJECT();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DATA_EXTENT_TYPE",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->DATA_EXTENT_TYPE();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DATA_EXTENT",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerPointerKey  *temp20;
      {
      temp20 = (op)->DATA_EXTENT();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ALL_PIECES_EXTENT",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerVectorKey  *temp20;
      {
      temp20 = (op)->ALL_PIECES_EXTENT();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DATA_PIECE_NUMBER",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->DATA_PIECE_NUMBER();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DATA_NUMBER_OF_PIECES",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->DATA_NUMBER_OF_PIECES();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DATA_NUMBER_OF_GHOST_LEVELS",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->DATA_NUMBER_OF_GHOST_LEVELS();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DATA_TIME_STEP",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationDoubleKey  *temp20;
      {
      temp20 = (op)->DATA_TIME_STEP();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("POINT_DATA_VECTOR",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationInformationVectorKey  *temp20;
      {
      temp20 = (op)->POINT_DATA_VECTOR();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CELL_DATA_VECTOR",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationInformationVectorKey  *temp20;
      {
      temp20 = (op)->CELL_DATA_VECTOR();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("VERTEX_DATA_VECTOR",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationInformationVectorKey  *temp20;
      {
      temp20 = (op)->VERTEX_DATA_VECTOR();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EDGE_DATA_VECTOR",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationInformationVectorKey  *temp20;
      {
      temp20 = (op)->EDGE_DATA_VECTOR();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FIELD_ARRAY_TYPE",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->FIELD_ARRAY_TYPE();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FIELD_ASSOCIATION",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->FIELD_ASSOCIATION();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FIELD_ATTRIBUTE_TYPE",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->FIELD_ATTRIBUTE_TYPE();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FIELD_ACTIVE_ATTRIBUTE",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->FIELD_ACTIVE_ATTRIBUTE();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FIELD_NUMBER_OF_COMPONENTS",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->FIELD_NUMBER_OF_COMPONENTS();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FIELD_NUMBER_OF_TUPLES",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->FIELD_NUMBER_OF_TUPLES();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FIELD_OPERATION",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->FIELD_OPERATION();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FIELD_RANGE",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationDoubleVectorKey  *temp20;
      {
      temp20 = (op)->FIELD_RANGE();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PIECE_EXTENT",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerVectorKey  *temp20;
      {
      temp20 = (op)->PIECE_EXTENT();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FIELD_NAME",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationStringKey  *temp20;
      {
      temp20 = (op)->FIELD_NAME();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ORIGIN",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationDoubleVectorKey  *temp20;
      {
      temp20 = (op)->ORIGIN();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SPACING",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationDoubleVectorKey  *temp20;
      {
      temp20 = (op)->SPACING();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("BOUNDING_BOX",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationDoubleVectorKey  *temp20;
      {
      temp20 = (op)->BOUNDING_BOX();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SIL",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationDataObjectKey  *temp20;
      {
      temp20 = (op)->SIL();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  vtkmsg << "Object type: vtkDataObject, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkDataObject_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkDataObject", vtkDataObjectClientServerNewCommand);
    csi->AddCommandFunction("vtkDataObject", vtkDataObjectCommand);
    }
}
