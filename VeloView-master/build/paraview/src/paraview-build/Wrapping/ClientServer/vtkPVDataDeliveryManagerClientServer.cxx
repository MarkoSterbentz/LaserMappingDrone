// ClientServer wrapper for vtkPVDataDeliveryManager object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPVDataDeliveryManager.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPVDataDeliveryManagerClientServerNewCommand(void* /*ctx*/)
{
  return vtkPVDataDeliveryManager::New();
}


int VTK_EXPORT vtkPVDataDeliveryManagerCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPVDataDeliveryManager *op = vtkPVDataDeliveryManager::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPVDataDeliveryManager.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVDataDeliveryManager  *temp20;
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
    vtkPVDataDeliveryManager  *temp20;
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
    vtkPVDataDeliveryManager  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSynchronizationMagicNumber",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSynchronizationMagicNumber();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RegisterRepresentation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVDataRepresentation  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation"))
      {
      op->RegisterRepresentation(temp0);
      return 1;
      }
    }
  if (!strcmp("UnRegisterRepresentation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVDataRepresentation  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation"))
      {
      op->UnRegisterRepresentation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRepresentation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    vtkPVDataRepresentation  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetRepresentation(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPiece",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkPVDataRepresentation  *temp0;
    vtkDataObject  *temp1;
    bool   temp2;
    unsigned long     temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataObject") &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetPiece(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetPiece",method) && msg.GetNumberOfArguments(0) == 5)
    {
    unsigned int      temp0;
    vtkDataObject  *temp1;
    bool   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataObject") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetPiece(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetProducer",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPVDataRepresentation  *temp0;
    bool   temp1;
    vtkAlgorithmOutput  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetProducer(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetProducer",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    bool   temp1;
    vtkAlgorithmOutput  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetProducer(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDeliverToAllProcesses",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkPVDataRepresentation  *temp0;
    bool   temp1;
    bool   temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetDeliverToAllProcesses(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetDeliverToClientAndRenderingProcesses",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkPVDataRepresentation  *temp0;
    bool   temp1;
    bool   temp2;
    bool   temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetDeliverToClientAndRenderingProcesses(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("MarkAsRedistributable",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPVDataRepresentation  *temp0;
    bool   temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->MarkAsRedistributable(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetVisibleDataSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    unsigned long     temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetVisibleDataSize(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetKdTree",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPKdTree  *temp20;
      {
      temp20 = (op)->GetKdTree();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRenderView",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVRenderView  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVRenderView"))
      {
      op->SetRenderView(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRenderView",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVRenderView  *temp20;
      {
      temp20 = (op)->GetRenderView();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RedistributeDataForOrderedCompositing",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RedistributeDataForOrderedCompositing(temp0);
      return 1;
      }
    }
  if (!strcmp("Deliver",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    unsigned int      temp1;
    vtkClientServerStreamDataArg<unsigned int    > temp2(msg, 0, 4);
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2)
      {
      op->Deliver(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetStreamable",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPVDataRepresentation  *temp0;
    bool   temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetStreamable(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetNextStreamedPiece",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPVDataRepresentation  *temp0;
    vtkDataObject  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataObject"))
      {
      op->SetNextStreamedPiece(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetCurrentStreamedPiece",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVDataRepresentation  *temp0;
    vtkDataObject  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation"))
      {
      temp20 = (op)->GetCurrentStreamedPiece(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ClearStreamedPieces",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearStreamedPieces();
      return 1;
      }
    }
  if (!strcmp("DeliverStreamedPieces",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    vtkClientServerStreamDataArg<unsigned int    > temp1(msg, 0, 3);
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1)
      {
      op->DeliverStreamedPieces(temp0,temp1);
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
  vtkmsg << "Object type: vtkPVDataDeliveryManager, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPVDataDeliveryManager_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPVDataDeliveryManager", vtkPVDataDeliveryManagerClientServerNewCommand);
    csi->AddCommandFunction("vtkPVDataDeliveryManager", vtkPVDataDeliveryManagerCommand);
    }
}
