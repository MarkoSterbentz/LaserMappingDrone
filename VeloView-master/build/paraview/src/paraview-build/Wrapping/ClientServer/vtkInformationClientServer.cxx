// ClientServer wrapper for vtkInformation object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkInformation.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkInformationClientServerNewCommand(void* /*ctx*/)
{
  return vtkInformation::New();
}


int VTK_EXPORT vtkInformationCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkInformation *op = vtkInformation::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkInformation.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformation  *temp20;
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
    vtkInformation  *temp20;
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
    vtkInformation  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("Modified",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationKey"))
      {
      op->Modified(temp0);
      return 1;
      }
    }
  if (!strcmp("Clear",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Clear();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfKeys",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfKeys();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Copy",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformation  *temp0;
    int      temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Copy(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("CopyEntry",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkInformationKey  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationKey") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyEntry(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyEntry",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkInformationDataObjectKey  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationDataObjectKey") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyEntry(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyEntry",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkInformationDoubleVectorKey  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationDoubleVectorKey") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyEntry(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyEntry",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkInformationVariantKey  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationVariantKey") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyEntry(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyEntry",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkInformationVariantVectorKey  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationVariantVectorKey") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyEntry(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyEntry",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkInformationInformationKey  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationInformationKey") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyEntry(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyEntry",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkInformationInformationVectorKey  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationInformationVectorKey") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyEntry(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyEntry",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkInformationIntegerKey  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationIntegerKey") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyEntry(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyEntry",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkInformationIntegerVectorKey  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationIntegerVectorKey") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyEntry(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyEntry",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkInformationRequestKey  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationRequestKey") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyEntry(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyEntry",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkInformationStringKey  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationStringKey") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyEntry(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyEntry",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkInformationStringVectorKey  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationStringVectorKey") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyEntry(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyEntry",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkInformationUnsignedLongKey  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationUnsignedLongKey") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyEntry(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CopyEntries",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformation  *temp0;
    vtkInformationKeyVectorKey  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationKeyVectorKey") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CopyEntries(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationRequestKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationRequestKey"))
      {
      op->Set(temp0);
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationRequestKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationRequestKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationRequestKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationRequestKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationIntegerKey  *temp0;
    int      temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerKey") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Set(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationIntegerKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerKey"))
      {
      temp20 = (op)->Get(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationIntegerKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationIntegerKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationIdTypeKey  *temp0;
    vtkIdType   temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIdTypeKey") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Set(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationIdTypeKey  *temp0;
    vtkIdType   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIdTypeKey"))
      {
      temp20 = (op)->Get(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationIdTypeKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIdTypeKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationIdTypeKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIdTypeKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationDoubleKey  *temp0;
    double   temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDoubleKey") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Set(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationDoubleKey  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDoubleKey"))
      {
      temp20 = (op)->Get(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationDoubleKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDoubleKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationDoubleKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDoubleKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationVariantKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationVariantKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationVariantKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationVariantKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Append",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationIntegerVectorKey  *temp0;
    int      temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerVectorKey") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Append(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformationIntegerVectorKey  *temp0;
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerVectorKey") &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->Set(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkInformationIntegerVectorKey  *temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerVectorKey") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->Set(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 9)
    {
    vtkInformationIntegerVectorKey  *temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    int      temp4;
    int      temp5;
    int      temp6;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerVectorKey") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6))
      {
      op->Set(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationIntegerVectorKey  *temp0;
    int      temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerVectorKey") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->Get(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationIntegerVectorKey  *temp0;
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerVectorKey") &&
      temp1)
      {
      op->Get(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Length",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationIntegerVectorKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerVectorKey"))
      {
      temp20 = (op)->Length(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationIntegerVectorKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerVectorKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationIntegerVectorKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerVectorKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Append",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationStringVectorKey  *temp0;
    char    *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationStringVectorKey") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Append(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformationStringVectorKey  *temp0;
    char    *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationStringVectorKey") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->Set(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationStringVectorKey  *temp0;
    int      temp1;
    const char    *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationStringVectorKey") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->Get(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Length",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationStringVectorKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationStringVectorKey"))
      {
      temp20 = (op)->Length(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationStringVectorKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationStringVectorKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationStringVectorKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationStringVectorKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformationIntegerPointerKey  *temp0;
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerPointerKey") &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->Set(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationIntegerPointerKey  *temp0;
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerPointerKey") &&
      temp1)
      {
      op->Get(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Length",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationIntegerPointerKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerPointerKey"))
      {
      temp20 = (op)->Length(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationIntegerPointerKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerPointerKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationIntegerPointerKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerPointerKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationUnsignedLongKey  *temp0;
    unsigned long     temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationUnsignedLongKey") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Set(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationUnsignedLongKey  *temp0;
    unsigned long     temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationUnsignedLongKey"))
      {
      temp20 = (op)->Get(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationUnsignedLongKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationUnsignedLongKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationUnsignedLongKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationUnsignedLongKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Append",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationDoubleVectorKey  *temp0;
    double   temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDoubleVectorKey") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Append(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformationDoubleVectorKey  *temp0;
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDoubleVectorKey") &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->Set(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkInformationDoubleVectorKey  *temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDoubleVectorKey") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->Set(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 9)
    {
    vtkInformationDoubleVectorKey  *temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    double   temp4;
    double   temp5;
    double   temp6;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDoubleVectorKey") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6))
      {
      op->Set(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationDoubleVectorKey  *temp0;
    int      temp1;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDoubleVectorKey") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->Get(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationDoubleVectorKey  *temp0;
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDoubleVectorKey") &&
      temp1)
      {
      op->Get(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Length",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationDoubleVectorKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDoubleVectorKey"))
      {
      temp20 = (op)->Length(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationDoubleVectorKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDoubleVectorKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationDoubleVectorKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDoubleVectorKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkInformationVariantVectorKey  *temp0;
    vtkVariant  *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationVariantVectorKey") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkVariant") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->Set(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationVariantVectorKey  *temp0;
    const vtkVariant  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationVariantVectorKey"))
      {
      temp20 = (op)->Get(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationVariantVectorKey  *temp0;
    vtkVariant  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationVariantVectorKey") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkVariant"))
      {
      op->Get(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Length",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationVariantVectorKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationVariantVectorKey"))
      {
      temp20 = (op)->Length(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationVariantVectorKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationVariantVectorKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationVariantVectorKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationVariantVectorKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Append",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationKeyVectorKey  *temp0;
    vtkInformationKey  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationKeyVectorKey") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationKey"))
      {
      op->Append(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("AppendUnique",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationKeyVectorKey  *temp0;
    vtkInformationKey  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationKeyVectorKey") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationKey"))
      {
      op->AppendUnique(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationKeyVectorKey  *temp0;
    vtkInformationKey  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationKeyVectorKey") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationKey"))
      {
      op->Remove(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationKeyVectorKey  *temp0;
    int      temp1;
    vtkInformationKey  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationKeyVectorKey") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->Get(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Length",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationKeyVectorKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationKeyVectorKey"))
      {
      temp20 = (op)->Length(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationKeyVectorKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationKeyVectorKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationKeyVectorKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationKeyVectorKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationStringKey  *temp0;
    char    *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationStringKey") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Set(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationStringKey  *temp0;
    const char    *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationStringKey"))
      {
      temp20 = (op)->Get(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationStringKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationStringKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationStringKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationStringKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationInformationKey  *temp0;
    vtkInformation  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationInformationKey") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformation"))
      {
      op->Set(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationInformationKey  *temp0;
    vtkInformation  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationInformationKey"))
      {
      temp20 = (op)->Get(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationInformationKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationInformationKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationInformationKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationInformationKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationInformationVectorKey  *temp0;
    vtkInformationVector  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationInformationVectorKey") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformationVector"))
      {
      op->Set(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationInformationVectorKey  *temp0;
    vtkInformationVector  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationInformationVectorKey"))
      {
      temp20 = (op)->Get(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationInformationVectorKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationInformationVectorKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationInformationVectorKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationInformationVectorKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationObjectBaseKey  *temp0;
    vtkObjectBase  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationObjectBaseKey") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkObjectBase"))
      {
      op->Set(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationObjectBaseKey  *temp0;
    vtkObjectBase  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationObjectBaseKey"))
      {
      temp20 = (op)->Get(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationObjectBaseKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationObjectBaseKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationObjectBaseKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationObjectBaseKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Set",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkInformationDataObjectKey  *temp0;
    vtkDataObject  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDataObjectKey") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataObject"))
      {
      op->Set(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Get",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationDataObjectKey  *temp0;
    vtkDataObject  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDataObjectKey"))
      {
      temp20 = (op)->Get(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Remove",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationDataObjectKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDataObjectKey"))
      {
      op->Remove(temp0);
      return 1;
      }
    }
  if (!strcmp("Has",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationDataObjectKey  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDataObjectKey"))
      {
      temp20 = (op)->Has(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationDataObjectKey  *temp0;
    vtkInformationKey  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDataObjectKey"))
      {
      temp20 = (op)->GetKey(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationDoubleKey  *temp0;
    vtkInformationKey  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDoubleKey"))
      {
      temp20 = (op)->GetKey(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationDoubleVectorKey  *temp0;
    vtkInformationKey  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationDoubleVectorKey"))
      {
      temp20 = (op)->GetKey(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationInformationKey  *temp0;
    vtkInformationKey  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationInformationKey"))
      {
      temp20 = (op)->GetKey(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationInformationVectorKey  *temp0;
    vtkInformationKey  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationInformationVectorKey"))
      {
      temp20 = (op)->GetKey(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationIntegerKey  *temp0;
    vtkInformationKey  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerKey"))
      {
      temp20 = (op)->GetKey(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationIntegerVectorKey  *temp0;
    vtkInformationKey  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationIntegerVectorKey"))
      {
      temp20 = (op)->GetKey(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationRequestKey  *temp0;
    vtkInformationKey  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationRequestKey"))
      {
      temp20 = (op)->GetKey(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationStringKey  *temp0;
    vtkInformationKey  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationStringKey"))
      {
      temp20 = (op)->GetKey(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationStringVectorKey  *temp0;
    vtkInformationKey  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationStringVectorKey"))
      {
      temp20 = (op)->GetKey(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationKey  *temp0;
    vtkInformationKey  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationKey"))
      {
      temp20 = (op)->GetKey(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationUnsignedLongKey  *temp0;
    vtkInformationKey  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationUnsignedLongKey"))
      {
      temp20 = (op)->GetKey(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationVariantKey  *temp0;
    vtkInformationKey  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationVariantKey"))
      {
      temp20 = (op)->GetKey(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKey",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationVariantVectorKey  *temp0;
    vtkInformationKey  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationVariantVectorKey"))
      {
      temp20 = (op)->GetKey(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Register",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObjectBase  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObjectBase"))
      {
      op->Register(temp0);
      return 1;
      }
    }
  if (!strcmp("UnRegister",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObjectBase  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObjectBase"))
      {
      op->UnRegister(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRequest",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformationRequestKey  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformationRequestKey"))
      {
      op->SetRequest(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRequest",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationRequestKey  *temp20;
      {
      temp20 = (op)->GetRequest();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkObject";
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
  vtkmsg << "Object type: vtkInformation, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkInformation_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkInformation", vtkInformationClientServerNewCommand);
    csi->AddCommandFunction("vtkInformation", vtkInformationCommand);
    }
}
