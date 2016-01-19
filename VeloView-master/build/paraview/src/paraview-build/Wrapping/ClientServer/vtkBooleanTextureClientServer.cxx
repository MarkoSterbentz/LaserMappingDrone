// ClientServer wrapper for vtkBooleanTexture object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkBooleanTexture.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkBooleanTextureClientServerNewCommand(void* /*ctx*/)
{
  return vtkBooleanTexture::New();
}


int VTK_EXPORT vtkBooleanTextureCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkBooleanTexture *op = vtkBooleanTexture::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkBooleanTexture.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkBooleanTexture  *temp20;
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
    vtkBooleanTexture  *temp20;
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
    vtkBooleanTexture  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetXSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetXSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetXSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetYSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetYSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetYSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetYSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetThickness",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetThickness(temp0);
      return 1;
      }
    }
  if (!strcmp("GetThickness",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetThickness();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInIn",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned char     temp0;
    unsigned char     temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetInIn(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetInIn",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned char    *temp20;
      {
      temp20 = (op)->GetInIn();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInOut",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned char     temp0;
    unsigned char     temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetInOut(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetInOut",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned char    *temp20;
      {
      temp20 = (op)->GetInOut();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutIn",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned char     temp0;
    unsigned char     temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetOutIn(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetOutIn",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned char    *temp20;
      {
      temp20 = (op)->GetOutIn();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutOut",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned char     temp0;
    unsigned char     temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetOutOut(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetOutOut",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned char    *temp20;
      {
      temp20 = (op)->GetOutOut();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOnOn",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned char     temp0;
    unsigned char     temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetOnOn(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetOnOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned char    *temp20;
      {
      temp20 = (op)->GetOnOn();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOnIn",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned char     temp0;
    unsigned char     temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetOnIn(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetOnIn",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned char    *temp20;
      {
      temp20 = (op)->GetOnIn();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOnOut",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned char     temp0;
    unsigned char     temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetOnOut(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetOnOut",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned char    *temp20;
      {
      temp20 = (op)->GetOnOut();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInOn",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned char     temp0;
    unsigned char     temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetInOn(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetInOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned char    *temp20;
      {
      temp20 = (op)->GetInOn();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutOn",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned char     temp0;
    unsigned char     temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetOutOn(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetOutOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned char    *temp20;
      {
      temp20 = (op)->GetOutOn();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkImageAlgorithm";
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
  vtkmsg << "Object type: vtkBooleanTexture, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkBooleanTexture_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkBooleanTexture", vtkBooleanTextureClientServerNewCommand);
    csi->AddCommandFunction("vtkBooleanTexture", vtkBooleanTextureCommand);
    }
}
