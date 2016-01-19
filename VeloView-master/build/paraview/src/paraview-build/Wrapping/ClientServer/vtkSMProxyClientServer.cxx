// ClientServer wrapper for vtkSMProxy object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSMProxy.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSMProxyClientServerNewCommand(void* /*ctx*/)
{
  return vtkSMProxy::New();
}


int VTK_EXPORT vtkSMProxyCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSMProxy *op = vtkSMProxy::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSMProxy.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMProxy  *temp20;
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
    vtkSMProxy  *temp20;
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
    vtkSMProxy  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAnnotation",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAnnotation(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetAnnotation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAnnotation(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoveAnnotation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemoveAnnotation(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveAllAnnotations",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllAnnotations();
      return 1;
      }
    }
  if (!strcmp("HasAnnotation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->HasAnnotation(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfAnnotations",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfAnnotations();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAnnotationKeyAt",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAnnotationKeyAt(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLocation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLocation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    vtkSMProperty  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetProperty(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProperty",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    vtkSMProperty  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetProperty(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPropertyName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProperty  *temp0;
    const char    *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProperty"))
      {
      temp20 = (op)->GetPropertyName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UpdateVTKObjects",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UpdateVTKObjects();
      return 1;
      }
    }
  if (!strcmp("UpdateProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->UpdateProperty(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UpdateProperty",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->UpdateProperty(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InvokeCommand",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->InvokeCommand(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVTKClassName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetVTKClassName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetVTKClassName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVTKClassName(temp0);
      return 1;
      }
    }
  if (!strcmp("NewPropertyIterator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMPropertyIterator  *temp20;
      {
      temp20 = (op)->NewPropertyIterator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfConsumers",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetNumberOfConsumers();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetConsumerProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    vtkSMProxy  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetConsumerProxy(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetConsumerProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    vtkSMProperty  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetConsumerProperty(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfProducers",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetNumberOfProducers();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProducerProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    vtkSMProxy  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetProducerProxy(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProducerProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    vtkSMProperty  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetProducerProperty(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetXMLName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetXMLName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetXMLGroup",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetXMLGroup();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetXMLLabel",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetXMLLabel();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UpdatePropertyInformation",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UpdatePropertyInformation();
      return 1;
      }
    }
  if (!strcmp("UpdatePropertyInformation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProperty"))
      {
      op->UpdatePropertyInformation(temp0);
      return 1;
      }
    }
  if (!strcmp("MarkAllPropertiesAsModified",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MarkAllPropertiesAsModified();
      return 1;
      }
    }
  if (!strcmp("ResetPropertiesToXMLDefaults",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResetPropertiesToXMLDefaults();
      return 1;
      }
    }
  if (!strcmp("Copy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      op->Copy(temp0);
      return 1;
      }
    }
  if (!strcmp("Copy",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSMProxy  *temp0;
    char    *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Copy(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Copy",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkSMProxy  *temp0;
    char    *temp1;
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->Copy(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("MarkModified",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      op->MarkModified(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDocumentation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMDocumentation  *temp20;
      {
      temp20 = (op)->GetDocumentation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetHints",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVXMLElement  *temp20;
      {
      temp20 = (op)->GetHints();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetObjectsCreated",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetObjectsCreated();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InitializeAndCopyFromProxy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      op->InitializeAndCopyFromProxy(temp0);
      return 1;
      }
    }
  if (!strcmp("MarkDirty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      op->MarkDirty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetClientSideObject",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkObjectBase  *temp20;
      {
      temp20 = (op)->GetClientSideObject();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherInformation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVInformation  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVInformation"))
      {
      temp20 = (op)->GatherInformation(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GatherInformation",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPVInformation  *temp0;
    unsigned int      temp1;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVInformation") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GatherInformation(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SaveXMLState",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVXMLElement  *temp0;
    vtkPVXMLElement  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVXMLElement"))
      {
      temp20 = (op)->SaveXMLState(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SaveXMLState",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPVXMLElement  *temp0;
    vtkSMPropertyIterator  *temp1;
    vtkPVXMLElement  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVXMLElement") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMPropertyIterator"))
      {
      temp20 = (op)->SaveXMLState(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LoadXMLState",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPVXMLElement  *temp0;
    vtkSMProxyLocator  *temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVXMLElement") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMProxyLocator"))
      {
      temp20 = (op)->LoadXMLState(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PrototypeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PrototypeOn();
      return 1;
      }
    }
  if (!strcmp("PrototypeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PrototypeOff();
      return 1;
      }
    }
  if (!strcmp("SetPrototype",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPrototype(temp0);
      return 1;
      }
    }
  if (!strcmp("UpdateSelfAndAllInputs",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UpdateSelfAndAllInputs();
      return 1;
      }
    }
  if (!strcmp("GetIsSubProxy",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetIsSubProxy();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetParentProxy",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMProxy  *temp20;
      {
      temp20 = (op)->GetParentProxy();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTrueParentProxy",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMProxy  *temp20;
      {
      temp20 = (op)->GetTrueParentProxy();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EnableLocalPushOnly",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableLocalPushOnly();
      return 1;
      }
    }
  if (!strcmp("DisableLocalPushOnly",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DisableLocalPushOnly();
      return 1;
      }
    }

  {
    const char* commandName = "vtkSMRemoteObject";
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
  vtkmsg << "Object type: vtkSMProxy, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSMProxy_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSMProxy", vtkSMProxyClientServerNewCommand);
    csi->AddCommandFunction("vtkSMProxy", vtkSMProxyCommand);
    }
}
