// ClientServer wrapper for vtkGenericStreamTracer object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkGenericStreamTracer.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkGenericStreamTracerClientServerNewCommand(void* /*ctx*/)
{
  return vtkGenericStreamTracer::New();
}


int VTK_EXPORT vtkGenericStreamTracerCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkGenericStreamTracer *op = vtkGenericStreamTracer::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkGenericStreamTracer.  "
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
    vtkGenericStreamTracer  *temp20;
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
    vtkGenericStreamTracer  *temp20;
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
    vtkGenericStreamTracer  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetStartPosition",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetStartPosition(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetStartPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetStartPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetStartPosition",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetStartPosition();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSourceData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataSet  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSet"))
      {
      op->SetSourceData(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSource",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataSet  *temp20;
      {
      temp20 = (op)->GetSource();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSourceConnection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAlgorithmOutput  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAlgorithmOutput"))
      {
      op->SetSourceConnection(temp0);
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
  if (!strcmp("SetIntegrator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInitialValueProblemSolver  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInitialValueProblemSolver"))
      {
      op->SetIntegrator(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIntegrator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInitialValueProblemSolver  *temp20;
      {
      temp20 = (op)->GetIntegrator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIntegratorType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIntegratorType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIntegratorType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetIntegratorType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIntegratorTypeToRungeKutta2",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetIntegratorTypeToRungeKutta2();
      return 1;
      }
    }
  if (!strcmp("SetIntegratorTypeToRungeKutta4",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetIntegratorTypeToRungeKutta4();
      return 1;
      }
    }
  if (!strcmp("SetIntegratorTypeToRungeKutta45",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetIntegratorTypeToRungeKutta45();
      return 1;
      }
    }
  if (!strcmp("SetMaximumPropagation",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetMaximumPropagation(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetMaximumPropagation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumPropagation(temp0);
      return 1;
      }
    }
  if (!strcmp("SetMaximumPropagationUnit",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumPropagationUnit(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaximumPropagationUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMaximumPropagationUnit();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaximumPropagation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaximumPropagation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaximumPropagationUnitToTimeUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetMaximumPropagationUnitToTimeUnit();
      return 1;
      }
    }
  if (!strcmp("SetMaximumPropagationUnitToLengthUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetMaximumPropagationUnitToLengthUnit();
      return 1;
      }
    }
  if (!strcmp("SetMaximumPropagationUnitToCellLengthUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetMaximumPropagationUnitToCellLengthUnit();
      return 1;
      }
    }
  if (!strcmp("SetMinimumIntegrationStep",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetMinimumIntegrationStep(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetMinimumIntegrationStepUnit",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMinimumIntegrationStepUnit(temp0);
      return 1;
      }
    }
  if (!strcmp("SetMinimumIntegrationStep",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMinimumIntegrationStep(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMinimumIntegrationStepUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMinimumIntegrationStepUnit();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMinimumIntegrationStep",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMinimumIntegrationStep();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMinimumIntegrationStepUnitToTimeUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetMinimumIntegrationStepUnitToTimeUnit();
      return 1;
      }
    }
  if (!strcmp("SetMinimumIntegrationStepUnitToLengthUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetMinimumIntegrationStepUnitToLengthUnit();
      return 1;
      }
    }
  if (!strcmp("SetMinimumIntegrationStepUnitToCellLengthUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetMinimumIntegrationStepUnitToCellLengthUnit();
      return 1;
      }
    }
  if (!strcmp("SetMaximumIntegrationStep",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetMaximumIntegrationStep(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetMaximumIntegrationStepUnit",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumIntegrationStepUnit(temp0);
      return 1;
      }
    }
  if (!strcmp("SetMaximumIntegrationStep",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumIntegrationStep(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaximumIntegrationStepUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMaximumIntegrationStepUnit();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaximumIntegrationStep",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaximumIntegrationStep();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaximumIntegrationStepUnitToTimeUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetMaximumIntegrationStepUnitToTimeUnit();
      return 1;
      }
    }
  if (!strcmp("SetMaximumIntegrationStepUnitToLengthUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetMaximumIntegrationStepUnitToLengthUnit();
      return 1;
      }
    }
  if (!strcmp("SetMaximumIntegrationStepUnitToCellLengthUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetMaximumIntegrationStepUnitToCellLengthUnit();
      return 1;
      }
    }
  if (!strcmp("SetInitialIntegrationStep",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetInitialIntegrationStep(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetInitialIntegrationStepUnit",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInitialIntegrationStepUnit(temp0);
      return 1;
      }
    }
  if (!strcmp("SetInitialIntegrationStep",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInitialIntegrationStep(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInitialIntegrationStepUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInitialIntegrationStepUnit();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInitialIntegrationStep",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetInitialIntegrationStep();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInitialIntegrationStepUnitToTimeUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetInitialIntegrationStepUnitToTimeUnit();
      return 1;
      }
    }
  if (!strcmp("SetInitialIntegrationStepUnitToLengthUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetInitialIntegrationStepUnitToLengthUnit();
      return 1;
      }
    }
  if (!strcmp("SetInitialIntegrationStepUnitToCellLengthUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetInitialIntegrationStepUnitToCellLengthUnit();
      return 1;
      }
    }
  if (!strcmp("SetMaximumError",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumError(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaximumError",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaximumError();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaximumNumberOfSteps",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumNumberOfSteps(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaximumNumberOfSteps",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetMaximumNumberOfSteps();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTerminalSpeed",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTerminalSpeed(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTerminalSpeed",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetTerminalSpeed();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIntegrationStepUnit",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIntegrationStepUnit(temp0);
      return 1;
      }
    }
  if (!strcmp("SetIntegrationDirection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIntegrationDirection(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIntegrationDirectionMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetIntegrationDirectionMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetIntegrationDirectionMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetIntegrationDirectionMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetIntegrationDirection",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetIntegrationDirection();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIntegrationDirectionToForward",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetIntegrationDirectionToForward();
      return 1;
      }
    }
  if (!strcmp("SetIntegrationDirectionToBackward",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetIntegrationDirectionToBackward();
      return 1;
      }
    }
  if (!strcmp("SetIntegrationDirectionToBoth",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetIntegrationDirectionToBoth();
      return 1;
      }
    }
  if (!strcmp("SetComputeVorticity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetComputeVorticity(temp0);
      return 1;
      }
    }
  if (!strcmp("GetComputeVorticity",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetComputeVorticity();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ComputeVorticityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeVorticityOn();
      return 1;
      }
    }
  if (!strcmp("ComputeVorticityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeVorticityOff();
      return 1;
      }
    }
  if (!strcmp("SetRotationScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRotationScale(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRotationScale",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetRotationScale();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInputVectorsSelection",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetInputVectorsSelection();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SelectInputVectors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SelectInputVectors(temp0);
      return 1;
      }
    }
  if (!strcmp("AddInputData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkGenericDataSet  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGenericDataSet"))
      {
      op->AddInputData(temp0);
      return 1;
      }
    }
  if (!strcmp("SetInterpolatorPrototype",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkGenericInterpolatedVelocityField  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGenericInterpolatedVelocityField"))
      {
      op->SetInterpolatorPrototype(temp0);
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
  vtkmsg << "Object type: vtkGenericStreamTracer, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkGenericStreamTracer_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkGenericStreamTracer", vtkGenericStreamTracerClientServerNewCommand);
    csi->AddCommandFunction("vtkGenericStreamTracer", vtkGenericStreamTracerCommand);
    }
}
