// ClientServer wrapper for vtkBitArray object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkBitArray.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkBitArrayClientServerNewCommand(void* /*ctx*/)
{
  return vtkBitArray::New();
}


int VTK_EXPORT vtkBitArrayCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkBitArray *op = vtkBitArray::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkBitArray.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkBitArray  *temp20;
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
    vtkBitArray  *temp20;
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
    vtkBitArray  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Allocate",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkIdType   temp1;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->Allocate(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("GetDataTypeSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDataTypeSize();
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
  if (!strcmp("SetTuple",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkIdType   temp0;
    vtkIdType   temp1;
    vtkAbstractArray  *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkAbstractArray"))
      {
      op->SetTuple(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("InsertTuple",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkIdType   temp0;
    vtkIdType   temp1;
    vtkAbstractArray  *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkAbstractArray"))
      {
      op->InsertTuple(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("InsertTuples",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkIdList  *temp0;
    vtkIdList  *temp1;
    vtkAbstractArray  *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkIdList") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIdList") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkAbstractArray"))
      {
      op->InsertTuples(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("InsertTuples",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkIdType   temp0;
    vtkIdType   temp1;
    vtkIdType   temp2;
    vtkAbstractArray  *temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkAbstractArray"))
      {
      op->InsertTuples(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("InsertNextTuple",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkAbstractArray  *temp1;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkAbstractArray"))
      {
      temp20 = (op)->InsertNextTuple(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTuple",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1)
      {
      op->GetTuple(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetTuple",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1)
      {
      op->SetTuple(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetTuple",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1)
      {
      op->SetTuple(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("InsertTuple",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1)
      {
      op->InsertTuple(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("InsertTuple",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1)
      {
      op->InsertTuple(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("InsertNextTuple",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkIdType   temp20;
    if(temp0)
      {
      temp20 = (op)->InsertNextTuple(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InsertNextTuple",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkIdType   temp20;
    if(temp0)
      {
      temp20 = (op)->InsertNextTuple(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoveTuple",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemoveTuple(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveFirstTuple",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveFirstTuple();
      return 1;
      }
    }
  if (!strcmp("RemoveLastTuple",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveLastTuple();
      return 1;
      }
    }
  if (!strcmp("SetComponent",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkIdType   temp0;
    int      temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetComponent(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("Squeeze",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Squeeze();
      return 1;
      }
    }
  if (!strcmp("Resize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->Resize(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetValue(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfValues",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfValues(temp0);
      return 1;
      }
    }
  if (!strcmp("SetValue",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetValue(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("InsertValue",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->InsertValue(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("InsertNextValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->InsertNextValue(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InsertComponent",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkIdType   temp0;
    int      temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->InsertComponent(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("DeepCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataArray  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray"))
      {
      op->DeepCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("DeepCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractArray  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractArray"))
      {
      op->DeepCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("NewIterator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkArrayIterator  *temp20;
      {
      temp20 = (op)->NewIterator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LookupValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->LookupValue(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LookupValue",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkIdList  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIdList"))
      {
      op->LookupValue(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DataChanged",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DataChanged();
      return 1;
      }
    }
  if (!strcmp("ClearLookup",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearLookup();
      return 1;
      }
    }

  {
    const char* commandName = "vtkDataArray";
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
  vtkmsg << "Object type: vtkBitArray, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkBitArray_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkBitArray", vtkBitArrayClientServerNewCommand);
    csi->AddCommandFunction("vtkBitArray", vtkBitArrayCommand);
    }
}
