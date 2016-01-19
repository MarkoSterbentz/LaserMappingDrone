// ClientServer wrapper for vtkMoleculeMapper object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkMoleculeMapper.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkMoleculeMapperClientServerNewCommand(void* /*ctx*/)
{
  return vtkMoleculeMapper::New();
}


int VTK_EXPORT vtkMoleculeMapperCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkMoleculeMapper *op = vtkMoleculeMapper::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkMoleculeMapper.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkMoleculeMapper  *temp20;
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
    vtkMoleculeMapper  *temp20;
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
    vtkMoleculeMapper  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInputData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMolecule  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMolecule"))
      {
      op->SetInputData(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkMolecule  *temp20;
      {
      temp20 = (op)->GetInput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseBallAndStickSettings",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseBallAndStickSettings();
      return 1;
      }
    }
  if (!strcmp("UseVDWSpheresSettings",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseVDWSpheresSettings();
      return 1;
      }
    }
  if (!strcmp("UseLiquoriceStickSettings",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseLiquoriceStickSettings();
      return 1;
      }
    }
  if (!strcmp("UseFastSettings",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseFastSettings();
      return 1;
      }
    }
  if (!strcmp("GetRenderAtoms",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetRenderAtoms();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRenderAtoms",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRenderAtoms(temp0);
      return 1;
      }
    }
  if (!strcmp("RenderAtomsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RenderAtomsOn();
      return 1;
      }
    }
  if (!strcmp("RenderAtomsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RenderAtomsOff();
      return 1;
      }
    }
  if (!strcmp("GetRenderBonds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetRenderBonds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRenderBonds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRenderBonds(temp0);
      return 1;
      }
    }
  if (!strcmp("RenderBondsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RenderBondsOn();
      return 1;
      }
    }
  if (!strcmp("RenderBondsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RenderBondsOff();
      return 1;
      }
    }
  if (!strcmp("GetAtomicRadiusType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAtomicRadiusType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAtomicRadiusType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAtomicRadiusType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAtomicRadiusTypeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetAtomicRadiusTypeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAtomicRadiusTypeToCovalentRadius",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetAtomicRadiusTypeToCovalentRadius();
      return 1;
      }
    }
  if (!strcmp("SetAtomicRadiusTypeToVDWRadius",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetAtomicRadiusTypeToVDWRadius();
      return 1;
      }
    }
  if (!strcmp("SetAtomicRadiusTypeToUnitRadius",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetAtomicRadiusTypeToUnitRadius();
      return 1;
      }
    }
  if (!strcmp("GetAtomicRadiusScaleFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetAtomicRadiusScaleFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAtomicRadiusScaleFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAtomicRadiusScaleFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseMultiCylindersForBonds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseMultiCylindersForBonds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseMultiCylindersForBonds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseMultiCylindersForBonds(temp0);
      return 1;
      }
    }
  if (!strcmp("UseMultiCylindersForBondsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseMultiCylindersForBondsOn();
      return 1;
      }
    }
  if (!strcmp("UseMultiCylindersForBondsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseMultiCylindersForBondsOff();
      return 1;
      }
    }
  if (!strcmp("GetBondColorMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetBondColorMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBondColorMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBondColorMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBondColorModeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetBondColorModeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBondColorModeToSingleColor",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetBondColorModeToSingleColor();
      return 1;
      }
    }
  if (!strcmp("SetBondColorModeToDiscreteByAtom",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetBondColorModeToDiscreteByAtom();
      return 1;
      }
    }
  if (!strcmp("GetBondColor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned char    *temp20;
      {
      temp20 = (op)->GetBondColor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBondColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    unsigned char     temp0;
    unsigned char     temp1;
    unsigned char     temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetBondColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetBondRadius",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetBondRadius();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBondRadius",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBondRadius(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSelectedAtomsAndBonds",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkSelection  *temp0;
    vtkIdTypeArray  *temp1;
    vtkIdTypeArray  *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIdTypeArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIdTypeArray"))
      {
      op->GetSelectedAtomsAndBonds(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetSelectedAtoms",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSelection  *temp0;
    vtkIdTypeArray  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIdTypeArray"))
      {
      op->GetSelectedAtoms(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetSelectedBonds",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSelection  *temp0;
    vtkIdTypeArray  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSelection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIdTypeArray"))
      {
      op->GetSelectedBonds(temp0,temp1);
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
  if (!strcmp("GetBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->GetBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("FillInputPortInformation",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkInformation  *temp1;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformation"))
      {
      temp20 = (op)->FillInputPortInformation(temp0,temp1);
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
    const char* commandName = "vtkMapper";
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
  vtkmsg << "Object type: vtkMoleculeMapper, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkMoleculeMapper_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkMoleculeMapper", vtkMoleculeMapperClientServerNewCommand);
    csi->AddCommandFunction("vtkMoleculeMapper", vtkMoleculeMapperCommand);
    }
}
