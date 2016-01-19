// python wrapper for vtkImageFourierCenter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkImageFourierCenter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageFourierCenter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageFourierCenterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageDecomposeFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
#endif

static const char **PyvtkImageFourierCenter_Doc();


static PyObject *
PyvtkImageFourierCenter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierCenter *op = static_cast<vtkImageFourierCenter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageFourierCenter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFourierCenter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierCenter *op = static_cast<vtkImageFourierCenter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageFourierCenter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFourierCenter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierCenter *op = static_cast<vtkImageFourierCenter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageFourierCenter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageFourierCenter::NewInstance());

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
PyvtkImageFourierCenter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageFourierCenter *tempr = vtkImageFourierCenter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageFourierCenter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageFourierCenter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageFourierCenter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageFourierCenter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageFourierCenter\nC++: vtkImageFourierCenter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageFourierCenter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageFourierCenter\nC++: vtkImageFourierCenter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageFourierCenter_StaticNew()
{
  return vtkImageFourierCenter::New();
}

PyObject *PyVTKClass_vtkImageFourierCenterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageFourierCenter_StaticNew,
    PyvtkImageFourierCenter_Methods,
    "vtkImageFourierCenter", modulename,
    NULL, NULL,
    PyvtkImageFourierCenter_Doc(),
    PyVTKClass_vtkImageDecomposeFilterNew(modulename));
  return cls;
}

const char **PyvtkImageFourierCenter_Doc()
{
  static const char *docstring[] = {
    "vtkImageFourierCenter - Shifts constant frequency to center for\n\n",
    "Superclass: vtkImageDecomposeFilter\n\n",
    "Is used for dispaying images in frequency space.  FFT converts\nspatial images into frequency space, but puts the zero frequency at\nthe origin. This filter shifts the zero frequency to the center of\nthe image. Input and output are assumed to be doubles.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageFourierCenter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageFourierCenterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageFourierCenter", o) != 0)
    {
    Py_DECREF(o);
    }

}

