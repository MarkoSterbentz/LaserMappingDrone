// python wrapper for vtkVertexGlyphFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVertexGlyphFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVertexGlyphFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVertexGlyphFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkVertexGlyphFilter_Doc();


static PyObject *
PyvtkVertexGlyphFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVertexGlyphFilter *op = static_cast<vtkVertexGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVertexGlyphFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVertexGlyphFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVertexGlyphFilter *op = static_cast<vtkVertexGlyphFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVertexGlyphFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVertexGlyphFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVertexGlyphFilter *op = static_cast<vtkVertexGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVertexGlyphFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVertexGlyphFilter::NewInstance());

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
PyvtkVertexGlyphFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVertexGlyphFilter *tempr = vtkVertexGlyphFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVertexGlyphFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkVertexGlyphFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVertexGlyphFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVertexGlyphFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVertexGlyphFilter\nC++: vtkVertexGlyphFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVertexGlyphFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVertexGlyphFilter\nC++: vtkVertexGlyphFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVertexGlyphFilter_StaticNew()
{
  return vtkVertexGlyphFilter::New();
}

PyObject *PyVTKClass_vtkVertexGlyphFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVertexGlyphFilter_StaticNew,
    PyvtkVertexGlyphFilter_Methods,
    "vtkVertexGlyphFilter", modulename,
    NULL, NULL,
    PyvtkVertexGlyphFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVertexGlyphFilter_Doc()
{
  static const char *docstring[] = {
    "vtkVertexGlyphFilter - Make a vtkPolyData with a vertex on each point.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "This filter throws away all of the cells in the input and replaces\nthem with a vertex on each point.  The intended use of this filter is\nroughly equivalent to the vtkGlyph3D filter, except this filter is\nspecifically for data that has many vertices, making the rendered\nresult faster and less cluttered than the glyph filter. This filter\nmay take a graph or point set as input.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVertexGlyphFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVertexGlyphFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVertexGlyphFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

