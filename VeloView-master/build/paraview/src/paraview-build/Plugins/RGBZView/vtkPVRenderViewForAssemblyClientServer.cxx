// ClientServer wrapper for vtkPVRenderViewForAssembly object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPVRenderViewForAssembly.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPVRenderViewForAssemblyClientServerNewCommand(void* /*ctx*/)
{
  return vtkPVRenderViewForAssembly::New();
}


int VTK_EXPORT vtkPVRenderViewForAssemblyCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPVRenderViewForAssembly *op = vtkPVRenderViewForAssembly::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPVRenderViewForAssembly.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVRenderViewForAssembly  *temp20;
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
    vtkPVRenderViewForAssembly  *temp20;
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
    vtkPVRenderViewForAssembly  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Initialize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->Initialize(temp0);
      return 1;
      }
    }
  if (!strcmp("SetClippingBounds",method) && msg.GetNumberOfArguments(0) == 8)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    double   temp4;
    double   temp5;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      op->SetClippingBounds(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("SetClippingBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->SetClippingBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("ResetClippingBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResetClippingBounds();
      return 1;
      }
    }
  if (!strcmp("FreezeGeometryBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->FreezeGeometryBounds();
      return 1;
      }
    }
  if (!strcmp("ComputeZOrdering",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ComputeZOrdering();
      return 1;
      }
    }
  if (!strcmp("GetZOrdering",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetZOrdering();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCompositeDirectory",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCompositeDirectory(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCompositeDirectory",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetCompositeDirectory();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("WriteImage",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WriteImage();
      return 1;
      }
    }
  if (!strcmp("GetImageFormatExtension",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetImageFormatExtension();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetImageFormatExtension",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetImageFormatExtension(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRGBStackSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRGBStackSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRGBStackSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRGBStackSize(temp0);
      return 1;
      }
    }
  if (!strcmp("ResetActiveImageStack",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResetActiveImageStack();
      return 1;
      }
    }
  if (!strcmp("CaptureActiveRepresentation",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CaptureActiveRepresentation();
      return 1;
      }
    }
  if (!strcmp("SetDrawCells",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawCells(temp0);
      return 1;
      }
    }
  if (!strcmp("SetArrayNameToDraw",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetArrayNameToDraw(temp0);
      return 1;
      }
    }
  if (!strcmp("SetArrayNumberToDraw",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetArrayNumberToDraw(temp0);
      return 1;
      }
    }
  if (!strcmp("SetArrayComponentToDraw",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetArrayComponentToDraw(temp0);
      return 1;
      }
    }
  if (!strcmp("SetScalarRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetScalarRange(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("StartCaptureValues",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartCaptureValues();
      return 1;
      }
    }
  if (!strcmp("StopCaptureValues",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StopCaptureValues();
      return 1;
      }
    }
  if (!strcmp("WriteComposite",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WriteComposite();
      return 1;
      }
    }
  if (!strcmp("AddRepresentationForComposite",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVDataRepresentation  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation"))
      {
      op->AddRepresentationForComposite(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveRepresentationForComposite",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVDataRepresentation  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation"))
      {
      op->RemoveRepresentationForComposite(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRepresentationCodes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetRepresentationCodes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetActiveRepresentationForComposite",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVDataRepresentation  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVDataRepresentation"))
      {
      op->SetActiveRepresentationForComposite(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkPVRenderView";
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
  vtkmsg << "Object type: vtkPVRenderViewForAssembly, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPVRenderViewForAssembly_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPVRenderViewForAssembly", vtkPVRenderViewForAssemblyClientServerNewCommand);
    csi->AddCommandFunction("vtkPVRenderViewForAssembly", vtkPVRenderViewForAssemblyCommand);
    }
}
