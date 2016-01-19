// ClientServer wrapper for vtkQuadricDecimation object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkQuadricDecimation.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkQuadricDecimationClientServerNewCommand(void* /*ctx*/)
{
  return vtkQuadricDecimation::New();
}


int VTK_EXPORT vtkQuadricDecimationCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkQuadricDecimation *op = vtkQuadricDecimation::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkQuadricDecimation.  "
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
    vtkQuadricDecimation  *temp20;
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
    vtkQuadricDecimation  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkQuadricDecimation  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTargetReduction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTargetReduction(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTargetReductionMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetTargetReductionMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTargetReductionMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetTargetReductionMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTargetReduction",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetTargetReduction();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAttributeErrorMetric",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAttributeErrorMetric(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAttributeErrorMetric",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAttributeErrorMetric();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AttributeErrorMetricOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AttributeErrorMetricOn();
      return 1;
      }
    }
  if (!strcmp("AttributeErrorMetricOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AttributeErrorMetricOff();
      return 1;
      }
    }
  if (!strcmp("SetScalarsAttribute",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScalarsAttribute(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarsAttribute",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScalarsAttribute();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScalarsAttributeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScalarsAttributeOn();
      return 1;
      }
    }
  if (!strcmp("ScalarsAttributeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScalarsAttributeOff();
      return 1;
      }
    }
  if (!strcmp("SetVectorsAttribute",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVectorsAttribute(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVectorsAttribute",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetVectorsAttribute();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("VectorsAttributeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->VectorsAttributeOn();
      return 1;
      }
    }
  if (!strcmp("VectorsAttributeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->VectorsAttributeOff();
      return 1;
      }
    }
  if (!strcmp("SetNormalsAttribute",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNormalsAttribute(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNormalsAttribute",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNormalsAttribute();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NormalsAttributeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->NormalsAttributeOn();
      return 1;
      }
    }
  if (!strcmp("NormalsAttributeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->NormalsAttributeOff();
      return 1;
      }
    }
  if (!strcmp("SetTCoordsAttribute",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTCoordsAttribute(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTCoordsAttribute",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTCoordsAttribute();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TCoordsAttributeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TCoordsAttributeOn();
      return 1;
      }
    }
  if (!strcmp("TCoordsAttributeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TCoordsAttributeOff();
      return 1;
      }
    }
  if (!strcmp("SetTensorsAttribute",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTensorsAttribute(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTensorsAttribute",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTensorsAttribute();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TensorsAttributeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TensorsAttributeOn();
      return 1;
      }
    }
  if (!strcmp("TensorsAttributeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TensorsAttributeOff();
      return 1;
      }
    }
  if (!strcmp("SetScalarsWeight",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScalarsWeight(temp0);
      return 1;
      }
    }
  if (!strcmp("SetVectorsWeight",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVectorsWeight(temp0);
      return 1;
      }
    }
  if (!strcmp("SetNormalsWeight",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNormalsWeight(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTCoordsWeight",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTCoordsWeight(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTensorsWeight",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTensorsWeight(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarsWeight",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetScalarsWeight();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVectorsWeight",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetVectorsWeight();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNormalsWeight",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetNormalsWeight();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTCoordsWeight",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetTCoordsWeight();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTensorsWeight",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetTensorsWeight();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetActualReduction",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetActualReduction();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkPolyDataAlgorithm";
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
  vtkmsg << "Object type: vtkQuadricDecimation, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkQuadricDecimation_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkQuadricDecimation", vtkQuadricDecimationClientServerNewCommand);
    csi->AddCommandFunction("vtkQuadricDecimation", vtkQuadricDecimationCommand);
    }
}
