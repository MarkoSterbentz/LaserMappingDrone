// python wrapper for vtkViewLayout
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkViewLayout.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkViewLayout(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkViewLayoutNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkViewLayout_Doc();


static PyObject *
PyvtkViewLayout_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewLayout *op = static_cast<vtkViewLayout *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkViewLayout::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewLayout_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewLayout *op = static_cast<vtkViewLayout *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkViewLayout::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewLayout_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewLayout *op = static_cast<vtkViewLayout *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkViewLayout *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkViewLayout::NewInstance());

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
PyvtkViewLayout_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkViewLayout *tempr = vtkViewLayout::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewLayout_ResetTileDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetTileDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewLayout *op = static_cast<vtkViewLayout *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetTileDisplay();
      }
    else
      {
      op->vtkViewLayout::ResetTileDisplay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewLayout_ShowOnTileDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowOnTileDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewLayout *op = static_cast<vtkViewLayout *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ShowOnTileDisplay(temp0);
      }
    else
      {
      op->vtkViewLayout::ShowOnTileDisplay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkViewLayout_Methods[] = {
  {(char*)"GetClassName", PyvtkViewLayout_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkViewLayout_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkViewLayout_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkViewLayout\nC++: vtkViewLayout *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkViewLayout_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkViewLayout\nC++: vtkViewLayout *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ResetTileDisplay", PyvtkViewLayout_ResetTileDisplay, METH_VARARGS,
   (char*)"V.ResetTileDisplay()\nC++: void ResetTileDisplay()\n\n"},
  {(char*)"ShowOnTileDisplay", PyvtkViewLayout_ShowOnTileDisplay, METH_VARARGS,
   (char*)"V.ShowOnTileDisplay(int)\nC++: void ShowOnTileDisplay(unsigned int)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkViewLayout_StaticNew()
{
  return vtkViewLayout::New();
}

PyObject *PyVTKClass_vtkViewLayoutNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkViewLayout_StaticNew,
    PyvtkViewLayout_Methods,
    "vtkViewLayout", modulename,
    NULL, NULL,
    PyvtkViewLayout_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkViewLayout_Doc()
{
  static const char *docstring[] = {
    "vtkViewLayout - used by vtkSMViewLayoutProxy.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkViewLayout is the server-side object corresponding to\nvtkSMViewLayoutProxy.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkViewLayout(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkViewLayoutNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkViewLayout", o) != 0)
    {
    Py_DECREF(o);
    }

}

