// ClientServer wrapper for vtkImageThreshold object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkImageThreshold.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkImageThresholdClientServerNewCommand(void* /*ctx*/)
{
  return vtkImageThreshold::New();
}


int VTK_EXPORT vtkImageThresholdCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkImageThreshold *op = vtkImageThreshold::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkImageThreshold.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageThreshold  *temp20;
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
    vtkImageThreshold  *temp20;
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
    vtkImageThreshold  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ThresholdByUpper",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->ThresholdByUpper(temp0);
      return 1;
      }
    }
  if (!strcmp("ThresholdByLower",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->ThresholdByLower(temp0);
      return 1;
      }
    }
  if (!strcmp("ThresholdBetween",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->ThresholdBetween(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetReplaceIn",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetReplaceIn(temp0);
      return 1;
      }
    }
  if (!strcmp("GetReplaceIn",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetReplaceIn();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReplaceInOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReplaceInOn();
      return 1;
      }
    }
  if (!strcmp("ReplaceInOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReplaceInOff();
      return 1;
      }
    }
  if (!strcmp("SetInValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInValue(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetInValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetReplaceOut",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetReplaceOut(temp0);
      return 1;
      }
    }
  if (!strcmp("GetReplaceOut",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetReplaceOut();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReplaceOutOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReplaceOutOn();
      return 1;
      }
    }
  if (!strcmp("ReplaceOutOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ReplaceOutOff();
      return 1;
      }
    }
  if (!strcmp("SetOutValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutValue(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetOutValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUpperThreshold",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetUpperThreshold();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLowerThreshold",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetLowerThreshold();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutputScalarType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutputScalarType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutputScalarType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutputScalarType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutputScalarTypeToDouble",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputScalarTypeToDouble();
      return 1;
      }
    }
  if (!strcmp("SetOutputScalarTypeToFloat",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputScalarTypeToFloat();
      return 1;
      }
    }
  if (!strcmp("SetOutputScalarTypeToLong",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputScalarTypeToLong();
      return 1;
      }
    }
  if (!strcmp("SetOutputScalarTypeToUnsignedLong",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputScalarTypeToUnsignedLong();
      return 1;
      }
    }
  if (!strcmp("SetOutputScalarTypeToInt",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputScalarTypeToInt();
      return 1;
      }
    }
  if (!strcmp("SetOutputScalarTypeToUnsignedInt",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputScalarTypeToUnsignedInt();
      return 1;
      }
    }
  if (!strcmp("SetOutputScalarTypeToShort",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputScalarTypeToShort();
      return 1;
      }
    }
  if (!strcmp("SetOutputScalarTypeToUnsignedShort",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputScalarTypeToUnsignedShort();
      return 1;
      }
    }
  if (!strcmp("SetOutputScalarTypeToChar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputScalarTypeToChar();
      return 1;
      }
    }
  if (!strcmp("SetOutputScalarTypeToSignedChar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputScalarTypeToSignedChar();
      return 1;
      }
    }
  if (!strcmp("SetOutputScalarTypeToUnsignedChar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetOutputScalarTypeToUnsignedChar();
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
  vtkmsg << "Object type: vtkImageThreshold, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkImageThreshold_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkImageThreshold", vtkImageThresholdClientServerNewCommand);
    csi->AddCommandFunction("vtkImageThreshold", vtkImageThresholdCommand);
    }
}
