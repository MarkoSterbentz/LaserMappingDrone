// python wrapper for vtkHierarchicalDataExtractLevel
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHierarchicalDataExtractLevel.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHierarchicalDataExtractLevel(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHierarchicalDataExtractLevelNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtractLevelNew
extern "C" { PyObject *PyVTKClass_vtkExtractLevelNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractLevelNew
#endif

static const char **PyvtkHierarchicalDataExtractLevel_Doc();


static PyObject *
PyvtkHierarchicalDataExtractLevel_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataExtractLevel *op = static_cast<vtkHierarchicalDataExtractLevel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHierarchicalDataExtractLevel::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalDataExtractLevel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataExtractLevel *op = static_cast<vtkHierarchicalDataExtractLevel *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHierarchicalDataExtractLevel::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalDataExtractLevel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataExtractLevel *op = static_cast<vtkHierarchicalDataExtractLevel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHierarchicalDataExtractLevel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHierarchicalDataExtractLevel::NewInstance());

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
PyvtkHierarchicalDataExtractLevel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHierarchicalDataExtractLevel *tempr = vtkHierarchicalDataExtractLevel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalDataExtractLevel_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalDataExtractLevel_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalDataExtractLevel_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalDataExtractLevel_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHierarchicalDataExtractLevel\nC++: vtkHierarchicalDataExtractLevel *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalDataExtractLevel_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalDataExtractLevel\nC++: vtkHierarchicalDataExtractLevel *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalDataExtractLevel_StaticNew()
{
  return vtkHierarchicalDataExtractLevel::New();
}

PyObject *PyVTKClass_vtkHierarchicalDataExtractLevelNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalDataExtractLevel_StaticNew,
    PyvtkHierarchicalDataExtractLevel_Methods,
    "vtkHierarchicalDataExtractLevel", modulename,
    NULL, NULL,
    PyvtkHierarchicalDataExtractLevel_Doc(),
    PyVTKClass_vtkExtractLevelNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalDataExtractLevel_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalDataExtractLevel - extact levels between min and max\n\n",
    "Superclass: vtkExtractLevel\n\n",
    "Legacy class. Use vtkExtractLevel instead.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalDataExtractLevel(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalDataExtractLevelNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalDataExtractLevel", o) != 0)
    {
    Py_DECREF(o);
    }

}

