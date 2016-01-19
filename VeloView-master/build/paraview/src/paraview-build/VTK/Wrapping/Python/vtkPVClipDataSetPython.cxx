// python wrapper for vtkPVClipDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkPVClipDataSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVClipDataSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVClipDataSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableBasedClipDataSetNew
extern "C" { PyObject *PyVTKClass_vtkTableBasedClipDataSetNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableBasedClipDataSetNew
#endif

static const char **PyvtkPVClipDataSet_Doc();


static PyObject *
PyvtkPVClipDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVClipDataSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVClipDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVClipDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVClipDataSet::NewInstance());

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
PyvtkPVClipDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVClipDataSet *tempr = vtkPVClipDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_SetUseAMRDualClipForAMR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAMRDualClipForAMR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseAMRDualClipForAMR(temp0);
      }
    else
      {
      op->vtkPVClipDataSet::SetUseAMRDualClipForAMR(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_GetUseAMRDualClipForAMR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAMRDualClipForAMR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseAMRDualClipForAMR() :
      op->vtkPVClipDataSet::GetUseAMRDualClipForAMR());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_UseAMRDualClipForAMROn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAMRDualClipForAMROn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseAMRDualClipForAMROn();
      }
    else
      {
      op->vtkPVClipDataSet::UseAMRDualClipForAMROn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVClipDataSet_UseAMRDualClipForAMROff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAMRDualClipForAMROff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipDataSet *op = static_cast<vtkPVClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseAMRDualClipForAMROff();
      }
    else
      {
      op->vtkPVClipDataSet::UseAMRDualClipForAMROff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVClipDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkPVClipDataSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVClipDataSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVClipDataSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVClipDataSet\nC++: vtkPVClipDataSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVClipDataSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVClipDataSet\nC++: vtkPVClipDataSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetUseAMRDualClipForAMR", PyvtkPVClipDataSet_SetUseAMRDualClipForAMR, METH_VARARGS,
   (char*)"V.SetUseAMRDualClipForAMR(bool)\nC++: void SetUseAMRDualClipForAMR(bool a)\n\nThis filter uses vtkAMRDualClip for clipping AMR datasets. Do\ndisable that behavior, turn this flag off.\n"},
  {(char*)"GetUseAMRDualClipForAMR", PyvtkPVClipDataSet_GetUseAMRDualClipForAMR, METH_VARARGS,
   (char*)"V.GetUseAMRDualClipForAMR() -> bool\nC++: bool GetUseAMRDualClipForAMR()\n\nThis filter uses vtkAMRDualClip for clipping AMR datasets. Do\ndisable that behavior, turn this flag off.\n"},
  {(char*)"UseAMRDualClipForAMROn", PyvtkPVClipDataSet_UseAMRDualClipForAMROn, METH_VARARGS,
   (char*)"V.UseAMRDualClipForAMROn()\nC++: void UseAMRDualClipForAMROn()\n\nThis filter uses vtkAMRDualClip for clipping AMR datasets. Do\ndisable that behavior, turn this flag off.\n"},
  {(char*)"UseAMRDualClipForAMROff", PyvtkPVClipDataSet_UseAMRDualClipForAMROff, METH_VARARGS,
   (char*)"V.UseAMRDualClipForAMROff()\nC++: void UseAMRDualClipForAMROff()\n\nThis filter uses vtkAMRDualClip for clipping AMR datasets. Do\ndisable that behavior, turn this flag off.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVClipDataSet_StaticNew()
{
  return vtkPVClipDataSet::New();
}

PyObject *PyVTKClass_vtkPVClipDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVClipDataSet_StaticNew,
    PyvtkPVClipDataSet_Methods,
    "vtkPVClipDataSet", modulename,
    NULL, NULL,
    PyvtkPVClipDataSet_Doc(),
    PyVTKClass_vtkTableBasedClipDataSetNew(modulename));
  return cls;
}

const char **PyvtkPVClipDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkPVClipDataSet - Clip filter\n\n",
    "Superclass: vtkTableBasedClipDataSet\n\n",
    "This is a subclass of vtkTableBasedClipDataSet that allows selection\nof input scalars.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVClipDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVClipDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVClipDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

