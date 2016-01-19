// python wrapper for vtkDummyGPUInfoList
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDummyGPUInfoList.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDummyGPUInfoList(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDummyGPUInfoListNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGPUInfoListNew
extern "C" { PyObject *PyVTKClass_vtkGPUInfoListNew(const char *); }
#define DECLARED_PyVTKClass_vtkGPUInfoListNew
#endif

static const char **PyvtkDummyGPUInfoList_Doc();


static PyObject *
PyvtkDummyGPUInfoList_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyGPUInfoList *op = static_cast<vtkDummyGPUInfoList *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDummyGPUInfoList::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyGPUInfoList_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyGPUInfoList *op = static_cast<vtkDummyGPUInfoList *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDummyGPUInfoList::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyGPUInfoList_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyGPUInfoList *op = static_cast<vtkDummyGPUInfoList *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDummyGPUInfoList *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDummyGPUInfoList::NewInstance());

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
PyvtkDummyGPUInfoList_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDummyGPUInfoList *tempr = vtkDummyGPUInfoList::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyGPUInfoList_Probe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyGPUInfoList *op = static_cast<vtkDummyGPUInfoList *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Probe();
      }
    else
      {
      op->vtkDummyGPUInfoList::Probe();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDummyGPUInfoList_Methods[] = {
  {(char*)"GetClassName", PyvtkDummyGPUInfoList_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDummyGPUInfoList_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDummyGPUInfoList_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDummyGPUInfoList\nC++: vtkDummyGPUInfoList *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDummyGPUInfoList_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDummyGPUInfoList\nC++: vtkDummyGPUInfoList *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Probe", PyvtkDummyGPUInfoList_Probe, METH_VARARGS,
   (char*)"V.Probe()\nC++: virtual void Probe()\n\nBuild the list of vtkInfoGPU if not done yet.\n\\post probed: IsProbed()\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDummyGPUInfoList_StaticNew()
{
  return vtkDummyGPUInfoList::New();
}

PyObject *PyVTKClass_vtkDummyGPUInfoListNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDummyGPUInfoList_StaticNew,
    PyvtkDummyGPUInfoList_Methods,
    "vtkDummyGPUInfoList", modulename,
    NULL, NULL,
    PyvtkDummyGPUInfoList_Doc(),
    PyVTKClass_vtkGPUInfoListNew(modulename));
  return cls;
}

const char **PyvtkDummyGPUInfoList_Doc()
{
  static const char *docstring[] = {
    "vtkDummyGPUInfoList - Do thing during Probe()\n\n",
    "Superclass: vtkGPUInfoList\n\n",
    "vtkDummyGPUInfoList implements Probe() by just setting the count of\nGPUs to be zero. Useful when an OS specific implementation is not\navailable.\n\nSee Also:\n\nvtkGPUInfo vtkGPUInfoList\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDummyGPUInfoList(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDummyGPUInfoListNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDummyGPUInfoList", o) != 0)
    {
    Py_DECREF(o);
    }

}

