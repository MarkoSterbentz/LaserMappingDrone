// ClientServer wrapper for vtkDefaultPainter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkDefaultPainter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkDefaultPainterClientServerNewCommand(void* /*ctx*/)
{
  return vtkDefaultPainter::New();
}


int VTK_EXPORT vtkDefaultPainterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkDefaultPainter *op = vtkDefaultPainter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkDefaultPainter.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDefaultPainter  *temp20;
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
    vtkDefaultPainter  *temp20;
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
    vtkDefaultPainter  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScalarsToColorsPainter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkScalarsToColorsPainter  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkScalarsToColorsPainter"))
      {
      op->SetScalarsToColorsPainter(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarsToColorsPainter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkScalarsToColorsPainter  *temp20;
      {
      temp20 = (op)->GetScalarsToColorsPainter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetClipPlanesPainter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClipPlanesPainter  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkClipPlanesPainter"))
      {
      op->SetClipPlanesPainter(temp0);
      return 1;
      }
    }
  if (!strcmp("GetClipPlanesPainter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkClipPlanesPainter  *temp20;
      {
      temp20 = (op)->GetClipPlanesPainter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDisplayListPainter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDisplayListPainter  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDisplayListPainter"))
      {
      op->SetDisplayListPainter(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDisplayListPainter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDisplayListPainter  *temp20;
      {
      temp20 = (op)->GetDisplayListPainter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCompositePainter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCompositePainter  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCompositePainter"))
      {
      op->SetCompositePainter(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCompositePainter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCompositePainter  *temp20;
      {
      temp20 = (op)->GetCompositePainter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCoincidentTopologyResolutionPainter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCoincidentTopologyResolutionPainter  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCoincidentTopologyResolutionPainter"))
      {
      op->SetCoincidentTopologyResolutionPainter(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCoincidentTopologyResolutionPainter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCoincidentTopologyResolutionPainter  *temp20;
      {
      temp20 = (op)->GetCoincidentTopologyResolutionPainter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLightingPainter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkLightingPainter  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkLightingPainter"))
      {
      op->SetLightingPainter(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLightingPainter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkLightingPainter  *temp20;
      {
      temp20 = (op)->GetLightingPainter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRepresentationPainter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRepresentationPainter  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRepresentationPainter"))
      {
      op->SetRepresentationPainter(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRepresentationPainter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRepresentationPainter  *temp20;
      {
      temp20 = (op)->GetRepresentationPainter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDelegatePainter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPainter  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPainter"))
      {
      op->SetDelegatePainter(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDelegatePainter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPainter  *temp20;
      {
      temp20 = (op)->GetDelegatePainter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Render",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkRenderer  *temp0;
    vtkActor  *temp1;
    unsigned long     temp2;
    bool   temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkActor") &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->Render(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("ReleaseGraphicsResources",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkWindow  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkWindow"))
      {
      op->ReleaseGraphicsResources(temp0);
      return 1;
      }
    }
  if (!strcmp("UpdateBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->UpdateBounds(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkPainter";
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
  vtkmsg << "Object type: vtkDefaultPainter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkDefaultPainter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkDefaultPainter", vtkDefaultPainterClientServerNewCommand);
    csi->AddCommandFunction("vtkDefaultPainter", vtkDefaultPainterCommand);
    }
}
