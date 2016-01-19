// ClientServer wrapper for vtkDelimitedTextReader object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkDelimitedTextReader.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkDelimitedTextReaderClientServerNewCommand(void* /*ctx*/)
{
  return vtkDelimitedTextReader::New();
}


int VTK_EXPORT vtkDelimitedTextReaderCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkDelimitedTextReader *op = vtkDelimitedTextReader::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkDelimitedTextReader.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDelimitedTextReader  *temp20;
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
    vtkDelimitedTextReader  *temp20;
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
    vtkDelimitedTextReader  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFileName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetFileName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFileName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFileName(temp0);
      return 1;
      }
    }
  if (!strcmp("SetInputString",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInputString(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInputString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetInputString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInputString",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetInputString(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetInputStringLength",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInputStringLength();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInputString",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInputString(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("SetReadFromInputString",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetReadFromInputString(temp0);
      return 1;
      }
    }
  if (!strcmp("GetReadFromInputString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetReadFromInputString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReadFromInputStringOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReadFromInputStringOn();
      return 1;
      }
    }
  if (!strcmp("ReadFromInputStringOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReadFromInputStringOff();
      return 1;
      }
    }
  if (!strcmp("GetUnicodeCharacterSet",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetUnicodeCharacterSet();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUnicodeCharacterSet",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUnicodeCharacterSet(temp0);
      return 1;
      }
    }
  if (!strcmp("SetUTF8RecordDelimiters",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUTF8RecordDelimiters(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUTF8RecordDelimiters",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetUTF8RecordDelimiters();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFieldDelimiterCharacters",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFieldDelimiterCharacters(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFieldDelimiterCharacters",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetFieldDelimiterCharacters();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUTF8FieldDelimiters",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUTF8FieldDelimiters(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUTF8FieldDelimiters",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetUTF8FieldDelimiters();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetStringDelimiter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char     temp20;
      {
      temp20 = (op)->GetStringDelimiter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetStringDelimiter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char     temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetStringDelimiter(temp0);
      return 1;
      }
    }
  if (!strcmp("SetUTF8StringDelimiters",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUTF8StringDelimiters(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUTF8StringDelimiters",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetUTF8StringDelimiters();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseStringDelimiter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseStringDelimiter(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseStringDelimiter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseStringDelimiter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseStringDelimiterOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseStringDelimiterOn();
      return 1;
      }
    }
  if (!strcmp("UseStringDelimiterOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseStringDelimiterOff();
      return 1;
      }
    }
  if (!strcmp("GetHaveHeaders",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetHaveHeaders();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetHaveHeaders",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetHaveHeaders(temp0);
      return 1;
      }
    }
  if (!strcmp("SetMergeConsecutiveDelimiters",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMergeConsecutiveDelimiters(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMergeConsecutiveDelimiters",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetMergeConsecutiveDelimiters();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MergeConsecutiveDelimitersOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MergeConsecutiveDelimitersOn();
      return 1;
      }
    }
  if (!strcmp("MergeConsecutiveDelimitersOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MergeConsecutiveDelimitersOff();
      return 1;
      }
    }
  if (!strcmp("GetMaxRecords",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetMaxRecords();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaxRecords",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaxRecords(temp0);
      return 1;
      }
    }
  if (!strcmp("SetDetectNumericColumns",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDetectNumericColumns(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDetectNumericColumns",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetDetectNumericColumns();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DetectNumericColumnsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DetectNumericColumnsOn();
      return 1;
      }
    }
  if (!strcmp("DetectNumericColumnsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DetectNumericColumnsOff();
      return 1;
      }
    }
  if (!strcmp("SetForceDouble",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetForceDouble(temp0);
      return 1;
      }
    }
  if (!strcmp("GetForceDouble",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetForceDouble();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ForceDoubleOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ForceDoubleOn();
      return 1;
      }
    }
  if (!strcmp("ForceDoubleOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ForceDoubleOff();
      return 1;
      }
    }
  if (!strcmp("SetTrimWhitespacePriorToNumericConversion",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTrimWhitespacePriorToNumericConversion(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTrimWhitespacePriorToNumericConversion",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetTrimWhitespacePriorToNumericConversion();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TrimWhitespacePriorToNumericConversionOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TrimWhitespacePriorToNumericConversionOn();
      return 1;
      }
    }
  if (!strcmp("TrimWhitespacePriorToNumericConversionOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TrimWhitespacePriorToNumericConversionOff();
      return 1;
      }
    }
  if (!strcmp("SetDefaultIntegerValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDefaultIntegerValue(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDefaultIntegerValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDefaultIntegerValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDefaultDoubleValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDefaultDoubleValue(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDefaultDoubleValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDefaultDoubleValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPedigreeIdArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPedigreeIdArrayName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPedigreeIdArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetPedigreeIdArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGeneratePedigreeIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGeneratePedigreeIds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGeneratePedigreeIds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetGeneratePedigreeIds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GeneratePedigreeIdsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePedigreeIdsOn();
      return 1;
      }
    }
  if (!strcmp("GeneratePedigreeIdsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePedigreeIdsOff();
      return 1;
      }
    }
  if (!strcmp("SetOutputPedigreeIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutputPedigreeIds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutputPedigreeIds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetOutputPedigreeIds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("OutputPedigreeIdsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OutputPedigreeIdsOn();
      return 1;
      }
    }
  if (!strcmp("OutputPedigreeIdsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OutputPedigreeIdsOff();
      return 1;
      }
    }
  if (!strcmp("GetLastError",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStdString   temp20;
      {
      temp20 = (op)->GetLastError();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetReplacementCharacter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetReplacementCharacter(temp0);
      return 1;
      }
    }
  if (!strcmp("GetReplacementCharacter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetReplacementCharacter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  vtkmsg << "Object type: vtkDelimitedTextReader, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkDelimitedTextReader_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkDelimitedTextReader", vtkDelimitedTextReaderClientServerNewCommand);
    csi->AddCommandFunction("vtkDelimitedTextReader", vtkDelimitedTextReaderCommand);
    }
}
