// python wrapper for vtkLoopSubdivisionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkLoopSubdivisionFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLoopSubdivisionFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLoopSubdivisionFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkApproximatingSubdivisionFilterNew
extern "C" { PyObject *PyVTKClass_vtkApproximatingSubdivisionFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkApproximatingSubdivisionFilterNew
#endif

static const char **PyvtkLoopSubdivisionFilter_Doc();


static PyObject *
PyvtkLoopSubdivisionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopSubdivisionFilter *op = static_cast<vtkLoopSubdivisionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLoopSubdivisionFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLoopSubdivisionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopSubdivisionFilter *op = static_cast<vtkLoopSubdivisionFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLoopSubdivisionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLoopSubdivisionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopSubdivisionFilter *op = static_cast<vtkLoopSubdivisionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLoopSubdivisionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLoopSubdivisionFilter::NewInstance());

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
PyvtkLoopSubdivisionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLoopSubdivisionFilter *tempr = vtkLoopSubdivisionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLoopSubdivisionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkLoopSubdivisionFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {(char*)"IsA", PyvtkLoopSubdivisionFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {(char*)"NewInstance", PyvtkLoopSubdivisionFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLoopSubdivisionFilter\nC++: vtkLoopSubdivisionFilter *NewInstance()\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {(char*)"SafeDownCast", PyvtkLoopSubdivisionFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLoopSubdivisionFilter\nC++: vtkLoopSubdivisionFilter *SafeDownCast(vtkObject* o)\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLoopSubdivisionFilter_StaticNew()
{
  return vtkLoopSubdivisionFilter::New();
}

PyObject *PyVTKClass_vtkLoopSubdivisionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLoopSubdivisionFilter_StaticNew,
    PyvtkLoopSubdivisionFilter_Methods,
    "vtkLoopSubdivisionFilter", modulename,
    NULL, NULL,
    PyvtkLoopSubdivisionFilter_Doc(),
    PyVTKClass_vtkApproximatingSubdivisionFilterNew(modulename));
  return cls;
}

const char **PyvtkLoopSubdivisionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkLoopSubdivisionFilter - generate a subdivision surface using the\nLoop Scheme\n\n",
    "Superclass: vtkApproximatingSubdivisionFilter\n\n",
    "vtkLoopSubdivisionFilter is an approximating subdivision scheme that\ncreates four new triangles for each triangle in the mesh. The user\ncan specify the NumberOfSubdivisions. Loop's subdivision scheme is\ndescribed in: Loop, C., \"Smooth Subdivision surfaces based on\ntriangles,\", Masters Thesis, University of Utah, August 1987. For a\nnice summary of the technique see, Hoppe, H., et. al, \"Piecewise\nSm",
    "ooth Surface Reconstruction,:, Proceedings of Siggraph 94 (Orlando,\nFlorida, July 24-29, 1994). In COmputer Graphics Proceedings, Annual\nCOnference Series, 1994, ACM SIGGRAPH, pp. 295-302. <P> The filter\nonly operates on triangles. Users should use the vtkTriangleFilter to\ntriangulate meshes that contain polygons or triangle strips. <P> The\nfilter approximates point data using the same scheme. New",
    " triangles\ncreate at a subdivision step will have the cell data of their parent\ncell.\n\nSee Also:\n\nvtkApproximatingSubdivisionFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLoopSubdivisionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLoopSubdivisionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLoopSubdivisionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

