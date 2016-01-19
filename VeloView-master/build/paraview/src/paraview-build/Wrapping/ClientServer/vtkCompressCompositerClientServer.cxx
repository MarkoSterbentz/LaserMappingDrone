// ClientServer wrapper for vtkCompressCompositer object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkCompressCompositer.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkCompressCompositerClientServerNewCommand(void* /*ctx*/)
{
  return vtkCompressCompositer::New();
}


int VTK_EXPORT vtkCompressCompositerCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkCompressCompositer *op = vtkCompressCompositer::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkCompressCompositer.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCompressCompositer  *temp20;
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
    vtkCompressCompositer  *temp20;
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
    vtkCompressCompositer  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CompositeBuffer",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkDataArray  *temp0;
    vtkFloatArray  *temp1;
    vtkDataArray  *temp2;
    vtkFloatArray  *temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkFloatArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkFloatArray"))
      {
      op->CompositeBuffer(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("Compress",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkFloatArray  *temp0;
    vtkDataArray  *temp1;
    vtkFloatArray  *temp2;
    vtkDataArray  *temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkFloatArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkFloatArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkDataArray"))
      {
      op->Compress(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("Uncompress",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkFloatArray  *temp0;
    vtkDataArray  *temp1;
    vtkFloatArray  *temp2;
    vtkDataArray  *temp3;
    int      temp4;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkFloatArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkFloatArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkDataArray") &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->Uncompress(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("CompositeImagePair",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkFloatArray  *temp0;
    vtkDataArray  *temp1;
    vtkFloatArray  *temp2;
    vtkDataArray  *temp3;
    vtkFloatArray  *temp4;
    vtkDataArray  *temp5;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkFloatArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkFloatArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkFloatArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkDataArray"))
      {
      op->CompositeImagePair(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }

  {
    const char* commandName = "vtkCompositer";
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
  vtkmsg << "Object type: vtkCompressCompositer, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkCompressCompositer_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkCompressCompositer", vtkCompressCompositerClientServerNewCommand);
    csi->AddCommandFunction("vtkCompressCompositer", vtkCompressCompositerCommand);
    }
}
