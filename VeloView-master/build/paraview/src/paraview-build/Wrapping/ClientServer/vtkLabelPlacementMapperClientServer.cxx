// ClientServer wrapper for vtkLabelPlacementMapper object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkLabelPlacementMapper.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkLabelPlacementMapperClientServerNewCommand(void* /*ctx*/)
{
  return vtkLabelPlacementMapper::New();
}


int VTK_EXPORT vtkLabelPlacementMapperCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkLabelPlacementMapper *op = vtkLabelPlacementMapper::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkLabelPlacementMapper.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkLabelPlacementMapper  *temp20;
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
    vtkLabelPlacementMapper  *temp20;
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
    vtkLabelPlacementMapper  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderOverlay",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkViewport  *temp0;
    vtkActor2D  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkActor2D"))
      {
      op->RenderOverlay(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetRenderStrategy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkLabelRenderStrategy  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkLabelRenderStrategy"))
      {
      op->SetRenderStrategy(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRenderStrategy",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkLabelRenderStrategy  *temp20;
      {
      temp20 = (op)->GetRenderStrategy();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaximumLabelFraction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumLabelFraction(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaximumLabelFractionMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaximumLabelFractionMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaximumLabelFractionMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaximumLabelFractionMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaximumLabelFraction",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaximumLabelFraction();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIteratorType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIteratorType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIteratorType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetIteratorType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseUnicodeStrings",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseUnicodeStrings(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseUnicodeStrings",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseUnicodeStrings();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseUnicodeStringsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseUnicodeStringsOn();
      return 1;
      }
    }
  if (!strcmp("UseUnicodeStringsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseUnicodeStringsOff();
      return 1;
      }
    }
  if (!strcmp("GetPositionsAsNormals",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetPositionsAsNormals();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPositionsAsNormals",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPositionsAsNormals(temp0);
      return 1;
      }
    }
  if (!strcmp("PositionsAsNormalsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PositionsAsNormalsOn();
      return 1;
      }
    }
  if (!strcmp("PositionsAsNormalsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PositionsAsNormalsOff();
      return 1;
      }
    }
  if (!strcmp("GetGeneratePerturbedLabelSpokes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetGeneratePerturbedLabelSpokes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGeneratePerturbedLabelSpokes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGeneratePerturbedLabelSpokes(temp0);
      return 1;
      }
    }
  if (!strcmp("GeneratePerturbedLabelSpokesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePerturbedLabelSpokesOn();
      return 1;
      }
    }
  if (!strcmp("GeneratePerturbedLabelSpokesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GeneratePerturbedLabelSpokesOff();
      return 1;
      }
    }
  if (!strcmp("GetUseDepthBuffer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseDepthBuffer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseDepthBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseDepthBuffer(temp0);
      return 1;
      }
    }
  if (!strcmp("UseDepthBufferOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseDepthBufferOn();
      return 1;
      }
    }
  if (!strcmp("UseDepthBufferOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseDepthBufferOff();
      return 1;
      }
    }
  if (!strcmp("SetPlaceAllLabels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPlaceAllLabels(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPlaceAllLabels",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetPlaceAllLabels();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PlaceAllLabelsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PlaceAllLabelsOn();
      return 1;
      }
    }
  if (!strcmp("PlaceAllLabelsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PlaceAllLabelsOff();
      return 1;
      }
    }
  if (!strcmp("SetOutputTraversedBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutputTraversedBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutputTraversedBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetOutputTraversedBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("OutputTraversedBoundsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OutputTraversedBoundsOn();
      return 1;
      }
    }
  if (!strcmp("OutputTraversedBoundsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OutputTraversedBoundsOff();
      return 1;
      }
    }
  if (!strcmp("SetShape",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetShape(temp0);
      return 1;
      }
    }
  if (!strcmp("GetShapeMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetShapeMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetShapeMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetShapeMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetShape",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetShape();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetShapeToNone",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetShapeToNone();
      return 1;
      }
    }
  if (!strcmp("SetShapeToRect",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetShapeToRect();
      return 1;
      }
    }
  if (!strcmp("SetShapeToRoundedRect",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetShapeToRoundedRect();
      return 1;
      }
    }
  if (!strcmp("SetStyle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetStyle(temp0);
      return 1;
      }
    }
  if (!strcmp("GetStyleMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStyleMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetStyleMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStyleMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetStyle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStyle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetStyleToFilled",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetStyleToFilled();
      return 1;
      }
    }
  if (!strcmp("SetStyleToOutline",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetStyleToOutline();
      return 1;
      }
    }
  if (!strcmp("SetMargin",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMargin(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMargin",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMargin();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBackgroundColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetBackgroundColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetBackgroundColor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetBackgroundColor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBackgroundColor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetBackgroundColor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBackgroundOpacity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBackgroundOpacity(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBackgroundOpacityMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetBackgroundOpacityMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBackgroundOpacityMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetBackgroundOpacityMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBackgroundOpacity",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetBackgroundOpacity();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAnchorTransform",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCoordinate  *temp20;
      {
      temp20 = (op)->GetAnchorTransform();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkMapper2D";
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
  vtkmsg << "Object type: vtkLabelPlacementMapper, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkLabelPlacementMapper_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkLabelPlacementMapper", vtkLabelPlacementMapperClientServerNewCommand);
    csi->AddCommandFunction("vtkLabelPlacementMapper", vtkLabelPlacementMapperCommand);
    }
}
