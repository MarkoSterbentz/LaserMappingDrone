// ClientServer wrapper for vtkAbstractTransform object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkAbstractTransform.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkAbstractTransformCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkAbstractTransform *op = vtkAbstractTransform::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkAbstractTransform.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
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
    vtkAbstractTransform  *temp20;
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
    vtkAbstractTransform  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TransformPoint",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->TransformPoint(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TransformPoint",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    double  *temp20;
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      temp20 = (op)->TransformPoint(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TransformFloatPoint",method) && msg.GetNumberOfArguments(0) == 5)
    {
    float    temp0;
    float    temp1;
    float    temp2;
    float   *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->TransformFloatPoint(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TransformFloatPoint",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[3];
    float   *temp20;
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      temp20 = (op)->TransformFloatPoint(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TransformDoublePoint",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->TransformDoublePoint(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TransformDoublePoint",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    double  *temp20;
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      temp20 = (op)->TransformDoublePoint(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TransformNormalAtPoint",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double temp0[3];
    double temp1[3];
    double  *temp20;
    if(msg.GetArgument(0, 2, temp0, 3) &&
      msg.GetArgument(0, 3, temp1, 3))
      {
      temp20 = (op)->TransformNormalAtPoint(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TransformDoubleNormalAtPoint",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double temp0[3];
    double temp1[3];
    double  *temp20;
    if(msg.GetArgument(0, 2, temp0, 3) &&
      msg.GetArgument(0, 3, temp1, 3))
      {
      temp20 = (op)->TransformDoubleNormalAtPoint(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TransformFloatNormalAtPoint",method) && msg.GetNumberOfArguments(0) == 4)
    {
    float  temp0[3];
    float  temp1[3];
    float   *temp20;
    if(msg.GetArgument(0, 2, temp0, 3) &&
      msg.GetArgument(0, 3, temp1, 3))
      {
      temp20 = (op)->TransformFloatNormalAtPoint(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TransformVectorAtPoint",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double temp0[3];
    double temp1[3];
    double  *temp20;
    if(msg.GetArgument(0, 2, temp0, 3) &&
      msg.GetArgument(0, 3, temp1, 3))
      {
      temp20 = (op)->TransformVectorAtPoint(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TransformDoubleVectorAtPoint",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double temp0[3];
    double temp1[3];
    double  *temp20;
    if(msg.GetArgument(0, 2, temp0, 3) &&
      msg.GetArgument(0, 3, temp1, 3))
      {
      temp20 = (op)->TransformDoubleVectorAtPoint(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TransformFloatVectorAtPoint",method) && msg.GetNumberOfArguments(0) == 4)
    {
    float  temp0[3];
    float  temp1[3];
    float   *temp20;
    if(msg.GetArgument(0, 2, temp0, 3) &&
      msg.GetArgument(0, 3, temp1, 3))
      {
      temp20 = (op)->TransformFloatVectorAtPoint(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TransformPoints",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPoints  *temp0;
    vtkPoints  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPoints"))
      {
      op->TransformPoints(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("TransformPointsNormalsVectors",method) && msg.GetNumberOfArguments(0) == 8)
    {
    vtkPoints  *temp0;
    vtkPoints  *temp1;
    vtkDataArray  *temp2;
    vtkDataArray  *temp3;
    vtkDataArray  *temp4;
    vtkDataArray  *temp5;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPoints") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkDataArray"))
      {
      op->TransformPointsNormalsVectors(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("GetInverse",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractTransform  *temp20;
      {
      temp20 = (op)->GetInverse();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInverse",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractTransform  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractTransform"))
      {
      op->SetInverse(temp0);
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
  if (!strcmp("DeepCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractTransform  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractTransform"))
      {
      op->DeepCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("Update",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Update();
      return 1;
      }
    }
  if (!strcmp("MakeTransform",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractTransform  *temp20;
      {
      temp20 = (op)->MakeTransform();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CircuitCheck",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractTransform  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractTransform"))
      {
      temp20 = (op)->CircuitCheck(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("UnRegister",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObjectBase  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObjectBase"))
      {
      op->UnRegister(temp0);
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
  vtkmsg << "Object type: vtkAbstractTransform, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkAbstractTransform_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkAbstractTransform", vtkAbstractTransformCommand);
    }
}
