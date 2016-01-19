// python wrapper for vtkUnstructuredPOPReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUnstructuredPOPReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUnstructuredPOPReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUnstructuredPOPReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkUnstructuredPOPReader_Doc();


static PyObject *
PyvtkUnstructuredPOPReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUnstructuredPOPReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredPOPReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnstructuredPOPReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredPOPReader::NewInstance());

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
PyvtkUnstructuredPOPReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUnstructuredPOPReader *tempr = vtkUnstructuredPOPReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkUnstructuredPOPReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkUnstructuredPOPReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_SetStride_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetStride(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUnstructuredPOPReader::SetStride(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredPOPReader_SetStride_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetStride(temp0);
      }
    else
      {
      op->vtkUnstructuredPOPReader::SetStride(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredPOPReader_SetStride(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkUnstructuredPOPReader_SetStride_s1(self, args);
    case 1:
      return PyvtkUnstructuredPOPReader_SetStride_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetStride");
  return NULL;
}



static PyObject *
PyvtkUnstructuredPOPReader_GetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetStride() :
      op->vtkUnstructuredPOPReader::GetStride());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_SetVOI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

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
      op->SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkUnstructuredPOPReader::SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredPOPReader_SetVOI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetVOI(temp0);
      }
    else
      {
      op->vtkUnstructuredPOPReader::SetVOI(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredPOPReader_SetVOI(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkUnstructuredPOPReader_SetVOI_s1(self, args);
    case 1:
      return PyvtkUnstructuredPOPReader_SetVOI_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVOI");
  return NULL;
}



static PyObject *
PyvtkUnstructuredPOPReader_GetVOI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetVOI() :
      op->vtkUnstructuredPOPReader::GetVOI());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_GetNumberOfVariableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariableArrays() :
      op->vtkUnstructuredPOPReader::GetNumberOfVariableArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_GetVariableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetVariableArrayName(temp0) :
      op->vtkUnstructuredPOPReader::GetVariableArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_GetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVariableArrayStatus(temp0) :
      op->vtkUnstructuredPOPReader::GetVariableArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_SetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetVariableArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredPOPReader::SetVariableArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkUnstructuredPOPReader::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkUnstructuredPOPReader::GetRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_GetVectorGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVectorGrid() :
      op->vtkUnstructuredPOPReader::GetVectorGrid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_SetVerticalVelocity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalVelocity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVerticalVelocity(temp0);
      }
    else
      {
      op->vtkUnstructuredPOPReader::SetVerticalVelocity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredPOPReader_GetVerticalVelocity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalVelocity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredPOPReader *op = static_cast<vtkUnstructuredPOPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetVerticalVelocity() :
      op->vtkUnstructuredPOPReader::GetVerticalVelocity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredPOPReader_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredPOPReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredPOPReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredPOPReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUnstructuredPOPReader\nC++: vtkUnstructuredPOPReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredPOPReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUnstructuredPOPReader\nC++: vtkUnstructuredPOPReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkUnstructuredPOPReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nThe NetCDF file to open.\n"},
  {(char*)"GetFileName", PyvtkUnstructuredPOPReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nThe NetCDF file to open.\n"},
  {(char*)"SetStride", PyvtkUnstructuredPOPReader_SetStride, METH_VARARGS,
   (char*)"V.SetStride(int, int, int)\nC++: void SetStride(int, int, int)\nV.SetStride((int, int, int))\nC++: void SetStride(int a[3])\n\n"},
  {(char*)"GetStride", PyvtkUnstructuredPOPReader_GetStride, METH_VARARGS,
   (char*)"V.GetStride() -> (int, int, int)\nC++: int *GetStride()\n\n"},
  {(char*)"SetVOI", PyvtkUnstructuredPOPReader_SetVOI, METH_VARARGS,
   (char*)"V.SetVOI(int, int, int, int, int, int)\nC++: void SetVOI(int, int, int, int, int, int)\nV.SetVOI((int, int, int, int, int, int))\nC++: void SetVOI(int a[6])\n\n"},
  {(char*)"GetVOI", PyvtkUnstructuredPOPReader_GetVOI, METH_VARARGS,
   (char*)"V.GetVOI() -> (int, int, int, int, int, int)\nC++: int *GetVOI()\n\n"},
  {(char*)"GetNumberOfVariableArrays", PyvtkUnstructuredPOPReader_GetNumberOfVariableArrays, METH_VARARGS,
   (char*)"V.GetNumberOfVariableArrays() -> int\nC++: virtual int GetNumberOfVariableArrays()\n\nVariable array selection.\n"},
  {(char*)"GetVariableArrayName", PyvtkUnstructuredPOPReader_GetVariableArrayName, METH_VARARGS,
   (char*)"V.GetVariableArrayName(int) -> string\nC++: virtual const char *GetVariableArrayName(int idx)\n\nVariable array selection.\n"},
  {(char*)"GetVariableArrayStatus", PyvtkUnstructuredPOPReader_GetVariableArrayStatus, METH_VARARGS,
   (char*)"V.GetVariableArrayStatus(string) -> int\nC++: virtual int GetVariableArrayStatus(const char *name)\n\nVariable array selection.\n"},
  {(char*)"SetVariableArrayStatus", PyvtkUnstructuredPOPReader_SetVariableArrayStatus, METH_VARARGS,
   (char*)"V.SetVariableArrayStatus(string, int)\nC++: virtual void SetVariableArrayStatus(const char *name,\n    int status)\n\nVariable array selection.\n"},
  {(char*)"SetRadius", PyvtkUnstructuredPOPReader_SetRadius, METH_VARARGS,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double a)\n\nSet the outer radius of the Earth. By default it is 6371000 which\nassumes the length is in meters.\n"},
  {(char*)"GetRadius", PyvtkUnstructuredPOPReader_GetRadius, METH_VARARGS,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet the outer radius of the Earth. By default it is 6371000 which\nassumes the length is in meters.\n"},
  {(char*)"GetVectorGrid", PyvtkUnstructuredPOPReader_GetVectorGrid, METH_VARARGS,
   (char*)"V.GetVectorGrid() -> int\nC++: int GetVectorGrid()\n\nDetermine whether or not the input data is being interpolated at\nthe U/vector points or T/scalar points. 0 means unset, 2 means\nvector field, and 1 means scalar field.\n"},
  {(char*)"SetVerticalVelocity", PyvtkUnstructuredPOPReader_SetVerticalVelocity, METH_VARARGS,
   (char*)"V.SetVerticalVelocity(bool)\nC++: void SetVerticalVelocity(bool a)\n\nSpecify whether or not to compute the vertical velocity component\nfrom the horizontal velocity components.  Default is false which\nsignifies do not compute.\n"},
  {(char*)"GetVerticalVelocity", PyvtkUnstructuredPOPReader_GetVerticalVelocity, METH_VARARGS,
   (char*)"V.GetVerticalVelocity() -> bool\nC++: bool GetVerticalVelocity()\n\nSpecify whether or not to compute the vertical velocity component\nfrom the horizontal velocity components.  Default is false which\nsignifies do not compute.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredPOPReader_StaticNew()
{
  return vtkUnstructuredPOPReader::New();
}

PyObject *PyVTKClass_vtkUnstructuredPOPReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredPOPReader_StaticNew,
    PyvtkUnstructuredPOPReader_Methods,
    "vtkUnstructuredPOPReader", modulename,
    NULL, NULL,
    PyvtkUnstructuredPOPReader_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredPOPReader_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredPOPReader - read NetCDF files\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkUnstructuredPOPReader reads NetCDF POP files into a spherical\nshaped grid. The input file has topologically structured data. The\nstriding and VOI are done with respect to the topologically\nstructured ordering.  Additionally, the z coordinates of the output\ngrid are negated so that the first slice/plane has the highest\nz-value and the last slice/plane has the lowest z-value.  Note that\ndepth_t i",
    "s used for the z location of the points.  For VOI and\nstriding, striding is done first and then the VOI is done.  For\nexample, if stride was [1, 2, 3] for a [3600, 2400, 42] grid then the\nwholeExtent would be [0, 3600, 0, 1200, 0, 14] and then a VOI of [10,\n300, 0, 1400, 2 8] would result in a whole extent of [10, 300, 0,\n1200, 2, 8] with the first point being [10, 0, 6] in the [3600, 2400,\n42] or",
    "iginal grid.  The reader also requires a GRID.nc file in the\nsame directory as the main file.  This is used to map from tripolar\nlogical coordinates to lat-lon coordinates.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredPOPReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredPOPReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredPOPReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

