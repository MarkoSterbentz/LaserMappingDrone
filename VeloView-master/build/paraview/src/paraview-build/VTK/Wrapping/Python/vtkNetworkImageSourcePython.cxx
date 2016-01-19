// python wrapper for vtkNetworkImageSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkNetworkImageSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNetworkImageSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNetworkImageSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkNetworkImageSource_Doc();


static PyObject *
PyvtkNetworkImageSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkImageSource *op = static_cast<vtkNetworkImageSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNetworkImageSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkImageSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkImageSource *op = static_cast<vtkNetworkImageSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNetworkImageSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkImageSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkImageSource *op = static_cast<vtkNetworkImageSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNetworkImageSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNetworkImageSource::NewInstance());

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
PyvtkNetworkImageSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNetworkImageSource *tempr = vtkNetworkImageSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkImageSource_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkImageSource *op = static_cast<vtkNetworkImageSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkNetworkImageSource::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkImageSource_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkImageSource *op = static_cast<vtkNetworkImageSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkNetworkImageSource::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetworkImageSource_UpdateImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkImageSource *op = static_cast<vtkNetworkImageSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateImage();
      }
    else
      {
      op->vtkNetworkImageSource::UpdateImage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkNetworkImageSource_Methods[] = {
  {(char*)"GetClassName", PyvtkNetworkImageSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNetworkImageSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNetworkImageSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNetworkImageSource\nC++: vtkNetworkImageSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNetworkImageSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNetworkImageSource\nC++: vtkNetworkImageSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkNetworkImageSource_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the filename.\n"},
  {(char*)"GetFileName", PyvtkNetworkImageSource_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the filename.\n"},
  {(char*)"UpdateImage", PyvtkNetworkImageSource_UpdateImage, METH_VARARGS,
   (char*)"V.UpdateImage()\nC++: void UpdateImage()\n\nNeeds to be called to perform the actual image migration.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNetworkImageSource_StaticNew()
{
  return vtkNetworkImageSource::New();
}

PyObject *PyVTKClass_vtkNetworkImageSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNetworkImageSource_StaticNew,
    PyvtkNetworkImageSource_Methods,
    "vtkNetworkImageSource", modulename,
    NULL, NULL,
    PyvtkNetworkImageSource_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkNetworkImageSource_Doc()
{
  static const char *docstring[] = {
    "vtkNetworkImageSource - an image source that can read an image file on\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkNetworkImageSource is a vtkImageAlgorithm that can read an image\nfile on on the client process and produce the output image data on a\nclient and render-server processes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNetworkImageSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNetworkImageSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNetworkImageSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

