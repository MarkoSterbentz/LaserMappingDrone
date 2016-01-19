// python wrapper for vtkCompositeTransferFunctionItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCompositeTransferFunctionItem.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositeTransferFunctionItem(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositeTransferFunctionItemNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkColorTransferFunctionItemNew
extern "C" { PyObject *PyVTKClass_vtkColorTransferFunctionItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkColorTransferFunctionItemNew
#endif

static const char **PyvtkCompositeTransferFunctionItem_Doc();


static PyObject *
PyvtkCompositeTransferFunctionItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeTransferFunctionItem *op = static_cast<vtkCompositeTransferFunctionItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositeTransferFunctionItem::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeTransferFunctionItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeTransferFunctionItem *op = static_cast<vtkCompositeTransferFunctionItem *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeTransferFunctionItem::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeTransferFunctionItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeTransferFunctionItem *op = static_cast<vtkCompositeTransferFunctionItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeTransferFunctionItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeTransferFunctionItem::NewInstance());

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
PyvtkCompositeTransferFunctionItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositeTransferFunctionItem *tempr = vtkCompositeTransferFunctionItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeTransferFunctionItem_SetOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeTransferFunctionItem *op = static_cast<vtkCompositeTransferFunctionItem *>(vp);

  vtkPiecewiseFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetOpacityFunction(temp0);
      }
    else
      {
      op->vtkCompositeTransferFunctionItem::SetOpacityFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeTransferFunctionItem_GetOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeTransferFunctionItem *op = static_cast<vtkCompositeTransferFunctionItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetOpacityFunction() :
      op->vtkCompositeTransferFunctionItem::GetOpacityFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeTransferFunctionItem_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeTransferFunctionItem_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeTransferFunctionItem_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeTransferFunctionItem_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositeTransferFunctionItem\nC++: vtkCompositeTransferFunctionItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeTransferFunctionItem_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeTransferFunctionItem\nC++: vtkCompositeTransferFunctionItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOpacityFunction", PyvtkCompositeTransferFunctionItem_SetOpacityFunction, METH_VARARGS,
   (char*)"V.SetOpacityFunction(vtkPiecewiseFunction)\nC++: void SetOpacityFunction(vtkPiecewiseFunction *opacity)\n\n"},
  {(char*)"GetOpacityFunction", PyvtkCompositeTransferFunctionItem_GetOpacityFunction, METH_VARARGS,
   (char*)"V.GetOpacityFunction() -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetOpacityFunction()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeTransferFunctionItem_StaticNew()
{
  return vtkCompositeTransferFunctionItem::New();
}

PyObject *PyVTKClass_vtkCompositeTransferFunctionItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeTransferFunctionItem_StaticNew,
    PyvtkCompositeTransferFunctionItem_Methods,
    "vtkCompositeTransferFunctionItem", modulename,
    NULL, NULL,
    PyvtkCompositeTransferFunctionItem_Doc(),
    PyVTKClass_vtkColorTransferFunctionItemNew(modulename));
  return cls;
}

const char **PyvtkCompositeTransferFunctionItem_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeTransferFunctionItem - no description provided.\n\n",
    "Superclass: vtkColorTransferFunctionItem\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeTransferFunctionItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeTransferFunctionItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeTransferFunctionItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

