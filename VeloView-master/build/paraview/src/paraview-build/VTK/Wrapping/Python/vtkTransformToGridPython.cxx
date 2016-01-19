// python wrapper for vtkTransformToGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkTransformToGrid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTransformToGrid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTransformToGridNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkTransformToGrid_Doc();


static PyObject *
PyvtkTransformToGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTransformToGrid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransformToGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransformToGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransformToGrid::NewInstance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
        {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
        }
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTransformToGrid *tempr = vtkTransformToGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkTransformToGrid::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkTransformToGrid::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetGridExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkTransformToGrid::SetGridExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGridExtent(temp0);
      }
    else
      {
      op->vtkTransformToGrid::SetGridExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkTransformToGrid_SetGridExtent_s1(self, args);
    case 1:
      return PyvtkTransformToGrid_SetGridExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGridExtent");
  return NULL;
}



static PyObject *
PyvtkTransformToGrid_GetGridExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetGridExtent() :
      op->vtkTransformToGrid::GetGridExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetGridOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTransformToGrid::SetGridOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGridOrigin(temp0);
      }
    else
      {
      op->vtkTransformToGrid::SetGridOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTransformToGrid_SetGridOrigin_s1(self, args);
    case 1:
      return PyvtkTransformToGrid_SetGridOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGridOrigin");
  return NULL;
}



static PyObject *
PyvtkTransformToGrid_GetGridOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetGridOrigin() :
      op->vtkTransformToGrid::GetGridOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetGridSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTransformToGrid::SetGridSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGridSpacing(temp0);
      }
    else
      {
      op->vtkTransformToGrid::SetGridSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTransformToGrid_SetGridSpacing_s1(self, args);
    case 1:
      return PyvtkTransformToGrid_SetGridSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGridSpacing");
  return NULL;
}



static PyObject *
PyvtkTransformToGrid_GetGridSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetGridSpacing() :
      op->vtkTransformToGrid::GetGridSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGridScalarType(temp0);
      }
    else
      {
      op->vtkTransformToGrid::SetGridScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetGridScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGridScalarType() :
      op->vtkTransformToGrid::GetGridScalarType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGridScalarTypeToDouble();
      }
    else
      {
      op->vtkTransformToGrid::SetGridScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGridScalarTypeToFloat();
      }
    else
      {
      op->vtkTransformToGrid::SetGridScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGridScalarTypeToShort();
      }
    else
      {
      op->vtkTransformToGrid::SetGridScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGridScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkTransformToGrid::SetGridScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGridScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkTransformToGrid::SetGridScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGridScalarTypeToChar();
      }
    else
      {
      op->vtkTransformToGrid::SetGridScalarTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetDisplacementScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementScale() :
      op->vtkTransformToGrid::GetDisplacementScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetDisplacementShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementShift() :
      op->vtkTransformToGrid::GetDisplacementShift());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkTransformToGrid::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTransformToGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkTransformToGrid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransformToGrid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransformToGrid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTransformToGrid\nC++: vtkTransformToGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransformToGrid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransformToGrid\nC++: vtkTransformToGrid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInput", PyvtkTransformToGrid_SetInput, METH_VARARGS,
   (char*)"V.SetInput(vtkAbstractTransform)\nC++: virtual void SetInput(vtkAbstractTransform *)\n\nSet/Get the transform which will be converted into a grid.\n"},
  {(char*)"GetInput", PyvtkTransformToGrid_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetInput()\n\nSet/Get the transform which will be converted into a grid.\n"},
  {(char*)"SetGridExtent", PyvtkTransformToGrid_SetGridExtent, METH_VARARGS,
   (char*)"V.SetGridExtent(int, int, int, int, int, int)\nC++: void SetGridExtent(int, int, int, int, int, int)\nV.SetGridExtent((int, int, int, int, int, int))\nC++: void SetGridExtent(int a[6])\n\n"},
  {(char*)"GetGridExtent", PyvtkTransformToGrid_GetGridExtent, METH_VARARGS,
   (char*)"V.GetGridExtent() -> (int, int, int, int, int, int)\nC++: int *GetGridExtent()\n\n"},
  {(char*)"SetGridOrigin", PyvtkTransformToGrid_SetGridOrigin, METH_VARARGS,
   (char*)"V.SetGridOrigin(float, float, float)\nC++: void SetGridOrigin(double, double, double)\nV.SetGridOrigin((float, float, float))\nC++: void SetGridOrigin(double a[3])\n\n"},
  {(char*)"GetGridOrigin", PyvtkTransformToGrid_GetGridOrigin, METH_VARARGS,
   (char*)"V.GetGridOrigin() -> (float, float, float)\nC++: double *GetGridOrigin()\n\n"},
  {(char*)"SetGridSpacing", PyvtkTransformToGrid_SetGridSpacing, METH_VARARGS,
   (char*)"V.SetGridSpacing(float, float, float)\nC++: void SetGridSpacing(double, double, double)\nV.SetGridSpacing((float, float, float))\nC++: void SetGridSpacing(double a[3])\n\n"},
  {(char*)"GetGridSpacing", PyvtkTransformToGrid_GetGridSpacing, METH_VARARGS,
   (char*)"V.GetGridSpacing() -> (float, float, float)\nC++: double *GetGridSpacing()\n\n"},
  {(char*)"SetGridScalarType", PyvtkTransformToGrid_SetGridScalarType, METH_VARARGS,
   (char*)"V.SetGridScalarType(int)\nC++: void SetGridScalarType(int a)\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {(char*)"GetGridScalarType", PyvtkTransformToGrid_GetGridScalarType, METH_VARARGS,
   (char*)"V.GetGridScalarType() -> int\nC++: int GetGridScalarType()\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {(char*)"SetGridScalarTypeToDouble", PyvtkTransformToGrid_SetGridScalarTypeToDouble, METH_VARARGS,
   (char*)"V.SetGridScalarTypeToDouble()\nC++: void SetGridScalarTypeToDouble()\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {(char*)"SetGridScalarTypeToFloat", PyvtkTransformToGrid_SetGridScalarTypeToFloat, METH_VARARGS,
   (char*)"V.SetGridScalarTypeToFloat()\nC++: void SetGridScalarTypeToFloat()\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {(char*)"SetGridScalarTypeToShort", PyvtkTransformToGrid_SetGridScalarTypeToShort, METH_VARARGS,
   (char*)"V.SetGridScalarTypeToShort()\nC++: void SetGridScalarTypeToShort()\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {(char*)"SetGridScalarTypeToUnsignedShort", PyvtkTransformToGrid_SetGridScalarTypeToUnsignedShort, METH_VARARGS,
   (char*)"V.SetGridScalarTypeToUnsignedShort()\nC++: void SetGridScalarTypeToUnsignedShort()\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {(char*)"SetGridScalarTypeToUnsignedChar", PyvtkTransformToGrid_SetGridScalarTypeToUnsignedChar, METH_VARARGS,
   (char*)"V.SetGridScalarTypeToUnsignedChar()\nC++: void SetGridScalarTypeToUnsignedChar()\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {(char*)"SetGridScalarTypeToChar", PyvtkTransformToGrid_SetGridScalarTypeToChar, METH_VARARGS,
   (char*)"V.SetGridScalarTypeToChar()\nC++: void SetGridScalarTypeToChar()\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {(char*)"GetDisplacementScale", PyvtkTransformToGrid_GetDisplacementScale, METH_VARARGS,
   (char*)"V.GetDisplacementScale() -> float\nC++: double GetDisplacementScale()\n\nGet the scale and shift to convert integer grid elements into\nreal values:  dx = scale*di + shift.  If the grid is of double\ntype, then scale = 1 and shift = 0.\n"},
  {(char*)"GetDisplacementShift", PyvtkTransformToGrid_GetDisplacementShift, METH_VARARGS,
   (char*)"V.GetDisplacementShift() -> float\nC++: double GetDisplacementShift()\n\nGet the scale and shift to convert integer grid elements into\nreal values:  dx = scale*di + shift.  If the grid is of double\ntype, then scale = 1 and shift = 0.\n"},
  {(char*)"GetOutput", PyvtkTransformToGrid_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkImageData\nC++: vtkImageData *GetOutput()\n\nGet the output data object for a port on this algorithm.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransformToGrid_StaticNew()
{
  return vtkTransformToGrid::New();
}

PyObject *PyVTKClass_vtkTransformToGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransformToGrid_StaticNew,
    PyvtkTransformToGrid_Methods,
    "vtkTransformToGrid", modulename,
    NULL, NULL,
    PyvtkTransformToGrid_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTransformToGrid_Doc()
{
  static const char *docstring[] = {
    "vtkTransformToGrid - create a grid for a vtkGridTransform\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkTransformToGrid takes any transform as input and produces a grid\nfor use by a vtkGridTransform.  This can be used, for example, to\ninvert a grid transform, concatenate two grid transforms, or to\nconvert a thin plate spline transform into a grid transform.\n\nSee Also:\n\nvtkGridTransform vtkThinPlateSplineTransform vtkAbstractTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransformToGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransformToGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransformToGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

