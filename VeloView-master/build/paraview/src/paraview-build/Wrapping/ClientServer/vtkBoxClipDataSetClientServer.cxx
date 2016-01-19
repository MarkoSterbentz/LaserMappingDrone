// ClientServer wrapper for vtkBoxClipDataSet object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkBoxClipDataSet.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkBoxClipDataSetClientServerNewCommand(void* /*ctx*/)
{
  return vtkBoxClipDataSet::New();
}


int VTK_EXPORT vtkBoxClipDataSetCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkBoxClipDataSet *op = vtkBoxClipDataSet::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkBoxClipDataSet.  "
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
    vtkBoxClipDataSet  *temp20;
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
    vtkBoxClipDataSet  *temp20;
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
    vtkBoxClipDataSet  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBoxClip",method) && msg.GetNumberOfArguments(0) == 8)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    double   temp4;
    double   temp5;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      op->SetBoxClip(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("SetBoxClip",method) && msg.GetNumberOfArguments(0) == 14)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<double > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<double > temp4(msg, 0, 6);
    vtkClientServerStreamDataArg<double > temp5(msg, 0, 7);
    vtkClientServerStreamDataArg<double > temp6(msg, 0, 8);
    vtkClientServerStreamDataArg<double > temp7(msg, 0, 9);
    vtkClientServerStreamDataArg<double > temp8(msg, 0, 10);
    vtkClientServerStreamDataArg<double > temp9(msg, 0, 11);
    vtkClientServerStreamDataArg<double > temp10(msg, 0, 12);
    vtkClientServerStreamDataArg<double > temp11(msg, 0, 13);
    if(temp0 &&
      temp1 &&
      temp2 &&
      temp3 &&
      temp4 &&
      temp5 &&
      temp6 &&
      temp7 &&
      temp8 &&
      temp9 &&
      temp10 &&
      temp11)
      {
      op->SetBoxClip(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9,temp10,temp11);
      return 1;
      }
    }
  if (!strcmp("SetGenerateClipScalars",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateClipScalars(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateClipScalars",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateClipScalars();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateClipScalarsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateClipScalarsOn();
      return 1;
      }
    }
  if (!strcmp("GenerateClipScalarsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateClipScalarsOff();
      return 1;
      }
    }
  if (!strcmp("SetGenerateClippedOutput",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateClippedOutput(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateClippedOutput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateClippedOutput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateClippedOutputOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateClippedOutputOn();
      return 1;
      }
    }
  if (!strcmp("GenerateClippedOutputOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateClippedOutputOff();
      return 1;
      }
    }
  if (!strcmp("GetClippedOutput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkUnstructuredGrid  *temp20;
      {
      temp20 = (op)->GetClippedOutput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfOutputs",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfOutputs();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLocator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIncrementalPointLocator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkIncrementalPointLocator"))
      {
      op->SetLocator(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLocator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIncrementalPointLocator  *temp20;
      {
      temp20 = (op)->GetLocator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CreateDefaultLocator",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CreateDefaultLocator();
      return 1;
      }
    }
  if (!strcmp("GetMTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetMTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetOrientation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetOrientation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOrientation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOrientation(temp0);
      return 1;
      }
    }
  if (!strcmp("InterpolateEdge",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkDataSetAttributes  *temp0;
    vtkIdType   temp1;
    vtkIdType   temp2;
    vtkIdType   temp3;
    double   temp4;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSetAttributes") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->InterpolateEdge(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("MinEdgeF",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<unsigned int    > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<vtkIdType > temp1(msg, 0, 3);
    vtkClientServerStreamDataArg<unsigned int    > temp2(msg, 0, 4);
    if(temp0 &&
      temp1 &&
      temp2)
      {
      op->MinEdgeF(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("PyramidToTetra",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<vtkIdType > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<vtkIdType > temp1(msg, 0, 3);
    vtkCellArray  *temp2;
    if(temp0 &&
      temp1 &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkCellArray"))
      {
      op->PyramidToTetra(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("WedgeToTetra",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<vtkIdType > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<vtkIdType > temp1(msg, 0, 3);
    vtkCellArray  *temp2;
    if(temp0 &&
      temp1 &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkCellArray"))
      {
      op->WedgeToTetra(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("CellGrid",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkIdType   temp0;
    vtkIdType   temp1;
    vtkClientServerStreamDataArg<vtkIdType > temp2(msg, 0, 4);
    vtkCellArray  *temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkCellArray"))
      {
      op->CellGrid(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("CreateTetra",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkIdType   temp0;
    vtkClientServerStreamDataArg<vtkIdType > temp1(msg, 0, 3);
    vtkCellArray  *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1 &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkCellArray"))
      {
      op->CreateTetra(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("ClipBox",method) && msg.GetNumberOfArguments(0) == 11)
    {
    vtkPoints  *temp0;
    vtkGenericCell  *temp1;
    vtkIncrementalPointLocator  *temp2;
    vtkCellArray  *temp3;
    vtkPointData  *temp4;
    vtkPointData  *temp5;
    vtkCellData  *temp6;
    vtkIdType   temp7;
    vtkCellData  *temp8;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkGenericCell") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 8, &temp6, "vtkCellData") &&
      msg.GetArgument(0, 9, &temp7) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 10, &temp8, "vtkCellData"))
      {
      op->ClipBox(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8);
      return 1;
      }
    }
  if (!strcmp("ClipHexahedron",method) && msg.GetNumberOfArguments(0) == 11)
    {
    vtkPoints  *temp0;
    vtkGenericCell  *temp1;
    vtkIncrementalPointLocator  *temp2;
    vtkCellArray  *temp3;
    vtkPointData  *temp4;
    vtkPointData  *temp5;
    vtkCellData  *temp6;
    vtkIdType   temp7;
    vtkCellData  *temp8;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkGenericCell") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 8, &temp6, "vtkCellData") &&
      msg.GetArgument(0, 9, &temp7) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 10, &temp8, "vtkCellData"))
      {
      op->ClipHexahedron(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8);
      return 1;
      }
    }
  if (!strcmp("ClipBox2D",method) && msg.GetNumberOfArguments(0) == 11)
    {
    vtkPoints  *temp0;
    vtkGenericCell  *temp1;
    vtkIncrementalPointLocator  *temp2;
    vtkCellArray  *temp3;
    vtkPointData  *temp4;
    vtkPointData  *temp5;
    vtkCellData  *temp6;
    vtkIdType   temp7;
    vtkCellData  *temp8;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkGenericCell") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 8, &temp6, "vtkCellData") &&
      msg.GetArgument(0, 9, &temp7) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 10, &temp8, "vtkCellData"))
      {
      op->ClipBox2D(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8);
      return 1;
      }
    }
  if (!strcmp("ClipHexahedron2D",method) && msg.GetNumberOfArguments(0) == 11)
    {
    vtkPoints  *temp0;
    vtkGenericCell  *temp1;
    vtkIncrementalPointLocator  *temp2;
    vtkCellArray  *temp3;
    vtkPointData  *temp4;
    vtkPointData  *temp5;
    vtkCellData  *temp6;
    vtkIdType   temp7;
    vtkCellData  *temp8;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkGenericCell") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 8, &temp6, "vtkCellData") &&
      msg.GetArgument(0, 9, &temp7) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 10, &temp8, "vtkCellData"))
      {
      op->ClipHexahedron2D(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8);
      return 1;
      }
    }
  if (!strcmp("ClipBox1D",method) && msg.GetNumberOfArguments(0) == 11)
    {
    vtkPoints  *temp0;
    vtkGenericCell  *temp1;
    vtkIncrementalPointLocator  *temp2;
    vtkCellArray  *temp3;
    vtkPointData  *temp4;
    vtkPointData  *temp5;
    vtkCellData  *temp6;
    vtkIdType   temp7;
    vtkCellData  *temp8;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkGenericCell") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 8, &temp6, "vtkCellData") &&
      msg.GetArgument(0, 9, &temp7) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 10, &temp8, "vtkCellData"))
      {
      op->ClipBox1D(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8);
      return 1;
      }
    }
  if (!strcmp("ClipHexahedron1D",method) && msg.GetNumberOfArguments(0) == 11)
    {
    vtkPoints  *temp0;
    vtkGenericCell  *temp1;
    vtkIncrementalPointLocator  *temp2;
    vtkCellArray  *temp3;
    vtkPointData  *temp4;
    vtkPointData  *temp5;
    vtkCellData  *temp6;
    vtkIdType   temp7;
    vtkCellData  *temp8;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkGenericCell") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 8, &temp6, "vtkCellData") &&
      msg.GetArgument(0, 9, &temp7) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 10, &temp8, "vtkCellData"))
      {
      op->ClipHexahedron1D(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8);
      return 1;
      }
    }
  if (!strcmp("ClipBox0D",method) && msg.GetNumberOfArguments(0) == 10)
    {
    vtkGenericCell  *temp0;
    vtkIncrementalPointLocator  *temp1;
    vtkCellArray  *temp2;
    vtkPointData  *temp3;
    vtkPointData  *temp4;
    vtkCellData  *temp5;
    vtkIdType   temp6;
    vtkCellData  *temp7;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGenericCell") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkCellData") &&
      msg.GetArgument(0, 8, &temp6) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 9, &temp7, "vtkCellData"))
      {
      op->ClipBox0D(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7);
      return 1;
      }
    }
  if (!strcmp("ClipHexahedron0D",method) && msg.GetNumberOfArguments(0) == 10)
    {
    vtkGenericCell  *temp0;
    vtkIncrementalPointLocator  *temp1;
    vtkCellArray  *temp2;
    vtkPointData  *temp3;
    vtkPointData  *temp4;
    vtkCellData  *temp5;
    vtkIdType   temp6;
    vtkCellData  *temp7;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGenericCell") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkIncrementalPointLocator") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkCellArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkPointData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkCellData") &&
      msg.GetArgument(0, 8, &temp6) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 9, &temp7, "vtkCellData"))
      {
      op->ClipHexahedron0D(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7);
      return 1;
      }
    }

  {
    const char* commandName = "vtkUnstructuredGridAlgorithm";
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
  vtkmsg << "Object type: vtkBoxClipDataSet, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkBoxClipDataSet_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkBoxClipDataSet", vtkBoxClipDataSetClientServerNewCommand);
    csi->AddCommandFunction("vtkBoxClipDataSet", vtkBoxClipDataSetCommand);
    }
}
