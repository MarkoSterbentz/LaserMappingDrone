// python wrapper for vtkSMDataDeliveryManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDataDeliveryManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMDataDeliveryManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMDataDeliveryManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMDataDeliveryManager_Doc();


static PyObject *
PyvtkSMDataDeliveryManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataDeliveryManager *op = static_cast<vtkSMDataDeliveryManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMDataDeliveryManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDataDeliveryManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataDeliveryManager *op = static_cast<vtkSMDataDeliveryManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDataDeliveryManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDataDeliveryManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataDeliveryManager *op = static_cast<vtkSMDataDeliveryManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDataDeliveryManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDataDeliveryManager::NewInstance());

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
PyvtkSMDataDeliveryManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMDataDeliveryManager *tempr = vtkSMDataDeliveryManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDataDeliveryManager_SetViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataDeliveryManager *op = static_cast<vtkSMDataDeliveryManager *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
    {
    if (ap.IsBound())
      {
      op->SetViewProxy(temp0);
      }
    else
      {
      op->vtkSMDataDeliveryManager::SetViewProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDataDeliveryManager_Deliver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Deliver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataDeliveryManager *op = static_cast<vtkSMDataDeliveryManager *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Deliver(temp0);
      }
    else
      {
      op->vtkSMDataDeliveryManager::Deliver(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDataDeliveryManager_DeliverStreamedPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeliverStreamedPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataDeliveryManager *op = static_cast<vtkSMDataDeliveryManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->DeliverStreamedPieces() :
      op->vtkSMDataDeliveryManager::DeliverStreamedPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDataDeliveryManager_Methods[] = {
  {(char*)"GetClassName", PyvtkSMDataDeliveryManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMDataDeliveryManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMDataDeliveryManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMDataDeliveryManager\nC++: vtkSMDataDeliveryManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMDataDeliveryManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMDataDeliveryManager\nC++: vtkSMDataDeliveryManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetViewProxy", PyvtkSMDataDeliveryManager_SetViewProxy, METH_VARARGS,
   (char*)"V.SetViewProxy(vtkSMViewProxy)\nC++: void SetViewProxy(vtkSMViewProxy *)\n\nGet/Set the view proxy for whom we are delivering the data.\n"},
  {(char*)"Deliver", PyvtkSMDataDeliveryManager_Deliver, METH_VARARGS,
   (char*)"V.Deliver(bool)\nC++: void Deliver(bool interactive)\n\nCalled to request delivery of the geometry. This checks the\nclient-side vtkPVDataDeliveryManager instance to see if any\ngeometries need to be delivered and then requests delivery for\nthose.\n"},
  {(char*)"DeliverStreamedPieces", PyvtkSMDataDeliveryManager_DeliverStreamedPieces, METH_VARARGS,
   (char*)"V.DeliverStreamedPieces() -> bool\nC++: bool DeliverStreamedPieces()\n\nEXPERIMEMTAL: Delivery when streaming is enabled. Returns true\nwhen some new data was streamed. When this returns false, it\nimplies that there is no more data to stream or streaming is not\nenabled.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMDataDeliveryManager_StaticNew()
{
  return vtkSMDataDeliveryManager::New();
}

PyObject *PyVTKClass_vtkSMDataDeliveryManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMDataDeliveryManager_StaticNew,
    PyvtkSMDataDeliveryManager_Methods,
    "vtkSMDataDeliveryManager", modulename,
    NULL, NULL,
    PyvtkSMDataDeliveryManager_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMDataDeliveryManager_Doc()
{
  static const char *docstring[] = {
    "vtkSMDataDeliveryManager - server-manager class for\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMDataDeliveryManager is the server-manager wrapper for\nvtkPVDataDeliveryManager. It manages calling on methods on instances\nof vtkPVDataDeliveryManager. Before every render call,\nvtkSMRenderViewProxy calls vtkSMDataDeliveryManager::Deliver() to\nensure that any geometries that need to be delivered are explicitly\ndelivered. This separating into Update-Deliver-Render calls ensures\nmakes it possib",
    "le to extend the framework for streaming, in future.\n\nThe streaming components of this class are experimental and will be\nchanged.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMDataDeliveryManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMDataDeliveryManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMDataDeliveryManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

