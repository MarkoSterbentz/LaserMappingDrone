// ClientServer wrapper for vtkDescriptiveStatistics object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkDescriptiveStatistics.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkDescriptiveStatisticsClientServerNewCommand(void* /*ctx*/)
{
  return vtkDescriptiveStatistics::New();
}


int VTK_EXPORT vtkDescriptiveStatisticsCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkDescriptiveStatistics *op = vtkDescriptiveStatistics::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkDescriptiveStatistics.  "
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
    vtkDescriptiveStatistics  *temp20;
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
    vtkDescriptiveStatistics  *temp20;
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
    vtkDescriptiveStatistics  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUnbiasedVariance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUnbiasedVariance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUnbiasedVariance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUnbiasedVariance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UnbiasedVarianceOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UnbiasedVarianceOn();
      return 1;
      }
    }
  if (!strcmp("UnbiasedVarianceOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UnbiasedVarianceOff();
      return 1;
      }
    }
  if (!strcmp("SetG1Skewness",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetG1Skewness(temp0);
      return 1;
      }
    }
  if (!strcmp("GetG1Skewness",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetG1Skewness();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("G1SkewnessOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->G1SkewnessOn();
      return 1;
      }
    }
  if (!strcmp("G1SkewnessOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->G1SkewnessOff();
      return 1;
      }
    }
  if (!strcmp("SetG2Kurtosis",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetG2Kurtosis(temp0);
      return 1;
      }
    }
  if (!strcmp("GetG2Kurtosis",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetG2Kurtosis();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("G2KurtosisOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->G2KurtosisOn();
      return 1;
      }
    }
  if (!strcmp("G2KurtosisOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->G2KurtosisOff();
      return 1;
      }
    }
  if (!strcmp("SetSignedDeviations",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSignedDeviations(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSignedDeviations",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSignedDeviations();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SignedDeviationsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SignedDeviationsOn();
      return 1;
      }
    }
  if (!strcmp("SignedDeviationsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SignedDeviationsOff();
      return 1;
      }
    }
  if (!strcmp("Aggregate",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkDataObjectCollection  *temp0;
    vtkMultiBlockDataSet  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataObjectCollection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkMultiBlockDataSet"))
      {
      op->Aggregate(temp0,temp1);
      return 1;
      }
    }

  {
    const char* commandName = "vtkStatisticsAlgorithm";
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
  vtkmsg << "Object type: vtkDescriptiveStatistics, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkDescriptiveStatistics_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkDescriptiveStatistics", vtkDescriptiveStatisticsClientServerNewCommand);
    csi->AddCommandFunction("vtkDescriptiveStatistics", vtkDescriptiveStatisticsCommand);
    }
}
