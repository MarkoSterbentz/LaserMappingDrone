// ClientServer wrapper for vtkSLACReader object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSLACReader.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSLACReaderClientServerNewCommand(void* /*ctx*/)
{
  return vtkSLACReader::New();
}


int VTK_EXPORT vtkSLACReaderCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSLACReader *op = vtkSLACReader::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSLACReader.  "
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
    vtkSLACReader  *temp20;
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
    vtkSLACReader  *temp20;
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
    vtkSLACReader  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMeshFileName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetMeshFileName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMeshFileName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMeshFileName(temp0);
      return 1;
      }
    }
  if (!strcmp("AddModeFileName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddModeFileName(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveAllModeFileNames",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllModeFileNames();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfModeFileNames",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetNumberOfModeFileNames();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetModeFileName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetModeFileName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetReadInternalVolume",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetReadInternalVolume();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetReadInternalVolume",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetReadInternalVolume(temp0);
      return 1;
      }
    }
  if (!strcmp("ReadInternalVolumeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReadInternalVolumeOn();
      return 1;
      }
    }
  if (!strcmp("ReadInternalVolumeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReadInternalVolumeOff();
      return 1;
      }
    }
  if (!strcmp("GetReadExternalSurface",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetReadExternalSurface();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetReadExternalSurface",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetReadExternalSurface(temp0);
      return 1;
      }
    }
  if (!strcmp("ReadExternalSurfaceOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReadExternalSurfaceOn();
      return 1;
      }
    }
  if (!strcmp("ReadExternalSurfaceOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReadExternalSurfaceOff();
      return 1;
      }
    }
  if (!strcmp("GetReadMidpoints",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetReadMidpoints();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetReadMidpoints",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetReadMidpoints(temp0);
      return 1;
      }
    }
  if (!strcmp("ReadMidpointsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReadMidpointsOn();
      return 1;
      }
    }
  if (!strcmp("ReadMidpointsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReadMidpointsOff();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfVariableArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfVariableArrays();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVariableArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetVariableArrayName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVariableArrayStatus",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetVariableArrayStatus(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetVariableArrayStatus",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetVariableArrayStatus(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("ResetFrequencyScales",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResetFrequencyScales();
      return 1;
      }
    }
  if (!strcmp("SetFrequencyScale",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetFrequencyScale(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("ResetPhaseShifts",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResetPhaseShifts();
      return 1;
      }
    }
  if (!strcmp("SetPhaseShift",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetPhaseShift(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetFrequencyScales",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDoubleArray  *temp20;
      {
      temp20 = (op)->GetFrequencyScales();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPhaseShifts",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDoubleArray  *temp20;
      {
      temp20 = (op)->GetPhaseShifts();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CanReadFile",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->CanReadFile(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IS_INTERNAL_VOLUME",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->IS_INTERNAL_VOLUME();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IS_EXTERNAL_SURFACE",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->IS_EXTERNAL_SURFACE();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("POINTS",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationObjectBaseKey  *temp20;
      {
      temp20 = (op)->POINTS();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("POINT_DATA",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationObjectBaseKey  *temp20;
      {
      temp20 = (op)->POINT_DATA();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  vtkmsg << "Object type: vtkSLACReader, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSLACReader_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSLACReader", vtkSLACReaderClientServerNewCommand);
    csi->AddCommandFunction("vtkSLACReader", vtkSLACReaderCommand);
    }
}
