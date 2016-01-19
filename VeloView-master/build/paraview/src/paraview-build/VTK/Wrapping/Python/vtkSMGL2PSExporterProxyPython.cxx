// python wrapper for vtkSMGL2PSExporterProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMGL2PSExporterProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMGL2PSExporterProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMGL2PSExporterProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMRenderViewExporterProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMRenderViewExporterProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMRenderViewExporterProxyNew
#endif

static const char **PyvtkSMGL2PSExporterProxy_Doc();


static PyObject *
PyvtkSMGL2PSExporterProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGL2PSExporterProxy *op = static_cast<vtkSMGL2PSExporterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMGL2PSExporterProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGL2PSExporterProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGL2PSExporterProxy *op = static_cast<vtkSMGL2PSExporterProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMGL2PSExporterProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGL2PSExporterProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGL2PSExporterProxy *op = static_cast<vtkSMGL2PSExporterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMGL2PSExporterProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMGL2PSExporterProxy::NewInstance());

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
PyvtkSMGL2PSExporterProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMGL2PSExporterProxy *tempr = vtkSMGL2PSExporterProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGL2PSExporterProxy_CanExport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanExport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGL2PSExporterProxy *op = static_cast<vtkSMGL2PSExporterProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->CanExport(temp0) :
      op->vtkSMGL2PSExporterProxy::CanExport(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMGL2PSExporterProxy_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGL2PSExporterProxy *op = static_cast<vtkSMGL2PSExporterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write();
      }
    else
      {
      op->vtkSMGL2PSExporterProxy::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMGL2PSExporterProxy_ReadXMLAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadXMLAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGL2PSExporterProxy *op = static_cast<vtkSMGL2PSExporterProxy *>(vp);

  vtkSMSessionProxyManager *temp0 = NULL;
  vtkPVXMLElement *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager") &&
      ap.GetVTKObject(temp1, "vtkPVXMLElement"))
    {
    int tempr = (ap.IsBound() ?
      op->ReadXMLAttributes(temp0, temp1) :
      op->vtkSMGL2PSExporterProxy::ReadXMLAttributes(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMGL2PSExporterProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMGL2PSExporterProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMGL2PSExporterProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMGL2PSExporterProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMGL2PSExporterProxy\nC++: vtkSMGL2PSExporterProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMGL2PSExporterProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMGL2PSExporterProxy\nC++: vtkSMGL2PSExporterProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CanExport", PyvtkSMGL2PSExporterProxy_CanExport, METH_VARARGS,
   (char*)"V.CanExport(vtkSMProxy) -> bool\nC++: bool CanExport(vtkSMProxy *)\n\nReturns if the view can be exported. Default implementation\nreturn true if the view is a render view or a context view.\n"},
  {(char*)"Write", PyvtkSMGL2PSExporterProxy_Write, METH_VARARGS,
   (char*)"V.Write()\nC++: void Write()\n\nExport the current view.\n"},
  {(char*)"ReadXMLAttributes", PyvtkSMGL2PSExporterProxy_ReadXMLAttributes, METH_VARARGS,
   (char*)"V.ReadXMLAttributes(vtkSMSessionProxyManager, vtkPVXMLElement)\n    -> int\nC++: int ReadXMLAttributes(vtkSMSessionProxyManager *pm,\n    vtkPVXMLElement *element)\n\nSee superclass documentation for description.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMGL2PSExporterProxy_StaticNew()
{
  return vtkSMGL2PSExporterProxy::New();
}

PyObject *PyVTKClass_vtkSMGL2PSExporterProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMGL2PSExporterProxy_StaticNew,
    PyvtkSMGL2PSExporterProxy_Methods,
    "vtkSMGL2PSExporterProxy", modulename,
    NULL, NULL,
    PyvtkSMGL2PSExporterProxy_Doc(),
    PyVTKClass_vtkSMRenderViewExporterProxyNew(modulename));
  return cls;
}

const char **PyvtkSMGL2PSExporterProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMGL2PSExporterProxy - Proxy for vtkPVGL2PSExporter\n\n",
    "Superclass: vtkSMRenderViewExporterProxy\n\n",
    "Proxy for vtkPVGL2PSExporter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMGL2PSExporterProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMGL2PSExporterProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMGL2PSExporterProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

