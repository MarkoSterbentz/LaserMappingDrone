// python wrapper for vtkGenericPointIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericPointIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericPointIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericPointIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGenericPointIterator_Doc();


static PyObject *
PyvtkGenericPointIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericPointIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericPointIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericPointIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericPointIterator::NewInstance());

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
PyvtkGenericPointIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericPointIterator *tempr = vtkGenericPointIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Begin();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->IsAtEnd();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Next();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_GetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    double *tempr = op->GetPosition();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericPointIterator_GetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetPosition(temp0);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericPointIterator_GetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkGenericPointIterator_GetPosition_s1(self, args);
    case 1:
      return PyvtkGenericPointIterator_GetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition");
  return NULL;
}



static PyObject *
PyvtkGenericPointIterator_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetId();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericPointIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericPointIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK construction and type macros.\n"},
  {(char*)"IsA", PyvtkGenericPointIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK construction and type macros.\n"},
  {(char*)"NewInstance", PyvtkGenericPointIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericPointIterator\nC++: vtkGenericPointIterator *NewInstance()\n\nStandard VTK construction and type macros.\n"},
  {(char*)"SafeDownCast", PyvtkGenericPointIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericPointIterator\nC++: vtkGenericPointIterator *SafeDownCast(vtkObject* o)\n\nStandard VTK construction and type macros.\n"},
  {(char*)"Begin", PyvtkGenericPointIterator_Begin, METH_VARARGS,
   (char*)"V.Begin()\nC++: virtual void Begin()\n\nMove iterator to first position if any (loop initialization).\n"},
  {(char*)"IsAtEnd", PyvtkGenericPointIterator_IsAtEnd, METH_VARARGS,
   (char*)"V.IsAtEnd() -> int\nC++: virtual int IsAtEnd()\n\nIs the iterator at the end of traversal?\n"},
  {(char*)"Next", PyvtkGenericPointIterator_Next, METH_VARARGS,
   (char*)"V.Next()\nC++: virtual void Next()\n\nMove the iterator to the next position in the list.\n\\pre not_off: !IsAtEnd()\n"},
  {(char*)"GetPosition", PyvtkGenericPointIterator_GetPosition, METH_VARARGS,
   (char*)"V.GetPosition() -> (float, ...)\nC++: virtual double *GetPosition()\nV.GetPosition([float, float, float])\nC++: virtual void GetPosition(double x[3])\n\nGet the coordinates of the point at the current iterator\nposition.\n\\pre not_off: !IsAtEnd()\n\\post result_exists: result!=0\n"},
  {(char*)"GetId", PyvtkGenericPointIterator_GetId, METH_VARARGS,
   (char*)"V.GetId() -> int\nC++: virtual vtkIdType GetId()\n\nReturn the unique identifier for the point, could be\nnon-contiguous.\n\\pre not_off: !IsAtEnd()\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGenericPointIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGenericPointIterator_Methods,
    "vtkGenericPointIterator", modulename,
    NULL, NULL,
    PyvtkGenericPointIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGenericPointIterator_Doc()
{
  static const char *docstring[] = {
    "vtkGenericPointIterator - iterator used to traverse points\n\n",
    "Superclass: vtkObject\n\n",
    "This class (and subclasses) are used to iterate over points. Use it\nonly in conjunction with vtkGenericDataSet (i.e., the adaptor\nframework).\n\nTypical use is:\n\nvtkGenericDataSet *dataset; vtkGenericPointIterator *it =\ndataset->NewPointIterator(); for (it->Begin(); !it->IsAtEnd();\nit->Next());\n  {\n  x=it->GetPosition();\n  } \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericPointIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericPointIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericPointIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

