// ClientServer wrapper for vtkPVPythonInformation object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPVPythonInformation.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPVPythonInformationClientServerNewCommand(void* /*ctx*/)
{
  return vtkPVPythonInformation::New();
}


int VTK_EXPORT vtkPVPythonInformationCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPVPythonInformation *op = vtkPVPythonInformation::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPVPythonInformation.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVPythonInformation  *temp20;
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
    vtkPVPythonInformation  *temp20;
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
    vtkPVPythonInformation  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DeepCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVPythonInformation  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVPythonInformation"))
      {
      op->DeepCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("CopyFromObject",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      op->CopyFromObject(temp0);
      return 1;
      }
    }
  if (!strcmp("AddInformation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVInformation  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVInformation"))
      {
      op->AddInformation(temp0);
      return 1;
      }
    }
  if (!strcmp("CopyToStream",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStream temp0_inst, *temp0 = &temp0_inst;
    if(msg.GetArgument(0, 2, temp0))
      {
      op->CopyToStream(temp0);
      return 1;
      }
    }
  if (!strcmp("CopyFromStream",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStream temp0_inst, *temp0 = &temp0_inst;
    if(msg.GetArgument(0, 2, temp0))
      {
      op->CopyFromStream(temp0);
      return 1;
      }
    }
  if (!strcmp("SetPythonSupport",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPythonSupport(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPythonSupport",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetPythonSupport();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PythonSupportOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PythonSupportOn();
      return 1;
      }
    }
  if (!strcmp("PythonSupportOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PythonSupportOff();
      return 1;
      }
    }
  if (!strcmp("SetPythonVersion",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPythonVersion(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("GetPythonVersion",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const std::string  *temp20;
      {
      temp20 = &(op)->GetPythonVersion();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << *temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPythonPath",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPythonPath(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("GetPythonPath",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const std::string  *temp20;
      {
      temp20 = &(op)->GetPythonPath();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << *temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumpySupport",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumpySupport(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumpySupport",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetNumpySupport();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NumpySupportOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->NumpySupportOn();
      return 1;
      }
    }
  if (!strcmp("NumpySupportOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->NumpySupportOff();
      return 1;
      }
    }
  if (!strcmp("SetNumpyVersion",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumpyVersion(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("GetNumpyVersion",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const std::string  *temp20;
      {
      temp20 = &(op)->GetNumpyVersion();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << *temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumpyPath",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumpyPath(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("GetNumpyPath",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const std::string  *temp20;
      {
      temp20 = &(op)->GetNumpyPath();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << *temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMatplotlibSupport",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMatplotlibSupport(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMatplotlibSupport",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetMatplotlibSupport();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MatplotlibSupportOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MatplotlibSupportOn();
      return 1;
      }
    }
  if (!strcmp("MatplotlibSupportOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MatplotlibSupportOff();
      return 1;
      }
    }
  if (!strcmp("SetMatplotlibVersion",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMatplotlibVersion(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("GetMatplotlibVersion",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const std::string  *temp20;
      {
      temp20 = &(op)->GetMatplotlibVersion();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << *temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMatplotlibPath",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMatplotlibPath(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("GetMatplotlibPath",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const std::string  *temp20;
      {
      temp20 = &(op)->GetMatplotlibPath();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << *temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkPVInformation";
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
  vtkmsg << "Object type: vtkPVPythonInformation, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPVPythonInformation_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPVPythonInformation", vtkPVPythonInformationClientServerNewCommand);
    csi->AddCommandFunction("vtkPVPythonInformation", vtkPVPythonInformationCommand);
    }
}
