// python wrapper for vtkImageMirrorPad
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkImageMirrorPad.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageMirrorPad(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageMirrorPadNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImagePadFilterNew
extern "C" { PyObject *PyVTKClass_vtkImagePadFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImagePadFilterNew
#endif

static const char **PyvtkImageMirrorPad_Doc();


static PyObject *
PyvtkImageMirrorPad_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMirrorPad *op = static_cast<vtkImageMirrorPad *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageMirrorPad::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMirrorPad_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMirrorPad *op = static_cast<vtkImageMirrorPad *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMirrorPad::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMirrorPad_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMirrorPad *op = static_cast<vtkImageMirrorPad *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageMirrorPad *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMirrorPad::NewInstance());

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
PyvtkImageMirrorPad_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageMirrorPad *tempr = vtkImageMirrorPad::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMirrorPad_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMirrorPad_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMirrorPad_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMirrorPad_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageMirrorPad\nC++: vtkImageMirrorPad *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMirrorPad_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMirrorPad\nC++: vtkImageMirrorPad *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMirrorPad_StaticNew()
{
  return vtkImageMirrorPad::New();
}

PyObject *PyVTKClass_vtkImageMirrorPadNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMirrorPad_StaticNew,
    PyvtkImageMirrorPad_Methods,
    "vtkImageMirrorPad", modulename,
    NULL, NULL,
    PyvtkImageMirrorPad_Doc(),
    PyVTKClass_vtkImagePadFilterNew(modulename));
  return cls;
}

const char **PyvtkImageMirrorPad_Doc()
{
  static const char *docstring[] = {
    "vtkImageMirrorPad - Extra pixels are filled by mirror images.\n\n",
    "Superclass: vtkImagePadFilter\n\n",
    "vtkImageMirrorPad makes an image larger by filling extra pixels with\na mirror image of the original image (mirror at image boundaries).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMirrorPad(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMirrorPadNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMirrorPad", o) != 0)
    {
    Py_DECREF(o);
    }

}

