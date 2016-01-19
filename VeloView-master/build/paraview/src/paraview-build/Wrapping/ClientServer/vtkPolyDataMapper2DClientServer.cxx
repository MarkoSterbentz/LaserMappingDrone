// ClientServer wrapper for vtkPolyDataMapper2D object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPolyDataMapper2D.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPolyDataMapper2DClientServerNewCommand(void* /*ctx*/)
{
  return vtkPolyDataMapper2D::New();
}


int VTK_EXPORT vtkPolyDataMapper2DCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPolyDataMapper2D *op = vtkPolyDataMapper2D::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPolyDataMapper2D.  "
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
    vtkPolyDataMapper2D  *temp20;
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
    vtkPolyDataMapper2D  *temp20;
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
    vtkPolyDataMapper2D  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInputData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPolyData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPolyData"))
      {
      op->SetInputData(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPolyData  *temp20;
      {
      temp20 = (op)->GetInput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLookupTable",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkScalarsToColors  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkScalarsToColors"))
      {
      op->SetLookupTable(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLookupTable",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkScalarsToColors  *temp20;
      {
      temp20 = (op)->GetLookupTable();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CreateDefaultLookupTable",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CreateDefaultLookupTable();
      return 1;
      }
    }
  if (!strcmp("SetScalarVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScalarVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScalarVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScalarVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScalarVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("ScalarVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScalarVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetColorMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetColorMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetColorMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetColorMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetColorModeToDefault",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetColorModeToDefault();
      return 1;
      }
    }
  if (!strcmp("SetColorModeToMapScalars",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetColorModeToMapScalars();
      return 1;
      }
    }
  if (!strcmp("SetColorModeToDirectScalars",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetColorModeToDirectScalars();
      return 1;
      }
    }
  if (!strcmp("GetColorModeAsString",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetColorModeAsString();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseLookupTableScalarRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseLookupTableScalarRange(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseLookupTableScalarRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseLookupTableScalarRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseLookupTableScalarRangeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseLookupTableScalarRangeOn();
      return 1;
      }
    }
  if (!strcmp("UseLookupTableScalarRangeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseLookupTableScalarRangeOff();
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
  if (!strcmp("SetScalarMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScalarMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScalarMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToDefault",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToDefault();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToUsePointData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToUsePointData();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToUseCellData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToUseCellData();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToUsePointFieldData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToUsePointFieldData();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToUseCellFieldData",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToUseCellFieldData();
      return 1;
      }
    }
  if (!strcmp("ColorByArrayComponent",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->ColorByArrayComponent(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("ColorByArrayComponent",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->ColorByArrayComponent(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetArrayName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetArrayName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetArrayId",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetArrayId();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetArrayAccessMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetArrayAccessMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetArrayComponent",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetArrayComponent();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("SetTransformCoordinate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCoordinate  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCoordinate"))
      {
      op->SetTransformCoordinate(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTransformCoordinate",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCoordinate  *temp20;
      {
      temp20 = (op)->GetTransformCoordinate();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTransformCoordinateUseDouble",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetTransformCoordinateUseDouble();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTransformCoordinateUseDouble",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTransformCoordinateUseDouble(temp0);
      return 1;
      }
    }
  if (!strcmp("TransformCoordinateUseDoubleOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TransformCoordinateUseDoubleOn();
      return 1;
      }
    }
  if (!strcmp("TransformCoordinateUseDoubleOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TransformCoordinateUseDoubleOff();
      return 1;
      }
    }
  if (!strcmp("MapScalars",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    vtkUnsignedCharArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->MapScalars(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ShallowCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractMapper  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractMapper"))
      {
      op->ShallowCopy(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkMapper2D";
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
  vtkmsg << "Object type: vtkPolyDataMapper2D, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPolyDataMapper2D_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPolyDataMapper2D", vtkPolyDataMapper2DClientServerNewCommand);
    csi->AddCommandFunction("vtkPolyDataMapper2D", vtkPolyDataMapper2DCommand);
    }
}
