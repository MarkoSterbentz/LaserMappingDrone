// python wrapper for vtkGenericCellIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericCellIterator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericCellIterator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericCellIteratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGenericCellIterator_Doc();


static PyObject *
PyvtkGenericCellIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericCellIterator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCellIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericCellIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCellIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericCellIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericCellIterator::NewInstance());

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
PyvtkGenericCellIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericCellIterator *tempr = vtkGenericCellIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCellIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

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
PyvtkGenericCellIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

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
PyvtkGenericCellIterator_NewCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkGenericAdaptorCell *tempr = op->NewCell();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericCellIterator_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

  vtkGenericAdaptorCell *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell"))
    {
    op->GetCell(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericCellIterator_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkGenericAdaptorCell *tempr = op->GetCell();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericCellIterator_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkGenericCellIterator_GetCell_s1(self, args);
    case 0:
      return PyvtkGenericCellIterator_GetCell_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return NULL;
}



static PyObject *
PyvtkGenericCellIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

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

static PyMethodDef PyvtkGenericCellIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericCellIterator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK construction and type macros.\n"},
  {(char*)"IsA", PyvtkGenericCellIterator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK construction and type macros.\n"},
  {(char*)"NewInstance", PyvtkGenericCellIterator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericCellIterator\nC++: vtkGenericCellIterator *NewInstance()\n\nStandard VTK construction and type macros.\n"},
  {(char*)"SafeDownCast", PyvtkGenericCellIterator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericCellIterator\nC++: vtkGenericCellIterator *SafeDownCast(vtkObject* o)\n\nStandard VTK construction and type macros.\n"},
  {(char*)"Begin", PyvtkGenericCellIterator_Begin, METH_VARARGS,
   (char*)"V.Begin()\nC++: virtual void Begin()\n\nMove iterator to first position if any (loop initialization).\n"},
  {(char*)"IsAtEnd", PyvtkGenericCellIterator_IsAtEnd, METH_VARARGS,
   (char*)"V.IsAtEnd() -> int\nC++: virtual int IsAtEnd()\n\nIs the iterator at the end of traversal?\n"},
  {(char*)"NewCell", PyvtkGenericCellIterator_NewCell, METH_VARARGS,
   (char*)"V.NewCell() -> vtkGenericAdaptorCell\nC++: virtual vtkGenericAdaptorCell *NewCell()\n\nCreate an empty cell. The user is responsible for deleting it.\n\\post result_exists: result!=0\n"},
  {(char*)"GetCell", PyvtkGenericCellIterator_GetCell, METH_VARARGS,
   (char*)"V.GetCell(vtkGenericAdaptorCell)\nC++: virtual void GetCell(vtkGenericAdaptorCell *c)\nV.GetCell() -> vtkGenericAdaptorCell\nC++: virtual vtkGenericAdaptorCell *GetCell()\n\nGet the cell at current position. The cell should be instantiated\nwith the NewCell() method.\n\\pre not_at_end: !IsAtEnd()\n\\pre c_exists: c!=0\nTHREAD SAFE\n"},
  {(char*)"Next", PyvtkGenericCellIterator_Next, METH_VARARGS,
   (char*)"V.Next()\nC++: virtual void Next()\n\nMove the iterator to the next position in the list.\n\\pre not_at_end: !IsAtEnd()\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGenericCellIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGenericCellIterator_Methods,
    "vtkGenericCellIterator", modulename,
    NULL, NULL,
    PyvtkGenericCellIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGenericCellIterator_Doc()
{
  static const char *docstring[] = {
    "vtkGenericCellIterator - iterator used to traverse cells\n\n",
    "Superclass: vtkObject\n\n",
    "This class (and subclasses) are used to iterate over cells. Use it\nonly in conjunction with vtkGenericDataSet (i.e., the adaptor\nframework).\n\nTypical use is:\n\nvtkGenericDataSet *dataset; vtkGenericCellIterator *it =\ndataset->NewCellIterator(2); for (it->Begin(); !it->IsAtEnd();\nit->Next());\n  {\n  spec=it->GetCell();\n  } \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericCellIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericCellIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericCellIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

