// ClientServer wrapper for vtkExodusIIWriter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkExodusIIWriter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkExodusIIWriterClientServerNewCommand(void* /*ctx*/)
{
  return vtkExodusIIWriter::New();
}


int VTK_EXPORT vtkExodusIIWriterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkExodusIIWriter *op = vtkExodusIIWriter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkExodusIIWriter.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkExodusIIWriter  *temp20;
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
    vtkExodusIIWriter  *temp20;
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
    vtkExodusIIWriter  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetModelMetadata",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkModelMetadata  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkModelMetadata"))
      {
      op->SetModelMetadata(temp0);
      return 1;
      }
    }
  if (!strcmp("GetModelMetadata",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkModelMetadata  *temp20;
      {
      temp20 = (op)->GetModelMetadata();
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
    char    *temp20;
      {
      temp20 = (op)->GetFileName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetStoreDoubles",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetStoreDoubles(temp0);
      return 1;
      }
    }
  if (!strcmp("GetStoreDoubles",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStoreDoubles();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGhostLevel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGhostLevel(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGhostLevel",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGhostLevel();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetWriteOutBlockIdArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetWriteOutBlockIdArray(temp0);
      return 1;
      }
    }
  if (!strcmp("GetWriteOutBlockIdArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetWriteOutBlockIdArray();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("WriteOutBlockIdArrayOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WriteOutBlockIdArrayOn();
      return 1;
      }
    }
  if (!strcmp("WriteOutBlockIdArrayOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WriteOutBlockIdArrayOff();
      return 1;
      }
    }
  if (!strcmp("SetWriteOutGlobalNodeIdArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetWriteOutGlobalNodeIdArray(temp0);
      return 1;
      }
    }
  if (!strcmp("GetWriteOutGlobalNodeIdArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetWriteOutGlobalNodeIdArray();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("WriteOutGlobalNodeIdArrayOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WriteOutGlobalNodeIdArrayOn();
      return 1;
      }
    }
  if (!strcmp("WriteOutGlobalNodeIdArrayOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WriteOutGlobalNodeIdArrayOff();
      return 1;
      }
    }
  if (!strcmp("SetWriteOutGlobalElementIdArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetWriteOutGlobalElementIdArray(temp0);
      return 1;
      }
    }
  if (!strcmp("GetWriteOutGlobalElementIdArray",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetWriteOutGlobalElementIdArray();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("WriteOutGlobalElementIdArrayOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WriteOutGlobalElementIdArrayOn();
      return 1;
      }
    }
  if (!strcmp("WriteOutGlobalElementIdArrayOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WriteOutGlobalElementIdArrayOff();
      return 1;
      }
    }
  if (!strcmp("SetWriteAllTimeSteps",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetWriteAllTimeSteps(temp0);
      return 1;
      }
    }
  if (!strcmp("GetWriteAllTimeSteps",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetWriteAllTimeSteps();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("WriteAllTimeStepsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WriteAllTimeStepsOn();
      return 1;
      }
    }
  if (!strcmp("WriteAllTimeStepsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WriteAllTimeStepsOff();
      return 1;
      }
    }
  if (!strcmp("SetBlockIdArrayName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBlockIdArrayName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBlockIdArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetBlockIdArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkWriter";
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
  vtkmsg << "Object type: vtkExodusIIWriter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkExodusIIWriter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkExodusIIWriter", vtkExodusIIWriterClientServerNewCommand);
    csi->AddCommandFunction("vtkExodusIIWriter", vtkExodusIIWriterCommand);
    }
}
