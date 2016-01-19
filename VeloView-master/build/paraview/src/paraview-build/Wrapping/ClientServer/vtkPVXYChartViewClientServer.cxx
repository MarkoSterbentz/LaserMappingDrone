// ClientServer wrapper for vtkPVXYChartView object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPVXYChartView.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPVXYChartViewClientServerNewCommand(void* /*ctx*/)
{
  return vtkPVXYChartView::New();
}


int VTK_EXPORT vtkPVXYChartViewCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPVXYChartView *op = vtkPVXYChartView::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPVXYChartView.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPVXYChartView  *temp20;
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
    vtkPVXYChartView  *temp20;
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
    vtkPVXYChartView  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetChartType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetChartType(temp0);
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
  if (!strcmp("SetChartTypeToBar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetChartTypeToBar();
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
  if (!strcmp("SetChartTypeToBox",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetChartTypeToBox();
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
  if (!strcmp("SetChartTypeToParallelCoordinates",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetChartTypeToParallelCoordinates();
      return 1;
      }
    }
  if (!strcmp("SetTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTitle(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTitleFont",method) && msg.GetNumberOfArguments(0) == 6)
    {
    char    *temp0;
    int      temp1;
    bool   temp2;
    bool   temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetTitleFont(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetTitleFontFamily",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTitleFontFamily(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTitleFontSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTitleFontSize(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTitleBold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTitleBold(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTitleItalic",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTitleItalic(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTitleColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetTitleColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetTitleAlignment",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTitleAlignment(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLegendVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLegendVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLegendLocation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLegendLocation(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLegendFontFamily",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLegendFontFamily(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLegendFontSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLegendFontSize(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLegendBold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLegendBold(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLegendItalic",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLegendItalic(temp0);
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
  if (!strcmp("SetLeftGridVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftGridVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomGridVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomGridVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightGridVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightGridVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopGridVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopGridVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisColor",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetAxisColor(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetLeftAxisColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetBottomAxisColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetRightAxisColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetTopAxisColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetGridColor",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetGridColor(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetLeftGridColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetLeftGridColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetBottomGridColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetBottomGridColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetRightGridColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetRightGridColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetTopGridColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetTopGridColor(temp0,temp1,temp2);
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
  if (!strcmp("SetLeftAxisLabelVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisLabelVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisLabelVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisLabelVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisLabelVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisLabelVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisLabelVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisLabelVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisLabelFont",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    char    *temp1;
    int      temp2;
    bool   temp3;
    bool   temp4;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->SetAxisLabelFont(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("SetAxisLabelFontFamily",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisLabelFontFamily(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisLabelFontFamily",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisLabelFontFamily(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisLabelFontFamily",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisLabelFontFamily(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisLabelFontFamily",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisLabelFontFamily(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisLabelFontFamily",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisLabelFontFamily(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisLabelFontSize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisLabelFontSize(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisLabelFontSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisLabelFontSize(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisLabelFontSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisLabelFontSize(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisLabelFontSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisLabelFontSize(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisLabelFontSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisLabelFontSize(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisLabelBold",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisLabelBold(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisLabelBold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisLabelBold(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisLabelBold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisLabelBold(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisLabelBold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisLabelBold(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisLabelBold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisLabelBold(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisLabelItalic",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisLabelItalic(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisLabelItalic",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisLabelItalic(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisLabelItalic",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisLabelItalic(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisLabelItalic",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisLabelItalic(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisLabelItalic",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisLabelItalic(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisLabelColor",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetAxisLabelColor(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisLabelColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetLeftAxisLabelColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisLabelColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetBottomAxisLabelColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisLabelColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetRightAxisLabelColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisLabelColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetTopAxisLabelColor(temp0,temp1,temp2);
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
  if (!strcmp("SetLeftAxisLabelNotation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisLabelNotation(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisLabelNotation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisLabelNotation(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisLabelNotation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisLabelNotation(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisLabelNotation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisLabelNotation(temp0);
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
  if (!strcmp("SetLeftAxisLabelPrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisLabelPrecision(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisLabelPrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisLabelPrecision(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisLabelPrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisLabelPrecision(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisLabelPrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisLabelPrecision(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisRangeMinimum",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisRangeMinimum(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisRangeMinimum",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisRangeMinimum(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisRangeMinimum",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisRangeMinimum(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisRangeMinimum",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisRangeMinimum(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisRangeMaximum",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisRangeMaximum(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisRangeMaximum",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisRangeMaximum(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisRangeMaximum",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisRangeMaximum(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisRangeMaximum",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisRangeMaximum(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisUseCustomRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisUseCustomRange(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisUseCustomRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisUseCustomRange(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisUseCustomRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisUseCustomRange(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisUseCustomRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisUseCustomRange(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisUseCustomRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisUseCustomRange(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisLogScale",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisLogScale(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisLogScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisLogScale(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisLogScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisLogScale(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisLogScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisLogScale(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisLogScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisLogScale(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisTitle",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisTitle(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisTitle(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisTitle(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisTitle(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisTitle(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisTitleFont",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    char    *temp1;
    int      temp2;
    bool   temp3;
    bool   temp4;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->SetAxisTitleFont(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("SetAxisTitleFontFamily",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisTitleFontFamily(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisTitleFontFamily",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisTitleFontFamily(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisTitleFontFamily",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisTitleFontFamily(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisTitleFontFamily",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisTitleFontFamily(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisTitleFontFamily",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisTitleFontFamily(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisTitleFontSize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisTitleFontSize(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisTitleFontSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisTitleFontSize(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisTitleFontSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisTitleFontSize(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisTitleFontSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisTitleFontSize(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisTitleFontSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisTitleFontSize(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisTitleBold",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisTitleBold(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisTitleBold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisTitleBold(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisTitleBold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisTitleBold(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisTitleBold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisTitleBold(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisTitleBold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisTitleBold(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisTitleItalic",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisTitleItalic(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisTitleItalic",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisTitleItalic(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisTitleItalic",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisTitleItalic(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisTitleItalic",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisTitleItalic(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisTitleItalic",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisTitleItalic(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisTitleColor",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetAxisTitleColor(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisTitleColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetLeftAxisTitleColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisTitleColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetBottomAxisTitleColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisTitleColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetRightAxisTitleColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisTitleColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetTopAxisTitleColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetAxisUseCustomLabels",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisUseCustomLabels(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisUseCustomLabels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisUseCustomLabels(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisUseCustomLabels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisUseCustomLabels(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisUseCustomLabels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisUseCustomLabels(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisUseCustomLabels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisUseCustomLabels(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisLabelsNumber",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetAxisLabelsNumber(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisLabelsNumber",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLeftAxisLabelsNumber(temp0);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisLabelsNumber",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBottomAxisLabelsNumber(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisLabelsNumber",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRightAxisLabelsNumber(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisLabelsNumber",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTopAxisLabelsNumber(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxisLabels",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    int      temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetAxisLabels(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetLeftAxisLabels",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetLeftAxisLabels(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetBottomAxisLabels",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetBottomAxisLabels(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetRightAxisLabels",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetRightAxisLabels(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetTopAxisLabels",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetTopAxisLabels(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetTooltipNotation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTooltipNotation(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTooltipPrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTooltipPrecision(temp0);
      return 1;
      }
    }
  if (!strcmp("SetHideTimeMarker",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetHideTimeMarker(temp0);
      return 1;
      }
    }
  if (!strcmp("GetHideTimeMarker",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetHideTimeMarker();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetChart",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkChart  *temp20;
      {
      temp20 = (op)->GetChart();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetContextItem",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractContextItem  *temp20;
      {
      temp20 = (op)->GetContextItem();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSelection",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkChartRepresentation  *temp0;
    vtkSelection  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkChartRepresentation") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSelection"))
      {
      op->SetSelection(temp0,temp1);
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

  {
    const char* commandName = "vtkPVContextView";
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
  vtkmsg << "Object type: vtkPVXYChartView, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPVXYChartView_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPVXYChartView", vtkPVXYChartViewClientServerNewCommand);
    csi->AddCommandFunction("vtkPVXYChartView", vtkPVXYChartViewCommand);
    }
}
