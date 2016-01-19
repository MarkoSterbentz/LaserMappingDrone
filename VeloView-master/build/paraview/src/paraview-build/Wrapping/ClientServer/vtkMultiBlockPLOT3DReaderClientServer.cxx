// ClientServer wrapper for vtkMultiBlockPLOT3DReader object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkMultiBlockPLOT3DReader.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkMultiBlockPLOT3DReaderClientServerNewCommand(void* /*ctx*/)
{
  return vtkMultiBlockPLOT3DReader::New();
}


int VTK_EXPORT vtkMultiBlockPLOT3DReaderCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkMultiBlockPLOT3DReader *op = vtkMultiBlockPLOT3DReader::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkMultiBlockPLOT3DReader.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkMultiBlockPLOT3DReader  *temp20;
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
    vtkMultiBlockPLOT3DReader  *temp20;
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
    vtkMultiBlockPLOT3DReader  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("GetFileName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetFileName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetXYZFileName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetXYZFileName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXYZFileName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetXYZFileName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetQFileName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetQFileName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetQFileName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetQFileName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFunctionFileName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFunctionFileName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFunctionFileName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetFunctionFileName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAutoDetectFormat",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAutoDetectFormat(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAutoDetectFormat",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutoDetectFormat();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AutoDetectFormatOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutoDetectFormatOn();
      return 1;
      }
    }
  if (!strcmp("AutoDetectFormatOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutoDetectFormatOff();
      return 1;
      }
    }
  if (!strcmp("SetBinaryFile",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBinaryFile(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBinaryFile",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetBinaryFile();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("BinaryFileOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BinaryFileOn();
      return 1;
      }
    }
  if (!strcmp("BinaryFileOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BinaryFileOff();
      return 1;
      }
    }
  if (!strcmp("SetMultiGrid",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMultiGrid(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMultiGrid",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMultiGrid();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MultiGridOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MultiGridOn();
      return 1;
      }
    }
  if (!strcmp("MultiGridOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MultiGridOff();
      return 1;
      }
    }
  if (!strcmp("SetHasByteCount",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetHasByteCount(temp0);
      return 1;
      }
    }
  if (!strcmp("GetHasByteCount",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetHasByteCount();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HasByteCountOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->HasByteCountOn();
      return 1;
      }
    }
  if (!strcmp("HasByteCountOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->HasByteCountOff();
      return 1;
      }
    }
  if (!strcmp("SetIBlanking",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIBlanking(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIBlanking",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetIBlanking();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IBlankingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->IBlankingOn();
      return 1;
      }
    }
  if (!strcmp("IBlankingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->IBlankingOff();
      return 1;
      }
    }
  if (!strcmp("SetTwoDimensionalGeometry",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTwoDimensionalGeometry(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTwoDimensionalGeometry",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTwoDimensionalGeometry();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TwoDimensionalGeometryOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TwoDimensionalGeometryOn();
      return 1;
      }
    }
  if (!strcmp("TwoDimensionalGeometryOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TwoDimensionalGeometryOff();
      return 1;
      }
    }
  if (!strcmp("SetDoublePrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDoublePrecision(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDoublePrecision",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDoublePrecision();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DoublePrecisionOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DoublePrecisionOn();
      return 1;
      }
    }
  if (!strcmp("DoublePrecisionOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DoublePrecisionOff();
      return 1;
      }
    }
  if (!strcmp("SetForceRead",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetForceRead(temp0);
      return 1;
      }
    }
  if (!strcmp("GetForceRead",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetForceRead();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ForceReadOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ForceReadOn();
      return 1;
      }
    }
  if (!strcmp("ForceReadOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ForceReadOff();
      return 1;
      }
    }
  if (!strcmp("SetByteOrderToBigEndian",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetByteOrderToBigEndian();
      return 1;
      }
    }
  if (!strcmp("SetByteOrderToLittleEndian",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetByteOrderToLittleEndian();
      return 1;
      }
    }
  if (!strcmp("SetByteOrder",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetByteOrder(temp0);
      return 1;
      }
    }
  if (!strcmp("GetByteOrder",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetByteOrder();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetByteOrderAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetByteOrderAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetR",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetR(temp0);
      return 1;
      }
    }
  if (!strcmp("GetR",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetR();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGamma",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGamma(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGamma",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetGamma();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScalarFunctionNumber",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScalarFunctionNumber(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarFunctionNumber",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScalarFunctionNumber();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetVectorFunctionNumber",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVectorFunctionNumber(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVectorFunctionNumber",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetVectorFunctionNumber();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddFunction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddFunction(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveFunction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemoveFunction(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveAllFunctions",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllFunctions();
      return 1;
      }
    }
  if (!strcmp("CanReadBinaryFile",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->CanReadBinaryFile(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Modified",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Modified();
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
  vtkmsg << "Object type: vtkMultiBlockPLOT3DReader, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkMultiBlockPLOT3DReader_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkMultiBlockPLOT3DReader", vtkMultiBlockPLOT3DReaderClientServerNewCommand);
    csi->AddCommandFunction("vtkMultiBlockPLOT3DReader", vtkMultiBlockPLOT3DReaderCommand);
    }
}
