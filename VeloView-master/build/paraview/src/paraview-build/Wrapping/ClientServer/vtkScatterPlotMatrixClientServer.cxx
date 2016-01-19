// ClientServer wrapper for vtkScatterPlotMatrix object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkScatterPlotMatrix.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkScatterPlotMatrixClientServerNewCommand(void* /*ctx*/)
{
  return vtkScatterPlotMatrix::New();
}


int VTK_EXPORT vtkScatterPlotMatrixCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkScatterPlotMatrix *op = vtkScatterPlotMatrix::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkScatterPlotMatrix.  "
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
    vtkScatterPlotMatrix  *temp20;
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
    vtkScatterPlotMatrix  *temp20;
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
    vtkScatterPlotMatrix  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("Paint",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkContext2D  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkContext2D"))
      {
      temp20 = (op)->Paint(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
#if !defined(VTK_LEGACY_REMOVE)
  if (!strcmp("GetActiveAnnotationLink",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAnnotationLink  *temp20;
      {
      temp20 = (op)->GetActiveAnnotationLink();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
#endif
  if (!strcmp("GetAnnotationLink",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAnnotationLink  *temp20;
      {
      temp20 = (op)->GetAnnotationLink();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInput",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTable  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTable"))
      {
      op->SetInput(temp0);
      return 1;
      }
    }
  if (!strcmp("SetColumnVisibility",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetColumnVisibility(vtkStdString(temp0),temp1);
      return 1;
      }
    }
  if (!strcmp("InsertVisibleColumn",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->InsertVisibleColumn(vtkStdString(temp0),temp1);
      return 1;
      }
    }
  if (!strcmp("GetColumnVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetColumnVisibility(vtkStdString(temp0));
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetColumnVisibilityAll",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetColumnVisibilityAll(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVisibleColumns",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStringArray  *temp20;
      {
      temp20 = (op)->GetVisibleColumns();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetVisibleColumns",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkStringArray  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkStringArray"))
      {
      op->SetVisibleColumns(temp0);
      return 1;
      }
    }
  if (!strcmp("SetNumberOfBins",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfBins(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfBins",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfBins();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPlotMarkerStyle",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetPlotMarkerStyle(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetPlotMarkerSize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    float    temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetPlotMarkerSize(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetPlotType",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetPlotType(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTitle(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("GetTitle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStdString   temp20;
      {
      temp20 = (op)->GetTitle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTitleProperties",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextProperty"))
      {
      op->SetTitleProperties(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTitleProperties",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTextProperty  *temp20;
      {
      temp20 = (op)->GetTitleProperties();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGridVisibility",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetGridVisibility(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetGridVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetGridVisibility(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAxisLabelVisibility",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisLabelVisibility(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetAxisLabelVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAxisLabelVisibility(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAxisLabelProperties",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkTextProperty  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkTextProperty"))
      {
      op->SetAxisLabelProperties(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetAxisLabelProperties",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkTextProperty  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAxisLabelProperties(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAxisLabelNotation",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisLabelNotation(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetAxisLabelNotation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAxisLabelNotation(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAxisLabelPrecision",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisLabelPrecision(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetAxisLabelPrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAxisLabelPrecision(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTooltipNotation",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetTooltipNotation(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetTooltipPrecision",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetTooltipPrecision(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetTooltipNotation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetTooltipNotation(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTooltipPrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetTooltipPrecision(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTooltip",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTooltipItem  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTooltipItem"))
      {
      op->SetTooltip(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTooltip",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTooltipItem  *temp20;
      {
      temp20 = (op)->GetTooltip();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIndexedLabels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkStringArray  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkStringArray"))
      {
      op->SetIndexedLabels(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIndexedLabels",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStringArray  *temp20;
      {
      temp20 = (op)->GetIndexedLabels();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UpdateSettings",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UpdateSettings();
      return 1;
      }
    }
  if (!strcmp("UpdateChartSettings",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->UpdateChartSettings(temp0);
      return 1;
      }
    }
  if (!strcmp("SetSelectionMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSelectionMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSelectionMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSelectionMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetColumnName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkStdString   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetColumnName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRowName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkStdString   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetRowName(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfFrames",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfFrames(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfFrames",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfFrames();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ClearAnimationPath",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearAnimationPath();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfAnimationPathElements",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetNumberOfAnimationPathElements();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("BeginAnimationPath",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderWindowInteractor  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderWindowInteractor"))
      {
      temp20 = (op)->BeginAnimationPath(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AdvanceAnimation",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AdvanceAnimation();
      return 1;
      }
    }
  if (!strcmp("GetMainChart",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkChart  *temp20;
      {
      temp20 = (op)->GetMainChart();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkChartMatrix";
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
  vtkmsg << "Object type: vtkScatterPlotMatrix, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkScatterPlotMatrix_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkScatterPlotMatrix", vtkScatterPlotMatrixClientServerNewCommand);
    csi->AddCommandFunction("vtkScatterPlotMatrix", vtkScatterPlotMatrixCommand);
    }
}
