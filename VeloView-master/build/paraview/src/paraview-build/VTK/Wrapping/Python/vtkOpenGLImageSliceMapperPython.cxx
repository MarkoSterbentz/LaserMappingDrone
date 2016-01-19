// python wrapper for vtkOpenGLImageSliceMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLImageSliceMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLImageSliceMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLImageSliceMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageSliceMapperNew
extern "C" { PyObject *PyVTKClass_vtkImageSliceMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSliceMapperNew
#endif

static const char **PyvtkOpenGLImageSliceMapper_Doc();


static PyObject *
PyvtkOpenGLImageSliceMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageSliceMapper *op = static_cast<vtkOpenGLImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLImageSliceMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLImageSliceMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageSliceMapper *op = static_cast<vtkOpenGLImageSliceMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLImageSliceMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLImageSliceMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageSliceMapper *op = static_cast<vtkOpenGLImageSliceMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLImageSliceMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLImageSliceMapper::NewInstance());

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
PyvtkOpenGLImageSliceMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLImageSliceMapper *tempr = vtkOpenGLImageSliceMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLImageSliceMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageSliceMapper *op = static_cast<vtkOpenGLImageSliceMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkImageSlice *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkImageSlice"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLImageSliceMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLImageSliceMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageSliceMapper *op = static_cast<vtkOpenGLImageSliceMapper *>(vp);

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
      op->vtkOpenGLImageSliceMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLImageSliceMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLImageSliceMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLImageSliceMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLImageSliceMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLImageSliceMapper\nC++: vtkOpenGLImageSliceMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLImageSliceMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLImageSliceMapper\nC++: vtkOpenGLImageSliceMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkOpenGLImageSliceMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkImageSlice)\nC++: void Render(vtkRenderer *ren, vtkImageSlice *prop)\n\nImplement base class method.  Perform the render.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLImageSliceMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper, the image texture in particular. Using the same texture\nin multiple render windows is NOT currently supported.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLImageSliceMapper_StaticNew()
{
  return vtkOpenGLImageSliceMapper::New();
}

PyObject *PyVTKClass_vtkOpenGLImageSliceMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLImageSliceMapper_StaticNew,
    PyvtkOpenGLImageSliceMapper_Methods,
    "vtkOpenGLImageSliceMapper", modulename,
    NULL, NULL,
    PyvtkOpenGLImageSliceMapper_Doc(),
    PyVTKClass_vtkImageSliceMapperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLImageSliceMapper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLImageSliceMapper - OpenGL mapper for image slice display\n\n",
    "Superclass: vtkImageSliceMapper\n\n",
    "vtkOpenGLImageSliceMapper is a concrete implementation of the\nabstract class vtkImageSliceMapper that interfaces to the OpenGL\nlibrary.\n\nThanks:\n\nThanks to David Gobbi at the Seaman Family MR Centre and Dept. of\nClinical Neurosciences, Foothills Medical Centre, Calgary, for\nproviding this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLImageSliceMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLImageSliceMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLImageSliceMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

