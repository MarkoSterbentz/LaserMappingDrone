// python wrapper for vtkSMExporterProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMExporterProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMExporterProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMExporterProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyNew
#endif

static const char **PyvtkSMExporterProxy_Doc();


static PyObject *
PyvtkSMExporterProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExporterProxy *op = static_cast<vtkSMExporterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMExporterProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMExporterProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExporterProxy *op = static_cast<vtkSMExporterProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMExporterProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMExporterProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExporterProxy *op = static_cast<vtkSMExporterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMExporterProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMExporterProxy::NewInstance());

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
PyvtkSMExporterProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMExporterProxy *tempr = vtkSMExporterProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMExporterProxy_SetView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExporterProxy *op = static_cast<vtkSMExporterProxy *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
    {
    if (ap.IsBound())
      {
      op->SetView(temp0);
      }
    else
      {
      op->vtkSMExporterProxy::SetView(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMExporterProxy_GetView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExporterProxy *op = static_cast<vtkSMExporterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->GetView() :
      op->vtkSMExporterProxy::GetView());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMExporterProxy_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExporterProxy *op = static_cast<vtkSMExporterProxy *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Write();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMExporterProxy_CanExport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanExport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExporterProxy *op = static_cast<vtkSMExporterProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = op->CanExport(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMExporterProxy_GetFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExporterProxy *op = static_cast<vtkSMExporterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileExtension() :
      op->vtkSMExporterProxy::GetFileExtension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMExporterProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMExporterProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMExporterProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMExporterProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMExporterProxy\nC++: vtkSMExporterProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMExporterProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMExporterProxy\nC++: vtkSMExporterProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetView", PyvtkSMExporterProxy_SetView, METH_VARARGS,
   (char*)"V.SetView(vtkSMViewProxy)\nC++: void SetView(vtkSMViewProxy *view)\n\nSet the view proxy to export.\n"},
  {(char*)"GetView", PyvtkSMExporterProxy_GetView, METH_VARARGS,
   (char*)"V.GetView() -> vtkSMViewProxy\nC++: vtkSMViewProxy *GetView()\n\nSet the view proxy to export.\n"},
  {(char*)"Write", PyvtkSMExporterProxy_Write, METH_VARARGS,
   (char*)"V.Write()\nC++: virtual void Write()\n\nExports the view.\n"},
  {(char*)"CanExport", PyvtkSMExporterProxy_CanExport, METH_VARARGS,
   (char*)"V.CanExport(vtkSMProxy) -> bool\nC++: virtual bool CanExport(vtkSMProxy *)\n\nReturns if the view can be exported. Default implementation\nreturn true if the view is a render view.\n"},
  {(char*)"GetFileExtension", PyvtkSMExporterProxy_GetFileExtension, METH_VARARGS,
   (char*)"V.GetFileExtension() -> string\nC++: char *GetFileExtension()\n\nReturns the suggested file extension for this exporter.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSMExporterProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSMExporterProxy_Methods,
    "vtkSMExporterProxy", modulename,
    NULL, NULL,
    PyvtkSMExporterProxy_Doc(),
    PyVTKClass_vtkSMProxyNew(modulename));
  return cls;
}

const char **PyvtkSMExporterProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMExporterProxy - proxy for view exporters.\n\n",
    "Superclass: vtkSMProxy\n\n",
    "vtkSMExporterProxy is a proxy for vtkExporter subclasses. It makes it\npossible to export render views using these exporters.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMExporterProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMExporterProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMExporterProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

