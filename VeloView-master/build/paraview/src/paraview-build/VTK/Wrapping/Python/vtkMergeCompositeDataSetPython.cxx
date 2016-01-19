// python wrapper for vtkMergeCompositeDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMergeCompositeDataSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMergeCompositeDataSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMergeCompositeDataSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkVertexGlyphFilterNew
extern "C" { PyObject *PyVTKClass_vtkVertexGlyphFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkVertexGlyphFilterNew
#endif

static const char **PyvtkMergeCompositeDataSet_Doc();


static PyObject *
PyvtkMergeCompositeDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCompositeDataSet *op = static_cast<vtkMergeCompositeDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMergeCompositeDataSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCompositeDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCompositeDataSet *op = static_cast<vtkMergeCompositeDataSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeCompositeDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeCompositeDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCompositeDataSet *op = static_cast<vtkMergeCompositeDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMergeCompositeDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeCompositeDataSet::NewInstance());

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
PyvtkMergeCompositeDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMergeCompositeDataSet *tempr = vtkMergeCompositeDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMergeCompositeDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkMergeCompositeDataSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMergeCompositeDataSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMergeCompositeDataSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMergeCompositeDataSet\nC++: vtkMergeCompositeDataSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMergeCompositeDataSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMergeCompositeDataSet\nC++: vtkMergeCompositeDataSet *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMergeCompositeDataSet_StaticNew()
{
  return vtkMergeCompositeDataSet::New();
}

PyObject *PyVTKClass_vtkMergeCompositeDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMergeCompositeDataSet_StaticNew,
    PyvtkMergeCompositeDataSet_Methods,
    "vtkMergeCompositeDataSet", modulename,
    NULL, NULL,
    PyvtkMergeCompositeDataSet_Doc(),
    PyVTKClass_vtkVertexGlyphFilterNew(modulename));
  return cls;
}

const char **PyvtkMergeCompositeDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkMergeCompositeDataSet - Make a vtkPolyData with a vertex on each\n\n",
    "Superclass: vtkVertexGlyphFilter\n\n",
    "This filter throws away all of the cells in the input and replaces\nthem with a vertex on each point. This filter may take a graph, a\npoint set or a CompositeDataSet as input.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMergeCompositeDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMergeCompositeDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMergeCompositeDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

