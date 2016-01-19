// python wrapper for vtkVelodyneHDLGridSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkVelodyneHDLGridSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVelodyneHDLGridSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVelodyneHDLGridSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkVelodyneHDLGridSource_Doc();


static PyObject *
PyvtkVelodyneHDLGridSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLGridSource *op = static_cast<vtkVelodyneHDLGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVelodyneHDLGridSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLGridSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLGridSource *op = static_cast<vtkVelodyneHDLGridSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVelodyneHDLGridSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLGridSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLGridSource *op = static_cast<vtkVelodyneHDLGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVelodyneHDLGridSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVelodyneHDLGridSource::NewInstance());

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
PyvtkVelodyneHDLGridSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVelodyneHDLGridSource *tempr = vtkVelodyneHDLGridSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLGridSource_SetGridSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLGridSource *op = static_cast<vtkVelodyneHDLGridSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGridSize(temp0);
      }
    else
      {
      op->vtkVelodyneHDLGridSource::SetGridSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLGridSource_GetGridSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLGridSource *op = static_cast<vtkVelodyneHDLGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGridSize() :
      op->vtkVelodyneHDLGridSource::GetGridSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLGridSource_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLGridSource *op = static_cast<vtkVelodyneHDLGridSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0);
      }
    else
      {
      op->vtkVelodyneHDLGridSource::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLGridSource_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLGridSource *op = static_cast<vtkVelodyneHDLGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkVelodyneHDLGridSource::GetScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLGridSource_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLGridSource *op = static_cast<vtkVelodyneHDLGridSource *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVelodyneHDLGridSource::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVelodyneHDLGridSource_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLGridSource *op = static_cast<vtkVelodyneHDLGridSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkVelodyneHDLGridSource::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVelodyneHDLGridSource_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVelodyneHDLGridSource_SetOrigin_s1(self, args);
    case 1:
      return PyvtkVelodyneHDLGridSource_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkVelodyneHDLGridSource_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLGridSource *op = static_cast<vtkVelodyneHDLGridSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkVelodyneHDLGridSource::GetOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLGridSource_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLGridSource *op = static_cast<vtkVelodyneHDLGridSource *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVelodyneHDLGridSource::SetNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVelodyneHDLGridSource_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLGridSource *op = static_cast<vtkVelodyneHDLGridSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNormal(temp0);
      }
    else
      {
      op->vtkVelodyneHDLGridSource::SetNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVelodyneHDLGridSource_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVelodyneHDLGridSource_SetNormal_s1(self, args);
    case 1:
      return PyvtkVelodyneHDLGridSource_SetNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return NULL;
}



static PyObject *
PyvtkVelodyneHDLGridSource_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLGridSource *op = static_cast<vtkVelodyneHDLGridSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkVelodyneHDLGridSource::GetNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLGridSource_CreateGrid(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateGrid");

  int temp0;
  double temp1;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    vtkSmartPointer<vtkPolyData> tempr = vtkVelodyneHDLGridSource::CreateGrid(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkSmartPointer_I11vtkPolyDataE");
      }
    }

  return result;
}

static PyMethodDef PyvtkVelodyneHDLGridSource_Methods[] = {
  {(char*)"GetClassName", PyvtkVelodyneHDLGridSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVelodyneHDLGridSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVelodyneHDLGridSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVelodyneHDLGridSource\nC++: vtkVelodyneHDLGridSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVelodyneHDLGridSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVelodyneHDLGridSource\nC++: vtkVelodyneHDLGridSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGridSize", PyvtkVelodyneHDLGridSource_SetGridSize, METH_VARARGS,
   (char*)"V.SetGridSize(int)\nC++: void SetGridSize(int a)\n\n"},
  {(char*)"GetGridSize", PyvtkVelodyneHDLGridSource_GetGridSize, METH_VARARGS,
   (char*)"V.GetGridSize() -> int\nC++: int GetGridSize()\n\n"},
  {(char*)"SetScale", PyvtkVelodyneHDLGridSource_SetScale, METH_VARARGS,
   (char*)"V.SetScale(float)\nC++: void SetScale(double a)\n\n"},
  {(char*)"GetScale", PyvtkVelodyneHDLGridSource_GetScale, METH_VARARGS,
   (char*)"V.GetScale() -> float\nC++: double GetScale()\n\n"},
  {(char*)"SetOrigin", PyvtkVelodyneHDLGridSource_SetOrigin, METH_VARARGS,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"GetOrigin", PyvtkVelodyneHDLGridSource_GetOrigin, METH_VARARGS,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {(char*)"SetNormal", PyvtkVelodyneHDLGridSource_SetNormal, METH_VARARGS,
   (char*)"V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {(char*)"GetNormal", PyvtkVelodyneHDLGridSource_GetNormal, METH_VARARGS,
   (char*)"V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\n"},
  {(char*)"CreateGrid", PyvtkVelodyneHDLGridSource_CreateGrid, METH_VARARGS | METH_STATIC,
   (char*)"V.CreateGrid(int, float, [float, float, float], [float, float,\n    float]) -> vtkSmartPointer<vtkPolyData>\nC++: static vtkSmartPointer<vtkPolyData> CreateGrid(int gridSize,\n    double scale, double origin[3], double normal[3])\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVelodyneHDLGridSource_StaticNew()
{
  return vtkVelodyneHDLGridSource::New();
}

PyObject *PyVTKClass_vtkVelodyneHDLGridSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVelodyneHDLGridSource_StaticNew,
    PyvtkVelodyneHDLGridSource_Methods,
    "vtkVelodyneHDLGridSource", modulename,
    NULL, NULL,
    PyvtkVelodyneHDLGridSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVelodyneHDLGridSource_Doc()
{
  static const char *docstring[] = {
    "vtkVelodyneHDLGridSource - generates a vtkPolyData measurement grid\nplane\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVelodyneHDLGridSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVelodyneHDLGridSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVelodyneHDLGridSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

