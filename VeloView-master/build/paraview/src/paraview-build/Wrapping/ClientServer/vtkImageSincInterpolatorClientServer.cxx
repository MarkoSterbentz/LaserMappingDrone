// ClientServer wrapper for vtkImageSincInterpolator object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkImageSincInterpolator.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkImageSincInterpolatorClientServerNewCommand(void* /*ctx*/)
{
  return vtkImageSincInterpolator::New();
}


int VTK_EXPORT vtkImageSincInterpolatorCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkImageSincInterpolator *op = vtkImageSincInterpolator::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkImageSincInterpolator.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageSincInterpolator  *temp20;
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
    vtkImageSincInterpolator  *temp20;
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
    vtkImageSincInterpolator  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetWindowFunction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetWindowFunction(temp0);
      return 1;
      }
    }
  if (!strcmp("SetWindowFunctionToLanczos",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetWindowFunctionToLanczos();
      return 1;
      }
    }
  if (!strcmp("SetWindowFunctionToKaiser",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetWindowFunctionToKaiser();
      return 1;
      }
    }
  if (!strcmp("SetWindowFunctionToCosine",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetWindowFunctionToCosine();
      return 1;
      }
    }
  if (!strcmp("SetWindowFunctionToHann",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetWindowFunctionToHann();
      return 1;
      }
    }
  if (!strcmp("SetWindowFunctionToHamming",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetWindowFunctionToHamming();
      return 1;
      }
    }
  if (!strcmp("SetWindowFunctionToBlackman",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetWindowFunctionToBlackman();
      return 1;
      }
    }
  if (!strcmp("SetWindowFunctionToBlackmanHarris3",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetWindowFunctionToBlackmanHarris3();
      return 1;
      }
    }
  if (!strcmp("SetWindowFunctionToBlackmanHarris4",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetWindowFunctionToBlackmanHarris4();
      return 1;
      }
    }
  if (!strcmp("SetWindowFunctionToNuttall",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetWindowFunctionToNuttall();
      return 1;
      }
    }
  if (!strcmp("SetWindowFunctionToBlackmanNuttall3",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetWindowFunctionToBlackmanNuttall3();
      return 1;
      }
    }
  if (!strcmp("SetWindowFunctionToBlackmanNuttall4",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetWindowFunctionToBlackmanNuttall4();
      return 1;
      }
    }
  if (!strcmp("GetWindowFunction",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetWindowFunction();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetWindowFunctionAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetWindowFunctionAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetWindowHalfWidth",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetWindowHalfWidth(temp0);
      return 1;
      }
    }
  if (!strcmp("GetWindowHalfWidth",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetWindowHalfWidth();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseWindowParameter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseWindowParameter(temp0);
      return 1;
      }
    }
  if (!strcmp("UseWindowParameterOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseWindowParameterOn();
      return 1;
      }
    }
  if (!strcmp("UseWindowParameterOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseWindowParameterOff();
      return 1;
      }
    }
  if (!strcmp("GetUseWindowParameter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseWindowParameter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetWindowParameter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetWindowParameter(temp0);
      return 1;
      }
    }
  if (!strcmp("GetWindowParameter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetWindowParameter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBlurFactors",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetBlurFactors(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetBlurFactors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetBlurFactors(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBlurFactors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetBlurFactors(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBlurFactors",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetBlurFactors();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAntialiasing",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAntialiasing(temp0);
      return 1;
      }
    }
  if (!strcmp("AntialiasingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AntialiasingOn();
      return 1;
      }
    }
  if (!strcmp("AntialiasingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AntialiasingOff();
      return 1;
      }
    }
  if (!strcmp("GetAntialiasing",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAntialiasing();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRenormalization",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRenormalization(temp0);
      return 1;
      }
    }
  if (!strcmp("RenormalizationOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RenormalizationOn();
      return 1;
      }
    }
  if (!strcmp("RenormalizationOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RenormalizationOff();
      return 1;
      }
    }
  if (!strcmp("GetRenormalization",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRenormalization();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsSeparable",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->IsSeparable();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkAbstractImageInterpolator";
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
  vtkmsg << "Object type: vtkImageSincInterpolator, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkImageSincInterpolator_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkImageSincInterpolator", vtkImageSincInterpolatorClientServerNewCommand);
    csi->AddCommandFunction("vtkImageSincInterpolator", vtkImageSincInterpolatorCommand);
    }
}
