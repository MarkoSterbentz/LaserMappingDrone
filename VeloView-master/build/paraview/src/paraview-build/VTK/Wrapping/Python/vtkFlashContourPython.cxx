// python wrapper for vtkFlashContour
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFlashContour.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFlashContour(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFlashContourNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkFlashContour_Doc();


static PyObject *
PyvtkFlashContour_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlashContour *op = static_cast<vtkFlashContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFlashContour::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFlashContour_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlashContour *op = static_cast<vtkFlashContour *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFlashContour::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFlashContour_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlashContour *op = static_cast<vtkFlashContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFlashContour *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFlashContour::NewInstance());

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
PyvtkFlashContour_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFlashContour *tempr = vtkFlashContour::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFlashContour_SetIsoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlashContour *op = static_cast<vtkFlashContour *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsoValue(temp0);
      }
    else
      {
      op->vtkFlashContour::SetIsoValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFlashContour_GetIsoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlashContour *op = static_cast<vtkFlashContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetIsoValue() :
      op->vtkFlashContour::GetIsoValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFlashContour_SetPassAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlashContour *op = static_cast<vtkFlashContour *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassAttribute(temp0);
      }
    else
      {
      op->vtkFlashContour::SetPassAttribute(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFlashContour_GetPassAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlashContour *op = static_cast<vtkFlashContour *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPassAttribute() :
      op->vtkFlashContour::GetPassAttribute());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFlashContour_Methods[] = {
  {(char*)"GetClassName", PyvtkFlashContour_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFlashContour_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFlashContour_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFlashContour\nC++: vtkFlashContour *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFlashContour_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFlashContour\nC++: vtkFlashContour *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetIsoValue", PyvtkFlashContour_SetIsoValue, METH_VARARGS,
   (char*)"V.SetIsoValue(float)\nC++: void SetIsoValue(double a)\n\n"},
  {(char*)"GetIsoValue", PyvtkFlashContour_GetIsoValue, METH_VARARGS,
   (char*)"V.GetIsoValue() -> float\nC++: double GetIsoValue()\n\n"},
  {(char*)"SetPassAttribute", PyvtkFlashContour_SetPassAttribute, METH_VARARGS,
   (char*)"V.SetPassAttribute(string)\nC++: void SetPassAttribute(char *)\n\n"},
  {(char*)"GetPassAttribute", PyvtkFlashContour_GetPassAttribute, METH_VARARGS,
   (char*)"V.GetPassAttribute() -> string\nC++: char *GetPassAttribute()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFlashContour_StaticNew()
{
  return vtkFlashContour::New();
}

PyObject *PyVTKClass_vtkFlashContourNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFlashContour_StaticNew,
    PyvtkFlashContour_Methods,
    "vtkFlashContour", modulename,
    NULL, NULL,
    PyvtkFlashContour_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkFlashContour_Doc()
{
  static const char *docstring[] = {
    "vtkFlashContour - Contour of a flash AMR volume.\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "This filter takes a cell data array and generates a polydata surface.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFlashContour(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFlashContourNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFlashContour", o) != 0)
    {
    Py_DECREF(o);
    }

}

