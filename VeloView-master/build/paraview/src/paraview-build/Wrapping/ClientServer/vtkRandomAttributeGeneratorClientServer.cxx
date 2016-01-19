// ClientServer wrapper for vtkRandomAttributeGenerator object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkRandomAttributeGenerator.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkRandomAttributeGeneratorClientServerNewCommand(void* /*ctx*/)
{
  return vtkRandomAttributeGenerator::New();
}


int VTK_EXPORT vtkRandomAttributeGeneratorCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkRandomAttributeGenerator *op = vtkRandomAttributeGenerator::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkRandomAttributeGenerator.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRandomAttributeGenerator  *temp20;
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
    vtkRandomAttributeGenerator  *temp20;
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
    vtkRandomAttributeGenerator  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDataType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDataType(temp0);
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToBit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToBit();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToChar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToChar();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToUnsignedChar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToUnsignedChar();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToShort",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToShort();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToUnsignedShort",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToUnsignedShort();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToInt",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToInt();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToUnsignedInt",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToUnsignedInt();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToLong",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToLong();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToUnsignedLong",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToUnsignedLong();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToFloat",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToFloat();
      return 1;
      }
    }
  if (!strcmp("SetDataTypeToDouble",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDataTypeToDouble();
      return 1;
      }
    }
  if (!strcmp("GetDataType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDataType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfComponents",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfComponents(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfComponentsMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfComponentsMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfComponentsMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfComponentsMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfComponents",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfComponents();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMinimumComponentValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMinimumComponentValue(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMinimumComponentValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMinimumComponentValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetComponentRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetComponentRange(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetMaximumComponentValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumComponentValue(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaximumComponentValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaximumComponentValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfTuples",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfTuples(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfTuplesMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetNumberOfTuplesMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfTuplesMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetNumberOfTuplesMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfTuples",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetNumberOfTuples();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGeneratePointScalars",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGeneratePointScalars(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGeneratePointScalars",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGeneratePointScalars();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GeneratePointScalarsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePointScalarsOn();
      return 1;
      }
    }
  if (!strcmp("GeneratePointScalarsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePointScalarsOff();
      return 1;
      }
    }
  if (!strcmp("SetGeneratePointVectors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGeneratePointVectors(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGeneratePointVectors",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGeneratePointVectors();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GeneratePointVectorsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePointVectorsOn();
      return 1;
      }
    }
  if (!strcmp("GeneratePointVectorsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePointVectorsOff();
      return 1;
      }
    }
  if (!strcmp("SetGeneratePointNormals",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGeneratePointNormals(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGeneratePointNormals",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGeneratePointNormals();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GeneratePointNormalsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePointNormalsOn();
      return 1;
      }
    }
  if (!strcmp("GeneratePointNormalsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePointNormalsOff();
      return 1;
      }
    }
  if (!strcmp("SetGeneratePointTensors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGeneratePointTensors(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGeneratePointTensors",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGeneratePointTensors();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GeneratePointTensorsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePointTensorsOn();
      return 1;
      }
    }
  if (!strcmp("GeneratePointTensorsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePointTensorsOff();
      return 1;
      }
    }
  if (!strcmp("SetGeneratePointTCoords",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGeneratePointTCoords(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGeneratePointTCoords",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGeneratePointTCoords();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GeneratePointTCoordsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePointTCoordsOn();
      return 1;
      }
    }
  if (!strcmp("GeneratePointTCoordsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePointTCoordsOff();
      return 1;
      }
    }
  if (!strcmp("SetGeneratePointArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGeneratePointArray(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGeneratePointArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGeneratePointArray();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GeneratePointArrayOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePointArrayOn();
      return 1;
      }
    }
  if (!strcmp("GeneratePointArrayOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePointArrayOff();
      return 1;
      }
    }
  if (!strcmp("SetGenerateCellScalars",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateCellScalars(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateCellScalars",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateCellScalars();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateCellScalarsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellScalarsOn();
      return 1;
      }
    }
  if (!strcmp("GenerateCellScalarsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellScalarsOff();
      return 1;
      }
    }
  if (!strcmp("SetGenerateCellVectors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateCellVectors(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateCellVectors",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateCellVectors();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateCellVectorsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellVectorsOn();
      return 1;
      }
    }
  if (!strcmp("GenerateCellVectorsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellVectorsOff();
      return 1;
      }
    }
  if (!strcmp("SetGenerateCellNormals",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateCellNormals(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateCellNormals",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateCellNormals();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateCellNormalsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellNormalsOn();
      return 1;
      }
    }
  if (!strcmp("GenerateCellNormalsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellNormalsOff();
      return 1;
      }
    }
  if (!strcmp("SetGenerateCellTensors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateCellTensors(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateCellTensors",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateCellTensors();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateCellTensorsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellTensorsOn();
      return 1;
      }
    }
  if (!strcmp("GenerateCellTensorsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellTensorsOff();
      return 1;
      }
    }
  if (!strcmp("SetGenerateCellTCoords",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateCellTCoords(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateCellTCoords",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateCellTCoords();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateCellTCoordsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellTCoordsOn();
      return 1;
      }
    }
  if (!strcmp("GenerateCellTCoordsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellTCoordsOff();
      return 1;
      }
    }
  if (!strcmp("SetGenerateCellArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateCellArray(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateCellArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateCellArray();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateCellArrayOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellArrayOn();
      return 1;
      }
    }
  if (!strcmp("GenerateCellArrayOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateCellArrayOff();
      return 1;
      }
    }
  if (!strcmp("SetGenerateFieldArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateFieldArray(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateFieldArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateFieldArray();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateFieldArrayOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateFieldArrayOn();
      return 1;
      }
    }
  if (!strcmp("GenerateFieldArrayOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateFieldArrayOff();
      return 1;
      }
    }
  if (!strcmp("SetAttributesConstantPerBlock",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAttributesConstantPerBlock(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAttributesConstantPerBlock",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetAttributesConstantPerBlock();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AttributesConstantPerBlockOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AttributesConstantPerBlockOn();
      return 1;
      }
    }
  if (!strcmp("AttributesConstantPerBlockOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AttributesConstantPerBlockOff();
      return 1;
      }
    }
  if (!strcmp("GenerateAllPointDataOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateAllPointDataOn();
      return 1;
      }
    }
  if (!strcmp("GenerateAllPointDataOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateAllPointDataOff();
      return 1;
      }
    }
  if (!strcmp("GenerateAllCellDataOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateAllCellDataOn();
      return 1;
      }
    }
  if (!strcmp("GenerateAllCellDataOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateAllCellDataOff();
      return 1;
      }
    }
  if (!strcmp("GenerateAllDataOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateAllDataOn();
      return 1;
      }
    }
  if (!strcmp("GenerateAllDataOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateAllDataOff();
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
  vtkmsg << "Object type: vtkRandomAttributeGenerator, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkRandomAttributeGenerator_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkRandomAttributeGenerator", vtkRandomAttributeGeneratorClientServerNewCommand);
    csi->AddCommandFunction("vtkRandomAttributeGenerator", vtkRandomAttributeGeneratorCommand);
    }
}
