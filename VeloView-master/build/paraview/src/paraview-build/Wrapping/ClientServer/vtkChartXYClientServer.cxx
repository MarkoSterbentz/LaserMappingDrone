// ClientServer wrapper for vtkChartXY object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkChartXY.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkChartXYClientServerNewCommand(void* /*ctx*/)
{
  return vtkChartXY::New();
}


int VTK_EXPORT vtkChartXYCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkChartXY *op = vtkChartXY::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkChartXY.  "
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
    vtkChartXY  *temp20;
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
    vtkChartXY  *temp20;
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
    vtkChartXY  *temp20;
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
  if (!strcmp("AddPlot",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkPlot  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->AddPlot(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddPlot",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPlot  *temp0;
    vtkIdType   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPlot"))
      {
      temp20 = (op)->AddPlot(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemovePlot",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->RemovePlot(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ClearPlots",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearPlots();
      return 1;
      }
    }
  if (!strcmp("GetPlot",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    vtkPlot  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetPlot(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPlotIndex",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPlot  *temp0;
    vtkIdType   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPlot"))
      {
      temp20 = (op)->GetPlotIndex(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RaisePlot",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPlot  *temp0;
    vtkIdType   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPlot"))
      {
      temp20 = (op)->RaisePlot(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StackPlotAbove",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPlot  *temp0;
    vtkPlot  *temp1;
    vtkIdType   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPlot") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPlot"))
      {
      temp20 = (op)->StackPlotAbove(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LowerPlot",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPlot  *temp0;
    vtkIdType   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPlot"))
      {
      temp20 = (op)->LowerPlot(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StackPlotUnder",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPlot  *temp0;
    vtkPlot  *temp1;
    vtkIdType   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPlot") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPlot"))
      {
      temp20 = (op)->StackPlotUnder(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfPlots",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetNumberOfPlots();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPlotCorner",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPlot  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPlot"))
      {
      temp20 = (op)->GetPlotCorner(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPlotCorner",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPlot  *temp0;
    int      temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPlot") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetPlotCorner(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetAxis",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkAxis  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetAxis(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetShowLegend",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetShowLegend(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLegend",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkChartLegend  *temp20;
      {
      temp20 = (op)->GetLegend();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("GetNumberOfAxes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetNumberOfAxes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RecalculateBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RecalculateBounds();
      return 1;
      }
    }
  if (!strcmp("SetSelectionMethod",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSelectionMethod(temp0);
      return 1;
      }
    }
  if (!strcmp("SetDrawAxesAtOrigin",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawAxesAtOrigin(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawAxesAtOrigin",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetDrawAxesAtOrigin();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawAxesAtOriginOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawAxesAtOriginOn();
      return 1;
      }
    }
  if (!strcmp("DrawAxesAtOriginOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawAxesAtOriginOff();
      return 1;
      }
    }
  if (!strcmp("SetAutoAxes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAutoAxes(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAutoAxes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetAutoAxes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AutoAxesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutoAxesOn();
      return 1;
      }
    }
  if (!strcmp("AutoAxesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutoAxesOff();
      return 1;
      }
    }
  if (!strcmp("SetHiddenAxisBorder",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetHiddenAxisBorder(temp0);
      return 1;
      }
    }
  if (!strcmp("GetHiddenAxisBorder",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetHiddenAxisBorder();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetForceAxesToBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetForceAxesToBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetForceAxesToBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetForceAxesToBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ForceAxesToBoundsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ForceAxesToBoundsOn();
      return 1;
      }
    }
  if (!strcmp("ForceAxesToBoundsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ForceAxesToBoundsOff();
      return 1;
      }
    }
  if (!strcmp("SetBarWidthFraction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBarWidthFraction(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBarWidthFraction",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetBarWidthFraction();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkChart";
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
  vtkmsg << "Object type: vtkChartXY, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkChartXY_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkChartXY", vtkChartXYClientServerNewCommand);
    csi->AddCommandFunction("vtkChartXY", vtkChartXYCommand);
    }
}
