// ClientServer wrapper for vtkImageVolumeRepresentation object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkImageVolumeRepresentation.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkImageVolumeRepresentationClientServerNewCommand(void* /*ctx*/)
{
  return vtkImageVolumeRepresentation::New();
}


int VTK_EXPORT vtkImageVolumeRepresentationCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkImageVolumeRepresentation *op = vtkImageVolumeRepresentation::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkImageVolumeRepresentation.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageVolumeRepresentation  *temp20;
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
    vtkImageVolumeRepresentation  *temp20;
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
    vtkImageVolumeRepresentation  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ProcessViewRequest",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformationRequestKey  *temp0;
    vtkInformation  *temp1;
    vtkInformation  *temp2;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationRequestKey") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkInformation"))
      {
      temp20 = (op)->ProcessViewRequest(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MarkModified",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MarkModified();
      return 1;
      }
    }
  if (!strcmp("SetVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("SetOrientation",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetOrientation(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetOrigin",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetOrigin(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetPickable",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPickable(temp0);
      return 1;
      }
    }
  if (!strcmp("SetPosition",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetPosition(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetScale",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetScale(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetInterpolationType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInterpolationType(temp0);
      return 1;
      }
    }
  if (!strcmp("SetColor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkColorTransferFunction  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkColorTransferFunction"))
      {
      op->SetColor(temp0);
      return 1;
      }
    }
  if (!strcmp("SetScalarOpacity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPiecewiseFunction  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPiecewiseFunction"))
      {
      op->SetScalarOpacity(temp0);
      return 1;
      }
    }
  if (!strcmp("SetScalarOpacityUnitDistance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScalarOpacityUnitDistance(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAmbient",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAmbient(temp0);
      return 1;
      }
    }
  if (!strcmp("SetDiffuse",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDiffuse(temp0);
      return 1;
      }
    }
  if (!strcmp("SetSpecular",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSpecular(temp0);
      return 1;
      }
    }
  if (!strcmp("SetSpecularPower",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSpecularPower(temp0);
      return 1;
      }
    }
  if (!strcmp("SetShade",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetShade(temp0);
      return 1;
      }
    }
  if (!strcmp("SetIndependantComponents",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIndependantComponents(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRequestedRenderMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRequestedRenderMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetActor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVLODVolume  *temp20;
      {
      temp20 = (op)->GetActor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PassOrderedCompositingInformation",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPVDataRepresentation  *temp0;
    vtkInformation  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformation"))
      {
      op->PassOrderedCompositingInformation(temp0,temp1);
      return 1;
      }
    }

  {
    const char* commandName = "vtkPVDataRepresentation";
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
  vtkmsg << "Object type: vtkImageVolumeRepresentation, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkImageVolumeRepresentation_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkImageVolumeRepresentation", vtkImageVolumeRepresentationClientServerNewCommand);
    csi->AddCommandFunction("vtkImageVolumeRepresentation", vtkImageVolumeRepresentationCommand);
    }
}
