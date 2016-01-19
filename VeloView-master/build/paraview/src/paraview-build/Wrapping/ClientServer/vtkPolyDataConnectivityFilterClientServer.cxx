// ClientServer wrapper for vtkPolyDataConnectivityFilter object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPolyDataConnectivityFilter.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPolyDataConnectivityFilterClientServerNewCommand(void* /*ctx*/)
{
  return vtkPolyDataConnectivityFilter::New();
}


int VTK_EXPORT vtkPolyDataConnectivityFilterCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPolyDataConnectivityFilter *op = vtkPolyDataConnectivityFilter::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPolyDataConnectivityFilter.  "
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
    vtkPolyDataConnectivityFilter  *temp20;
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
    vtkPolyDataConnectivityFilter  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRegionSizes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdTypeArray  *temp20;
      {
      temp20 = (op)->GetRegionSizes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPolyDataConnectivityFilter  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScalarConnectivity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScalarConnectivity(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarConnectivity",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScalarConnectivity();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScalarConnectivityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScalarConnectivityOn();
      return 1;
      }
    }
  if (!strcmp("ScalarConnectivityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScalarConnectivityOff();
      return 1;
      }
    }
  if (!strcmp("SetFullScalarConnectivity",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFullScalarConnectivity(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFullScalarConnectivity",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetFullScalarConnectivity();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FullScalarConnectivityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->FullScalarConnectivityOn();
      return 1;
      }
    }
  if (!strcmp("FullScalarConnectivityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->FullScalarConnectivityOff();
      return 1;
      }
    }
  if (!strcmp("SetScalarRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetScalarRange(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetScalarRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetScalarRange(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetScalarRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetExtractionMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetExtractionMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetExtractionModeMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetExtractionModeMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetExtractionModeMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetExtractionModeMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetExtractionMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetExtractionMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetExtractionModeToPointSeededRegions",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetExtractionModeToPointSeededRegions();
      return 1;
      }
    }
  if (!strcmp("SetExtractionModeToCellSeededRegions",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetExtractionModeToCellSeededRegions();
      return 1;
      }
    }
  if (!strcmp("SetExtractionModeToLargestRegion",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetExtractionModeToLargestRegion();
      return 1;
      }
    }
  if (!strcmp("SetExtractionModeToSpecifiedRegions",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetExtractionModeToSpecifiedRegions();
      return 1;
      }
    }
  if (!strcmp("SetExtractionModeToClosestPointRegion",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetExtractionModeToClosestPointRegion();
      return 1;
      }
    }
  if (!strcmp("SetExtractionModeToAllRegions",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetExtractionModeToAllRegions();
      return 1;
      }
    }
  if (!strcmp("GetExtractionModeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetExtractionModeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InitializeSeedList",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InitializeSeedList();
      return 1;
      }
    }
  if (!strcmp("AddSeed",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddSeed(temp0);
      return 1;
      }
    }
  if (!strcmp("DeleteSeed",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->DeleteSeed(temp0);
      return 1;
      }
    }
  if (!strcmp("InitializeSpecifiedRegionList",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InitializeSpecifiedRegionList();
      return 1;
      }
    }
  if (!strcmp("AddSpecifiedRegion",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddSpecifiedRegion(temp0);
      return 1;
      }
    }
  if (!strcmp("DeleteSpecifiedRegion",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->DeleteSpecifiedRegion(temp0);
      return 1;
      }
    }
  if (!strcmp("SetClosestPoint",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetClosestPoint(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetClosestPoint",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetClosestPoint(temp0);
      return 1;
      }
    }
  if (!strcmp("GetClosestPoint",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetClosestPoint();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfExtractedRegions",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfExtractedRegions();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetColorRegions",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetColorRegions(temp0);
      return 1;
      }
    }
  if (!strcmp("GetColorRegions",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetColorRegions();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ColorRegionsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ColorRegionsOn();
      return 1;
      }
    }
  if (!strcmp("ColorRegionsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ColorRegionsOff();
      return 1;
      }
    }
  if (!strcmp("SetMarkVisitedPointIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMarkVisitedPointIds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMarkVisitedPointIds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMarkVisitedPointIds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MarkVisitedPointIdsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MarkVisitedPointIdsOn();
      return 1;
      }
    }
  if (!strcmp("MarkVisitedPointIdsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MarkVisitedPointIdsOff();
      return 1;
      }
    }
  if (!strcmp("GetVisitedPointIds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdList  *temp20;
      {
      temp20 = (op)->GetVisitedPointIds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutputPointsPrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutputPointsPrecision(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutputPointsPrecision",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutputPointsPrecision();
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
  vtkmsg << "Object type: vtkPolyDataConnectivityFilter, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPolyDataConnectivityFilter_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPolyDataConnectivityFilter", vtkPolyDataConnectivityFilterClientServerNewCommand);
    csi->AddCommandFunction("vtkPolyDataConnectivityFilter", vtkPolyDataConnectivityFilterCommand);
    }
}
