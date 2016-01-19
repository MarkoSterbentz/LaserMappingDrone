// ClientServer wrapper for vtkArrayCalculator object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkArrayCalculator.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkArrayCalculatorClientServerNewCommand(void* /*ctx*/)
{
  return vtkArrayCalculator::New();
}


int VTK_EXPORT vtkArrayCalculatorCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkArrayCalculator *op = vtkArrayCalculator::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkArrayCalculator.  "
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
    vtkArrayCalculator  *temp20;
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
    vtkArrayCalculator  *temp20;
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
    vtkArrayCalculator  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFunction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFunction(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFunction",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetFunction();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddScalarArrayName",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddScalarArrayName(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("AddVectorArrayName",method) && msg.GetNumberOfArguments(0) == 6)
    {
    char    *temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->AddVectorArrayName(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("AddScalarVariable",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    char    *temp1;
    int      temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->AddScalarVariable(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("AddVectorVariable",method) && msg.GetNumberOfArguments(0) == 7)
    {
    char    *temp0;
    char    *temp1;
    int      temp2;
    int      temp3;
    int      temp4;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->AddVectorVariable(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("AddCoordinateScalarVariable",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddCoordinateScalarVariable(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("AddCoordinateVectorVariable",method) && msg.GetNumberOfArguments(0) == 6)
    {
    char    *temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->AddCoordinateVectorVariable(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetResultArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetResultArrayName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetResultArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetResultArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetResultArrayType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetResultArrayType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetResultArrayType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetResultArrayType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCoordinateResults",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCoordinateResults();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCoordinateResults",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCoordinateResults(temp0);
      return 1;
      }
    }
  if (!strcmp("CoordinateResultsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CoordinateResultsOn();
      return 1;
      }
    }
  if (!strcmp("CoordinateResultsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CoordinateResultsOff();
      return 1;
      }
    }
  if (!strcmp("GetResultNormals",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetResultNormals();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetResultNormals",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetResultNormals(temp0);
      return 1;
      }
    }
  if (!strcmp("ResultNormalsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResultNormalsOn();
      return 1;
      }
    }
  if (!strcmp("ResultNormalsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResultNormalsOff();
      return 1;
      }
    }
  if (!strcmp("GetResultTCoords",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetResultTCoords();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetResultTCoords",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetResultTCoords(temp0);
      return 1;
      }
    }
  if (!strcmp("ResultTCoordsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResultTCoordsOn();
      return 1;
      }
    }
  if (!strcmp("ResultTCoordsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResultTCoordsOff();
      return 1;
      }
    }
  if (!strcmp("SetAttributeMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAttributeMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAttributeMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAttributeMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAttributeModeToDefault",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetAttributeModeToDefault();
      return 1;
      }
    }
  if (!strcmp("SetAttributeModeToUsePointData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetAttributeModeToUsePointData();
      return 1;
      }
    }
  if (!strcmp("SetAttributeModeToUseCellData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetAttributeModeToUseCellData();
      return 1;
      }
    }
  if (!strcmp("SetAttributeModeToUseVertexData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetAttributeModeToUseVertexData();
      return 1;
      }
    }
  if (!strcmp("SetAttributeModeToUseEdgeData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetAttributeModeToUseEdgeData();
      return 1;
      }
    }
  if (!strcmp("GetAttributeModeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetAttributeModeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoveAllVariables",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllVariables();
      return 1;
      }
    }
  if (!strcmp("RemoveScalarVariables",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveScalarVariables();
      return 1;
      }
    }
  if (!strcmp("RemoveVectorVariables",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveVectorVariables();
      return 1;
      }
    }
  if (!strcmp("RemoveCoordinateScalarVariables",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveCoordinateScalarVariables();
      return 1;
      }
    }
  if (!strcmp("RemoveCoordinateVectorVariables",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveCoordinateVectorVariables();
      return 1;
      }
    }
  if (!strcmp("GetScalarArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetScalarArrayName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVectorArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetVectorArrayName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetScalarVariableName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetScalarVariableName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVectorVariableName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetVectorVariableName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSelectedScalarComponent",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetSelectedScalarComponent(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfScalarArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfScalarArrays();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfVectorArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfVectorArrays();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetReplaceInvalidValues",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetReplaceInvalidValues(temp0);
      return 1;
      }
    }
  if (!strcmp("GetReplaceInvalidValues",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetReplaceInvalidValues();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReplaceInvalidValuesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReplaceInvalidValuesOn();
      return 1;
      }
    }
  if (!strcmp("ReplaceInvalidValuesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReplaceInvalidValuesOff();
      return 1;
      }
    }
  if (!strcmp("SetReplacementValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetReplacementValue(temp0);
      return 1;
      }
    }
  if (!strcmp("GetReplacementValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetReplacementValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkDataSetAlgorithm";
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
  vtkmsg << "Object type: vtkArrayCalculator, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkArrayCalculator_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkArrayCalculator", vtkArrayCalculatorClientServerNewCommand);
    csi->AddCommandFunction("vtkArrayCalculator", vtkArrayCalculatorCommand);
    }
}
