// ClientServer wrapper for vtkPVComparativeAnimationCue object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPVComparativeAnimationCue.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPVComparativeAnimationCueClientServerNewCommand(void* /*ctx*/)
{
  return vtkPVComparativeAnimationCue::New();
}


int VTK_EXPORT vtkPVComparativeAnimationCueCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPVComparativeAnimationCue *op = vtkPVComparativeAnimationCue::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPVComparativeAnimationCue.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVComparativeAnimationCue  *temp20;
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
    vtkPVComparativeAnimationCue  *temp20;
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
    vtkPVComparativeAnimationCue  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAnimatedProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      op->SetAnimatedProxy(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAnimatedProxy",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMProxy  *temp20;
      {
      temp20 = (op)->GetAnimatedProxy();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoveAnimatedProxy",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAnimatedProxy();
      return 1;
      }
    }
  if (!strcmp("SetAnimatedPropertyName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAnimatedPropertyName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAnimatedPropertyName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetAnimatedPropertyName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAnimatedDomainName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAnimatedDomainName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAnimatedDomainName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetAnimatedDomainName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAnimatedElement",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAnimatedElement(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAnimatedElement",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAnimatedElement();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEnabled",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnabled(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEnabled",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetEnabled();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EnabledOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnabledOn();
      return 1;
      }
    }
  if (!strcmp("EnabledOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnabledOff();
      return 1;
      }
    }
  if (!strcmp("UpdateXRange",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->UpdateXRange(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("UpdateYRange",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->UpdateYRange(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("UpdateWholeRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->UpdateWholeRange(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("UpdateValue",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    int      temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->UpdateValue(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("UpdateXRange",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    unsigned int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1 &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->UpdateXRange(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("UpdateYRange",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    unsigned int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1 &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->UpdateYRange(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("UpdateWholeRange",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    unsigned int      temp2;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->UpdateWholeRange(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("UpdateWholeRange",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    unsigned int      temp2;
    bool   temp3;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->UpdateWholeRange(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("UpdateValue",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    int      temp1;
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    unsigned int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->UpdateValue(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("UpdateAnimatedValue",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->UpdateAnimatedValue(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("GetValue",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    double   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->GetValue(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AppendCommandInfo",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVXMLElement  *temp0;
    vtkPVXMLElement  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVXMLElement"))
      {
      temp20 = (op)->AppendCommandInfo(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LoadCommandInfo",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVXMLElement  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVXMLElement"))
      {
      temp20 = (op)->LoadCommandInfo(temp0);
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
  vtkmsg << "Object type: vtkPVComparativeAnimationCue, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPVComparativeAnimationCue_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPVComparativeAnimationCue", vtkPVComparativeAnimationCueClientServerNewCommand);
    csi->AddCommandFunction("vtkPVComparativeAnimationCue", vtkPVComparativeAnimationCueCommand);
    }
}
