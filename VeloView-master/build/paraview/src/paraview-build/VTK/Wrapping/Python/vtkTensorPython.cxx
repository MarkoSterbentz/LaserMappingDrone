// python wrapper for vtkTensor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTensor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTensor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTensorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTensor_Doc();


static PyObject *
PyvtkTensor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensor *op = static_cast<vtkTensor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTensor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensor *op = static_cast<vtkTensor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTensor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensor *op = static_cast<vtkTensor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTensor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTensor::NewInstance());

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
PyvtkTensor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTensor *tempr = vtkTensor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensor_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensor *op = static_cast<vtkTensor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkTensor::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensor_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensor *op = static_cast<vtkTensor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = (ap.IsBound() ?
      op->GetComponent(temp0, temp1) :
      op->vtkTensor::GetComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensor_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensor *op = static_cast<vtkTensor *>(vp);

  int temp0;
  int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetComponent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTensor::SetComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensor_AddComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensor *op = static_cast<vtkTensor *>(vp);

  int temp0;
  int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddComponent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTensor::AddComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensor_GetColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensor *op = static_cast<vtkTensor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetColumn(temp0) :
      op->vtkTensor::GetColumn(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensor_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensor *op = static_cast<vtkTensor *>(vp);

  vtkTensor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTensor"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkTensor::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTensor_Methods[] = {
  {(char*)"GetClassName", PyvtkTensor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTensor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTensor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTensor\nC++: vtkTensor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTensor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTensor\nC++: vtkTensor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkTensor_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nInitialize tensor components to 0.0.\n"},
  {(char*)"GetComponent", PyvtkTensor_GetComponent, METH_VARARGS,
   (char*)"V.GetComponent(int, int) -> float\nC++: double GetComponent(int i, int j)\n\nGet the tensor component (i,j).\n"},
  {(char*)"SetComponent", PyvtkTensor_SetComponent, METH_VARARGS,
   (char*)"V.SetComponent(int, int, float)\nC++: void SetComponent(int i, int j, double v)\n\nSet the value of the tensor component (i,j).\n"},
  {(char*)"AddComponent", PyvtkTensor_AddComponent, METH_VARARGS,
   (char*)"V.AddComponent(int, int, float)\nC++: void AddComponent(int i, int j, double v)\n\nAdd to the value of the tensor component at location (i,j).\n"},
  {(char*)"GetColumn", PyvtkTensor_GetColumn, METH_VARARGS,
   (char*)"V.GetColumn(int) -> (float, ...)\nC++: double *GetColumn(int j)\n\nReturn column vector from tensor. (Assumes 2D matrix form and\n0-offset.)\n"},
  {(char*)"DeepCopy", PyvtkTensor_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkTensor)\nC++: void DeepCopy(vtkTensor *t)\n\nDeep copy of one tensor to another tensor.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTensor_StaticNew()
{
  return vtkTensor::New();
}

PyObject *PyVTKClass_vtkTensorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTensor_StaticNew,
    PyvtkTensor_Methods,
    "vtkTensor", modulename,
    NULL, NULL,
    PyvtkTensor_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkTensor_Doc()
{
  static const char *docstring[] = {
    "vtkTensor - supporting class to enable assignment and referencing of\ntensors\n\n",
    "Superclass: vtkObject\n\n",
    "vtkTensor is a floating point representation of an nxn tensor.\nvtkTensor provides methods for assignment and reference of tensor\ncomponents. It does it in such a way as to minimize data copying.\n\nCaveats:\n\nvtkTensor performs its operations using pointer reference. You are\nresponsible for supplying data storage (if necessary) if local copies\nof data are being made.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTensor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTensorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTensor", o) != 0)
    {
    Py_DECREF(o);
    }

}

