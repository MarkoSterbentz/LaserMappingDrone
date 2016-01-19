// python wrapper for vtkExtractSelectedPolyDataIds
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractSelectedPolyDataIds.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractSelectedPolyDataIds(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractSelectedPolyDataIdsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkExtractSelectedPolyDataIds_Doc();


static PyObject *
PyvtkExtractSelectedPolyDataIds_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedPolyDataIds *op = static_cast<vtkExtractSelectedPolyDataIds *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractSelectedPolyDataIds::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedPolyDataIds_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedPolyDataIds *op = static_cast<vtkExtractSelectedPolyDataIds *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelectedPolyDataIds::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedPolyDataIds_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedPolyDataIds *op = static_cast<vtkExtractSelectedPolyDataIds *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractSelectedPolyDataIds *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelectedPolyDataIds::NewInstance());

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
PyvtkExtractSelectedPolyDataIds_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractSelectedPolyDataIds *tempr = vtkExtractSelectedPolyDataIds::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractSelectedPolyDataIds_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractSelectedPolyDataIds_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractSelectedPolyDataIds_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractSelectedPolyDataIds_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractSelectedPolyDataIds\nC++: vtkExtractSelectedPolyDataIds *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractSelectedPolyDataIds_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractSelectedPolyDataIds\nC++: vtkExtractSelectedPolyDataIds *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractSelectedPolyDataIds_StaticNew()
{
  return vtkExtractSelectedPolyDataIds::New();
}

PyObject *PyVTKClass_vtkExtractSelectedPolyDataIdsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractSelectedPolyDataIds_StaticNew,
    PyvtkExtractSelectedPolyDataIds_Methods,
    "vtkExtractSelectedPolyDataIds", modulename,
    NULL, NULL,
    PyvtkExtractSelectedPolyDataIds_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractSelectedPolyDataIds_Doc()
{
  static const char *docstring[] = {
    "vtkExtractSelectedPolyDataIds - extract a list of cells from a\npolydata\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkExtractSelectedPolyDataIds extracts all cells in vtkSelection from\na vtkPolyData.\n\nSee Also:\n\nvtkSelection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractSelectedPolyDataIds(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractSelectedPolyDataIdsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractSelectedPolyDataIds", o) != 0)
    {
    Py_DECREF(o);
    }

}

