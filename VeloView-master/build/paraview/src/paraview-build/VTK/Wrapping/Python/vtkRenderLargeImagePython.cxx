// python wrapper for vtkRenderLargeImage
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkRenderLargeImage.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRenderLargeImage(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRenderLargeImageNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkRenderLargeImage_Doc();


static PyObject *
PyvtkRenderLargeImage_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderLargeImage *op = static_cast<vtkRenderLargeImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRenderLargeImage::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderLargeImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderLargeImage *op = static_cast<vtkRenderLargeImage *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderLargeImage::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderLargeImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderLargeImage *op = static_cast<vtkRenderLargeImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderLargeImage *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderLargeImage::NewInstance());

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
PyvtkRenderLargeImage_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRenderLargeImage *tempr = vtkRenderLargeImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderLargeImage_SetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderLargeImage *op = static_cast<vtkRenderLargeImage *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMagnification(temp0);
      }
    else
      {
      op->vtkRenderLargeImage::SetMagnification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderLargeImage_GetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderLargeImage *op = static_cast<vtkRenderLargeImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMagnification() :
      op->vtkRenderLargeImage::GetMagnification());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderLargeImage_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderLargeImage *op = static_cast<vtkRenderLargeImage *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkRenderLargeImage::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderLargeImage_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderLargeImage *op = static_cast<vtkRenderLargeImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkRenderLargeImage::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderLargeImage_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderLargeImage *op = static_cast<vtkRenderLargeImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkRenderLargeImage::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderLargeImage_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderLargeImage_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderLargeImage_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderLargeImage_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRenderLargeImage\nC++: vtkRenderLargeImage *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderLargeImage_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderLargeImage\nC++: vtkRenderLargeImage *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMagnification", PyvtkRenderLargeImage_SetMagnification, METH_VARARGS,
   (char*)"V.SetMagnification(int)\nC++: void SetMagnification(int a)\n\nThe magnification of the current render window\n"},
  {(char*)"GetMagnification", PyvtkRenderLargeImage_GetMagnification, METH_VARARGS,
   (char*)"V.GetMagnification() -> int\nC++: int GetMagnification()\n\nThe magnification of the current render window\n"},
  {(char*)"SetInput", PyvtkRenderLargeImage_SetInput, METH_VARARGS,
   (char*)"V.SetInput(vtkRenderer)\nC++: virtual void SetInput(vtkRenderer *)\n\nIndicates what renderer to get the pixel data from.\n"},
  {(char*)"GetInput", PyvtkRenderLargeImage_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkRenderer\nC++: vtkRenderer *GetInput()\n\nReturns which renderer is being used as the source for the pixel\ndata.\n"},
  {(char*)"GetOutput", PyvtkRenderLargeImage_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkImageData\nC++: vtkImageData *GetOutput()\n\nGet the output data object for a port on this algorithm.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderLargeImage_StaticNew()
{
  return vtkRenderLargeImage::New();
}

PyObject *PyVTKClass_vtkRenderLargeImageNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderLargeImage_StaticNew,
    PyvtkRenderLargeImage_Methods,
    "vtkRenderLargeImage", modulename,
    NULL, NULL,
    PyvtkRenderLargeImage_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRenderLargeImage_Doc()
{
  static const char *docstring[] = {
    "vtkRenderLargeImage - Use tiling to generate a large rendering\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkRenderLargeImage provides methods needed to read a region from a\nfile.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderLargeImage(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderLargeImageNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderLargeImage", o) != 0)
    {
    Py_DECREF(o);
    }

}

