// ClientServer wrapper for vtkSMProxyListDomain object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSMProxyListDomain.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSMProxyListDomainClientServerNewCommand(void* /*ctx*/)
{
  return vtkSMProxyListDomain::New();
}


int VTK_EXPORT vtkSMProxyListDomainCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSMProxyListDomain *op = vtkSMProxyListDomain::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSMProxyListDomain.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMProxyListDomain  *temp20;
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
    vtkSMProxyListDomain  *temp20;
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
    vtkSMProxyListDomain  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfProxyTypes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetNumberOfProxyTypes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProxyGroup",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetProxyGroup(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProxyName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetProxyName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsInDomain",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProperty  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProperty"))
      {
      temp20 = (op)->IsInDomain(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("HasProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      temp20 = (op)->HasProxy(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("RemoveProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      temp20 = (op)->RemoveProxy(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoveProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->RemoveProxy(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CreateProxies",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMSessionProxyManager  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMSessionProxyManager"))
      {
      op->CreateProxies(temp0);
      return 1;
      }
    }
  if (!strcmp("SetDefaultValues",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSMProperty  *temp0;
    bool   temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProperty") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->SetDefaultValues(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkSMDomain";
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
  vtkmsg << "Object type: vtkSMProxyListDomain, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSMProxyListDomain_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSMProxyListDomain", vtkSMProxyListDomainClientServerNewCommand);
    csi->AddCommandFunction("vtkSMProxyListDomain", vtkSMProxyListDomainCommand);
    }
}
