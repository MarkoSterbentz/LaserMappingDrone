// python wrapper for vtkOpenGLModelViewProjectionMonitor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLModelViewProjectionMonitor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLModelViewProjectionMonitor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLModelViewProjectionMonitorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkOpenGLModelViewProjectionMonitor_Doc();


static PyObject *
PyvtkOpenGLModelViewProjectionMonitor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLModelViewProjectionMonitor *op = static_cast<vtkOpenGLModelViewProjectionMonitor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLModelViewProjectionMonitor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLModelViewProjectionMonitor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLModelViewProjectionMonitor *op = static_cast<vtkOpenGLModelViewProjectionMonitor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLModelViewProjectionMonitor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLModelViewProjectionMonitor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLModelViewProjectionMonitor *op = static_cast<vtkOpenGLModelViewProjectionMonitor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLModelViewProjectionMonitor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLModelViewProjectionMonitor::NewInstance());

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
PyvtkOpenGLModelViewProjectionMonitor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLModelViewProjectionMonitor *tempr = vtkOpenGLModelViewProjectionMonitor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLModelViewProjectionMonitor_StateChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StateChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLModelViewProjectionMonitor *op = static_cast<vtkOpenGLModelViewProjectionMonitor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->StateChanged() :
      op->vtkOpenGLModelViewProjectionMonitor::StateChanged());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLModelViewProjectionMonitor_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLModelViewProjectionMonitor *op = static_cast<vtkOpenGLModelViewProjectionMonitor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkOpenGLModelViewProjectionMonitor::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLModelViewProjectionMonitor_SetProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLModelViewProjectionMonitor *op = static_cast<vtkOpenGLModelViewProjectionMonitor *>(vp);

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
      op->SetProjection(temp0);
      }
    else
      {
      op->vtkOpenGLModelViewProjectionMonitor::SetProjection(temp0);
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
PyvtkOpenGLModelViewProjectionMonitor_SetModelView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLModelViewProjectionMonitor *op = static_cast<vtkOpenGLModelViewProjectionMonitor *>(vp);

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
      op->SetModelView(temp0);
      }
    else
      {
      op->vtkOpenGLModelViewProjectionMonitor::SetModelView(temp0);
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

static PyMethodDef PyvtkOpenGLModelViewProjectionMonitor_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLModelViewProjectionMonitor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLModelViewProjectionMonitor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLModelViewProjectionMonitor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLModelViewProjectionMonitor\nC++: vtkOpenGLModelViewProjectionMonitor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLModelViewProjectionMonitor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLModelViewProjectionMonitor\nC++: vtkOpenGLModelViewProjectionMonitor *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"StateChanged", PyvtkOpenGLModelViewProjectionMonitor_StateChanged, METH_VARARGS,
   (char*)"V.StateChanged() -> bool\nC++: bool StateChanged()\n\nFetches the current GL state and updates the internal copies of\nthe data. returns true if any of the tracked OpenGL matrices have\nchanged. Typically this is the only function a user needs to\ncall.\n"},
  {(char*)"Update", PyvtkOpenGLModelViewProjectionMonitor_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: void Update()\n\nFetch and store OpenGL model view matrix. Note, this is done\nautomatically in SateChanged.\n"},
  {(char*)"SetProjection", PyvtkOpenGLModelViewProjectionMonitor_SetProjection, METH_VARARGS,
   (char*)"V.SetProjection([float, ...])\nC++: void SetProjection(float *val)\n\nSet the matrix data.\n"},
  {(char*)"SetModelView", PyvtkOpenGLModelViewProjectionMonitor_SetModelView, METH_VARARGS,
   (char*)"V.SetModelView([float, ...])\nC++: void SetModelView(float *val)\n\nSet the matrix data.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLModelViewProjectionMonitor_StaticNew()
{
  return vtkOpenGLModelViewProjectionMonitor::New();
}

PyObject *PyVTKClass_vtkOpenGLModelViewProjectionMonitorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLModelViewProjectionMonitor_StaticNew,
    PyvtkOpenGLModelViewProjectionMonitor_Methods,
    "vtkOpenGLModelViewProjectionMonitor", modulename,
    NULL, NULL,
    PyvtkOpenGLModelViewProjectionMonitor_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkOpenGLModelViewProjectionMonitor_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLModelViewProjectionMonitor -- A helper for painters that\n\n",
    "Superclass: vtkObject\n\n",
    "vtkOpenGLModelViewProjectionMonitor -- A helper for painters that\ntracks state of OpenGL model-view and projection matrices. A Painter\ncould use this to skip expensive processing that is only needed when\nthe model-view or projection matrices change.\n\nthis is not intended to be shared. each object should use it's own\ninstance of this class. it's intended to be called once per render.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLModelViewProjectionMonitor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLModelViewProjectionMonitorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLModelViewProjectionMonitor", o) != 0)
    {
    Py_DECREF(o);
    }

}

