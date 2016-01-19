// python wrapper for vtkButterflySubdivisionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkButterflySubdivisionFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkButterflySubdivisionFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkButterflySubdivisionFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInterpolatingSubdivisionFilterNew
extern "C" { PyObject *PyVTKClass_vtkInterpolatingSubdivisionFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkInterpolatingSubdivisionFilterNew
#endif

static const char **PyvtkButterflySubdivisionFilter_Doc();


static PyObject *
PyvtkButterflySubdivisionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButterflySubdivisionFilter *op = static_cast<vtkButterflySubdivisionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkButterflySubdivisionFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButterflySubdivisionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButterflySubdivisionFilter *op = static_cast<vtkButterflySubdivisionFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkButterflySubdivisionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkButterflySubdivisionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButterflySubdivisionFilter *op = static_cast<vtkButterflySubdivisionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkButterflySubdivisionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkButterflySubdivisionFilter::NewInstance());

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
PyvtkButterflySubdivisionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkButterflySubdivisionFilter *tempr = vtkButterflySubdivisionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkButterflySubdivisionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkButterflySubdivisionFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {(char*)"IsA", PyvtkButterflySubdivisionFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {(char*)"NewInstance", PyvtkButterflySubdivisionFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkButterflySubdivisionFilter\nC++: vtkButterflySubdivisionFilter *NewInstance()\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {(char*)"SafeDownCast", PyvtkButterflySubdivisionFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkButterflySubdivisionFilter\nC++: vtkButterflySubdivisionFilter *SafeDownCast(vtkObject* o)\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkButterflySubdivisionFilter_StaticNew()
{
  return vtkButterflySubdivisionFilter::New();
}

PyObject *PyVTKClass_vtkButterflySubdivisionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkButterflySubdivisionFilter_StaticNew,
    PyvtkButterflySubdivisionFilter_Methods,
    "vtkButterflySubdivisionFilter", modulename,
    NULL, NULL,
    PyvtkButterflySubdivisionFilter_Doc(),
    PyVTKClass_vtkInterpolatingSubdivisionFilterNew(modulename));
  return cls;
}

const char **PyvtkButterflySubdivisionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkButterflySubdivisionFilter - generate a subdivision surface using\nthe Butterfly Scheme\n\n",
    "Superclass: vtkInterpolatingSubdivisionFilter\n\n",
    "vtkButterflySubdivisionFilter is an interpolating subdivision scheme\nthat creates four new triangles for each triangle in the mesh. The\nuser can specify the NumberOfSubdivisions. This filter implements the\n8-point butterfly scheme described in: Zorin, D., Schroder, P., and\nSweldens, W., \"Interpolating Subdivisions for Meshes with Arbitrary\nTopology,\" Computer Graphics Proceedings, Annual Conferenc",
    "e Series,\n1996, ACM SIGGRAPH, pp.189-192. This scheme improves previous\nbutterfly subdivisions with special treatment of vertices with\nvalence other than 6.\n\nCurrently, the filter only operates on triangles. Users should use\nthe vtkTriangleFilter to triangulate meshes that contain polygons or\ntriangle strips.\n\nThe filter interpolates point data using the same scheme. New\ntriangles created at a sub",
    "division step will have the cell data of\ntheir parent cell.\n\nSee Also:\n\nvtkInterpolatingSubdivisionFilter vtkLinearSubdivisionFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkButterflySubdivisionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkButterflySubdivisionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkButterflySubdivisionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

