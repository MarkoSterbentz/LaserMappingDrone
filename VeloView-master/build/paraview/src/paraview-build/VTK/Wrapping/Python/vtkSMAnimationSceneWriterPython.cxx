// python wrapper for vtkSMAnimationSceneWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMAnimationSceneWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMAnimationSceneWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMAnimationSceneWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMSessionObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMSessionObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMSessionObjectNew
#endif

static const char **PyvtkSMAnimationSceneWriter_Doc();


static PyObject *
PyvtkSMAnimationSceneWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMAnimationSceneWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMAnimationSceneWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMAnimationSceneWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMAnimationSceneWriter::NewInstance());

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
PyvtkSMAnimationSceneWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMAnimationSceneWriter *tempr = vtkSMAnimationSceneWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_SetAnimationScene_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetAnimationScene(temp0);
      }
    else
      {
      op->vtkSMAnimationSceneWriter::SetAnimationScene(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneWriter_SetAnimationScene_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  vtkSMAnimationScene *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMAnimationScene"))
    {
    if (ap.IsBound())
      {
      op->SetAnimationScene(temp0);
      }
    else
      {
      op->vtkSMAnimationSceneWriter::SetAnimationScene(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMAnimationSceneWriter_SetAnimationScene_Methods[] = {
  {NULL, PyvtkSMAnimationSceneWriter_SetAnimationScene_s1, METH_VARARGS,
   (char*)"@O *vtkSMProxy"},
  {NULL, PyvtkSMAnimationSceneWriter_SetAnimationScene_s2, METH_VARARGS,
   (char*)"@O *vtkSMAnimationScene"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMAnimationSceneWriter_SetAnimationScene(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMAnimationSceneWriter_SetAnimationScene_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAnimationScene");
  return NULL;
}



static PyObject *
PyvtkSMAnimationSceneWriter_GetAnimationScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMAnimationScene *tempr = (ap.IsBound() ?
      op->GetAnimationScene() :
      op->vtkSMAnimationSceneWriter::GetAnimationScene());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_Save(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Save");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Save() :
      op->vtkSMAnimationSceneWriter::Save());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkSMAnimationSceneWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSMAnimationSceneWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_SetStartFileCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartFileCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartFileCount(temp0);
      }
    else
      {
      op->vtkSMAnimationSceneWriter::SetStartFileCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_GetStartFileCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartFileCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetStartFileCount() :
      op->vtkSMAnimationSceneWriter::GetStartFileCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneWriter_SetPlaybackTimeWindow_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaybackTimeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPlaybackTimeWindow(temp0, temp1);
      }
    else
      {
      op->vtkSMAnimationSceneWriter::SetPlaybackTimeWindow(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneWriter_SetPlaybackTimeWindow_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaybackTimeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPlaybackTimeWindow(temp0);
      }
    else
      {
      op->vtkSMAnimationSceneWriter::SetPlaybackTimeWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneWriter_SetPlaybackTimeWindow(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMAnimationSceneWriter_SetPlaybackTimeWindow_s1(self, args);
    case 1:
      return PyvtkSMAnimationSceneWriter_SetPlaybackTimeWindow_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPlaybackTimeWindow");
  return NULL;
}



static PyObject *
PyvtkSMAnimationSceneWriter_GetPlaybackTimeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaybackTimeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneWriter *op = static_cast<vtkSMAnimationSceneWriter *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPlaybackTimeWindow() :
      op->vtkSMAnimationSceneWriter::GetPlaybackTimeWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMAnimationSceneWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkSMAnimationSceneWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMAnimationSceneWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMAnimationSceneWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMAnimationSceneWriter\nC++: vtkSMAnimationSceneWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMAnimationSceneWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMAnimationSceneWriter\nC++: vtkSMAnimationSceneWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAnimationScene", PyvtkSMAnimationSceneWriter_SetAnimationScene, METH_VARARGS,
   (char*)"V.SetAnimationScene(vtkSMProxy)\nC++: virtual void SetAnimationScene(vtkSMProxy *)\nV.SetAnimationScene(vtkSMAnimationScene)\nC++: virtual void SetAnimationScene(vtkSMAnimationScene *)\n\nConvenience method to set the proxy.\n"},
  {(char*)"GetAnimationScene", PyvtkSMAnimationSceneWriter_GetAnimationScene, METH_VARARGS,
   (char*)"V.GetAnimationScene() -> vtkSMAnimationScene\nC++: vtkSMAnimationScene *GetAnimationScene()\n\nGet/Set the animation scene that this writer will write.\n"},
  {(char*)"Save", PyvtkSMAnimationSceneWriter_Save, METH_VARARGS,
   (char*)"V.Save() -> bool\nC++: bool Save()\n\nBegin the saving. This will result in playing of the animation.\nReturns the status of the save.\n"},
  {(char*)"SetFileName", PyvtkSMAnimationSceneWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the filename.\n"},
  {(char*)"GetFileName", PyvtkSMAnimationSceneWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the filename.\n"},
  {(char*)"SetStartFileCount", PyvtkSMAnimationSceneWriter_SetStartFileCount, METH_VARARGS,
   (char*)"V.SetStartFileCount(int)\nC++: void SetStartFileCount(int a)\n\nGet/Set the start file count.\n"},
  {(char*)"GetStartFileCount", PyvtkSMAnimationSceneWriter_GetStartFileCount, METH_VARARGS,
   (char*)"V.GetStartFileCount() -> int\nC++: int GetStartFileCount()\n\nGet/Set the start file count.\n"},
  {(char*)"SetPlaybackTimeWindow", PyvtkSMAnimationSceneWriter_SetPlaybackTimeWindow, METH_VARARGS,
   (char*)"V.SetPlaybackTimeWindow(float, float)\nC++: void SetPlaybackTimeWindow(double, double)\nV.SetPlaybackTimeWindow((float, float))\nC++: void SetPlaybackTimeWindow(double a[2])\n\n"},
  {(char*)"GetPlaybackTimeWindow", PyvtkSMAnimationSceneWriter_GetPlaybackTimeWindow, METH_VARARGS,
   (char*)"V.GetPlaybackTimeWindow() -> (float, float)\nC++: double *GetPlaybackTimeWindow()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSMAnimationSceneWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSMAnimationSceneWriter_Methods,
    "vtkSMAnimationSceneWriter", modulename,
    NULL, NULL,
    PyvtkSMAnimationSceneWriter_Doc(),
    PyVTKClass_vtkSMSessionObjectNew(modulename));
  return cls;
}

const char **PyvtkSMAnimationSceneWriter_Doc()
{
  static const char *docstring[] = {
    "vtkSMAnimationSceneWriter - helper class used\n\n",
    "Superclass: vtkSMSessionObject\n\n",
    "vtkSMAnimationSceneWriter is an abstract superclass for writers that\ncan write animations out.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMAnimationSceneWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMAnimationSceneWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMAnimationSceneWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

