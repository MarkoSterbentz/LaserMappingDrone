// python wrapper for vtkSMCameraConfigurationWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMCameraConfigurationWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMCameraConfigurationWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMCameraConfigurationWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyConfigurationWriterNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyConfigurationWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyConfigurationWriterNew
#endif

static const char **PyvtkSMCameraConfigurationWriter_Doc();


static PyObject *
PyvtkSMCameraConfigurationWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationWriter *op = static_cast<vtkSMCameraConfigurationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMCameraConfigurationWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraConfigurationWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationWriter *op = static_cast<vtkSMCameraConfigurationWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCameraConfigurationWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraConfigurationWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationWriter *op = static_cast<vtkSMCameraConfigurationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMCameraConfigurationWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCameraConfigurationWriter::NewInstance());

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
PyvtkSMCameraConfigurationWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMCameraConfigurationWriter *tempr = vtkSMCameraConfigurationWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraConfigurationWriter_SetRenderViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationWriter *op = static_cast<vtkSMCameraConfigurationWriter *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetRenderViewProxy(temp0);
      }
    else
      {
      op->vtkSMCameraConfigurationWriter::SetRenderViewProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMCameraConfigurationWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkSMCameraConfigurationWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMCameraConfigurationWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMCameraConfigurationWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMCameraConfigurationWriter\nC++: vtkSMCameraConfigurationWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMCameraConfigurationWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMCameraConfigurationWriter\nC++: vtkSMCameraConfigurationWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRenderViewProxy", PyvtkSMCameraConfigurationWriter_SetRenderViewProxy, METH_VARARGS,
   (char*)"V.SetRenderViewProxy(vtkSMProxy)\nC++: void SetRenderViewProxy(vtkSMProxy *rvProxy)\n\nSet the render view proxy to extract camera properties from.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMCameraConfigurationWriter_StaticNew()
{
  return vtkSMCameraConfigurationWriter::New();
}

PyObject *PyVTKClass_vtkSMCameraConfigurationWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMCameraConfigurationWriter_StaticNew,
    PyvtkSMCameraConfigurationWriter_Methods,
    "vtkSMCameraConfigurationWriter", modulename,
    NULL, NULL,
    PyvtkSMCameraConfigurationWriter_Doc(),
    PyVTKClass_vtkSMProxyConfigurationWriterNew(modulename));
  return cls;
}

const char **PyvtkSMCameraConfigurationWriter_Doc()
{
  static const char *docstring[] = {
    "vtkSMCameraConfigurationWriter - A writer for XML camera\nconfiguration.\n\n",
    "Superclass: vtkSMProxyConfigurationWriter\n\n",
    "A writer for XML camera configuration. Writes camera configuration\nfiles using ParaView state file machinery.\n\nSee Also:\n\nvtkSMCameraConfigurationReader, vtkSMProxyConfigurationWriter\n\nThanks:\n\nThis class was contributed by SciberQuest Inc.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMCameraConfigurationWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMCameraConfigurationWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMCameraConfigurationWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

