// python wrapper for vtkVersion
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkVersion.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVersion(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVersionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkVersion_Doc();


static PyObject *
PyvtkVersion_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVersion *op = static_cast<vtkVersion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVersion::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVersion_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVersion *op = static_cast<vtkVersion *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVersion::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVersion_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVersion *op = static_cast<vtkVersion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVersion *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVersion::NewInstance());

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
PyvtkVersion_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVersion *tempr = vtkVersion::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVersion_GetVTKVersion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVTKVersion");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const char *tempr = vtkVersion::GetVTKVersion();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVersion_GetVTKMajorVersion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVTKMajorVersion");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkVersion::GetVTKMajorVersion();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVersion_GetVTKMinorVersion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVTKMinorVersion");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkVersion::GetVTKMinorVersion();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVersion_GetVTKBuildVersion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVTKBuildVersion");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkVersion::GetVTKBuildVersion();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVersion_GetVTKSourceVersion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVTKSourceVersion");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const char *tempr = vtkVersion::GetVTKSourceVersion();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVersion_Methods[] = {
  {(char*)"GetClassName", PyvtkVersion_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVersion_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVersion_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVersion\nC++: vtkVersion *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVersion_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVersion\nC++: vtkVersion *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetVTKVersion", PyvtkVersion_GetVTKVersion, METH_VARARGS | METH_STATIC,
   (char*)"V.GetVTKVersion() -> string\nC++: static const char *GetVTKVersion()\n\nReturn the version of vtk this object is a part of. A variety of\nmethods are included. GetVTKSourceVersion returns a string with\nan identifier which timestamps a particular source tree.\n"},
  {(char*)"GetVTKMajorVersion", PyvtkVersion_GetVTKMajorVersion, METH_VARARGS | METH_STATIC,
   (char*)"V.GetVTKMajorVersion() -> int\nC++: static int GetVTKMajorVersion()\n\nReturn the version of vtk this object is a part of. A variety of\nmethods are included. GetVTKSourceVersion returns a string with\nan identifier which timestamps a particular source tree.\n"},
  {(char*)"GetVTKMinorVersion", PyvtkVersion_GetVTKMinorVersion, METH_VARARGS | METH_STATIC,
   (char*)"V.GetVTKMinorVersion() -> int\nC++: static int GetVTKMinorVersion()\n\nReturn the version of vtk this object is a part of. A variety of\nmethods are included. GetVTKSourceVersion returns a string with\nan identifier which timestamps a particular source tree.\n"},
  {(char*)"GetVTKBuildVersion", PyvtkVersion_GetVTKBuildVersion, METH_VARARGS | METH_STATIC,
   (char*)"V.GetVTKBuildVersion() -> int\nC++: static int GetVTKBuildVersion()\n\nReturn the version of vtk this object is a part of. A variety of\nmethods are included. GetVTKSourceVersion returns a string with\nan identifier which timestamps a particular source tree.\n"},
  {(char*)"GetVTKSourceVersion", PyvtkVersion_GetVTKSourceVersion, METH_VARARGS | METH_STATIC,
   (char*)"V.GetVTKSourceVersion() -> string\nC++: static const char *GetVTKSourceVersion()\n\nReturn the version of vtk this object is a part of. A variety of\nmethods are included. GetVTKSourceVersion returns a string with\nan identifier which timestamps a particular source tree.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVersion_StaticNew()
{
  return vtkVersion::New();
}

PyObject *PyVTKClass_vtkVersionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVersion_StaticNew,
    PyvtkVersion_Methods,
    "vtkVersion", modulename,
    NULL, NULL,
    PyvtkVersion_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkVersion_Doc()
{
  static const char *docstring[] = {
    "vtkVersion - Versioning class for vtk\n\n",
    "Superclass: vtkObject\n\n",
    "Holds methods for defining/determining the current vtk version\n(major, minor, build).\n\nCaveats:\n\nThis file will change frequently to update the VTKSourceVersion which\ntimestamps a particular source release.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVersion(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVersionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVersion", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyString_FromString((char *)("vtk version " VTK_VERSION));
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTK_SOURCE_VERSION", o);
    Py_DECREF(o);
    }
}

