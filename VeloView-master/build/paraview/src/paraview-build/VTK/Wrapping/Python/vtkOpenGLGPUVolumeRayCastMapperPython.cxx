// python wrapper for vtkOpenGLGPUVolumeRayCastMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLGPUVolumeRayCastMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLGPUVolumeRayCastMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLGPUVolumeRayCastMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGPUVolumeRayCastMapperNew
extern "C" { PyObject *PyVTKClass_vtkGPUVolumeRayCastMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkGPUVolumeRayCastMapperNew
#endif

static const char **PyvtkOpenGLGPUVolumeRayCastMapper_Doc();


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLGPUVolumeRayCastMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLGPUVolumeRayCastMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLGPUVolumeRayCastMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLGPUVolumeRayCastMapper::NewInstance());

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
PyvtkOpenGLGPUVolumeRayCastMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLGPUVolumeRayCastMapper *tempr = vtkOpenGLGPUVolumeRayCastMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_IsRenderSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRenderSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  vtkRenderWindow *temp0 = NULL;
  vtkVolumeProperty *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      ap.GetVTKObject(temp1, "vtkVolumeProperty"))
    {
    int tempr = (ap.IsBound() ?
      op->IsRenderSupported(temp0, temp1) :
      op->vtkOpenGLGPUVolumeRayCastMapper::IsRenderSupported(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkOpenGLGPUVolumeRayCastMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_OpenGLErrorMessage(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "OpenGLErrorMessage");

  unsigned int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = vtkOpenGLGPUVolumeRayCastMapper::OpenGLErrorMessage(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_PrintError(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PrintError");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkOpenGLGPUVolumeRayCastMapper::PrintError(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLGPUVolumeRayCastMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLGPUVolumeRayCastMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLGPUVolumeRayCastMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLGPUVolumeRayCastMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLGPUVolumeRayCastMapper\nC++: vtkOpenGLGPUVolumeRayCastMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLGPUVolumeRayCastMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLGPUVolumeRayCastMapper\nC++: vtkOpenGLGPUVolumeRayCastMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsRenderSupported", PyvtkOpenGLGPUVolumeRayCastMapper_IsRenderSupported, METH_VARARGS,
   (char*)"V.IsRenderSupported(vtkRenderWindow, vtkVolumeProperty) -> int\nC++: virtual int IsRenderSupported(vtkRenderWindow *window,\n    vtkVolumeProperty *property)\n\nBased on hardware and properties, we may or may not be able to\nrender using 3D texture mapping. This indicates if 3D texture\nmapping is supported by the hardware, and if the other extensions\nnecessary to support the specific properties are available.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLGPUVolumeRayCastMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *window)\n\nDelete OpenGL objects.\n\\post done: this->OpenGLObjectsCreated==0\n"},
  {(char*)"OpenGLErrorMessage", PyvtkOpenGLGPUVolumeRayCastMapper_OpenGLErrorMessage, METH_VARARGS | METH_STATIC,
   (char*)"V.OpenGLErrorMessage(int) -> string\nC++: static const char *OpenGLErrorMessage(unsigned int errorCode)\n\nReturn a string matching the OpenGL errorCode.\n\\post result_exists: result!=0\n"},
  {(char*)"PrintError", PyvtkOpenGLGPUVolumeRayCastMapper_PrintError, METH_VARARGS | METH_STATIC,
   (char*)"V.PrintError(string)\nC++: static void PrintError(const char *headerMessage)\n\nDisplay headerMessage on the standard output and the last OpenGL\nerror message if any.\n\\pre headerMessage_exists: headerMessage!=0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLGPUVolumeRayCastMapper_StaticNew()
{
  return vtkOpenGLGPUVolumeRayCastMapper::New();
}

PyObject *PyVTKClass_vtkOpenGLGPUVolumeRayCastMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLGPUVolumeRayCastMapper_StaticNew,
    PyvtkOpenGLGPUVolumeRayCastMapper_Methods,
    "vtkOpenGLGPUVolumeRayCastMapper", modulename,
    NULL, NULL,
    PyvtkOpenGLGPUVolumeRayCastMapper_Doc(),
    PyVTKClass_vtkGPUVolumeRayCastMapperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLGPUVolumeRayCastMapper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLGPUVolumeRayCastMapper - OpenGL subclass that draws the\n\n",
    "Superclass: vtkGPUVolumeRayCastMapper\n\n",
    "This is the concrete implementation of a ray cast image display\nhelper - a helper class responsible for drawing the image to the\nscreen.\n\nSee Also:\n\nvtkGPUVolumeRayCastMapper\n\nThanks:\n\nThanks to Michael Granseier for helping to debug this class with\nrespect to maximum memory issues (which must be specified as\nvtkIdType and not int).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLGPUVolumeRayCastMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLGPUVolumeRayCastMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLGPUVolumeRayCastMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

