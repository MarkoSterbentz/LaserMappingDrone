// ClientServer wrapper for vtkYoungsMaterialInterface object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkYoungsMaterialInterface.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkYoungsMaterialInterfaceClientServerNewCommand(void* /*ctx*/)
{
  return vtkYoungsMaterialInterface::New();
}


int VTK_EXPORT vtkYoungsMaterialInterfaceCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkYoungsMaterialInterface *op = vtkYoungsMaterialInterface::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkYoungsMaterialInterface.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkYoungsMaterialInterface  *temp20;
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
    vtkYoungsMaterialInterface  *temp20;
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
    vtkYoungsMaterialInterface  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInverseNormal",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInverseNormal(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInverseNormal",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInverseNormal();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InverseNormalOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InverseNormalOn();
      return 1;
      }
    }
  if (!strcmp("InverseNormalOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InverseNormalOff();
      return 1;
      }
    }
  if (!strcmp("SetReverseMaterialOrder",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetReverseMaterialOrder(temp0);
      return 1;
      }
    }
  if (!strcmp("GetReverseMaterialOrder",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetReverseMaterialOrder();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReverseMaterialOrderOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReverseMaterialOrderOn();
      return 1;
      }
    }
  if (!strcmp("ReverseMaterialOrderOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReverseMaterialOrderOff();
      return 1;
      }
    }
  if (!strcmp("SetOnionPeel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOnionPeel(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOnionPeel",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOnionPeel();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("OnionPeelOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnionPeelOn();
      return 1;
      }
    }
  if (!strcmp("OnionPeelOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnionPeelOff();
      return 1;
      }
    }
  if (!strcmp("SetAxisSymetric",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAxisSymetric(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAxisSymetric",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAxisSymetric();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AxisSymetricOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AxisSymetricOn();
      return 1;
      }
    }
  if (!strcmp("AxisSymetricOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AxisSymetricOff();
      return 1;
      }
    }
  if (!strcmp("SetUseFractionAsDistance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseFractionAsDistance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseFractionAsDistance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseFractionAsDistance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseFractionAsDistanceOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseFractionAsDistanceOn();
      return 1;
      }
    }
  if (!strcmp("UseFractionAsDistanceOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseFractionAsDistanceOff();
      return 1;
      }
    }
  if (!strcmp("SetFillMaterial",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFillMaterial(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFillMaterial",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetFillMaterial();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FillMaterialOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->FillMaterialOn();
      return 1;
      }
    }
  if (!strcmp("FillMaterialOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->FillMaterialOff();
      return 1;
      }
    }
  if (!strcmp("SetVolumeFractionRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetVolumeFractionRange(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetVolumeFractionRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetVolumeFractionRange(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVolumeFractionRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetVolumeFractionRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfMaterials",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfMaterials(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfMaterials",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfMaterials();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseAllBlocks",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseAllBlocks(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseAllBlocks",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseAllBlocks();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseAllBlocksOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseAllBlocksOn();
      return 1;
      }
    }
  if (!strcmp("UseAllBlocksOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseAllBlocksOff();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfDomains",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfDomains();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaterialArrays",method) && msg.GetNumberOfArguments(0) == 8)
    {
    int      temp0;
    char    *temp1;
    char    *temp2;
    char    *temp3;
    char    *temp4;
    char    *temp5;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      op->SetMaterialArrays(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("SetMaterialArrays",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    char    *temp1;
    char    *temp2;
    char    *temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetMaterialArrays(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetMaterialVolumeFractionArray",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetMaterialVolumeFractionArray(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetMaterialNormalArray",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetMaterialNormalArray(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetMaterialOrderingArray",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetMaterialOrderingArray(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveAllMaterials",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllMaterials();
      return 1;
      }
    }
  if (!strcmp("SetMaterialNormalArray",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetMaterialNormalArray(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetMaterialOrderingArray",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetMaterialOrderingArray(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveAllMaterialBlockMappings",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllMaterialBlockMappings();
      return 1;
      }
    }
  if (!strcmp("AddMaterialBlockMapping",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddMaterialBlockMapping(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkMultiBlockDataSetAlgorithm";
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
  vtkmsg << "Object type: vtkYoungsMaterialInterface, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkYoungsMaterialInterface_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkYoungsMaterialInterface", vtkYoungsMaterialInterfaceClientServerNewCommand);
    csi->AddCommandFunction("vtkYoungsMaterialInterface", vtkYoungsMaterialInterfaceCommand);
    }
}
