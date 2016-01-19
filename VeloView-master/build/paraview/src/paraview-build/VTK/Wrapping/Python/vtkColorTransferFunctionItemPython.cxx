// python wrapper for vtkColorTransferFunctionItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkColorTransferFunctionItem.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkColorTransferFunctionItem(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkColorTransferFunctionItemNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkScalarsToColorsItemNew
extern "C" { PyObject *PyVTKClass_vtkScalarsToColorsItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkScalarsToColorsItemNew
#endif

static const char **PyvtkColorTransferFunctionItem_Doc();


static PyObject *
PyvtkColorTransferFunctionItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunctionItem *op = static_cast<vtkColorTransferFunctionItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkColorTransferFunctionItem::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunctionItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunctionItem *op = static_cast<vtkColorTransferFunctionItem *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkColorTransferFunctionItem::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunctionItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunctionItem *op = static_cast<vtkColorTransferFunctionItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkColorTransferFunctionItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkColorTransferFunctionItem::NewInstance());

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
PyvtkColorTransferFunctionItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkColorTransferFunctionItem *tempr = vtkColorTransferFunctionItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunctionItem_SetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunctionItem *op = static_cast<vtkColorTransferFunctionItem *>(vp);

  vtkColorTransferFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
    {
    if (ap.IsBound())
      {
      op->SetColorTransferFunction(temp0);
      }
    else
      {
      op->vtkColorTransferFunctionItem::SetColorTransferFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferFunctionItem_GetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunctionItem *op = static_cast<vtkColorTransferFunctionItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkColorTransferFunction *tempr = (ap.IsBound() ?
      op->GetColorTransferFunction() :
      op->vtkColorTransferFunctionItem::GetColorTransferFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkColorTransferFunctionItem_Methods[] = {
  {(char*)"GetClassName", PyvtkColorTransferFunctionItem_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkColorTransferFunctionItem_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkColorTransferFunctionItem_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkColorTransferFunctionItem\nC++: vtkColorTransferFunctionItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkColorTransferFunctionItem_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkColorTransferFunctionItem\nC++: vtkColorTransferFunctionItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetColorTransferFunction", PyvtkColorTransferFunctionItem_SetColorTransferFunction, METH_VARARGS,
   (char*)"V.SetColorTransferFunction(vtkColorTransferFunction)\nC++: void SetColorTransferFunction(vtkColorTransferFunction *t)\n\n"},
  {(char*)"GetColorTransferFunction", PyvtkColorTransferFunctionItem_GetColorTransferFunction, METH_VARARGS,
   (char*)"V.GetColorTransferFunction() -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *GetColorTransferFunction()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkColorTransferFunctionItem_StaticNew()
{
  return vtkColorTransferFunctionItem::New();
}

PyObject *PyVTKClass_vtkColorTransferFunctionItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkColorTransferFunctionItem_StaticNew,
    PyvtkColorTransferFunctionItem_Methods,
    "vtkColorTransferFunctionItem", modulename,
    NULL, NULL,
    PyvtkColorTransferFunctionItem_Doc(),
    PyVTKClass_vtkScalarsToColorsItemNew(modulename));
  return cls;
}

const char **PyvtkColorTransferFunctionItem_Doc()
{
  static const char *docstring[] = {
    "vtkColorTransferFunctionItem - no description provided.\n\n",
    "Superclass: vtkScalarsToColorsItem\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkColorTransferFunctionItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkColorTransferFunctionItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColorTransferFunctionItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

