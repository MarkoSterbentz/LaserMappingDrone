// python wrapper for vtkOpenGLLightMonitor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLLightMonitor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLLightMonitor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLLightMonitorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkOpenGLLightMonitor_Doc();


static PyObject *
PyvtkOpenGLLightMonitor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLLightMonitor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightMonitor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLLightMonitor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightMonitor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLLightMonitor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLLightMonitor::NewInstance());

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
PyvtkOpenGLLightMonitor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLLightMonitor *tempr = vtkOpenGLLightMonitor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightMonitor_SetLightId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLightId(temp0);
      }
    else
      {
      op->vtkOpenGLLightMonitor::SetLightId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightMonitor_GetLightId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLightId() :
      op->vtkOpenGLLightMonitor::GetLightId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightMonitor_StateChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StateChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->StateChanged() :
      op->vtkOpenGLLightMonitor::StateChanged());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightMonitor_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkOpenGLLightMonitor::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightMonitor_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkOpenGLLightMonitor::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightMonitor_SetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetAmbient(temp0);
      }
    else
      {
      op->vtkOpenGLLightMonitor::SetAmbient(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightMonitor_SetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetDiffuse(temp0);
      }
    else
      {
      op->vtkOpenGLLightMonitor::SetDiffuse(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightMonitor_SetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetSpecular(temp0);
      }
    else
      {
      op->vtkOpenGLLightMonitor::SetSpecular(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightMonitor_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkOpenGLLightMonitor::SetPosition(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightMonitor_SetSpotDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpotDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetSpotDirection(temp0);
      }
    else
      {
      op->vtkOpenGLLightMonitor::SetSpotDirection(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightMonitor_SetSpotExponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpotExponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpotExponent(temp0);
      }
    else
      {
      op->vtkOpenGLLightMonitor::SetSpotExponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightMonitor_SetSpotCutoff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpotCutoff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpotCutoff(temp0);
      }
    else
      {
      op->vtkOpenGLLightMonitor::SetSpotCutoff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightMonitor_SetAttenuation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttenuation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightMonitor *op = static_cast<vtkOpenGLLightMonitor *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetAttenuation(temp0);
      }
    else
      {
      op->vtkOpenGLLightMonitor::SetAttenuation(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyMethodDef PyvtkOpenGLLightMonitor_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLLightMonitor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLLightMonitor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLLightMonitor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLLightMonitor\nC++: vtkOpenGLLightMonitor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLLightMonitor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLLightMonitor\nC++: vtkOpenGLLightMonitor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLightId", PyvtkOpenGLLightMonitor_SetLightId, METH_VARARGS,
   (char*)"V.SetLightId(int)\nC++: void SetLightId(int a)\n\nSet/Get the light id of the OpenGL light to track. The light id\nmust be set prior to use. Default value 0.\n"},
  {(char*)"GetLightId", PyvtkOpenGLLightMonitor_GetLightId, METH_VARARGS,
   (char*)"V.GetLightId() -> int\nC++: int GetLightId()\n\nSet/Get the light id of the OpenGL light to track. The light id\nmust be set prior to use. Default value 0.\n"},
  {(char*)"StateChanged", PyvtkOpenGLLightMonitor_StateChanged, METH_VARARGS,
   (char*)"V.StateChanged() -> bool\nC++: bool StateChanged()\n\nFetches the current GL state and updates the internal copies of\nthe data. returns true if any of the tracked OpenGL lights have\nchanged. Typically this is the only function a user needs to\ncall.\n"},
  {(char*)"Update", PyvtkOpenGLLightMonitor_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: void Update()\n\nFetch and save OpenGL light state. Note, this is done\nautomatically in SateChanged.\n"},
  {(char*)"SetEnabled", PyvtkOpenGLLightMonitor_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: void SetEnabled(int val)\n\nSetters for internal state.\n"},
  {(char*)"SetAmbient", PyvtkOpenGLLightMonitor_SetAmbient, METH_VARARGS,
   (char*)"V.SetAmbient([float, ...])\nC++: void SetAmbient(float *val)\n\nSetters for internal state.\n"},
  {(char*)"SetDiffuse", PyvtkOpenGLLightMonitor_SetDiffuse, METH_VARARGS,
   (char*)"V.SetDiffuse([float, ...])\nC++: void SetDiffuse(float *val)\n\nSetters for internal state.\n"},
  {(char*)"SetSpecular", PyvtkOpenGLLightMonitor_SetSpecular, METH_VARARGS,
   (char*)"V.SetSpecular([float, ...])\nC++: void SetSpecular(float *val)\n\nSetters for internal state.\n"},
  {(char*)"SetPosition", PyvtkOpenGLLightMonitor_SetPosition, METH_VARARGS,
   (char*)"V.SetPosition([float, ...])\nC++: void SetPosition(float *val)\n\nSetters for internal state.\n"},
  {(char*)"SetSpotDirection", PyvtkOpenGLLightMonitor_SetSpotDirection, METH_VARARGS,
   (char*)"V.SetSpotDirection([float, ...])\nC++: void SetSpotDirection(float *val)\n\nSetters for internal state.\n"},
  {(char*)"SetSpotExponent", PyvtkOpenGLLightMonitor_SetSpotExponent, METH_VARARGS,
   (char*)"V.SetSpotExponent(float)\nC++: void SetSpotExponent(float val)\n\nSetters for internal state.\n"},
  {(char*)"SetSpotCutoff", PyvtkOpenGLLightMonitor_SetSpotCutoff, METH_VARARGS,
   (char*)"V.SetSpotCutoff(float)\nC++: void SetSpotCutoff(float val)\n\nSetters for internal state.\n"},
  {(char*)"SetAttenuation", PyvtkOpenGLLightMonitor_SetAttenuation, METH_VARARGS,
   (char*)"V.SetAttenuation([float, ...])\nC++: void SetAttenuation(float *val)\n\nSetters for internal state.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLLightMonitor_StaticNew()
{
  return vtkOpenGLLightMonitor::New();
}

PyObject *PyVTKClass_vtkOpenGLLightMonitorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLLightMonitor_StaticNew,
    PyvtkOpenGLLightMonitor_Methods,
    "vtkOpenGLLightMonitor", modulename,
    NULL, NULL,
    PyvtkOpenGLLightMonitor_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkOpenGLLightMonitor_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLLightMonitor -- A helper for painters that\n\n",
    "Superclass: vtkObject\n\n",
    "vtkOpenGLLightMonitor -- A helper for painters that tracks state of\nOpenGL lights. A Painter could use this to skip expensive processing\nthat is only needed when lights change.\n\nthis is not intended to be shared. each object should use it's own\ninstance of this class. it's intended to be called once per render.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLLightMonitor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLLightMonitorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLLightMonitor", o) != 0)
    {
    Py_DECREF(o);
    }

}

