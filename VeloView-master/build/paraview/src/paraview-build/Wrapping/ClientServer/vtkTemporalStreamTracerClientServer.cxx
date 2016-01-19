// ClientServer wrapper for vtkTemporalStreamTracer object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkTemporalStreamTracer.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkTemporalStreamTracerClientServerNewCommand(void* /*ctx*/)
{
  return vtkTemporalStreamTracer::New();
}


int VTK_EXPORT vtkTemporalStreamTracerCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkTemporalStreamTracer *op = vtkTemporalStreamTracer::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkTemporalStreamTracer.  "
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
    vtkTemporalStreamTracer  *temp20;
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
    vtkTemporalStreamTracer  *temp20;
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
    vtkTemporalStreamTracer  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTimeStep",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTimeStep(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTimeStep",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetTimeStep();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIgnorePipelineTime",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIgnorePipelineTime(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIgnorePipelineTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetIgnorePipelineTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IgnorePipelineTimeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->IgnorePipelineTimeOn();
      return 1;
      }
    }
  if (!strcmp("IgnorePipelineTimeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->IgnorePipelineTimeOff();
      return 1;
      }
    }
  if (!strcmp("SetTimeStepResolution",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTimeStepResolution(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTimeStepResolution",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetTimeStepResolution();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetForceReinjectionEveryNSteps",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetForceReinjectionEveryNSteps(temp0);
      return 1;
      }
    }
  if (!strcmp("GetForceReinjectionEveryNSteps",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetForceReinjectionEveryNSteps();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTerminationTime",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTerminationTime(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTerminationTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetTerminationTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTerminationTimeUnit",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTerminationTimeUnit(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTerminationTimeUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTerminationTimeUnit();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTerminationTimeUnitToTimeUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTerminationTimeUnitToTimeUnit();
      return 1;
      }
    }
  if (!strcmp("SetTerminationTimeUnitToStepUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetTerminationTimeUnitToStepUnit();
      return 1;
      }
    }
  if (!strcmp("SetStaticSeeds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetStaticSeeds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetStaticSeeds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStaticSeeds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StaticSeedsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StaticSeedsOn();
      return 1;
      }
    }
  if (!strcmp("StaticSeedsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StaticSeedsOff();
      return 1;
      }
    }
  if (!strcmp("SetStaticMesh",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetStaticMesh(temp0);
      return 1;
      }
    }
  if (!strcmp("GetStaticMesh",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStaticMesh();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StaticMeshOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StaticMeshOn();
      return 1;
      }
    }
  if (!strcmp("StaticMeshOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StaticMeshOff();
      return 1;
      }
    }
  if (!strcmp("SetParticleWriter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractParticleWriter  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractParticleWriter"))
      {
      op->SetParticleWriter(temp0);
      return 1;
      }
    }
  if (!strcmp("GetParticleWriter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractParticleWriter  *temp20;
      {
      temp20 = (op)->GetParticleWriter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetParticleFileName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetParticleFileName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetParticleFileName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetParticleFileName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEnableParticleWriting",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnableParticleWriting(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEnableParticleWriting",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEnableParticleWriting();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EnableParticleWritingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableParticleWritingOn();
      return 1;
      }
    }
  if (!strcmp("EnableParticleWritingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableParticleWritingOff();
      return 1;
      }
    }
  if (!strcmp("AddSourceConnection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAlgorithmOutput  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAlgorithmOutput"))
      {
      op->AddSourceConnection(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveAllSources",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllSources();
      return 1;
      }
    }

  {
    const char* commandName = "vtkStreamTracer";
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
  vtkmsg << "Object type: vtkTemporalStreamTracer, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkTemporalStreamTracer_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkTemporalStreamTracer", vtkTemporalStreamTracerClientServerNewCommand);
    csi->AddCommandFunction("vtkTemporalStreamTracer", vtkTemporalStreamTracerCommand);
    }
}
