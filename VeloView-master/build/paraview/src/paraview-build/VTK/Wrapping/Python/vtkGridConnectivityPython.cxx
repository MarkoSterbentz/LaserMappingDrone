// python wrapper for vtkGridConnectivity
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGridConnectivity.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGridConnectivity(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGridConnectivityNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkGridConnectivity_Doc();


static PyObject *
PyvtkGridConnectivity_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridConnectivity *op = static_cast<vtkGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGridConnectivity::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridConnectivity *op = static_cast<vtkGridConnectivity *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGridConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridConnectivity *op = static_cast<vtkGridConnectivity *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGridConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGridConnectivity::NewInstance());

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
PyvtkGridConnectivity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGridConnectivity *tempr = vtkGridConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGridConnectivity_IntegrateCellVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntegrateCellVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGridConnectivity *op = static_cast<vtkGridConnectivity *>(vp);

  vtkCell *temp0 = NULL;
  int temp1;
  vtkUnstructuredGrid *temp2 = NULL;
  vtkIdType temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkCell") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkUnstructuredGrid") &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->IntegrateCellVolume(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkGridConnectivity::IntegrateCellVolume(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGridConnectivity_Methods[] = {
  {(char*)"GetClassName", PyvtkGridConnectivity_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGridConnectivity_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGridConnectivity_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGridConnectivity\nC++: vtkGridConnectivity *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGridConnectivity_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGridConnectivity\nC++: vtkGridConnectivity *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IntegrateCellVolume", PyvtkGridConnectivity_IntegrateCellVolume, METH_VARARGS,
   (char*)"V.IntegrateCellVolume(vtkCell, int, vtkUnstructuredGrid, int)\nC++: void IntegrateCellVolume(vtkCell *cell, int fragmentId,\n    vtkUnstructuredGrid *input, vtkIdType cellIndex)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGridConnectivity_StaticNew()
{
  return vtkGridConnectivity::New();
}

PyObject *PyVTKClass_vtkGridConnectivityNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGridConnectivity_StaticNew,
    PyvtkGridConnectivity_Methods,
    "vtkGridConnectivity", modulename,
    NULL, NULL,
    PyvtkGridConnectivity_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGridConnectivity_Doc()
{
  static const char *docstring[] = {
    "vtkGridConnectivity - Integrates lines, surfaces and volume.\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "Integrates all point and cell data attributes while computing length,\narea or volume.  Works for 1D, 2D or 3D.  Only one dimensionality at\na time.  For volume, this filter ignores all but 3D cells.  It will\nnot compute the volume contained in a closed surface. The output of\nthis filter is a single point and vertex.  The attributes for this\npoint and cell will contain the integration results for th",
    "e\ncorresponding input attributes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGridConnectivity(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGridConnectivityNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGridConnectivity", o) != 0)
    {
    Py_DECREF(o);
    }

}

