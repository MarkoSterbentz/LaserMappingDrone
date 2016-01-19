// python wrapper for vtkCutMaterial
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCutMaterial.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCutMaterial(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCutMaterialNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkCutMaterial_Doc();


static PyObject *
PyvtkCutMaterial_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCutMaterial::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCutMaterial::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCutMaterial *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCutMaterial::NewInstance());

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
PyvtkCutMaterial_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCutMaterial *tempr = vtkCutMaterial::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_SetMaterialArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaterialArrayName(temp0);
      }
    else
      {
      op->vtkCutMaterial::SetMaterialArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetMaterialArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetMaterialArrayName() :
      op->vtkCutMaterial::GetMaterialArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_SetMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaterial(temp0);
      }
    else
      {
      op->vtkCutMaterial::SetMaterial(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaterial() :
      op->vtkCutMaterial::GetMaterial());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayName(temp0);
      }
    else
      {
      op->vtkCutMaterial::SetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkCutMaterial::GetArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_SetUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

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
      op->SetUpVector(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCutMaterial::SetUpVector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCutMaterial_SetUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetUpVector(temp0);
      }
    else
      {
      op->vtkCutMaterial::SetUpVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCutMaterial_SetUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCutMaterial_SetUpVector_s1(self, args);
    case 1:
      return PyvtkCutMaterial_SetUpVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUpVector");
  return NULL;
}



static PyObject *
PyvtkCutMaterial_GetUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetUpVector() :
      op->vtkCutMaterial::GetUpVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetMaximumPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetMaximumPoint() :
      op->vtkCutMaterial::GetMaximumPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetCenterPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenterPoint() :
      op->vtkCutMaterial::GetCenterPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkCutMaterial::GetNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkCutMaterial_Methods[] = {
  {(char*)"GetClassName", PyvtkCutMaterial_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCutMaterial_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCutMaterial_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCutMaterial\nC++: vtkCutMaterial *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCutMaterial_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCutMaterial\nC++: vtkCutMaterial *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaterialArrayName", PyvtkCutMaterial_SetMaterialArrayName, METH_VARARGS,
   (char*)"V.SetMaterialArrayName(string)\nC++: void SetMaterialArrayName(char *)\n\nCell array that contains the material values.\n"},
  {(char*)"GetMaterialArrayName", PyvtkCutMaterial_GetMaterialArrayName, METH_VARARGS,
   (char*)"V.GetMaterialArrayName() -> string\nC++: char *GetMaterialArrayName()\n\nCell array that contains the material values.\n"},
  {(char*)"SetMaterial", PyvtkCutMaterial_SetMaterial, METH_VARARGS,
   (char*)"V.SetMaterial(int)\nC++: void SetMaterial(int a)\n\nMaterial to probe.\n"},
  {(char*)"GetMaterial", PyvtkCutMaterial_GetMaterial, METH_VARARGS,
   (char*)"V.GetMaterial() -> int\nC++: int GetMaterial()\n\nMaterial to probe.\n"},
  {(char*)"SetArrayName", PyvtkCutMaterial_SetArrayName, METH_VARARGS,
   (char*)"V.SetArrayName(string)\nC++: void SetArrayName(char *)\n\nFor now, we just use the cell values. The array name to cut.\n"},
  {(char*)"GetArrayName", PyvtkCutMaterial_GetArrayName, METH_VARARGS,
   (char*)"V.GetArrayName() -> string\nC++: char *GetArrayName()\n\nFor now, we just use the cell values. The array name to cut.\n"},
  {(char*)"SetUpVector", PyvtkCutMaterial_SetUpVector, METH_VARARGS,
   (char*)"V.SetUpVector(float, float, float)\nC++: void SetUpVector(double, double, double)\nV.SetUpVector((float, float, float))\nC++: void SetUpVector(double a[3])\n\n"},
  {(char*)"GetUpVector", PyvtkCutMaterial_GetUpVector, METH_VARARGS,
   (char*)"V.GetUpVector() -> (float, float, float)\nC++: double *GetUpVector()\n\n"},
  {(char*)"GetMaximumPoint", PyvtkCutMaterial_GetMaximumPoint, METH_VARARGS,
   (char*)"V.GetMaximumPoint() -> (float, float, float)\nC++: double *GetMaximumPoint()\n\n"},
  {(char*)"GetCenterPoint", PyvtkCutMaterial_GetCenterPoint, METH_VARARGS,
   (char*)"V.GetCenterPoint() -> (float, float, float)\nC++: double *GetCenterPoint()\n\n"},
  {(char*)"GetNormal", PyvtkCutMaterial_GetNormal, METH_VARARGS,
   (char*)"V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCutMaterial_StaticNew()
{
  return vtkCutMaterial::New();
}

PyObject *PyVTKClass_vtkCutMaterialNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCutMaterial_StaticNew,
    PyvtkCutMaterial_Methods,
    "vtkCutMaterial", modulename,
    NULL, NULL,
    PyvtkCutMaterial_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCutMaterial_Doc()
{
  static const char *docstring[] = {
    "vtkCutMaterial - Automatically computes the cut plane for a material\narray pair.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkCutMaterial computes a cut plane based on an up vector, center of\nthe bounding box and the location of the maximum variable value.\n These computed values are available so that they can be used to set\nthe camera for the best view of the plane.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCutMaterial(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCutMaterialNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCutMaterial", o) != 0)
    {
    Py_DECREF(o);
    }

}

