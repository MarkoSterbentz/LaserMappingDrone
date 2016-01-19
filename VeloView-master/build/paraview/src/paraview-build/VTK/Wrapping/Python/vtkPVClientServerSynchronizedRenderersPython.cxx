// python wrapper for vtkPVClientServerSynchronizedRenderers
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVClientServerSynchronizedRenderers.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVClientServerSynchronizedRenderers(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVClientServerSynchronizedRenderersNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSynchronizedRenderersNew
extern "C" { PyObject *PyVTKClass_vtkSynchronizedRenderersNew(const char *); }
#define DECLARED_PyVTKClass_vtkSynchronizedRenderersNew
#endif

static const char **PyvtkPVClientServerSynchronizedRenderers_Doc();


static PyObject *
PyvtkPVClientServerSynchronizedRenderers_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClientServerSynchronizedRenderers *op = static_cast<vtkPVClientServerSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVClientServerSynchronizedRenderers::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVClientServerSynchronizedRenderers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClientServerSynchronizedRenderers *op = static_cast<vtkPVClientServerSynchronizedRenderers *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVClientServerSynchronizedRenderers::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVClientServerSynchronizedRenderers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClientServerSynchronizedRenderers *op = static_cast<vtkPVClientServerSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVClientServerSynchronizedRenderers *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVClientServerSynchronizedRenderers::NewInstance());

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
PyvtkPVClientServerSynchronizedRenderers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVClientServerSynchronizedRenderers *tempr = vtkPVClientServerSynchronizedRenderers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVClientServerSynchronizedRenderers_SetLossLessCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLossLessCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClientServerSynchronizedRenderers *op = static_cast<vtkPVClientServerSynchronizedRenderers *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLossLessCompression(temp0);
      }
    else
      {
      op->vtkPVClientServerSynchronizedRenderers::SetLossLessCompression(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVClientServerSynchronizedRenderers_GetLossLessCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLossLessCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClientServerSynchronizedRenderers *op = static_cast<vtkPVClientServerSynchronizedRenderers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetLossLessCompression() :
      op->vtkPVClientServerSynchronizedRenderers::GetLossLessCompression());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVClientServerSynchronizedRenderers_ConfigureCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConfigureCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClientServerSynchronizedRenderers *op = static_cast<vtkPVClientServerSynchronizedRenderers *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ConfigureCompressor(temp0);
      }
    else
      {
      op->vtkPVClientServerSynchronizedRenderers::ConfigureCompressor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVClientServerSynchronizedRenderers_Methods[] = {
  {(char*)"GetClassName", PyvtkPVClientServerSynchronizedRenderers_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVClientServerSynchronizedRenderers_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVClientServerSynchronizedRenderers_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVClientServerSynchronizedRenderers\nC++: vtkPVClientServerSynchronizedRenderers *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVClientServerSynchronizedRenderers_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkPVClientServerSynchronizedRenderers\nC++: vtkPVClientServerSynchronizedRenderers *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetLossLessCompression", PyvtkPVClientServerSynchronizedRenderers_SetLossLessCompression, METH_VARARGS,
   (char*)"V.SetLossLessCompression(bool)\nC++: void SetLossLessCompression(bool a)\n\n"},
  {(char*)"GetLossLessCompression", PyvtkPVClientServerSynchronizedRenderers_GetLossLessCompression, METH_VARARGS,
   (char*)"V.GetLossLessCompression() -> bool\nC++: bool GetLossLessCompression()\n\n"},
  {(char*)"ConfigureCompressor", PyvtkPVClientServerSynchronizedRenderers_ConfigureCompressor, METH_VARARGS,
   (char*)"V.ConfigureCompressor(string)\nC++: virtual void ConfigureCompressor(const char *stream)\n\nSet and configure a compressor from it's own configuration\nstream. This is used by ParaView to configure the compressor from\napplication wide user settings.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVClientServerSynchronizedRenderers_StaticNew()
{
  return vtkPVClientServerSynchronizedRenderers::New();
}

PyObject *PyVTKClass_vtkPVClientServerSynchronizedRenderersNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVClientServerSynchronizedRenderers_StaticNew,
    PyvtkPVClientServerSynchronizedRenderers_Methods,
    "vtkPVClientServerSynchronizedRenderers", modulename,
    NULL, NULL,
    PyvtkPVClientServerSynchronizedRenderers_Doc(),
    PyVTKClass_vtkSynchronizedRenderersNew(modulename));
  return cls;
}

const char **PyvtkPVClientServerSynchronizedRenderers_Doc()
{
  static const char *docstring[] = {
    "vtkPVClientServerSynchronizedRenderers\n\n",
    "Superclass: vtkSynchronizedRenderers\n\n",
    "vtkPVClientServerSynchronizedRenderers is similar to\nvtkClientServerSynchronizedRenderers except that it optionally uses\nimage compressors to compress the image before transmitting.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVClientServerSynchronizedRenderers(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVClientServerSynchronizedRenderersNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVClientServerSynchronizedRenderers", o) != 0)
    {
    Py_DECREF(o);
    }

}

