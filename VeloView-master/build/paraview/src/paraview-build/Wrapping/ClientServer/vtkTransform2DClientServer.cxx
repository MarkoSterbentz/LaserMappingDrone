// ClientServer wrapper for vtkTransform2D object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkTransform2D.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkTransform2DClientServerNewCommand(void* /*ctx*/)
{
  return vtkTransform2D::New();
}


int VTK_EXPORT vtkTransform2DCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkTransform2D *op = vtkTransform2D::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkTransform2D.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTransform2D  *temp20;
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
    vtkTransform2D  *temp20;
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
    vtkTransform2D  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Identity",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Identity();
      return 1;
      }
    }
  if (!strcmp("Inverse",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Inverse();
      return 1;
      }
    }
  if (!strcmp("Translate",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Translate(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Translate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->Translate(temp0);
      return 1;
      }
    }
  if (!strcmp("Translate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->Translate(temp0);
      return 1;
      }
    }
  if (!strcmp("Rotate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->Rotate(temp0);
      return 1;
      }
    }
  if (!strcmp("Scale",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Scale(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Scale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->Scale(temp0);
      return 1;
      }
    }
  if (!strcmp("Scale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->Scale(temp0);
      return 1;
      }
    }
  if (!strcmp("SetMatrix",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix3x3  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix3x3"))
      {
      op->SetMatrix(temp0);
      return 1;
      }
    }
  if (!strcmp("SetMatrix",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[9];
    if(msg.GetArgument(0, 2, temp0, 9))
      {
      op->SetMatrix(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMatrix",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkMatrix3x3  *temp20;
      {
      temp20 = (op)->GetMatrix();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMatrix",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix3x3  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix3x3"))
      {
      op->GetMatrix(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->GetPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->GetPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->GetScale(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->GetScale(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInverse",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix3x3  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix3x3"))
      {
      op->GetInverse(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTranspose",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix3x3  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix3x3"))
      {
      op->GetTranspose(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetMTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TransformPoints",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    int      temp2;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->TransformPoints(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("TransformPoints",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    int      temp2;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->TransformPoints(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("TransformPoints",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPoints2D  *temp0;
    vtkPoints2D  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPoints2D"))
      {
      op->TransformPoints(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("InverseTransformPoints",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    int      temp2;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->InverseTransformPoints(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("InverseTransformPoints",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    int      temp2;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->InverseTransformPoints(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("InverseTransformPoints",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPoints2D  *temp0;
    vtkPoints2D  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPoints2D"))
      {
      op->InverseTransformPoints(temp0,temp1);
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
  vtkmsg << "Object type: vtkTransform2D, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkTransform2D_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkTransform2D", vtkTransform2DClientServerNewCommand);
    csi->AddCommandFunction("vtkTransform2D", vtkTransform2DCommand);
    }
}
