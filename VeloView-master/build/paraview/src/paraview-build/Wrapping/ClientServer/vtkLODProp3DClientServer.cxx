// ClientServer wrapper for vtkLODProp3D object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkLODProp3D.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkLODProp3DClientServerNewCommand(void* /*ctx*/)
{
  return vtkLODProp3D::New();
}


int VTK_EXPORT vtkLODProp3DCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkLODProp3D *op = vtkLODProp3D::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkLODProp3D.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkLODProp3D  *temp20;
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
    vtkLODProp3D  *temp20;
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
    vtkLODProp3D  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("AddLOD",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkMapper  *temp0;
    vtkProperty  *temp1;
    vtkProperty  *temp2;
    vtkTexture  *temp3;
    double   temp4;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMapper") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkProperty") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkProperty") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkTexture") &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->AddLOD(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddLOD",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkMapper  *temp0;
    vtkProperty  *temp1;
    vtkTexture  *temp2;
    double   temp3;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMapper") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkProperty") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkTexture") &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->AddLOD(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddLOD",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkMapper  *temp0;
    vtkProperty  *temp1;
    vtkProperty  *temp2;
    double   temp3;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMapper") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkProperty") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkProperty") &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->AddLOD(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddLOD",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkMapper  *temp0;
    vtkProperty  *temp1;
    double   temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMapper") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkProperty") &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AddLOD(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddLOD",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkMapper  *temp0;
    vtkTexture  *temp1;
    double   temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMapper") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkTexture") &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AddLOD(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddLOD",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkMapper  *temp0;
    double   temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMapper") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->AddLOD(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddLOD",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkAbstractVolumeMapper  *temp0;
    vtkVolumeProperty  *temp1;
    double   temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractVolumeMapper") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkVolumeProperty") &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AddLOD(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddLOD",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkAbstractVolumeMapper  *temp0;
    double   temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractVolumeMapper") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->AddLOD(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddLOD",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkImageMapper3D  *temp0;
    vtkImageProperty  *temp1;
    double   temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageMapper3D") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkImageProperty") &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->AddLOD(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddLOD",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkImageMapper3D  *temp0;
    double   temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageMapper3D") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->AddLOD(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfLODs",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfLODs();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCurrentIndex",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCurrentIndex();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoveLOD",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemoveLOD(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLODProperty",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkProperty  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkProperty"))
      {
      op->SetLODProperty(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLODProperty",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkVolumeProperty  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkVolumeProperty"))
      {
      op->SetLODProperty(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLODProperty",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkImageProperty  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkImageProperty"))
      {
      op->SetLODProperty(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLODMapper",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkMapper  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkMapper"))
      {
      op->SetLODMapper(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLODMapper",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkAbstractVolumeMapper  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkAbstractVolumeMapper"))
      {
      op->SetLODMapper(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLODMapper",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkImageMapper3D  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkImageMapper3D"))
      {
      op->SetLODMapper(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetLODMapper",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkAbstractMapper3D  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetLODMapper(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLODBackfaceProperty",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkProperty  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkProperty"))
      {
      op->SetLODBackfaceProperty(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLODTexture",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkTexture  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkTexture"))
      {
      op->SetLODTexture(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("EnableLOD",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->EnableLOD(temp0);
      return 1;
      }
    }
  if (!strcmp("DisableLOD",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->DisableLOD(temp0);
      return 1;
      }
    }
  if (!strcmp("IsLODEnabled",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsLODEnabled(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLODLevel",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetLODLevel(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetLODLevel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    double   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetLODLevel(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLODIndexLevel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    double   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetLODIndexLevel(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLODEstimatedRenderTime",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    double   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetLODEstimatedRenderTime(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLODIndexEstimatedRenderTime",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    double   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetLODIndexEstimatedRenderTime(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAutomaticLODSelection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAutomaticLODSelection(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAutomaticLODSelectionMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutomaticLODSelectionMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAutomaticLODSelectionMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutomaticLODSelectionMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAutomaticLODSelection",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutomaticLODSelection();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AutomaticLODSelectionOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutomaticLODSelectionOn();
      return 1;
      }
    }
  if (!strcmp("AutomaticLODSelectionOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutomaticLODSelectionOff();
      return 1;
      }
    }
  if (!strcmp("SetSelectedLODID",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSelectedLODID(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSelectedLODID",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSelectedLODID();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLastRenderedLODID",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLastRenderedLODID();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPickLODID",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPickLODID();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetActors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPropCollection  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPropCollection"))
      {
      op->GetActors(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVolumes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPropCollection  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPropCollection"))
      {
      op->GetVolumes(temp0);
      return 1;
      }
    }
  if (!strcmp("SetSelectedPickLODID",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSelectedPickLODID(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSelectedPickLODID",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSelectedPickLODID();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAutomaticPickLODSelection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAutomaticPickLODSelection(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAutomaticPickLODSelectionMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutomaticPickLODSelectionMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAutomaticPickLODSelectionMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutomaticPickLODSelectionMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAutomaticPickLODSelection",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutomaticPickLODSelection();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AutomaticPickLODSelectionOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutomaticPickLODSelectionOn();
      return 1;
      }
    }
  if (!strcmp("AutomaticPickLODSelectionOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutomaticPickLODSelectionOff();
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

  {
    const char* commandName = "vtkProp3D";
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
  vtkmsg << "Object type: vtkLODProp3D, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkLODProp3D_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkLODProp3D", vtkLODProp3DClientServerNewCommand);
    csi->AddCommandFunction("vtkLODProp3D", vtkLODProp3DCommand);
    }
}
