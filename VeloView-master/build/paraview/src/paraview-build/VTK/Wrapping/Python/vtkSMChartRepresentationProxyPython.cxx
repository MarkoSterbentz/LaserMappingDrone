// python wrapper for vtkSMChartRepresentationProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMChartRepresentationProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMChartRepresentationProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMChartRepresentationProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMRepresentationProxyNew
extern "C" { PyObject *PyVTKClass_vtkSMRepresentationProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMRepresentationProxyNew
#endif

static const char **PyvtkSMChartRepresentationProxy_Doc();


static PyObject *
PyvtkSMChartRepresentationProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartRepresentationProxy *op = static_cast<vtkSMChartRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMChartRepresentationProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartRepresentationProxy *op = static_cast<vtkSMChartRepresentationProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMChartRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartRepresentationProxy *op = static_cast<vtkSMChartRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMChartRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMChartRepresentationProxy::NewInstance());

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
PyvtkSMChartRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMChartRepresentationProxy *tempr = vtkSMChartRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartRepresentationProxy_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartRepresentationProxy *op = static_cast<vtkSMChartRepresentationProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartRepresentation *tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkSMChartRepresentationProxy::GetRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMChartRepresentationProxy_ReadXMLAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadXMLAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartRepresentationProxy *op = static_cast<vtkSMChartRepresentationProxy *>(vp);

  vtkSMSessionProxyManager *temp0 = NULL;
  vtkPVXMLElement *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager") &&
      ap.GetVTKObject(temp1, "vtkPVXMLElement"))
    {
    int tempr = (ap.IsBound() ?
      op->ReadXMLAttributes(temp0, temp1) :
      op->vtkSMChartRepresentationProxy::ReadXMLAttributes(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMChartRepresentationProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSMChartRepresentationProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMChartRepresentationProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMChartRepresentationProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMChartRepresentationProxy\nC++: vtkSMChartRepresentationProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMChartRepresentationProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMChartRepresentationProxy\nC++: vtkSMChartRepresentationProxy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetRepresentation", PyvtkSMChartRepresentationProxy_GetRepresentation, METH_VARARGS,
   (char*)"V.GetRepresentation() -> vtkChartRepresentation\nC++: vtkChartRepresentation *GetRepresentation()\n\nReturns client side representation object.\n"},
  {(char*)"ReadXMLAttributes", PyvtkSMChartRepresentationProxy_ReadXMLAttributes, METH_VARARGS,
   (char*)"V.ReadXMLAttributes(vtkSMSessionProxyManager, vtkPVXMLElement)\n    -> int\nC++: int ReadXMLAttributes(vtkSMSessionProxyManager *pm,\n    vtkPVXMLElement *element)\n\nOverridden to handle links with subproxy properties.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMChartRepresentationProxy_StaticNew()
{
  return vtkSMChartRepresentationProxy::New();
}

PyObject *PyVTKClass_vtkSMChartRepresentationProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMChartRepresentationProxy_StaticNew,
    PyvtkSMChartRepresentationProxy_Methods,
    "vtkSMChartRepresentationProxy", modulename,
    NULL, NULL,
    PyvtkSMChartRepresentationProxy_Doc(),
    PyVTKClass_vtkSMRepresentationProxyNew(modulename));
  return cls;
}

const char **PyvtkSMChartRepresentationProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSMChartRepresentationProxy\n\n",
    "Superclass: vtkSMRepresentationProxy\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMChartRepresentationProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMChartRepresentationProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMChartRepresentationProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

