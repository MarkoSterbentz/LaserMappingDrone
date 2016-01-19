// ClientServer wrapper for vtkKdTree object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkKdTree.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkKdTreeClientServerNewCommand(void* /*ctx*/)
{
  return vtkKdTree::New();
}


int VTK_EXPORT vtkKdTreeCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkKdTree *op = vtkKdTree::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkKdTree.  "
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
    vtkKdTree  *temp20;
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
    vtkKdTree  *temp20;
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
    vtkKdTree  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TimingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TimingOn();
      return 1;
      }
    }
  if (!strcmp("TimingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TimingOff();
      return 1;
      }
    }
  if (!strcmp("SetTiming",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTiming(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTiming",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTiming();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMinCells",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMinCells(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMinCells",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMinCells();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfRegionsOrLess",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfRegionsOrLess();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfRegionsOrLess",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfRegionsOrLess(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfRegionsOrMore",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfRegionsOrMore();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfRegionsOrMore",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfRegionsOrMore(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFudgeFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetFudgeFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFudgeFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFudgeFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCuts",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkBSPCuts  *temp20;
      {
      temp20 = (op)->GetCuts();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCuts",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkBSPCuts  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkBSPCuts"))
      {
      op->SetCuts(temp0);
      return 1;
      }
    }
  if (!strcmp("OmitXPartitioning",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OmitXPartitioning();
      return 1;
      }
    }
  if (!strcmp("OmitYPartitioning",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OmitYPartitioning();
      return 1;
      }
    }
  if (!strcmp("OmitZPartitioning",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OmitZPartitioning();
      return 1;
      }
    }
  if (!strcmp("OmitXYPartitioning",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OmitXYPartitioning();
      return 1;
      }
    }
  if (!strcmp("OmitYZPartitioning",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OmitYZPartitioning();
      return 1;
      }
    }
  if (!strcmp("OmitZXPartitioning",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OmitZXPartitioning();
      return 1;
      }
    }
  if (!strcmp("OmitNoPartitioning",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OmitNoPartitioning();
      return 1;
      }
    }
  if (!strcmp("SetDataSet",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataSet  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSet"))
      {
      op->SetDataSet(temp0);
      return 1;
      }
    }
  if (!strcmp("AddDataSet",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataSet  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSet"))
      {
      op->AddDataSet(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveDataSet",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemoveDataSet(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveDataSet",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataSet  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSet"))
      {
      op->RemoveDataSet(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveAllDataSets",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RemoveAllDataSets();
      return 1;
      }
    }
  if (!strcmp("GetNumberOfDataSets",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfDataSets();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDataSet",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkDataSet  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetDataSet(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDataSet",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataSet  *temp20;
      {
      temp20 = (op)->GetDataSet();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDataSets",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDataSetCollection  *temp20;
      {
      temp20 = (op)->GetDataSets();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDataSetIndex",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDataSet  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSet"))
      {
      temp20 = (op)->GetDataSetIndex(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    if(temp0)
      {
      op->GetBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("SetNewBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    if(temp0)
      {
      op->SetNewBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfRegions",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfRegions();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PrintTree",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PrintTree();
      return 1;
      }
    }
  if (!strcmp("PrintVerboseTree",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PrintVerboseTree();
      return 1;
      }
    }
  if (!strcmp("PrintRegion",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->PrintRegion(temp0);
      return 1;
      }
    }
  if (!strcmp("CreateCellLists",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    int      temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CreateCellLists(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CreateCellLists",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataSet  *temp0;
    vtkClientServerStreamDataArg<int    > temp1(msg, 0, 3);
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSet") &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->CreateCellLists(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CreateCellLists",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    int      temp1;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->CreateCellLists(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("CreateCellLists",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CreateCellLists();
      return 1;
      }
    }
  if (!strcmp("SetIncludeRegionBoundaryCells",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIncludeRegionBoundaryCells(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIncludeRegionBoundaryCells",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetIncludeRegionBoundaryCells();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IncludeRegionBoundaryCellsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->IncludeRegionBoundaryCellsOn();
      return 1;
      }
    }
  if (!strcmp("IncludeRegionBoundaryCellsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->IncludeRegionBoundaryCellsOff();
      return 1;
      }
    }
  if (!strcmp("DeleteCellLists",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DeleteCellLists();
      return 1;
      }
    }
  if (!strcmp("GetCellList",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkIdList  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetCellList(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBoundaryCellList",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkIdList  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetBoundaryCellList(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCellLists",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkIntArray  *temp0;
    int      temp1;
    vtkIdList  *temp2;
    vtkIdList  *temp3;
    vtkIdType   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkIntArray") &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIdList") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkIdList"))
      {
      temp20 = (op)->GetCellLists(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCellLists",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkIntArray  *temp0;
    vtkDataSet  *temp1;
    vtkIdList  *temp2;
    vtkIdList  *temp3;
    vtkIdType   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkIntArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataSet") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIdList") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkIdList"))
      {
      temp20 = (op)->GetCellLists(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCellLists",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkIntArray  *temp0;
    vtkIdList  *temp1;
    vtkIdList  *temp2;
    vtkIdType   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkIntArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIdList") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIdList"))
      {
      temp20 = (op)->GetCellLists(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRegionContainingCell",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkDataSet  *temp0;
    vtkIdType   temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSet") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetRegionContainingCell(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRegionContainingCell",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkIdType   temp1;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetRegionContainingCell(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRegionContainingCell",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetRegionContainingCell(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRegionContainingPoint",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->GetRegionContainingPoint(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("BuildLocator",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BuildLocator();
      return 1;
      }
    }
  if (!strcmp("BuildLocatorFromPoints",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPointSet  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPointSet"))
      {
      op->BuildLocatorFromPoints(temp0);
      return 1;
      }
    }
  if (!strcmp("BuildLocatorFromPoints",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPoints  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints"))
      {
      op->BuildLocatorFromPoints(temp0);
      return 1;
      }
    }
  if (!strcmp("BuildMapForDuplicatePoints",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    vtkIdTypeArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->BuildMapForDuplicatePoints(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FindPoint",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkIdType   temp20;
    if(temp0)
      {
      temp20 = (op)->FindPoint(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FindPoint",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->FindPoint(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPointsInRegion",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkIdTypeArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetPointsInRegion(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FreeSearchStructure",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->FreeSearchStructure();
      return 1;
      }
    }
  if (!strcmp("GenerateRepresentation",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkPolyData  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPolyData"))
      {
      op->GenerateRepresentation(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GenerateRepresentation",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    int      temp1;
    vtkPolyData  *temp2;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkPolyData"))
      {
      op->GenerateRepresentation(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GenerateRepresentationUsingDataBoundsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateRepresentationUsingDataBoundsOn();
      return 1;
      }
    }
  if (!strcmp("GenerateRepresentationUsingDataBoundsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateRepresentationUsingDataBoundsOff();
      return 1;
      }
    }
  if (!strcmp("SetGenerateRepresentationUsingDataBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateRepresentationUsingDataBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateRepresentationUsingDataBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateRepresentationUsingDataBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NewGeometry",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->NewGeometry();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InvalidateGeometry",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InvalidateGeometry();
      return 1;
      }
    }
  if (!strcmp("CopyTree",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkKdNode  *temp0;
    vtkKdNode  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkKdNode"))
      {
      temp20 = (op)->CopyTree(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FindPointsInArea",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkIdTypeArray  *temp1;
    bool   temp2;
    if(temp0 &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIdTypeArray") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->FindPointsInArea(temp0,temp1,temp2);
      return 1;
      }
    }

  {
    const char* commandName = "vtkLocator";
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
  vtkmsg << "Object type: vtkKdTree, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkKdTree_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkKdTree", vtkKdTreeClientServerNewCommand);
    csi->AddCommandFunction("vtkKdTree", vtkKdTreeCommand);
    }
}
