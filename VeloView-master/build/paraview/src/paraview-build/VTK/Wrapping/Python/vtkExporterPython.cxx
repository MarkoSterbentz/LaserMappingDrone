// python wrapper for vtkExporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExporter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExporter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExporterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkExporter_Doc();


static PyObject *
PyvtkExporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExporter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExporter::NewInstance());

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
PyvtkExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExporter *tempr = vtkExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExporter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write();
      }
    else
      {
      op->vtkExporter::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExporter_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkExporter::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExporter_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetRenderWindow(temp0);
      }
    else
      {
      op->vtkExporter::SetRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExporter_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkExporter::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExporter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkExporter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExporter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkExporter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExporter_SetStartWrite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartWrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFunction(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartWrite(
        (temp0 == Py_None ? NULL : vtkPythonVoidFunc),
        (temp0 == Py_None ? NULL : temp0));
      if (temp0 != Py_None)
        {
        Py_INCREF(temp0);
        }
      op->SetStartWriteArgDelete(
        (temp0 == Py_None ? NULL : vtkPythonVoidFuncArgDelete));
      }
    else
      {
      op->vtkExporter::SetStartWrite(
        (temp0 == Py_None ? NULL : vtkPythonVoidFunc),
        (temp0 == Py_None ? NULL : temp0));
      if (temp0 != Py_None)
        {
        Py_INCREF(temp0);
        }
      op->vtkExporter::SetStartWriteArgDelete(
        (temp0 == Py_None ? NULL : vtkPythonVoidFuncArgDelete));
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExporter_SetEndWrite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndWrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFunction(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndWrite(
        (temp0 == Py_None ? NULL : vtkPythonVoidFunc),
        (temp0 == Py_None ? NULL : temp0));
      if (temp0 != Py_None)
        {
        Py_INCREF(temp0);
        }
      op->SetEndWriteArgDelete(
        (temp0 == Py_None ? NULL : vtkPythonVoidFuncArgDelete));
      }
    else
      {
      op->vtkExporter::SetEndWrite(
        (temp0 == Py_None ? NULL : vtkPythonVoidFunc),
        (temp0 == Py_None ? NULL : temp0));
      if (temp0 != Py_None)
        {
        Py_INCREF(temp0);
        }
      op->vtkExporter::SetEndWriteArgDelete(
        (temp0 == Py_None ? NULL : vtkPythonVoidFuncArgDelete));
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExporter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExporter *op = static_cast<vtkExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExporter::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExporter_Methods[] = {
  {(char*)"GetClassName", PyvtkExporter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExporter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExporter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExporter\nC++: vtkExporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExporter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExporter\nC++: vtkExporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Write", PyvtkExporter_Write, METH_VARARGS,
   (char*)"V.Write()\nC++: virtual void Write()\n\nWrite data to output. Method executes subclasses WriteData()\nmethod, as well as StartWrite() and EndWrite() methods.\n"},
  {(char*)"Update", PyvtkExporter_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: void Update()\n\nConvenient alias for Write() method.\n"},
  {(char*)"SetRenderWindow", PyvtkExporter_SetRenderWindow, METH_VARARGS,
   (char*)"V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *)\n\nSet/Get the rendering window that contains the scene to be\nwritten.\n"},
  {(char*)"GetRenderWindow", PyvtkExporter_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nSet/Get the rendering window that contains the scene to be\nwritten.\n"},
  {(char*)"SetInput", PyvtkExporter_SetInput, METH_VARARGS,
   (char*)"V.SetInput(vtkRenderWindow)\nC++: void SetInput(vtkRenderWindow *renWin)\n\nThese methods are provided for backward compatibility. Will\ndisappear soon.\n"},
  {(char*)"GetInput", PyvtkExporter_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkRenderWindow\nC++: vtkRenderWindow *GetInput()\n\nThese methods are provided for backward compatibility. Will\ndisappear soon.\n"},
  {(char*)"SetStartWrite", PyvtkExporter_SetStartWrite, METH_VARARGS,
   (char*)"V.SetStartWrite(function)\nC++: void SetStartWrite(void (*f)(void *), void *arg)\n\nSpecify a function to be called before data is written.  Function\nwill be called with argument provided.\n"},
  {(char*)"SetEndWrite", PyvtkExporter_SetEndWrite, METH_VARARGS,
   (char*)"V.SetEndWrite(function)\nC++: void SetEndWrite(void (*f)(void *), void *arg)\n\nSpecify a function to be called after data is written. Function\nwill be called with argument provided.\n"},
  {(char*)"GetMTime", PyvtkExporter_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturns the MTime also considering the RenderWindow.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkExporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkExporter_Methods,
    "vtkExporter", modulename,
    NULL, NULL,
    PyvtkExporter_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkExporter_Doc()
{
  static const char *docstring[] = {
    "vtkExporter - abstract class to write a scene to a file\n\n",
    "Superclass: vtkObject\n\n",
    "vtkExporter is an abstract class that exports a scene to a file. It\nis very similar to vtkWriter except that a writer only writes out the\ngeometric and topological data for an object, where an exporter can\nwrite out material properties, lighting, camera parameters etc. The\nconcrete subclasses of this class may not write out all of this\ninformation. For example vtkOBJExporter writes out Wavefront o",
    "bj\nfiles which do not include support for camera parameters.\n\nvtkExporter provides the convenience methods StartWrite() and\nEndWrite(). These methods are executed before and after execution of\nthe Write() method. You can also specify arguments to these methods.\nThis class defines SetInput and GetInput methods which take or return\na vtkRenderWindow.\n\nCaveats:\n\nEvery subclass of vtkExporter must imp",
    "lement a WriteData() method.\n\nSee Also:\n\nvtkOBJExporter vtkRenderWindow vtkWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

