// ClientServer wrapper for vtkVelodyneHDLSource object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkVelodyneHDLSource.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkVelodyneHDLSourceClientServerNewCommand(void* /*ctx*/)
{
  return vtkVelodyneHDLSource::New();
}


int VTK_EXPORT vtkVelodyneHDLSourceCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkVelodyneHDLSource *op = vtkVelodyneHDLSource::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkVelodyneHDLSource.  "
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
    vtkVelodyneHDLSource  *temp20;
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
    vtkVelodyneHDLSource  *temp20;
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
    vtkVelodyneHDLSource  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Poll",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Poll();
      return 1;
      }
    }
  if (!strcmp("Start",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Start();
      return 1;
      }
    }
  if (!strcmp("Stop",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Stop();
      return 1;
      }
    }
  if (!strcmp("GetCacheSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCacheSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCacheSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCacheSize(temp0);
      return 1;
      }
    }
  if (!strcmp("ReadNextFrame",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReadNextFrame();
      return 1;
      }
    }
  if (!strcmp("GetCorrectionsFile",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const std::string  *temp20;
      {
      temp20 = &(op)->GetCorrectionsFile();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << *temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCorrectionsFile",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCorrectionsFile(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("GetOutputFile",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const std::string  *temp20;
      {
      temp20 = &(op)->GetOutputFile();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << *temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutputFile",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutputFile(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("SetSensorPort",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSensorPort(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSensorPort",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSensorPort();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLaserSelection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[64];
    if(msg.GetArgument(0, 2, temp0, 64))
      {
      op->SetLaserSelection(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLaserSelection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[64];
    if(msg.GetArgument(0, 2, temp0, 64))
      {
      op->GetLaserSelection(temp0);
      return 1;
      }
    }
  if (!strcmp("SetCropReturns",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCropReturns(temp0);
      return 1;
      }
    }
  if (!strcmp("SetCropInside",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCropInside(temp0);
      return 1;
      }
    }
  if (!strcmp("SetCropRegion",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->SetCropRegion(temp0);
      return 1;
      }
    }
  if (!strcmp("SetCropRegion",method) && msg.GetNumberOfArguments(0) == 8)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    double   temp4;
    double   temp5;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      op->SetCropRegion(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("GetVerticalCorrections",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[64];
    if(msg.GetArgument(0, 2, temp0, 64))
      {
      op->GetVerticalCorrections(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDualReturnFilter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetDualReturnFilter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDualReturnFilter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDualReturnFilter(temp0);
      return 1;
      }
    }
  if (!strcmp("SetSensorTransform",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTransform  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTransform"))
      {
      op->SetSensorTransform(temp0);
      return 1;
      }
    }
  if (!strcmp("SetDummyProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDummyProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfChannels",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfChannels();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkPolyDataAlgorithm";
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
  vtkmsg << "Object type: vtkVelodyneHDLSource, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkVelodyneHDLSource_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkVelodyneHDLSource", vtkVelodyneHDLSourceClientServerNewCommand);
    csi->AddCommandFunction("vtkVelodyneHDLSource", vtkVelodyneHDLSourceCommand);
    }
}
