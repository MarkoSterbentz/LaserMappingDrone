// ClientServer wrapper for vtkAMRDualContour object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkAMRDualContour.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkAMRDualContourClientServerNewCommand(void* /*ctx*/)
{
  return vtkAMRDualContour::New();
}


int VTK_EXPORT vtkAMRDualContourCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkAMRDualContour *op = vtkAMRDualContour::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkAMRDualContour.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAMRDualContour  *temp20;
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
    vtkAMRDualContour  *temp20;
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
    vtkAMRDualContour  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetIsoValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetIsoValue(temp0);
      return 1;
      }
    }
  if (!strcmp("GetIsoValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetIsoValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEnableCapping",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnableCapping(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEnableCapping",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEnableCapping();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EnableCappingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableCappingOn();
      return 1;
      }
    }
  if (!strcmp("EnableCappingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableCappingOff();
      return 1;
      }
    }
  if (!strcmp("SetEnableDegenerateCells",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnableDegenerateCells(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEnableDegenerateCells",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEnableDegenerateCells();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EnableDegenerateCellsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableDegenerateCellsOn();
      return 1;
      }
    }
  if (!strcmp("EnableDegenerateCellsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableDegenerateCellsOff();
      return 1;
      }
    }
  if (!strcmp("SetEnableMultiProcessCommunication",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnableMultiProcessCommunication(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEnableMultiProcessCommunication",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEnableMultiProcessCommunication();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EnableMultiProcessCommunicationOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableMultiProcessCommunicationOn();
      return 1;
      }
    }
  if (!strcmp("EnableMultiProcessCommunicationOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableMultiProcessCommunicationOff();
      return 1;
      }
    }
  if (!strcmp("SetEnableMergePoints",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnableMergePoints(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEnableMergePoints",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEnableMergePoints();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EnableMergePointsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableMergePointsOn();
      return 1;
      }
    }
  if (!strcmp("EnableMergePointsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->EnableMergePointsOff();
      return 1;
      }
    }
  if (!strcmp("SetTriangulateCap",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTriangulateCap(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTriangulateCap",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTriangulateCap();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TriangulateCapOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TriangulateCapOn();
      return 1;
      }
    }
  if (!strcmp("TriangulateCapOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TriangulateCapOff();
      return 1;
      }
    }
  if (!strcmp("SetSkipGhostCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSkipGhostCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSkipGhostCopy",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetSkipGhostCopy();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SkipGhostCopyOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SkipGhostCopyOn();
      return 1;
      }
    }
  if (!strcmp("SkipGhostCopyOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SkipGhostCopyOff();
      return 1;
      }
    }
  if (!strcmp("GetController",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkMultiProcessController  *temp20;
      {
      temp20 = (op)->GetController();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetController",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMultiProcessController  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMultiProcessController"))
      {
      op->SetController(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkMultiBlockDataSetAlgorithm";
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
  vtkmsg << "Object type: vtkAMRDualContour, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkAMRDualContour_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkAMRDualContour", vtkAMRDualContourClientServerNewCommand);
    csi->AddCommandFunction("vtkAMRDualContour", vtkAMRDualContourCommand);
    }
}
