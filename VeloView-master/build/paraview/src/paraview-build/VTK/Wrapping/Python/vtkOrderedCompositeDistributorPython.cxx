// python wrapper for vtkOrderedCompositeDistributor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOrderedCompositeDistributor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOrderedCompositeDistributor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOrderedCompositeDistributorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
#endif

static const char **PyvtkOrderedCompositeDistributor_Doc();


static PyObject *
PyvtkOrderedCompositeDistributor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOrderedCompositeDistributor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrderedCompositeDistributor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOrderedCompositeDistributor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrderedCompositeDistributor::NewInstance());

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
PyvtkOrderedCompositeDistributor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOrderedCompositeDistributor *tempr = vtkOrderedCompositeDistributor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_SetPKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  vtkPKdTree *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPKdTree"))
    {
    if (ap.IsBound())
      {
      op->SetPKdTree(temp0);
      }
    else
      {
      op->vtkOrderedCompositeDistributor::SetPKdTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_GetPKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPKdTree *tempr = (ap.IsBound() ?
      op->GetPKdTree() :
      op->vtkOrderedCompositeDistributor::GetPKdTree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkOrderedCompositeDistributor::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkOrderedCompositeDistributor::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_SetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThrough(temp0);
      }
    else
      {
      op->vtkOrderedCompositeDistributor::SetPassThrough(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_GetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetPassThrough() :
      op->vtkOrderedCompositeDistributor::GetPassThrough());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_PassThroughOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughOn();
      }
    else
      {
      op->vtkOrderedCompositeDistributor::PassThroughOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_PassThroughOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughOff();
      }
    else
      {
      op->vtkOrderedCompositeDistributor::PassThroughOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_SetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputType(temp0);
      }
    else
      {
      op->vtkOrderedCompositeDistributor::SetOutputType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderedCompositeDistributor_GetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedCompositeDistributor *op = static_cast<vtkOrderedCompositeDistributor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetOutputType() :
      op->vtkOrderedCompositeDistributor::GetOutputType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOrderedCompositeDistributor_Methods[] = {
  {(char*)"GetClassName", PyvtkOrderedCompositeDistributor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOrderedCompositeDistributor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOrderedCompositeDistributor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOrderedCompositeDistributor\nC++: vtkOrderedCompositeDistributor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOrderedCompositeDistributor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOrderedCompositeDistributor\nC++: vtkOrderedCompositeDistributor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPKdTree", PyvtkOrderedCompositeDistributor_SetPKdTree, METH_VARARGS,
   (char*)"V.SetPKdTree(vtkPKdTree)\nC++: virtual void SetPKdTree(vtkPKdTree *)\n\nSet the vtkPKdTree to distribute with.\n"},
  {(char*)"GetPKdTree", PyvtkOrderedCompositeDistributor_GetPKdTree, METH_VARARGS,
   (char*)"V.GetPKdTree() -> vtkPKdTree\nC++: vtkPKdTree *GetPKdTree()\n\nSet the vtkPKdTree to distribute with.\n"},
  {(char*)"SetController", PyvtkOrderedCompositeDistributor_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet/get the controller to distribute with.\n"},
  {(char*)"GetController", PyvtkOrderedCompositeDistributor_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/get the controller to distribute with.\n"},
  {(char*)"SetPassThrough", PyvtkOrderedCompositeDistributor_SetPassThrough, METH_VARARGS,
   (char*)"V.SetPassThrough(bool)\nC++: void SetPassThrough(bool a)\n\nWhen on, data is passed through without compositing.\n"},
  {(char*)"GetPassThrough", PyvtkOrderedCompositeDistributor_GetPassThrough, METH_VARARGS,
   (char*)"V.GetPassThrough() -> bool\nC++: bool GetPassThrough()\n\nWhen on, data is passed through without compositing.\n"},
  {(char*)"PassThroughOn", PyvtkOrderedCompositeDistributor_PassThroughOn, METH_VARARGS,
   (char*)"V.PassThroughOn()\nC++: void PassThroughOn()\n\nWhen on, data is passed through without compositing.\n"},
  {(char*)"PassThroughOff", PyvtkOrderedCompositeDistributor_PassThroughOff, METH_VARARGS,
   (char*)"V.PassThroughOff()\nC++: void PassThroughOff()\n\nWhen on, data is passed through without compositing.\n"},
  {(char*)"SetOutputType", PyvtkOrderedCompositeDistributor_SetOutputType, METH_VARARGS,
   (char*)"V.SetOutputType(string)\nC++: void SetOutputType(char *)\n\nWhen non-null, the output will be converted to the given type.\n"},
  {(char*)"GetOutputType", PyvtkOrderedCompositeDistributor_GetOutputType, METH_VARARGS,
   (char*)"V.GetOutputType() -> string\nC++: char *GetOutputType()\n\nWhen non-null, the output will be converted to the given type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOrderedCompositeDistributor_StaticNew()
{
  return vtkOrderedCompositeDistributor::New();
}

PyObject *PyVTKClass_vtkOrderedCompositeDistributorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOrderedCompositeDistributor_StaticNew,
    PyvtkOrderedCompositeDistributor_Methods,
    "vtkOrderedCompositeDistributor", modulename,
    NULL, NULL,
    PyvtkOrderedCompositeDistributor_Doc(),
    PyVTKClass_vtkPointSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkOrderedCompositeDistributor_Doc()
{
  static const char *docstring[] = {
    "vtkOrderedCompositeDistributor\n\n",
    "Superclass: vtkPointSetAlgorithm\n\n",
    "This class distributes data for use with ordered compositing (i.e.\nwith IceT).  The composite distributor takes the same vtkPKdTree that\nIceT and will use that to distribute the data.\n\nInput poly data will be converted back to poly data on the output.\n\nThis class also has an optional pass through mode to make it easy to\nturn ordered compositing on and off.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOrderedCompositeDistributor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOrderedCompositeDistributorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOrderedCompositeDistributor", o) != 0)
    {
    Py_DECREF(o);
    }

}

