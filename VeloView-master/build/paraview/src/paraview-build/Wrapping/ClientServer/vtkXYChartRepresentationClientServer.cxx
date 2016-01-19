// ClientServer wrapper for vtkXYChartRepresentation object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkXYChartRepresentation.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkXYChartRepresentationClientServerNewCommand(void* /*ctx*/)
{
  return vtkXYChartRepresentation::New();
}


int VTK_EXPORT vtkXYChartRepresentationCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkXYChartRepresentation *op = vtkXYChartRepresentation::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkXYChartRepresentation.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkXYChartRepresentation  *temp20;
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
    vtkXYChartRepresentation  *temp20;
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
    vtkXYChartRepresentation  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("SetChartType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetChartType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetChartType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetChartType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetChartTypeToLine",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetChartTypeToLine();
      return 1;
      }
    }
  if (!strcmp("SetChartTypeToPoints",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetChartTypeToPoints();
      return 1;
      }
    }
  if (!strcmp("SetChartTypeToBar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetChartTypeToBar();
      return 1;
      }
    }
  if (!strcmp("SetChartTypeToStacked",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetChartTypeToStacked();
      return 1;
      }
    }
  if (!strcmp("SetChartTypeToBag",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetChartTypeToBag();
      return 1;
      }
    }
  if (!strcmp("SetChartTypeToFunctionalBag",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetChartTypeToFunctionalBag();
      return 1;
      }
    }
  if (!strcmp("GetChart",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkChartXY  *temp20;
      {
      temp20 = (op)->GetChart();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetXAxisSeriesName",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetXAxisSeriesName(temp0);
      return 1;
      }
    }
  if (!strcmp("GetXAxisSeriesName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetXAxisSeriesName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseIndexForXAxis",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseIndexForXAxis(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseIndexForXAxis",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseIndexForXAxis();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSeriesVisibility",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetSeriesVisibility(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLineThickness",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetLineThickness(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLineStyle",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetLineStyle(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetColor",method) && msg.GetNumberOfArguments(0) == 6)
    {
    char    *temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetColor(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetAxisCorner",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisCorner(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetMarkerStyle",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetMarkerStyle(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLabel",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetLabel(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetUseColorMapping",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetUseColorMapping(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLookupTable",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    vtkScalarsToColors  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkScalarsToColors"))
      {
      op->SetLookupTable(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetLabel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    const char    *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetLabel(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ClearSeriesVisibilities",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearSeriesVisibilities();
      return 1;
      }
    }
  if (!strcmp("ClearLineThicknesses",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearLineThicknesses();
      return 1;
      }
    }
  if (!strcmp("ClearLineStyles",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearLineStyles();
      return 1;
      }
    }
  if (!strcmp("ClearColors",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearColors();
      return 1;
      }
    }
  if (!strcmp("ClearAxisCorners",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearAxisCorners();
      return 1;
      }
    }
  if (!strcmp("ClearMarkerStyles",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearMarkerStyles();
      return 1;
      }
    }
  if (!strcmp("ClearLabels",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearLabels();
      return 1;
      }
    }

  {
    const char* commandName = "vtkChartRepresentation";
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
  vtkmsg << "Object type: vtkXYChartRepresentation, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkXYChartRepresentation_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkXYChartRepresentation", vtkXYChartRepresentationClientServerNewCommand);
    csi->AddCommandFunction("vtkXYChartRepresentation", vtkXYChartRepresentationCommand);
    }
}
