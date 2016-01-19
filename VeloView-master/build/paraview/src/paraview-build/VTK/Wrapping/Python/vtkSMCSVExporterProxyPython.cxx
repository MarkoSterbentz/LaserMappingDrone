// python wrapper for vtkSMCSVExporterProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMCSVExporterProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMCSVExporterProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMCSVExporterProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMExporterProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMExporterProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMExporterProxyNew
#endif

static const char **PyvtkSMCSVExporterProxy_Doc();


static PyObject *
PyvtkSMCSVExporterProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCSVExporterProxy *op = static_cast<vtkSMCSVExporterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMCSVExporterProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCSVExporterProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCSVExporterProxy *op = static_cast<vtkSMCSVExporterProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCSVExporterProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCSVExporterProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCSVExporterProxy *op = static_cast<vtkSMCSVExporterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMCSVExporterProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCSVExporterProxy::NewInstance());

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
PyvtkSMCSVExporterProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMCSVExporterProxy *tempr = vtkSMCSVExporterProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCSVExporterProxy_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCSVExporterProxy *op = static_cast<vtkSMCSVExporterProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write();
      }
    else
      {
      op->vtkSMCSVExporterProxy::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCSVExporterProxy_CanExport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanExport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCSVExporterProxy *op = static_cast<vtkSMCSVExporterProxy *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->CanExport(temp0) :
      op->vtkSMCSVExporterProxy::CanExport(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMCSVExporterProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMCSVExporterProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMCSVExporterProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMCSVExporterProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMCSVExporterProxy\nC++: vtkSMCSVExporterProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMCSVExporterProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMCSVExporterProxy\nC++: vtkSMCSVExporterProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Write", PyvtkSMCSVExporterProxy_Write, METH_VARARGS,
   (char*)"V.Write()\nC++: virtual void Write()\n\nExports the view.\n"},
  {(char*)"CanExport", PyvtkSMCSVExporterProxy_CanExport, METH_VARARGS,
   (char*)"V.CanExport(vtkSMProxy) -> bool\nC++: virtual bool CanExport(vtkSMProxy *)\n\nReturns if the view can be exported. Default implementation\nreturn true if the view is a render view.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMCSVExporterProxy_StaticNew()
{
  return vtkSMCSVExporterProxy::New();
}

PyObject *PyVTKClass_vtkSMCSVExporterProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMCSVExporterProxy_StaticNew,
    PyvtkSMCSVExporterProxy_Methods,
    "vtkSMCSVExporterProxy", modulename,
    NULL, NULL,
    PyvtkSMCSVExporterProxy_Doc(),
    PyVTKClass_vtkSMExporterProxyNew(modulename));
  return cls;
}

const char **PyvtkSMCSVExporterProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMCSVExporterProxy - exporter used to export the spreadsheet view\nas\n\n",
    "Superclass: vtkSMExporterProxy\n\n",
    "vtkSMCSVExporterProxy is used to export the spreadsheet view as a CSV\nfile.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMCSVExporterProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMCSVExporterProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMCSVExporterProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

