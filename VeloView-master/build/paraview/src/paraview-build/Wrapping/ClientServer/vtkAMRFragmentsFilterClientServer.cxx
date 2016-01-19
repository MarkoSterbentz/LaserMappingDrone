// ClientServer wrapper for vtkAMRFragmentsFilter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkAMRFragmentsFilter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkAMRFragmentsFilterClientServerNewCommand(void* /*ctx*/)
{
  return vtkAMRFragmentsFilter::New();
}


int VTK_EXPORT vtkAMRFragmentsFilterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkAMRFragmentsFilter *op = vtkAMRFragmentsFilter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkAMRFragmentsFilter.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAMRFragmentsFilter  *temp20;
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
    vtkAMRFragmentsFilter  *temp20;
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
    vtkAMRFragmentsFilter  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddInputVolumeArrayToProcess",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddInputVolumeArrayToProcess(temp0);
      return 1;
      }
    }
  if (!strcmp("ClearInputVolumeArrayToProcess",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearInputVolumeArrayToProcess();
      return 1;
      }
    }
  if (!strcmp("AddInputMassArrayToProcess",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddInputMassArrayToProcess(temp0);
      return 1;
      }
    }
  if (!strcmp("ClearInputMassArrayToProcess",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearInputMassArrayToProcess();
      return 1;
      }
    }
  if (!strcmp("AddInputVolumeWeightedArrayToProcess",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddInputVolumeWeightedArrayToProcess(temp0);
      return 1;
      }
    }
  if (!strcmp("ClearInputVolumeWeightedArrayToProcess",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearInputVolumeWeightedArrayToProcess();
      return 1;
      }
    }
  if (!strcmp("AddInputMassWeightedArrayToProcess",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddInputMassWeightedArrayToProcess(temp0);
      return 1;
      }
    }
  if (!strcmp("ClearInputMassWeightedArrayToProcess",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearInputMassWeightedArrayToProcess();
      return 1;
      }
    }
  if (!strcmp("SetExtractSurface",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetExtractSurface(temp0);
      return 1;
      }
    }
  if (!strcmp("GetExtractSurface",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetExtractSurface();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ExtractSurfaceOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ExtractSurfaceOn();
      return 1;
      }
    }
  if (!strcmp("ExtractSurfaceOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ExtractSurfaceOff();
      return 1;
      }
    }
  if (!strcmp("SetUseWatertightSurface",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseWatertightSurface(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseWatertightSurface",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseWatertightSurface();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseWatertightSurfaceOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseWatertightSurfaceOn();
      return 1;
      }
    }
  if (!strcmp("UseWatertightSurfaceOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseWatertightSurfaceOff();
      return 1;
      }
    }
  if (!strcmp("SetIntegrateFragments",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIntegrateFragments(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIntegrateFragments",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetIntegrateFragments();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IntegrateFragmentsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->IntegrateFragmentsOn();
      return 1;
      }
    }
  if (!strcmp("IntegrateFragmentsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->IntegrateFragmentsOff();
      return 1;
      }
    }
  if (!strcmp("GetVolumeFractionSurfaceValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetVolumeFractionSurfaceValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetVolumeFractionSurfaceValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVolumeFractionSurfaceValue(temp0);
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
  vtkmsg << "Object type: vtkAMRFragmentsFilter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkAMRFragmentsFilter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkAMRFragmentsFilter", vtkAMRFragmentsFilterClientServerNewCommand);
    csi->AddCommandFunction("vtkAMRFragmentsFilter", vtkAMRFragmentsFilterCommand);
    }
}
