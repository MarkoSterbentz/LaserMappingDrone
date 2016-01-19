// ClientServer wrapper for vtkBivariateLinearTableThreshold object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkBivariateLinearTableThreshold.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkBivariateLinearTableThresholdClientServerNewCommand(void* /*ctx*/)
{
  return vtkBivariateLinearTableThreshold::New();
}


int VTK_EXPORT vtkBivariateLinearTableThresholdCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkBivariateLinearTableThreshold *op = vtkBivariateLinearTableThreshold::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkBivariateLinearTableThreshold.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkBivariateLinearTableThreshold  *temp20;
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
    vtkBivariateLinearTableThreshold  *temp20;
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
    vtkBivariateLinearTableThreshold  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInclusive",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInclusive(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInclusive",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInclusive();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddColumnToThreshold",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkIdType   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddColumnToThreshold(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfColumnsToThreshold",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfColumnsToThreshold();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ClearColumnsToThreshold",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearColumnsToThreshold();
      return 1;
      }
    }
  if (!strcmp("GetSelectedRowIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkIdTypeArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetSelectedRowIds(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Initialize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Initialize();
      return 1;
      }
    }
  if (!strcmp("AddLineEquation",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    if(temp0 &&
      temp1)
      {
      op->AddLineEquation(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("AddLineEquation",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    double   temp1;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddLineEquation(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("AddLineEquation",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->AddLineEquation(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("ClearLineEquations",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearLineEquations();
      return 1;
      }
    }
  if (!strcmp("GetLinearThresholdType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLinearThresholdType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLinearThresholdType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLinearThresholdType(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLinearThresholdTypeToAbove",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetLinearThresholdTypeToAbove();
      return 1;
      }
    }
  if (!strcmp("SetLinearThresholdTypeToBelow",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetLinearThresholdTypeToBelow();
      return 1;
      }
    }
  if (!strcmp("SetLinearThresholdTypeToNear",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetLinearThresholdTypeToNear();
      return 1;
      }
    }
  if (!strcmp("SetLinearThresholdTypeToBetween",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetLinearThresholdTypeToBetween();
      return 1;
      }
    }
  if (!strcmp("SetColumnRanges",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetColumnRanges(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetColumnRanges",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetColumnRanges(temp0);
      return 1;
      }
    }
  if (!strcmp("GetColumnRanges",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetColumnRanges();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDistanceThreshold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDistanceThreshold(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDistanceThreshold",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDistanceThreshold();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseNormalizedDistance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseNormalizedDistance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseNormalizedDistance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseNormalizedDistance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseNormalizedDistanceOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseNormalizedDistanceOn();
      return 1;
      }
    }
  if (!strcmp("UseNormalizedDistanceOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseNormalizedDistanceOff();
      return 1;
      }
    }
  if (!strcmp("ComputeImplicitLineFunction",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    if(temp0 &&
      temp1 &&
      temp2)
      {
      op->ComputeImplicitLineFunction(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("ComputeImplicitLineFunction",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    double   temp1;
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2)
      {
      op->ComputeImplicitLineFunction(temp0,temp1,temp2);
      return 1;
      }
    }

  {
    const char* commandName = "vtkTableAlgorithm";
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
  vtkmsg << "Object type: vtkBivariateLinearTableThreshold, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkBivariateLinearTableThreshold_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkBivariateLinearTableThreshold", vtkBivariateLinearTableThresholdClientServerNewCommand);
    csi->AddCommandFunction("vtkBivariateLinearTableThreshold", vtkBivariateLinearTableThresholdCommand);
    }
}
