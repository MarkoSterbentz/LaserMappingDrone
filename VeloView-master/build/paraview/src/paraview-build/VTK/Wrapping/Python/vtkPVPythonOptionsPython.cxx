// python wrapper for vtkPVPythonOptions
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVPythonOptions.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVPythonOptions(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVPythonOptionsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVOptionsNew
extern "C" { PyObject *PyVTKClass_vtkPVOptionsNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVOptionsNew
#endif

static const char **PyvtkPVPythonOptions_Doc();


static PyObject *
PyvtkPVPythonOptions_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonOptions *op = static_cast<vtkPVPythonOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVPythonOptions::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonOptions_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonOptions *op = static_cast<vtkPVPythonOptions *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPythonOptions::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonOptions_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonOptions *op = static_cast<vtkPVPythonOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVPythonOptions *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPythonOptions::NewInstance());

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
PyvtkPVPythonOptions_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVPythonOptions *tempr = vtkPVPythonOptions::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPythonOptions_GetPythonScriptName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPythonScriptName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonOptions *op = static_cast<vtkPVPythonOptions *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPythonScriptName() :
      op->vtkPVPythonOptions::GetPythonScriptName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVPythonOptions_Methods[] = {
  {(char*)"GetClassName", PyvtkPVPythonOptions_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVPythonOptions_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVPythonOptions_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVPythonOptions\nC++: vtkPVPythonOptions *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVPythonOptions_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVPythonOptions\nC++: vtkPVPythonOptions *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetPythonScriptName", PyvtkPVPythonOptions_GetPythonScriptName, METH_VARARGS,
   (char*)"V.GetPythonScriptName() -> string\nC++: char *GetPythonScriptName()\n\nGet the python script name.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVPythonOptions_StaticNew()
{
  return vtkPVPythonOptions::New();
}

PyObject *PyVTKClass_vtkPVPythonOptionsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVPythonOptions_StaticNew,
    PyvtkPVPythonOptions_Methods,
    "vtkPVPythonOptions", modulename,
    NULL, NULL,
    PyvtkPVPythonOptions_Doc(),
    PyVTKClass_vtkPVOptionsNew(modulename));
  return cls;
}

const char **PyvtkPVPythonOptions_Doc()
{
  static const char *docstring[] = {
    "vtkPVPythonOptions - ParaView options storage\n\n",
    "Superclass: vtkPVOptions\n\n",
    "An object of this class represents a storage for ParaView options\n\nThese options can be retrieved during run-time, set using\nconfiguration file or using Command Line Arguments.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVPythonOptions(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVPythonOptionsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVPythonOptions", o) != 0)
    {
    Py_DECREF(o);
    }

}

