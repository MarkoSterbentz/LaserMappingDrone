// ClientServer wrapper for vtkBalloonWidget object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkBalloonWidget.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkBalloonWidgetClientServerNewCommand(void* /*ctx*/)
{
  return vtkBalloonWidget::New();
}


int VTK_EXPORT vtkBalloonWidgetCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkBalloonWidget *op = vtkBalloonWidget::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkBalloonWidget.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkBalloonWidget  *temp20;
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
    vtkBalloonWidget  *temp20;
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
    vtkBalloonWidget  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEnabled",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnabled(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRepresentation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkBalloonRepresentation  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkBalloonRepresentation"))
      {
      op->SetRepresentation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBalloonRepresentation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkBalloonRepresentation  *temp20;
      {
      temp20 = (op)->GetBalloonRepresentation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CreateDefaultRepresentation",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CreateDefaultRepresentation();
      return 1;
      }
    }
  if (!strcmp("AddBalloon",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkProp  *temp0;
    char    *temp1;
    vtkImageData  *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp") &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkImageData"))
      {
      op->AddBalloon(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("AddBalloon",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkProp  *temp0;
    char    *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddBalloon(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveBalloon",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp"))
      {
      op->RemoveBalloon(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBalloonString",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp  *temp0;
    const char    *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp"))
      {
      temp20 = (op)->GetBalloonString(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBalloonImage",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp  *temp0;
    vtkImageData  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp"))
      {
      temp20 = (op)->GetBalloonImage(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UpdateBalloonString",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkProp  *temp0;
    char    *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->UpdateBalloonString(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("UpdateBalloonImage",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkProp  *temp0;
    vtkImageData  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkImageData"))
      {
      op->UpdateBalloonImage(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetCurrentProp",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProp  *temp20;
      {
      temp20 = (op)->GetCurrentProp();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPicker",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractPropPicker  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractPropPicker"))
      {
      op->SetPicker(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPicker",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractPropPicker  *temp20;
      {
      temp20 = (op)->GetPicker();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkHoverWidget";
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
  vtkmsg << "Object type: vtkBalloonWidget, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkBalloonWidget_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkBalloonWidget", vtkBalloonWidgetClientServerNewCommand);
    csi->AddCommandFunction("vtkBalloonWidget", vtkBalloonWidgetCommand);
    }
}
