// python wrapper for vtkSMRenderViewExporterProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMRenderViewExporterProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMRenderViewExporterProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMRenderViewExporterProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMExporterProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMExporterProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMExporterProxyNew
#endif

static const char **PyvtkSMRenderViewExporterProxy_Doc();


static PyObject *
PyvtkSMRenderViewExporterProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewExporterProxy *op = static_cast<vtkSMRenderViewExporterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMRenderViewExporterProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewExporterProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewExporterProxy *op = static_cast<vtkSMRenderViewExporterProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMRenderViewExporterProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewExporterProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewExporterProxy *op = static_cast<vtkSMRenderViewExporterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMRenderViewExporterProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMRenderViewExporterProxy::NewInstance());

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
PyvtkSMRenderViewExporterProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMRenderViewExporterProxy *tempr = vtkSMRenderViewExporterProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewExporterProxy_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewExporterProxy *op = static_cast<vtkSMRenderViewExporterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write();
      }
    else
      {
      op->vtkSMRenderViewExporterProxy::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMRenderViewExporterProxy_CanExport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanExport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewExporterProxy *op = static_cast<vtkSMRenderViewExporterProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->CanExport(temp0) :
      op->vtkSMRenderViewExporterProxy::CanExport(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMRenderViewExporterProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMRenderViewExporterProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMRenderViewExporterProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMRenderViewExporterProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMRenderViewExporterProxy\nC++: vtkSMRenderViewExporterProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMRenderViewExporterProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMRenderViewExporterProxy\nC++: vtkSMRenderViewExporterProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Write", PyvtkSMRenderViewExporterProxy_Write, METH_VARARGS,
   (char*)"V.Write()\nC++: virtual void Write()\n\nExports the view.\n"},
  {(char*)"CanExport", PyvtkSMRenderViewExporterProxy_CanExport, METH_VARARGS,
   (char*)"V.CanExport(vtkSMProxy) -> bool\nC++: virtual bool CanExport(vtkSMProxy *)\n\nReturns if the view can be exported. Default implementation\nreturn true if the view is a render view.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMRenderViewExporterProxy_StaticNew()
{
  return vtkSMRenderViewExporterProxy::New();
}

PyObject *PyVTKClass_vtkSMRenderViewExporterProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMRenderViewExporterProxy_StaticNew,
    PyvtkSMRenderViewExporterProxy_Methods,
    "vtkSMRenderViewExporterProxy", modulename,
    NULL, NULL,
    PyvtkSMRenderViewExporterProxy_Doc(),
    PyVTKClass_vtkSMExporterProxyNew(modulename));
  return cls;
}

const char **PyvtkSMRenderViewExporterProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMRenderViewExporterProxy - proxy for vtkExporter subclasses which\n\n",
    "Superclass: vtkSMExporterProxy\n\n",
    "vtkSMRenderViewExporterProxy is a proxy for vtkExporter subclasses.\nIt makes it possible to export render views using these exporters.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMRenderViewExporterProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMRenderViewExporterProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMRenderViewExporterProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

