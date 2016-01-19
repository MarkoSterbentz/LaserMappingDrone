// ClientServer wrapper for vtkOrderedTriangulator object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkOrderedTriangulator.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkOrderedTriangulatorClientServerNewCommand(void* /*ctx*/)
{
  return vtkOrderedTriangulator::New();
}


int VTK_EXPORT vtkOrderedTriangulatorCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkOrderedTriangulator *op = vtkOrderedTriangulator::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkOrderedTriangulator.  "
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
    vtkOrderedTriangulator  *temp20;
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
    vtkOrderedTriangulator  *temp20;
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
    vtkOrderedTriangulator  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InitTriangulation",method) && msg.GetNumberOfArguments(0) == 9)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    double   temp4;
    double   temp5;
    int      temp6;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6))
      {
      op->InitTriangulation(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      return 1;
      }
    }
  if (!strcmp("Triangulate",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Triangulate();
      return 1;
      }
    }
  if (!strcmp("TemplateTriangulate",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->TemplateTriangulate(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("UpdatePointType",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->UpdatePointType(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetPointId",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetPointId(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfPoints",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfPoints();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseTemplates",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseTemplates(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseTemplates",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseTemplates();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseTemplatesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseTemplatesOn();
      return 1;
      }
    }
  if (!strcmp("UseTemplatesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseTemplatesOff();
      return 1;
      }
    }
  if (!strcmp("SetPreSorted",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPreSorted(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPreSorted",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPreSorted();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PreSortedOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PreSortedOn();
      return 1;
      }
    }
  if (!strcmp("PreSortedOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PreSortedOff();
      return 1;
      }
    }
  if (!strcmp("SetUseTwoSortIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseTwoSortIds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseTwoSortIds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseTwoSortIds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseTwoSortIdsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseTwoSortIdsOn();
      return 1;
      }
    }
  if (!strcmp("UseTwoSortIdsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseTwoSortIdsOff();
      return 1;
      }
    }
  if (!strcmp("GetTetras",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkUnstructuredGrid  *temp1;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkUnstructuredGrid"))
      {
      temp20 = (op)->GetTetras(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddTetras",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkUnstructuredGrid  *temp1;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkUnstructuredGrid"))
      {
      temp20 = (op)->AddTetras(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddTetras",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkCellArray  *temp1;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkCellArray"))
      {
      temp20 = (op)->AddTetras(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddTetras",method) && msg.GetNumberOfArguments(0) == 10)
    {
    int      temp0;
    vtkIncrementalPointLocator  *temp1;
    vtkCellArray  *temp2;
    vtkPointData  *temp3;
    vtkPointData  *temp4;
    vtkCellData  *temp5;
    vtkIdType   temp6;
    vtkCellData  *temp7;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkCellData") &&
      msg.GetArgument(0, 8, &temp6) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 9, &temp7, "vtkCellData"))
      {
      temp20 = (op)->AddTetras(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddTetras",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    vtkIdList  *temp1;
    vtkPoints  *temp2;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIdList") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkPoints"))
      {
      temp20 = (op)->AddTetras(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddTriangles",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCellArray  *temp0;
    vtkIdType   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCellArray"))
      {
      temp20 = (op)->AddTriangles(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddTriangles",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    vtkCellArray  *temp1;
    vtkIdType   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkCellArray"))
      {
      temp20 = (op)->AddTriangles(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InitTetraTraversal",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InitTetraTraversal();
      return 1;
      }
    }
  if (!strcmp("GetNextTetra",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    vtkTetra  *temp1;
    vtkDataArray  *temp2;
    vtkDoubleArray  *temp3;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkTetra") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkDoubleArray"))
      {
      temp20 = (op)->GetNextTetra(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkObject";
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
  vtkmsg << "Object type: vtkOrderedTriangulator, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkOrderedTriangulator_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkOrderedTriangulator", vtkOrderedTriangulatorClientServerNewCommand);
    csi->AddCommandFunction("vtkOrderedTriangulator", vtkOrderedTriangulatorCommand);
    }
}
