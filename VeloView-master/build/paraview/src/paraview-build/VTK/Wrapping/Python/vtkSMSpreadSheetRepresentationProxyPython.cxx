// python wrapper for vtkSMSpreadSheetRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMSpreadSheetRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMSpreadSheetRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMSpreadSheetRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMRepresentationProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMRepresentationProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMRepresentationProxyNew
#endif

static const char **PyvtkSMSpreadSheetRepresentationProxy_Doc();


static PyObject *
PyvtkSMSpreadSheetRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSpreadSheetRepresentationProxy *op = static_cast<vtkSMSpreadSheetRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMSpreadSheetRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSpreadSheetRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSpreadSheetRepresentationProxy *op = static_cast<vtkSMSpreadSheetRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSpreadSheetRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSpreadSheetRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSpreadSheetRepresentationProxy *op = static_cast<vtkSMSpreadSheetRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSpreadSheetRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSpreadSheetRepresentationProxy::NewInstance());

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
PyvtkSMSpreadSheetRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMSpreadSheetRepresentationProxy *tempr = vtkSMSpreadSheetRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSpreadSheetRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMSpreadSheetRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMSpreadSheetRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMSpreadSheetRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMSpreadSheetRepresentationProxy\nC++: vtkSMSpreadSheetRepresentationProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMSpreadSheetRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMSpreadSheetRepresentationProxy\nC++: vtkSMSpreadSheetRepresentationProxy *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMSpreadSheetRepresentationProxy_StaticNew()
{
  return vtkSMSpreadSheetRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSMSpreadSheetRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMSpreadSheetRepresentationProxy_StaticNew,
    PyvtkSMSpreadSheetRepresentationProxy_Methods,
    "vtkSMSpreadSheetRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSMSpreadSheetRepresentationProxy_Doc(),
    PyVTKClass_vtkSMRepresentationProxyNew(modulename));
  return cls;
}

const char **PyvtkSMSpreadSheetRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMSpreadSheetRepresentationProxy\n\n",
    "Superclass: vtkSMRepresentationProxy\n\n",
    "vtkSMSpreadSheetRepresentationProxy is a representation proxy used\nfor spreadsheet view. This class overrides vtkSMRepresentationProxy\nto ensure that the selection inputs are setup correctly.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMSpreadSheetRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMSpreadSheetRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMSpreadSheetRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

