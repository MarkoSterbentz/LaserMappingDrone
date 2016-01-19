// python wrapper for vtkOpenGLHardwareSupport
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLHardwareSupport.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLHardwareSupport(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLHardwareSupportNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkOpenGLHardwareSupport_Doc();


static PyObject *
PyvtkOpenGLHardwareSupport_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSupport *op = static_cast<vtkOpenGLHardwareSupport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLHardwareSupport::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSupport_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSupport *op = static_cast<vtkOpenGLHardwareSupport *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLHardwareSupport::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSupport_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSupport *op = static_cast<vtkOpenGLHardwareSupport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLHardwareSupport *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLHardwareSupport::NewInstance());

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
PyvtkOpenGLHardwareSupport_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLHardwareSupport *tempr = vtkOpenGLHardwareSupport::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSupport_GetNumberOfFixedTextureUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFixedTextureUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSupport *op = static_cast<vtkOpenGLHardwareSupport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFixedTextureUnits() :
      op->vtkOpenGLHardwareSupport::GetNumberOfFixedTextureUnits());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSupport_GetNumberOfTextureUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTextureUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSupport *op = static_cast<vtkOpenGLHardwareSupport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTextureUnits() :
      op->vtkOpenGLHardwareSupport::GetNumberOfTextureUnits());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSupport_GetSupportsMultiTexturing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsMultiTexturing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSupport *op = static_cast<vtkOpenGLHardwareSupport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsMultiTexturing() :
      op->vtkOpenGLHardwareSupport::GetSupportsMultiTexturing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSupport_GetExtensionManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtensionManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSupport *op = static_cast<vtkOpenGLHardwareSupport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLExtensionManager *tempr = (ap.IsBound() ?
      op->GetExtensionManager() :
      op->vtkOpenGLHardwareSupport::GetExtensionManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLHardwareSupport_SetExtensionManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtensionManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLHardwareSupport *op = static_cast<vtkOpenGLHardwareSupport *>(vp);

  vtkOpenGLExtensionManager *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLExtensionManager"))
    {
    if (ap.IsBound())
      {
      op->SetExtensionManager(temp0);
      }
    else
      {
      op->vtkOpenGLHardwareSupport::SetExtensionManager(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLHardwareSupport_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLHardwareSupport_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLHardwareSupport_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLHardwareSupport_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLHardwareSupport\nC++: vtkOpenGLHardwareSupport *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLHardwareSupport_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLHardwareSupport\nC++: vtkOpenGLHardwareSupport *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfFixedTextureUnits", PyvtkOpenGLHardwareSupport_GetNumberOfFixedTextureUnits, METH_VARARGS,
   (char*)"V.GetNumberOfFixedTextureUnits() -> int\nC++: int GetNumberOfFixedTextureUnits()\n\nReturn the number of fixed-function texture units.\n"},
  {(char*)"GetNumberOfTextureUnits", PyvtkOpenGLHardwareSupport_GetNumberOfTextureUnits, METH_VARARGS,
   (char*)"V.GetNumberOfTextureUnits() -> int\nC++: int GetNumberOfTextureUnits()\n\nReturn the total number of texture image units accessible by a\nshader program.\n"},
  {(char*)"GetSupportsMultiTexturing", PyvtkOpenGLHardwareSupport_GetSupportsMultiTexturing, METH_VARARGS,
   (char*)"V.GetSupportsMultiTexturing() -> bool\nC++: bool GetSupportsMultiTexturing()\n\nTest if MultiTexturing is supported.\n"},
  {(char*)"GetExtensionManager", PyvtkOpenGLHardwareSupport_GetExtensionManager, METH_VARARGS,
   (char*)"V.GetExtensionManager() -> vtkOpenGLExtensionManager\nC++: vtkOpenGLExtensionManager *GetExtensionManager()\n\nSet/Get a reference to a vtkRenderWindow which is Required for\nmost methods of this class to work.\n"},
  {(char*)"SetExtensionManager", PyvtkOpenGLHardwareSupport_SetExtensionManager, METH_VARARGS,
   (char*)"V.SetExtensionManager(vtkOpenGLExtensionManager)\nC++: void SetExtensionManager(\n    vtkOpenGLExtensionManager *extensionManager)\n\nSet/Get a reference to a vtkRenderWindow which is Required for\nmost methods of this class to work.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLHardwareSupport_StaticNew()
{
  return vtkOpenGLHardwareSupport::New();
}

PyObject *PyVTKClass_vtkOpenGLHardwareSupportNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLHardwareSupport_StaticNew,
    PyvtkOpenGLHardwareSupport_Methods,
    "vtkOpenGLHardwareSupport", modulename,
    NULL, NULL,
    PyvtkOpenGLHardwareSupport_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkOpenGLHardwareSupport_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLHardwareSupport - OpenGL rendering window\n\n",
    "Superclass: vtkObject\n\n",
    "vtkOpenGLHardwareSupport is an implementation of methods used to\nquery OpenGL and the hardware of what kind of graphics support is\navailable. When VTK supports more than one Graphics API an abstract\nsuper class vtkHardwareSupport should be implemented for this class\nto derive from.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLHardwareSupport(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLHardwareSupportNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLHardwareSupport", o) != 0)
    {
    Py_DECREF(o);
    }

}

