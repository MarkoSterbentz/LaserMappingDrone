// python wrapper for vtkPythonAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPythonAlgorithm.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPythonAlgorithm(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPythonAlgorithmNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkPythonAlgorithm_Doc();


static PyObject *
PyvtkPythonAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPythonAlgorithm::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPythonAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonAlgorithm::NewInstance());

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
PyvtkPythonAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPythonAlgorithm *tempr = vtkPythonAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_SetPythonObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPythonObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  PyObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetPythonObject(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPythonObject(temp0);
      }
    else
      {
      op->vtkPythonAlgorithm::SetPythonObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_SetNumberOfInputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfInputPorts(temp0);
      }
    else
      {
      op->vtkPythonAlgorithm::SetNumberOfInputPorts(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonAlgorithm_SetNumberOfOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAlgorithm *op = static_cast<vtkPythonAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfOutputPorts(temp0);
      }
    else
      {
      op->vtkPythonAlgorithm::SetNumberOfOutputPorts(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPythonAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkPythonAlgorithm_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPythonAlgorithm_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPythonAlgorithm_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPythonAlgorithm\nC++: vtkPythonAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPythonAlgorithm_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPythonAlgorithm\nC++: vtkPythonAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPythonObject", PyvtkPythonAlgorithm_SetPythonObject, METH_VARARGS,
   (char*)"V.SetPythonObject()\nC++: void SetPythonObject(PyObject *obj)\n\nSpecify the Python object to use to operate on the data. A\nreference will be taken on the object. This will also invoke\nInitialize() on the Python object, which is commonly used to set\nthe number of input and output ports as well as perform tasks\ncommonly performed in the constructor of C++ algorithm subclass.\n"},
  {(char*)"SetNumberOfInputPorts", PyvtkPythonAlgorithm_SetNumberOfInputPorts, METH_VARARGS,
   (char*)"V.SetNumberOfInputPorts(int)\nC++: virtual void SetNumberOfInputPorts(int n)\n\nSet the number of input ports used by the algorithm. This is made\npublic so that it can be called from Python.\n"},
  {(char*)"SetNumberOfOutputPorts", PyvtkPythonAlgorithm_SetNumberOfOutputPorts, METH_VARARGS,
   (char*)"V.SetNumberOfOutputPorts(int)\nC++: virtual void SetNumberOfOutputPorts(int n)\n\nSet the number of output ports provided by the algorithm. This is\nmade public so that it can be called from Python.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPythonAlgorithm_StaticNew()
{
  return vtkPythonAlgorithm::New();
}

PyObject *PyVTKClass_vtkPythonAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPythonAlgorithm_StaticNew,
    PyvtkPythonAlgorithm_Methods,
    "vtkPythonAlgorithm", modulename,
    NULL, NULL,
    PyvtkPythonAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPythonAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkPythonAlgorithm - algorithm that can be implemented in Python\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkPythonAlgorithm is an algorithm that calls a Python object to do\nthe actual work. It defers the following methods to Python:\n- ProcessRequest()\n- FillInputPortInformation()\n- FillOutputPortInformation()\n\nPython signature of these methods is as follows:\n- ProcessRequest(self, vtkself, request, inInfo, outInfo) : vtkself\n  is the vtk object, inInfo is a tuple of information objects\n- FillInputPor",
    "tInformation(self, vtkself, port, info)\n- FillOutputPortInformation(self, vtkself, port, info)\n- Initialize(self, vtkself)\n\nIn addition, it calls an Initialize() method when setting the Python\nobject, which allows the initialization of number of input and output\nports etc.\n\nSee Also:\n\nvtkProgrammableFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPythonAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPythonAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPythonAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

