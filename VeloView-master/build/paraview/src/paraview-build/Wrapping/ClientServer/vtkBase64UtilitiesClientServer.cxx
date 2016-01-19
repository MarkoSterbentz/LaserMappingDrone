// ClientServer wrapper for vtkBase64Utilities object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkBase64Utilities.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkBase64UtilitiesClientServerNewCommand(void* /*ctx*/)
{
  return vtkBase64Utilities::New();
}


int VTK_EXPORT vtkBase64UtilitiesCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkBase64Utilities *op = vtkBase64Utilities::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkBase64Utilities.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkBase64Utilities  *temp20;
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
    vtkBase64Utilities  *temp20;
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
    vtkBase64Utilities  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EncodeTriplet",method) && msg.GetNumberOfArguments(0) == 9)
    {
    unsigned char     temp0;
    unsigned char     temp1;
    unsigned char     temp2;
    vtkClientServerStreamDataArg<unsigned char   > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<unsigned char   > temp4(msg, 0, 6);
    vtkClientServerStreamDataArg<unsigned char   > temp5(msg, 0, 7);
    vtkClientServerStreamDataArg<unsigned char   > temp6(msg, 0, 8);
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      temp4 &&
      temp5 &&
      temp6)
      {
      op->EncodeTriplet(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      return 1;
      }
    }
  if (!strcmp("EncodePair",method) && msg.GetNumberOfArguments(0) == 8)
    {
    unsigned char     temp0;
    unsigned char     temp1;
    vtkClientServerStreamDataArg<unsigned char   > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<unsigned char   > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<unsigned char   > temp4(msg, 0, 6);
    vtkClientServerStreamDataArg<unsigned char   > temp5(msg, 0, 7);
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      temp3 &&
      temp4 &&
      temp5)
      {
      op->EncodePair(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("EncodeSingle",method) && msg.GetNumberOfArguments(0) == 7)
    {
    unsigned char     temp0;
    vtkClientServerStreamDataArg<unsigned char   > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<unsigned char   > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<unsigned char   > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<unsigned char   > temp4(msg, 0, 6);
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1 &&
      temp2 &&
      temp3 &&
      temp4)
      {
      op->EncodeSingle(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("Encode",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned char   > temp0(msg, 0, 2);
    unsigned long     temp1;
    vtkClientServerStreamDataArg<unsigned char   > temp2(msg, 0, 4);
    int      temp3;
    unsigned long     temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Encode(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DecodeTriplet",method) && msg.GetNumberOfArguments(0) == 9)
    {
    unsigned char     temp0;
    unsigned char     temp1;
    unsigned char     temp2;
    unsigned char     temp3;
    vtkClientServerStreamDataArg<unsigned char   > temp4(msg, 0, 6);
    vtkClientServerStreamDataArg<unsigned char   > temp5(msg, 0, 7);
    vtkClientServerStreamDataArg<unsigned char   > temp6(msg, 0, 8);
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      temp4 &&
      temp5 &&
      temp6)
      {
      temp20 = (op)->DecodeTriplet(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Decode",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<unsigned char   > temp0(msg, 0, 2);
    unsigned long     temp1;
    vtkClientServerStreamDataArg<unsigned char   > temp2(msg, 0, 4);
    unsigned long     temp3;
    unsigned long     temp20;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Decode(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  vtkmsg << "Object type: vtkBase64Utilities, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkBase64Utilities_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkBase64Utilities", vtkBase64UtilitiesClientServerNewCommand);
    csi->AddCommandFunction("vtkBase64Utilities", vtkBase64UtilitiesCommand);
    }
}
