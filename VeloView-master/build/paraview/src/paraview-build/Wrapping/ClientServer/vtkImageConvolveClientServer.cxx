// ClientServer wrapper for vtkImageConvolve object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkImageConvolve.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkImageConvolveClientServerNewCommand(void* /*ctx*/)
{
  return vtkImageConvolve::New();
}


int VTK_EXPORT vtkImageConvolveCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkImageConvolve *op = vtkImageConvolve::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkImageConvolve.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageConvolve  *temp20;
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
    vtkImageConvolve  *temp20;
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
    vtkImageConvolve  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKernelSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int     *temp20;
      {
      temp20 = (op)->GetKernelSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetKernel3x3",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[9];
    if(msg.GetArgument(0, 2, temp0, 9))
      {
      op->SetKernel3x3(temp0);
      return 1;
      }
    }
  if (!strcmp("SetKernel5x5",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[25];
    if(msg.GetArgument(0, 2, temp0, 25))
      {
      op->SetKernel5x5(temp0);
      return 1;
      }
    }
  if (!strcmp("GetKernel3x3",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[9];
    if(msg.GetArgument(0, 2, temp0, 9))
      {
      op->GetKernel3x3(temp0);
      return 1;
      }
    }
  if (!strcmp("GetKernel5x5",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[25];
    if(msg.GetArgument(0, 2, temp0, 25))
      {
      op->GetKernel5x5(temp0);
      return 1;
      }
    }
  if (!strcmp("SetKernel3x3x3",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[27];
    if(msg.GetArgument(0, 2, temp0, 27))
      {
      op->SetKernel3x3x3(temp0);
      return 1;
      }
    }
  if (!strcmp("GetKernel3x3x3",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[27];
    if(msg.GetArgument(0, 2, temp0, 27))
      {
      op->GetKernel3x3x3(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkThreadedImageAlgorithm";
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
  vtkmsg << "Object type: vtkImageConvolve, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkImageConvolve_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkImageConvolve", vtkImageConvolveClientServerNewCommand);
    csi->AddCommandFunction("vtkImageConvolve", vtkImageConvolveCommand);
    }
}
