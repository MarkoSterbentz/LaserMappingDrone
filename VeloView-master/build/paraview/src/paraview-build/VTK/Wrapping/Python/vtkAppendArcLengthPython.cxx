// python wrapper for vtkAppendArcLength
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAppendArcLength.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAppendArcLength(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAppendArcLengthNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkAppendArcLength_Doc();


static PyObject *
PyvtkAppendArcLength_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendArcLength *op = static_cast<vtkAppendArcLength *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAppendArcLength::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendArcLength_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendArcLength *op = static_cast<vtkAppendArcLength *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAppendArcLength::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendArcLength_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendArcLength *op = static_cast<vtkAppendArcLength *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAppendArcLength *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAppendArcLength::NewInstance());

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
PyvtkAppendArcLength_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAppendArcLength *tempr = vtkAppendArcLength::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAppendArcLength_Methods[] = {
  {(char*)"GetClassName", PyvtkAppendArcLength_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAppendArcLength_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAppendArcLength_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAppendArcLength\nC++: vtkAppendArcLength *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAppendArcLength_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAppendArcLength\nC++: vtkAppendArcLength *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAppendArcLength_StaticNew()
{
  return vtkAppendArcLength::New();
}

PyObject *PyVTKClass_vtkAppendArcLengthNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAppendArcLength_StaticNew,
    PyvtkAppendArcLength_Methods,
    "vtkAppendArcLength", modulename,
    NULL, NULL,
    PyvtkAppendArcLength_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAppendArcLength_Doc()
{
  static const char *docstring[] = {
    "vtkAppendArcLength - appends Arc length for input poly lines.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkAppendArcLength is used for filter such as plot-over-line. In such\ncases, we need to add an attribute array that is the arc_length over\nthe length of the probed line. That's when vtkAppendArcLength can be\nused. It adds a new point-data array named \"arc_length\" with the\ncomputed arc length for each of the polylines in the input. For all\nother cell types, the arc length is set to 0.\n\nCaveats:\n\nTh",
    "is filter assumes that cells don't share points.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAppendArcLength(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAppendArcLengthNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAppendArcLength", o) != 0)
    {
    Py_DECREF(o);
    }

}

