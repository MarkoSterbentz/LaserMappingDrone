// ClientServer wrapper for vtkDijkstraGraphGeodesicPath object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkDijkstraGraphGeodesicPath.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkDijkstraGraphGeodesicPathClientServerNewCommand(void* /*ctx*/)
{
  return vtkDijkstraGraphGeodesicPath::New();
}


int VTK_EXPORT vtkDijkstraGraphGeodesicPathCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkDijkstraGraphGeodesicPath *op = vtkDijkstraGraphGeodesicPath::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkDijkstraGraphGeodesicPath.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDijkstraGraphGeodesicPath  *temp20;
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
    vtkDijkstraGraphGeodesicPath  *temp20;
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
    vtkDijkstraGraphGeodesicPath  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetIdList",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdList  *temp20;
      {
      temp20 = (op)->GetIdList();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetStopWhenEndReached",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetStopWhenEndReached(temp0);
      return 1;
      }
    }
  if (!strcmp("GetStopWhenEndReached",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetStopWhenEndReached();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StopWhenEndReachedOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StopWhenEndReachedOn();
      return 1;
      }
    }
  if (!strcmp("StopWhenEndReachedOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StopWhenEndReachedOff();
      return 1;
      }
    }
  if (!strcmp("SetUseScalarWeights",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseScalarWeights(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseScalarWeights",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseScalarWeights();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseScalarWeightsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseScalarWeightsOn();
      return 1;
      }
    }
  if (!strcmp("UseScalarWeightsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseScalarWeightsOff();
      return 1;
      }
    }
  if (!strcmp("SetRepelPathFromVertices",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRepelPathFromVertices(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRepelPathFromVertices",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRepelPathFromVertices();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RepelPathFromVerticesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RepelPathFromVerticesOn();
      return 1;
      }
    }
  if (!strcmp("RepelPathFromVerticesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RepelPathFromVerticesOff();
      return 1;
      }
    }
  if (!strcmp("SetRepelVertices",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPoints  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints"))
      {
      op->SetRepelVertices(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRepelVertices",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPoints  *temp20;
      {
      temp20 = (op)->GetRepelVertices();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCumulativeWeights",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkDoubleArray  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDoubleArray"))
      {
      op->GetCumulativeWeights(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkGraphGeodesicPath";
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
  vtkmsg << "Object type: vtkDijkstraGraphGeodesicPath, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkDijkstraGraphGeodesicPath_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkDijkstraGraphGeodesicPath", vtkDijkstraGraphGeodesicPathClientServerNewCommand);
    csi->AddCommandFunction("vtkDijkstraGraphGeodesicPath", vtkDijkstraGraphGeodesicPathCommand);
    }
}
