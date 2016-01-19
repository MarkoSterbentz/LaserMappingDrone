// ClientServer wrapper for vtkSMProxyProperty object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSMProxyProperty.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSMProxyPropertyClientServerNewCommand(void* /*ctx*/)
{
  return vtkSMProxyProperty::New();
}


int VTK_EXPORT vtkSMProxyPropertyCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSMProxyProperty *op = vtkSMProxyProperty::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSMProxyProperty.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("EnableProxyCreation",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableProxyCreation();
      return 1;
      }
    }
  if (!strcmp("DisableProxyCreation",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DisableProxyCreation();
      return 1;
      }
    }
  if (!strcmp("CanCreateProxy",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->CanCreateProxy();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMProxyProperty  *temp20;
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
    vtkSMProxyProperty  *temp20;
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
    vtkSMProxyProperty  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      op->AddProxy(temp0);
      return 1;
      }
    }
  if (!strcmp("SetProxy",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    vtkSMProxy  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMProxy"))
      {
      op->SetProxy(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      op->RemoveProxy(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveAllProxies",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllProxies();
      return 1;
      }
    }
  if (!strcmp("IsProxyAdded",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      temp20 = (op)->IsProxyAdded(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddUncheckedProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      op->AddUncheckedProxy(temp0);
      return 1;
      }
    }
  if (!strcmp("SetUncheckedProxy",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    vtkSMProxy  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMProxy"))
      {
      op->SetUncheckedProxy(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveAllUncheckedProxies",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllUncheckedProxies();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfProxies",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetNumberOfProxies();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfUncheckedProxies",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetNumberOfUncheckedProxies();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfProxies",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfProxies(temp0);
      return 1;
      }
    }
  if (!strcmp("SetNumberOfUncheckedProxies",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfUncheckedProxies(temp0);
      return 1;
      }
    }
  if (!strcmp("GetProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    vtkSMProxy  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetProxy(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUncheckedProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    vtkSMProxy  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetUncheckedProxy(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Copy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProperty"))
      {
      op->Copy(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSkipDependency",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetSkipDependency();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UpdateAllInputs",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UpdateAllInputs();
      return 1;
      }
    }
  if (!strcmp("IsValueDefault",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->IsValueDefault();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ResetToXMLDefaults",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResetToXMLDefaults();
      return 1;
      }
    }

  {
    const char* commandName = "vtkSMProperty";
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
  vtkmsg << "Object type: vtkSMProxyProperty, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSMProxyProperty_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSMProxyProperty", vtkSMProxyPropertyClientServerNewCommand);
    csi->AddCommandFunction("vtkSMProxyProperty", vtkSMProxyPropertyCommand);
    }
}
