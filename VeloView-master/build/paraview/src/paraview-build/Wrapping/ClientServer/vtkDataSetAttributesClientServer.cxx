// ClientServer wrapper for vtkDataSetAttributes object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkDataSetAttributes.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkDataSetAttributesClientServerNewCommand(void* /*ctx*/)
{
  return vtkDataSetAttributes::New();
}


int VTK_EXPORT vtkDataSetAttributesCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkDataSetAttributes *op = vtkDataSetAttributes::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkDataSetAttributes.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataSetAttributes  *temp20;
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
    vtkDataSetAttributes  *temp20;
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
    vtkDataSetAttributes  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("Update",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Update();
      return 1;
      }
    }
  if (!strcmp("DeepCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkFieldData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkFieldData"))
      {
      op->DeepCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("ShallowCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkFieldData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkFieldData"))
      {
      op->ShallowCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("SetScalars",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataArray  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray"))
      {
      temp20 = (op)->SetScalars(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetActiveScalars",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->SetActiveScalars(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetScalars",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataArray  *temp20;
      {
      temp20 = (op)->GetScalars();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetVectors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataArray  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray"))
      {
      temp20 = (op)->SetVectors(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetActiveVectors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->SetActiveVectors(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVectors",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataArray  *temp20;
      {
      temp20 = (op)->GetVectors();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNormals",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataArray  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray"))
      {
      temp20 = (op)->SetNormals(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetActiveNormals",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->SetActiveNormals(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNormals",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataArray  *temp20;
      {
      temp20 = (op)->GetNormals();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTCoords",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataArray  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray"))
      {
      temp20 = (op)->SetTCoords(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetActiveTCoords",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->SetActiveTCoords(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTCoords",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataArray  *temp20;
      {
      temp20 = (op)->GetTCoords();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTensors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataArray  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray"))
      {
      temp20 = (op)->SetTensors(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetActiveTensors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->SetActiveTensors(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTensors",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataArray  *temp20;
      {
      temp20 = (op)->GetTensors();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGlobalIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataArray  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray"))
      {
      temp20 = (op)->SetGlobalIds(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetActiveGlobalIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->SetActiveGlobalIds(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetGlobalIds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataArray  *temp20;
      {
      temp20 = (op)->GetGlobalIds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPedigreeIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractArray  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray"))
      {
      temp20 = (op)->SetPedigreeIds(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetActivePedigreeIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->SetActivePedigreeIds(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPedigreeIds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractArray  *temp20;
      {
      temp20 = (op)->GetPedigreeIds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetScalars",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    vtkDataArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetScalars(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVectors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    vtkDataArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetVectors(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNormals",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    vtkDataArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetNormals(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTCoords",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    vtkDataArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetTCoords(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTensors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    vtkDataArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetTensors(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetGlobalIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    vtkDataArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetGlobalIds(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPedigreeIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    vtkAbstractArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetPedigreeIds(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetActiveAttribute",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->SetActiveAttribute(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetActiveAttribute",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->SetActiveAttribute(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAttributeIndices",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    if(temp0)
      {
      op->GetAttributeIndices(temp0);
      return 1;
      }
    }
  if (!strcmp("IsArrayAnAttribute",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsArrayAnAttribute(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAttribute",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkAbstractArray  *temp0;
    int      temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->SetAttribute(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAttribute",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkDataArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAttribute(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAbstractAttribute",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkAbstractArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAbstractAttribute(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoveArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemoveArray(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemoveArray(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAttributeTypeAsString",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAttributeTypeAsString(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLongAttributeTypeAsString",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetLongAttributeTypeAsString(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCopyAttribute",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetCopyAttribute(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetCopyScalars",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetCopyScalars(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetCopyScalars",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetCopyScalars(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CopyScalarsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyScalarsOn();
      return 1;
      }
    }
  if (!strcmp("CopyScalarsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyScalarsOff();
      return 1;
      }
    }
  if (!strcmp("SetCopyVectors",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetCopyVectors(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetCopyVectors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetCopyVectors(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CopyVectorsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyVectorsOn();
      return 1;
      }
    }
  if (!strcmp("CopyVectorsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyVectorsOff();
      return 1;
      }
    }
  if (!strcmp("SetCopyNormals",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetCopyNormals(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetCopyNormals",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetCopyNormals(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CopyNormalsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyNormalsOn();
      return 1;
      }
    }
  if (!strcmp("CopyNormalsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyNormalsOff();
      return 1;
      }
    }
  if (!strcmp("SetCopyTCoords",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetCopyTCoords(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetCopyTCoords",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetCopyTCoords(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CopyTCoordsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyTCoordsOn();
      return 1;
      }
    }
  if (!strcmp("CopyTCoordsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyTCoordsOff();
      return 1;
      }
    }
  if (!strcmp("SetCopyTensors",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetCopyTensors(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetCopyTensors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetCopyTensors(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CopyTensorsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyTensorsOn();
      return 1;
      }
    }
  if (!strcmp("CopyTensorsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyTensorsOff();
      return 1;
      }
    }
  if (!strcmp("SetCopyGlobalIds",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetCopyGlobalIds(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetCopyGlobalIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetCopyGlobalIds(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CopyGlobalIdsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyGlobalIdsOn();
      return 1;
      }
    }
  if (!strcmp("CopyGlobalIdsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyGlobalIdsOff();
      return 1;
      }
    }
  if (!strcmp("SetCopyPedigreeIds",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetCopyPedigreeIds(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetCopyPedigreeIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetCopyPedigreeIds(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CopyPedigreeIdsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyPedigreeIdsOn();
      return 1;
      }
    }
  if (!strcmp("CopyPedigreeIdsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CopyPedigreeIdsOff();
      return 1;
      }
    }
  if (!strcmp("CopyAllOn",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->CopyAllOn(temp0);
      return 1;
      }
    }
  if (!strcmp("CopyAllOff",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->CopyAllOff(temp0);
      return 1;
      }
    }
  if (!strcmp("PassData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkFieldData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkFieldData"))
      {
      op->PassData(temp0);
      return 1;
      }
    }
  if (!strcmp("CopyAllocate",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataSetAttributes  *temp0;
    vtkIdType   temp1;
    vtkIdType   temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSetAttributes") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyAllocate(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyAllocate",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkDataSetAttributes  *temp0;
    vtkIdType   temp1;
    vtkIdType   temp2;
    int      temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSetAttributes") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->CopyAllocate(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("CopyStructuredData",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataSetAttributes  *temp0;
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<int    > temp2(msg, 0, 4);
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSetAttributes") &&
      temp1 &&
      temp2)
      {
      op->CopyStructuredData(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyData",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataSetAttributes  *temp0;
    vtkIdType   temp1;
    vtkIdType   temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSetAttributes") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyData(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyData",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataSetAttributes  *temp0;
    vtkIdList  *temp1;
    vtkIdList  *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSetAttributes") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIdList") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIdList"))
      {
      op->CopyData(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyData",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkDataSetAttributes  *temp0;
    vtkIdType   temp1;
    vtkIdType   temp2;
    vtkIdType   temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSetAttributes") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->CopyData(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("CopyTuple",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkAbstractArray  *temp0;
    vtkAbstractArray  *temp1;
    vtkIdType   temp2;
    vtkIdType   temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkAbstractArray") &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->CopyTuple(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("CopyTuples",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkAbstractArray  *temp0;
    vtkAbstractArray  *temp1;
    vtkIdList  *temp2;
    vtkIdList  *temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkAbstractArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIdList") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkIdList"))
      {
      op->CopyTuples(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("CopyTuples",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkAbstractArray  *temp0;
    vtkAbstractArray  *temp1;
    vtkIdType   temp2;
    vtkIdType   temp3;
    vtkIdType   temp4;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkAbstractArray") &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->CopyTuples(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("InterpolateAllocate",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataSetAttributes  *temp0;
    vtkIdType   temp1;
    vtkIdType   temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSetAttributes") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->InterpolateAllocate(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("InterpolateAllocate",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkDataSetAttributes  *temp0;
    vtkIdType   temp1;
    vtkIdType   temp2;
    int      temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSetAttributes") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->InterpolateAllocate(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("InterpolatePoint",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkDataSetAttributes  *temp0;
    vtkIdType   temp1;
    vtkIdList  *temp2;
    vtkClientServerStreamDataArg<double > temp3(msg, 0, 5);
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSetAttributes") &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIdList") &&
      temp3)
      {
      op->InterpolatePoint(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("InterpolateEdge",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkDataSetAttributes  *temp0;
    vtkIdType   temp1;
    vtkIdType   temp2;
    vtkIdType   temp3;
    double   temp4;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSetAttributes") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->InterpolateEdge(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("InterpolateTime",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkDataSetAttributes  *temp0;
    vtkDataSetAttributes  *temp1;
    vtkIdType   temp2;
    double   temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSetAttributes") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataSetAttributes") &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->InterpolateTime(temp0,temp1,temp2,temp3);
      return 1;
      }
    }

  {
    const char* commandName = "vtkFieldData";
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
  vtkmsg << "Object type: vtkDataSetAttributes, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkDataSetAttributes_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkDataSetAttributes", vtkDataSetAttributesClientServerNewCommand);
    csi->AddCommandFunction("vtkDataSetAttributes", vtkDataSetAttributesCommand);
    }
}
