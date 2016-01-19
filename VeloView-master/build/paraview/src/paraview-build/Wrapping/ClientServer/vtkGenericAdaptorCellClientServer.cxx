// ClientServer wrapper for vtkGenericAdaptorCell object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkGenericAdaptorCell.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkGenericAdaptorCellCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkGenericAdaptorCell *op = vtkGenericAdaptorCell::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkGenericAdaptorCell.  "
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
    vtkGenericAdaptorCell  *temp20;
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
    vtkGenericAdaptorCell  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetId",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetId();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsInDataSet",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->IsInDataSet();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDimension",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDimension();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetGeometryOrder",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGeometryOrder();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsGeometryLinear",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->IsGeometryLinear();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAttributeOrder",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkGenericAttribute  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGenericAttribute"))
      {
      temp20 = (op)->GetAttributeOrder(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetHighestOrderAttribute",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkGenericAttributeCollection  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGenericAttributeCollection"))
      {
      temp20 = (op)->GetHighestOrderAttribute(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsAttributeLinear",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkGenericAttribute  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGenericAttribute"))
      {
      temp20 = (op)->IsAttributeLinear(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsPrimary",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->IsPrimary();
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
  if (!strcmp("GetNumberOfBoundaries",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetNumberOfBoundaries(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfDOFNodes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfDOFNodes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPointIterator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkGenericPointIterator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGenericPointIterator"))
      {
      op->GetPointIterator(temp0);
      return 1;
      }
    }
  if (!strcmp("NewCellIterator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkGenericCellIterator  *temp20;
      {
      temp20 = (op)->NewCellIterator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBoundaryIterator",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkGenericCellIterator  *temp0;
    int      temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGenericCellIterator") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->GetBoundaryIterator(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("CountNeighbors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkGenericAdaptorCell  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGenericAdaptorCell"))
      {
      temp20 = (op)->CountNeighbors(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CountEdgeNeighbors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    if(temp0)
      {
      op->CountEdgeNeighbors(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNeighbors",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkGenericAdaptorCell  *temp0;
    vtkGenericCellIterator  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGenericAdaptorCell") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkGenericCellIterator"))
      {
      op->GetNeighbors(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Contour",method) && msg.GetNumberOfArguments(0) == 15)
    {
    vtkContourValues  *temp0;
    vtkImplicitFunction  *temp1;
    vtkGenericAttributeCollection  *temp2;
    vtkGenericCellTessellator  *temp3;
    vtkIncrementalPointLocator  *temp4;
    vtkCellArray  *temp5;
    vtkCellArray  *temp6;
    vtkCellArray  *temp7;
    vtkPointData  *temp8;
    vtkCellData  *temp9;
    vtkPointData  *temp10;
    vtkPointData  *temp11;
    vtkCellData  *temp12;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkContourValues") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkImplicitFunction") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkGenericAttributeCollection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkGenericCellTessellator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 8, &temp6, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 9, &temp7, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 10, &temp8, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 11, &temp9, "vtkCellData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 12, &temp10, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 13, &temp11, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 14, &temp12, "vtkCellData"))
      {
      op->Contour(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9,temp10,temp11,temp12);
      return 1;
      }
    }
  if (!strcmp("Clip",method) && msg.GetNumberOfArguments(0) == 14)
    {
    double   temp0;
    vtkImplicitFunction  *temp1;
    vtkGenericAttributeCollection  *temp2;
    vtkGenericCellTessellator  *temp3;
    int      temp4;
    vtkIncrementalPointLocator  *temp5;
    vtkCellArray  *temp6;
    vtkPointData  *temp7;
    vtkCellData  *temp8;
    vtkPointData  *temp9;
    vtkPointData  *temp10;
    vtkCellData  *temp11;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkImplicitFunction") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkGenericAttributeCollection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkGenericCellTessellator") &&
      msg.GetArgument(0, 6, &temp4) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 8, &temp6, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 9, &temp7, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 10, &temp8, "vtkCellData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 11, &temp9, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 12, &temp10, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 13, &temp11, "vtkCellData"))
      {
      op->Clip(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9,temp10,temp11);
      return 1;
      }
    }
  if (!strcmp("GetBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->GetBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLength2",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetLength2();
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
  if (!strcmp("GetParametricDistance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    double   temp20;
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      temp20 = (op)->GetParametricDistance(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Tessellate",method) && msg.GetNumberOfArguments(0) == 11)
    {
    vtkGenericAttributeCollection  *temp0;
    vtkGenericCellTessellator  *temp1;
    vtkPoints  *temp2;
    vtkIncrementalPointLocator  *temp3;
    vtkCellArray  *temp4;
    vtkPointData  *temp5;
    vtkPointData  *temp6;
    vtkCellData  *temp7;
    vtkUnsignedCharArray  *temp8;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGenericAttributeCollection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkGenericCellTessellator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkPoints") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 8, &temp6, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 9, &temp7, "vtkCellData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 10, &temp8, "vtkUnsignedCharArray"))
      {
      op->Tessellate(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8);
      return 1;
      }
    }
  if (!strcmp("IsFaceOnBoundary",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsFaceOnBoundary(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsOnBoundary",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->IsOnBoundary();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPointIds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<vtkIdType > temp0(msg, 0, 2);
    if(temp0)
      {
      op->GetPointIds(temp0);
      return 1;
      }
    }
  if (!strcmp("TriangulateFace",method) && msg.GetNumberOfArguments(0) == 11)
    {
    vtkGenericAttributeCollection  *temp0;
    vtkGenericCellTessellator  *temp1;
    int      temp2;
    vtkPoints  *temp3;
    vtkIncrementalPointLocator  *temp4;
    vtkCellArray  *temp5;
    vtkPointData  *temp6;
    vtkPointData  *temp7;
    vtkCellData  *temp8;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGenericAttributeCollection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkGenericCellTessellator") &&
      msg.GetArgument(0, 4, &temp2) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkPoints") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 8, &temp6, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 9, &temp7, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 10, &temp8, "vtkCellData"))
      {
      op->TriangulateFace(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfVerticesOnFace",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetNumberOfVerticesOnFace(temp0);
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
  vtkmsg << "Object type: vtkGenericAdaptorCell, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkGenericAdaptorCell_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkGenericAdaptorCell", vtkGenericAdaptorCellCommand);
    }
}
