// python wrapper for vtkPiecewiseFunctionItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPiecewiseFunctionItem.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPiecewiseFunctionItem(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPiecewiseFunctionItemNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkScalarsToColorsItemNew
extern "C" { PyObject *PyVTKClass_vtkScalarsToColorsItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkScalarsToColorsItemNew
#endif

static const char **PyvtkPiecewiseFunctionItem_Doc();


static PyObject *
PyvtkPiecewiseFunctionItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPiecewiseFunctionItem::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPiecewiseFunctionItem::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPiecewiseFunctionItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPiecewiseFunctionItem::NewInstance());

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
PyvtkPiecewiseFunctionItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPiecewiseFunctionItem *tempr = vtkPiecewiseFunctionItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionItem_SetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

  vtkPiecewiseFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetPiecewiseFunction(temp0);
      }
    else
      {
      op->vtkPiecewiseFunctionItem::SetPiecewiseFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionItem_GetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionItem *op = static_cast<vtkPiecewiseFunctionItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetPiecewiseFunction() :
      op->vtkPiecewiseFunctionItem::GetPiecewiseFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPiecewiseFunctionItem_Methods[] = {
  {(char*)"GetClassName", PyvtkPiecewiseFunctionItem_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPiecewiseFunctionItem_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPiecewiseFunctionItem_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPiecewiseFunctionItem\nC++: vtkPiecewiseFunctionItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPiecewiseFunctionItem_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPiecewiseFunctionItem\nC++: vtkPiecewiseFunctionItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPiecewiseFunction", PyvtkPiecewiseFunctionItem_SetPiecewiseFunction, METH_VARARGS,
   (char*)"V.SetPiecewiseFunction(vtkPiecewiseFunction)\nC++: void SetPiecewiseFunction(vtkPiecewiseFunction *t)\n\n"},
  {(char*)"GetPiecewiseFunction", PyvtkPiecewiseFunctionItem_GetPiecewiseFunction, METH_VARARGS,
   (char*)"V.GetPiecewiseFunction() -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetPiecewiseFunction()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPiecewiseFunctionItem_StaticNew()
{
  return vtkPiecewiseFunctionItem::New();
}

PyObject *PyVTKClass_vtkPiecewiseFunctionItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPiecewiseFunctionItem_StaticNew,
    PyvtkPiecewiseFunctionItem_Methods,
    "vtkPiecewiseFunctionItem", modulename,
    NULL, NULL,
    PyvtkPiecewiseFunctionItem_Doc(),
    PyVTKClass_vtkScalarsToColorsItemNew(modulename));
  return cls;
}

const char **PyvtkPiecewiseFunctionItem_Doc()
{
  static const char *docstring[] = {
    "vtkPiecewiseFunctionItem - no description provided.\n\n",
    "Superclass: vtkScalarsToColorsItem\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPiecewiseFunctionItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPiecewiseFunctionItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPiecewiseFunctionItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

