// python wrapper for vtkProcessIdScalars
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProcessIdScalars.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProcessIdScalars(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProcessIdScalarsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkProcessIdScalars_Doc();


static PyObject *
PyvtkProcessIdScalars_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProcessIdScalars::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProcessIdScalars::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProcessIdScalars *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProcessIdScalars::NewInstance());

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
PyvtkProcessIdScalars_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProcessIdScalars *tempr = vtkProcessIdScalars::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_SetScalarModeToCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToCellData();
      }
    else
      {
      op->vtkProcessIdScalars::SetScalarModeToCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_SetScalarModeToPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToPointData();
      }
    else
      {
      op->vtkProcessIdScalars::SetScalarModeToPointData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkProcessIdScalars::GetScalarMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_SetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRandomMode(temp0);
      }
    else
      {
      op->vtkProcessIdScalars::SetRandomMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_GetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRandomMode() :
      op->vtkProcessIdScalars::GetRandomMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_RandomModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RandomModeOn();
      }
    else
      {
      op->vtkProcessIdScalars::RandomModeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_RandomModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RandomModeOff();
      }
    else
      {
      op->vtkProcessIdScalars::RandomModeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

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
      op->vtkProcessIdScalars::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessIdScalars_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessIdScalars *op = static_cast<vtkProcessIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkProcessIdScalars::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProcessIdScalars_Methods[] = {
  {(char*)"GetClassName", PyvtkProcessIdScalars_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProcessIdScalars_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProcessIdScalars_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProcessIdScalars\nC++: vtkProcessIdScalars *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProcessIdScalars_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProcessIdScalars\nC++: vtkProcessIdScalars *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetScalarModeToCellData", PyvtkProcessIdScalars_SetScalarModeToCellData, METH_VARARGS,
   (char*)"V.SetScalarModeToCellData()\nC++: void SetScalarModeToCellData()\n\nOption to centerate cell scalars of points scalars.  Default is\npoint scalars.\n"},
  {(char*)"SetScalarModeToPointData", PyvtkProcessIdScalars_SetScalarModeToPointData, METH_VARARGS,
   (char*)"V.SetScalarModeToPointData()\nC++: void SetScalarModeToPointData()\n\nOption to centerate cell scalars of points scalars.  Default is\npoint scalars.\n"},
  {(char*)"GetScalarMode", PyvtkProcessIdScalars_GetScalarMode, METH_VARARGS,
   (char*)"V.GetScalarMode() -> int\nC++: int GetScalarMode()\n\nOption to centerate cell scalars of points scalars.  Default is\npoint scalars.\n"},
  {(char*)"SetRandomMode", PyvtkProcessIdScalars_SetRandomMode, METH_VARARGS,
   (char*)"V.SetRandomMode(int)\nC++: void SetRandomMode(int a)\n\n"},
  {(char*)"GetRandomMode", PyvtkProcessIdScalars_GetRandomMode, METH_VARARGS,
   (char*)"V.GetRandomMode() -> int\nC++: int GetRandomMode()\n\n"},
  {(char*)"RandomModeOn", PyvtkProcessIdScalars_RandomModeOn, METH_VARARGS,
   (char*)"V.RandomModeOn()\nC++: void RandomModeOn()\n\n"},
  {(char*)"RandomModeOff", PyvtkProcessIdScalars_RandomModeOff, METH_VARARGS,
   (char*)"V.RandomModeOff()\nC++: void RandomModeOff()\n\n"},
  {(char*)"SetController", PyvtkProcessIdScalars_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"GetController", PyvtkProcessIdScalars_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProcessIdScalars_StaticNew()
{
  return vtkProcessIdScalars::New();
}

PyObject *PyVTKClass_vtkProcessIdScalarsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProcessIdScalars_StaticNew,
    PyvtkProcessIdScalars_Methods,
    "vtkProcessIdScalars", modulename,
    NULL, NULL,
    PyvtkProcessIdScalars_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProcessIdScalars_Doc()
{
  static const char *docstring[] = {
    "vtkProcessIdScalars - Sets cell or point scalars to the processor\nrank.\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkProcessIdScalars is meant to display which processor owns which\ncells and points.  It is useful for visualizing the partitioning for\nstreaming or distributed pipelines.\n\nSee Also:\n\nvtkPolyDataStreamer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProcessIdScalars(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProcessIdScalarsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProcessIdScalars", o) != 0)
    {
    Py_DECREF(o);
    }

}

