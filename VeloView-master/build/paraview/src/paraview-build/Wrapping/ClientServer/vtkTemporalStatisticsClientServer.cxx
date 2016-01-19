// ClientServer wrapper for vtkTemporalStatistics object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkTemporalStatistics.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkTemporalStatisticsClientServerNewCommand(void* /*ctx*/)
{
  return vtkTemporalStatistics::New();
}


int VTK_EXPORT vtkTemporalStatisticsCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkTemporalStatistics *op = vtkTemporalStatistics::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkTemporalStatistics.  "
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
    vtkTemporalStatistics  *temp20;
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
    vtkTemporalStatistics  *temp20;
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
    vtkTemporalStatistics  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetComputeAverage",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetComputeAverage();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetComputeAverage",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetComputeAverage(temp0);
      return 1;
      }
    }
  if (!strcmp("ComputeAverageOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeAverageOn();
      return 1;
      }
    }
  if (!strcmp("ComputeAverageOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeAverageOff();
      return 1;
      }
    }
  if (!strcmp("GetComputeMinimum",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetComputeMinimum();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetComputeMinimum",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetComputeMinimum(temp0);
      return 1;
      }
    }
  if (!strcmp("ComputeMinimumOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeMinimumOn();
      return 1;
      }
    }
  if (!strcmp("ComputeMinimumOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeMinimumOff();
      return 1;
      }
    }
  if (!strcmp("GetComputeMaximum",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetComputeMaximum();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetComputeMaximum",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetComputeMaximum(temp0);
      return 1;
      }
    }
  if (!strcmp("ComputeMaximumOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeMaximumOn();
      return 1;
      }
    }
  if (!strcmp("ComputeMaximumOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeMaximumOff();
      return 1;
      }
    }
  if (!strcmp("GetComputeStandardDeviation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetComputeStandardDeviation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetComputeStandardDeviation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetComputeStandardDeviation(temp0);
      return 1;
      }
    }
  if (!strcmp("ComputeStandardDeviationOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeStandardDeviationOn();
      return 1;
      }
    }
  if (!strcmp("ComputeStandardDeviationOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeStandardDeviationOff();
      return 1;
      }
    }

  {
    const char* commandName = "vtkPassInputTypeAlgorithm";
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
  vtkmsg << "Object type: vtkTemporalStatistics, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkTemporalStatistics_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkTemporalStatistics", vtkTemporalStatisticsClientServerNewCommand);
    csi->AddCommandFunction("vtkTemporalStatistics", vtkTemporalStatisticsCommand);
    }
}
