// ClientServer wrapper for vtkGenericCell object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkGenericCell.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkGenericCellClientServerNewCommand(void* /*ctx*/)
{
  return vtkGenericCell::New();
}


int VTK_EXPORT vtkGenericCellCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkGenericCell *op = vtkGenericCell::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkGenericCell.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkGenericCell  *temp20;
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
    vtkGenericCell  *temp20;
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
    vtkGenericCell  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPoints",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPoints  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints"))
      {
      op->SetPoints(temp0);
      return 1;
      }
    }
  if (!strcmp("SetPointIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdList  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkIdList"))
      {
      op->SetPointIds(temp0);
      return 1;
      }
    }
  if (!strcmp("ShallowCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      op->ShallowCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("DeepCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCell  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCell"))
      {
      op->DeepCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCellType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCellType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCellDimension",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetCellDimension();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsLinear",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->IsLinear();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RequiresInitialization",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->RequiresInitialization();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Initialize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Initialize();
      return 1;
      }
    }
  if (!strcmp("RequiresExplicitFaceRepresentation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->RequiresExplicitFaceRepresentation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFaces",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<vtkIdType > temp0(msg, 0, 2);
    if(temp0)
      {
      op->SetFaces(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfEdges",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfEdges();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfFaces",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfFaces();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetEdge",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkCell  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetEdge(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFace",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkCell  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetFace(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Contour",method) && msg.GetNumberOfArguments(0) == 13)
    {
    double   temp0;
    vtkDataArray  *temp1;
    vtkIncrementalPointLocator  *temp2;
    vtkCellArray  *temp3;
    vtkCellArray  *temp4;
    vtkCellArray  *temp5;
    vtkPointData  *temp6;
    vtkPointData  *temp7;
    vtkCellData  *temp8;
    vtkIdType   temp9;
    vtkCellData  *temp10;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 8, &temp6, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 9, &temp7, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 10, &temp8, "vtkCellData") &&
      msg.GetArgument(0, 11, &temp9) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 12, &temp10, "vtkCellData"))
      {
      op->Contour(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9,temp10);
      return 1;
      }
    }
  if (!strcmp("Clip",method) && msg.GetNumberOfArguments(0) == 12)
    {
    double   temp0;
    vtkDataArray  *temp1;
    vtkIncrementalPointLocator  *temp2;
    vtkCellArray  *temp3;
    vtkPointData  *temp4;
    vtkPointData  *temp5;
    vtkCellData  *temp6;
    vtkIdType   temp7;
    vtkCellData  *temp8;
    int      temp9;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 8, &temp6, "vtkCellData") &&
      msg.GetArgument(0, 9, &temp7) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 10, &temp8, "vtkCellData") &&
      msg.GetArgument(0, 11, &temp9))
      {
      op->Clip(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9);
      return 1;
      }
    }
  if (!strcmp("Triangulate",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    vtkIdList  *temp1;
    vtkPoints  *temp2;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIdList") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkPoints"))
      {
      temp20 = (op)->Triangulate(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetParametricCenter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    int      temp20;
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      temp20 = (op)->GetParametricCenter(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsPrimaryCell",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->IsPrimaryCell();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCellType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCellType(temp0);
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToEmptyCell",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToEmptyCell();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToVertex",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToVertex();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToPolyVertex",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToPolyVertex();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToLine",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToLine();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToPolyLine",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToPolyLine();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToTriangle",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToTriangle();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToTriangleStrip",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToTriangleStrip();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToPolygon",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToPolygon();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToPixel",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToPixel();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToQuad",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToQuad();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToTetra",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToTetra();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToVoxel",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToVoxel();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToHexahedron",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToHexahedron();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToWedge",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToWedge();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToPyramid",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToPyramid();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToPentagonalPrism",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToPentagonalPrism();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToHexagonalPrism",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToHexagonalPrism();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToPolyhedron",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToPolyhedron();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToConvexPointSet",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToConvexPointSet();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToQuadraticEdge",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToQuadraticEdge();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToCubicLine",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToCubicLine();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToQuadraticTriangle",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToQuadraticTriangle();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToBiQuadraticTriangle",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToBiQuadraticTriangle();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToQuadraticQuad",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToQuadraticQuad();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToQuadraticPolygon",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToQuadraticPolygon();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToQuadraticTetra",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToQuadraticTetra();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToQuadraticHexahedron",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToQuadraticHexahedron();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToQuadraticWedge",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToQuadraticWedge();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToQuadraticPyramid",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToQuadraticPyramid();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToQuadraticLinearQuad",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToQuadraticLinearQuad();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToBiQuadraticQuad",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToBiQuadraticQuad();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToQuadraticLinearWedge",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToQuadraticLinearWedge();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToBiQuadraticQuadraticWedge",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToBiQuadraticQuadraticWedge();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToTriQuadraticHexahedron",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToTriQuadraticHexahedron();
      return 1;
      }
    }
  if (!strcmp("SetCellTypeToBiQuadraticQuadraticHexahedron",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetCellTypeToBiQuadraticQuadraticHexahedron();
      return 1;
      }
    }
  if (!strcmp("InstantiateCell",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkCell  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->InstantiateCell(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkCell";
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
  vtkmsg << "Object type: vtkGenericCell, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkGenericCell_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkGenericCell", vtkGenericCellClientServerNewCommand);
    csi->AddCommandFunction("vtkGenericCell", vtkGenericCellCommand);
    }
}
