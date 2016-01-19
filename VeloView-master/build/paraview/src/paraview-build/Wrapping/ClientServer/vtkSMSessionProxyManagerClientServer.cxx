// ClientServer wrapper for vtkSMSessionProxyManager object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSMSessionProxyManager.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkSMSessionProxyManagerCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSMSessionProxyManager *op = vtkSMSessionProxyManager::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSMSessionProxyManager.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMSession  *temp0;
    vtkSMSessionProxyManager  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMSession"))
      {
      temp20 = (op)->New(temp0);
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
    vtkSMSessionProxyManager  *temp20;
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
    vtkSMSessionProxyManager  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetReservedGlobalID",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetReservedGlobalID();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NewProxy",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    char    *temp1;
    char    *temp2;
    vtkSMProxy  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->NewProxy(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProxyDocumentation",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    vtkSMDocumentation  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetProxyDocumentation(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPropertyDocumentation",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    char    *temp1;
    char    *temp2;
    vtkSMDocumentation  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->GetPropertyDocumentation(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RegisterProxy",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    char    *temp1;
    vtkSMProxy  *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkSMProxy"))
      {
      op->RegisterProxy(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("RegisterProxy",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    vtkSMProxy  *temp1;
    vtkStdString   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMProxy"))
      {
      temp20 = (op)->RegisterProxy(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProxy",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    vtkSMProxy  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetProxy(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    vtkSMProxy  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetProxy(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProxies",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    char    *temp1;
    vtkCollection  *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkCollection"))
      {
      op->GetProxies(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetProxies",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    vtkCollection  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkCollection"))
      {
      op->GetProxies(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetPrototypeProxy",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    vtkSMProxy  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetPrototypeProxy(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfProxies",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    unsigned int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetNumberOfProxies(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProxyName",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    unsigned int      temp1;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetProxyName(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProxyName",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    vtkSMProxy  *temp1;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMProxy"))
      {
      temp20 = (op)->GetProxyName(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProxyNames",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    vtkSMProxy  *temp1;
    vtkStringList  *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMProxy") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkStringList"))
      {
      op->GetProxyNames(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetUniqueProxyName",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    vtkStdString   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetUniqueProxyName(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsProxyInGroup",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSMProxy  *temp0;
    char    *temp1;
    const char    *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->IsProxyInGroup(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UnRegisterProxy",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    char    *temp1;
    vtkSMProxy  *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkSMProxy"))
      {
      op->UnRegisterProxy(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("UnRegisterProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->UnRegisterProxy(temp0);
      return 1;
      }
    }
  if (!strcmp("UnRegisterProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      op->UnRegisterProxy(temp0);
      return 1;
      }
    }
  if (!strcmp("UnRegisterProxies",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UnRegisterProxies();
      return 1;
      }
    }
  if (!strcmp("UpdateRegisteredProxies",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->UpdateRegisteredProxies(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("UpdateRegisteredProxies",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->UpdateRegisteredProxies(temp0);
      return 1;
      }
    }
  if (!strcmp("UpdateRegisteredProxiesInOrder",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->UpdateRegisteredProxiesInOrder(temp0);
      return 1;
      }
    }
  if (!strcmp("UpdateProxyInOrder",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      op->UpdateProxyInOrder(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfLinks",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfLinks();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLinkName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetLinkName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RegisterLink",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    vtkSMLink  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMLink"))
      {
      op->RegisterLink(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("UnRegisterLink",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->UnRegisterLink(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRegisteredLink",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    vtkSMLink  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetRegisteredLink(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UnRegisterAllLinks",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UnRegisterAllLinks();
      return 1;
      }
    }
  if (!strcmp("RegisterCustomProxyDefinition",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    char    *temp1;
    vtkPVXMLElement  *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkPVXMLElement"))
      {
      op->RegisterCustomProxyDefinition(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("UnRegisterCustomProxyDefinition",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->UnRegisterCustomProxyDefinition(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("UnRegisterCustomProxyDefinitions",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UnRegisterCustomProxyDefinitions();
      return 1;
      }
    }
  if (!strcmp("GetProxyDefinition",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    vtkPVXMLElement  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetProxyDefinition(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LoadCustomProxyDefinitions",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->LoadCustomProxyDefinitions(temp0);
      return 1;
      }
    }
  if (!strcmp("LoadCustomProxyDefinitions",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVXMLElement  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVXMLElement"))
      {
      op->LoadCustomProxyDefinitions(temp0);
      return 1;
      }
    }
  if (!strcmp("SaveCustomProxyDefinitions",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVXMLElement  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVXMLElement"))
      {
      op->SaveCustomProxyDefinitions(temp0);
      return 1;
      }
    }
  if (!strcmp("LoadXMLState",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    vtkSMStateLoader  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMStateLoader"))
      {
      op->LoadXMLState(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("LoadXMLState",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkPVXMLElement  *temp0;
    vtkSMStateLoader  *temp1;
    bool   temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVXMLElement") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMStateLoader") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->LoadXMLState(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SaveXMLState",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SaveXMLState(temp0);
      return 1;
      }
    }
  if (!strcmp("SaveXMLState",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVXMLElement  *temp20;
      {
      temp20 = (op)->SaveXMLState();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InstantiateGroupPrototypes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->InstantiateGroupPrototypes(temp0);
      return 1;
      }
    }
  if (!strcmp("InstantiatePrototypes",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InstantiatePrototypes();
      return 1;
      }
    }
  if (!strcmp("HasDefinition",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->HasDefinition(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AreProxiesModified",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->AreProxiesModified();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProxyHints",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    vtkPVXMLElement  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetProxyHints(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPropertyHints",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    char    *temp1;
    char    *temp2;
    vtkPVXMLElement  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->GetPropertyHints(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUpdateInputProxies",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUpdateInputProxies();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LoadConfigurationXML",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->LoadConfigurationXML(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProxyDefinitionManager",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMProxyDefinitionManager  *temp20;
      {
      temp20 = (op)->GetProxyDefinitionManager();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSelectionModel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    vtkSMProxySelectionModel  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetSelectionModel(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfSelectionModel",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetNumberOfSelectionModel();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSelectionModelAt",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkSMProxySelectionModel  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetSelectionModelAt(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RegisterSelectionModel",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    vtkSMProxySelectionModel  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMProxySelectionModel"))
      {
      op->RegisterSelectionModel(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("UnRegisterSelectionModel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->UnRegisterSelectionModel(temp0);
      return 1;
      }
    }
  if (!strcmp("UpdateFromRemote",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UpdateFromRemote();
      return 1;
      }
    }
  if (!strcmp("IsStateUpdateNotificationEnabled",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->IsStateUpdateNotificationEnabled();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DisableStateUpdateNotification",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DisableStateUpdateNotification();
      return 1;
      }
    }
  if (!strcmp("EnableStateUpdateNotification",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableStateUpdateNotification();
      return 1;
      }
    }
  if (!strcmp("TriggerStateUpdate",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TriggerStateUpdate();
      return 1;
      }
    }

  {
    const char* commandName = "vtkSMSessionObject";
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
  vtkmsg << "Object type: vtkSMSessionProxyManager, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSMSessionProxyManager_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkSMSessionProxyManager", vtkSMSessionProxyManagerCommand);
    }
}
