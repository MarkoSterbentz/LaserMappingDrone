// python wrapper for vtkPVKeyFrameAnimationCueForProxies
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVKeyFrameAnimationCueForProxies.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVKeyFrameAnimationCueForProxies(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVKeyFrameAnimationCueForProxiesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVKeyFrameAnimationCueNew
extern "C" { PyObject *PyVTKClass_vtkPVKeyFrameAnimationCueNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVKeyFrameAnimationCueNew
#endif

static const char **PyvtkPVKeyFrameAnimationCueForProxies_Doc();


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVKeyFrameAnimationCueForProxies::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVKeyFrameAnimationCueForProxies::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVKeyFrameAnimationCueForProxies *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVKeyFrameAnimationCueForProxies::NewInstance());

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
PyvtkPVKeyFrameAnimationCueForProxies_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVKeyFrameAnimationCueForProxies *tempr = vtkPVKeyFrameAnimationCueForProxies::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_SetAnimatedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetAnimatedProxy(temp0);
      }
    else
      {
      op->vtkPVKeyFrameAnimationCueForProxies::SetAnimatedProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_GetAnimatedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetAnimatedProxy() :
      op->vtkPVKeyFrameAnimationCueForProxies::GetAnimatedProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_RemoveAnimatedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAnimatedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAnimatedProxy();
      }
    else
      {
      op->vtkPVKeyFrameAnimationCueForProxies::RemoveAnimatedProxy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_SetAnimatedPropertyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedPropertyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnimatedPropertyName(temp0);
      }
    else
      {
      op->vtkPVKeyFrameAnimationCueForProxies::SetAnimatedPropertyName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_GetAnimatedPropertyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedPropertyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetAnimatedPropertyName() :
      op->vtkPVKeyFrameAnimationCueForProxies::GetAnimatedPropertyName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_SetAnimatedDomainName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedDomainName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnimatedDomainName(temp0);
      }
    else
      {
      op->vtkPVKeyFrameAnimationCueForProxies::SetAnimatedDomainName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_GetAnimatedDomainName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedDomainName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetAnimatedDomainName() :
      op->vtkPVKeyFrameAnimationCueForProxies::GetAnimatedDomainName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_BeginUpdateAnimationValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginUpdateAnimationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BeginUpdateAnimationValues();
      }
    else
      {
      op->vtkPVKeyFrameAnimationCueForProxies::BeginUpdateAnimationValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_SetAnimationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAnimationValue(temp0, temp1);
      }
    else
      {
      op->vtkPVKeyFrameAnimationCueForProxies::SetAnimationValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCueForProxies_EndUpdateAnimationValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndUpdateAnimationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCueForProxies *op = static_cast<vtkPVKeyFrameAnimationCueForProxies *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndUpdateAnimationValues();
      }
    else
      {
      op->vtkPVKeyFrameAnimationCueForProxies::EndUpdateAnimationValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVKeyFrameAnimationCueForProxies_Methods[] = {
  {(char*)"GetClassName", PyvtkPVKeyFrameAnimationCueForProxies_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVKeyFrameAnimationCueForProxies_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVKeyFrameAnimationCueForProxies_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVKeyFrameAnimationCueForProxies\nC++: vtkPVKeyFrameAnimationCueForProxies *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVKeyFrameAnimationCueForProxies_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVKeyFrameAnimationCueForProxies\nC++: vtkPVKeyFrameAnimationCueForProxies *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetAnimatedProxy", PyvtkPVKeyFrameAnimationCueForProxies_SetAnimatedProxy, METH_VARARGS,
   (char*)"V.SetAnimatedProxy(vtkSMProxy)\nC++: void SetAnimatedProxy(vtkSMProxy *)\n\nSet/Get the animated proxy.\n"},
  {(char*)"GetAnimatedProxy", PyvtkPVKeyFrameAnimationCueForProxies_GetAnimatedProxy, METH_VARARGS,
   (char*)"V.GetAnimatedProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetAnimatedProxy()\n\nSet/Get the animated proxy.\n"},
  {(char*)"RemoveAnimatedProxy", PyvtkPVKeyFrameAnimationCueForProxies_RemoveAnimatedProxy, METH_VARARGS,
   (char*)"V.RemoveAnimatedProxy()\nC++: void RemoveAnimatedProxy()\n\n"},
  {(char*)"SetAnimatedPropertyName", PyvtkPVKeyFrameAnimationCueForProxies_SetAnimatedPropertyName, METH_VARARGS,
   (char*)"V.SetAnimatedPropertyName(string)\nC++: void SetAnimatedPropertyName(char *)\n\nSet/Get the animated property name.\n"},
  {(char*)"GetAnimatedPropertyName", PyvtkPVKeyFrameAnimationCueForProxies_GetAnimatedPropertyName, METH_VARARGS,
   (char*)"V.GetAnimatedPropertyName() -> string\nC++: char *GetAnimatedPropertyName()\n\nSet/Get the animated property name.\n"},
  {(char*)"SetAnimatedDomainName", PyvtkPVKeyFrameAnimationCueForProxies_SetAnimatedDomainName, METH_VARARGS,
   (char*)"V.SetAnimatedDomainName(string)\nC++: void SetAnimatedDomainName(char *)\n\nSet/Get the animated domain name.\n"},
  {(char*)"GetAnimatedDomainName", PyvtkPVKeyFrameAnimationCueForProxies_GetAnimatedDomainName, METH_VARARGS,
   (char*)"V.GetAnimatedDomainName() -> string\nC++: char *GetAnimatedDomainName()\n\nSet/Get the animated domain name.\n"},
  {(char*)"BeginUpdateAnimationValues", PyvtkPVKeyFrameAnimationCueForProxies_BeginUpdateAnimationValues, METH_VARARGS,
   (char*)"V.BeginUpdateAnimationValues()\nC++: virtual void BeginUpdateAnimationValues()\n\nUsed to update the animated item. This API makes it possible for\nvtk-level classes to update properties without actually linking\nwith the ServerManager library. This only works since they object\nare created only on the client.\n"},
  {(char*)"SetAnimationValue", PyvtkPVKeyFrameAnimationCueForProxies_SetAnimationValue, METH_VARARGS,
   (char*)"V.SetAnimationValue(int, float)\nC++: virtual void SetAnimationValue(int index, double value)\n\nUsed to update the animated item. This API makes it possible for\nvtk-level classes to update properties without actually linking\nwith the ServerManager library. This only works since they object\nare created only on the client.\n"},
  {(char*)"EndUpdateAnimationValues", PyvtkPVKeyFrameAnimationCueForProxies_EndUpdateAnimationValues, METH_VARARGS,
   (char*)"V.EndUpdateAnimationValues()\nC++: virtual void EndUpdateAnimationValues()\n\nUsed to update the animated item. This API makes it possible for\nvtk-level classes to update properties without actually linking\nwith the ServerManager library. This only works since they object\nare created only on the client.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVKeyFrameAnimationCueForProxies_StaticNew()
{
  return vtkPVKeyFrameAnimationCueForProxies::New();
}

PyObject *PyVTKClass_vtkPVKeyFrameAnimationCueForProxiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVKeyFrameAnimationCueForProxies_StaticNew,
    PyvtkPVKeyFrameAnimationCueForProxies_Methods,
    "vtkPVKeyFrameAnimationCueForProxies", modulename,
    NULL, NULL,
    PyvtkPVKeyFrameAnimationCueForProxies_Doc(),
    PyVTKClass_vtkPVKeyFrameAnimationCueNew(modulename));
  return cls;
}

const char **PyvtkPVKeyFrameAnimationCueForProxies_Doc()
{
  static const char *docstring[] = {
    "vtkPVKeyFrameAnimationCueForProxies\n\n",
    "Superclass: vtkPVKeyFrameAnimationCue\n\n",
    "vtkPVKeyFrameAnimationCueForProxies extends vtkPVKeyFrameAnimationCue\nto update properties on proxies in SetAnimationValue().\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVKeyFrameAnimationCueForProxies(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVKeyFrameAnimationCueForProxiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVKeyFrameAnimationCueForProxies", o) != 0)
    {
    Py_DECREF(o);
    }

}

