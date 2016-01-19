// python wrapper for vtkBlankStructuredGridWithImage
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBlankStructuredGridWithImage.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBlankStructuredGridWithImage(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBlankStructuredGridWithImageNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
#endif

static const char **PyvtkBlankStructuredGridWithImage_Doc();


static PyObject *
PyvtkBlankStructuredGridWithImage_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGridWithImage *op = static_cast<vtkBlankStructuredGridWithImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBlankStructuredGridWithImage::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGridWithImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGridWithImage *op = static_cast<vtkBlankStructuredGridWithImage *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBlankStructuredGridWithImage::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGridWithImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGridWithImage *op = static_cast<vtkBlankStructuredGridWithImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBlankStructuredGridWithImage *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBlankStructuredGridWithImage::NewInstance());

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
PyvtkBlankStructuredGridWithImage_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBlankStructuredGridWithImage *tempr = vtkBlankStructuredGridWithImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGridWithImage_SetBlankingInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlankingInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGridWithImage *op = static_cast<vtkBlankStructuredGridWithImage *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetBlankingInputData(temp0);
      }
    else
      {
      op->vtkBlankStructuredGridWithImage::SetBlankingInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGridWithImage_GetBlankingInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlankingInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGridWithImage *op = static_cast<vtkBlankStructuredGridWithImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetBlankingInput() :
      op->vtkBlankStructuredGridWithImage::GetBlankingInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBlankStructuredGridWithImage_Methods[] = {
  {(char*)"GetClassName", PyvtkBlankStructuredGridWithImage_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBlankStructuredGridWithImage_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBlankStructuredGridWithImage_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBlankStructuredGridWithImage\nC++: vtkBlankStructuredGridWithImage *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBlankStructuredGridWithImage_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBlankStructuredGridWithImage\nC++: vtkBlankStructuredGridWithImage *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetBlankingInputData", PyvtkBlankStructuredGridWithImage_SetBlankingInputData, METH_VARARGS,
   (char*)"V.SetBlankingInputData(vtkImageData)\nC++: void SetBlankingInputData(vtkImageData *input)\n\nSet / get the input image used to perform the blanking.\n"},
  {(char*)"GetBlankingInput", PyvtkBlankStructuredGridWithImage_GetBlankingInput, METH_VARARGS,
   (char*)"V.GetBlankingInput() -> vtkImageData\nC++: vtkImageData *GetBlankingInput()\n\nSet / get the input image used to perform the blanking.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBlankStructuredGridWithImage_StaticNew()
{
  return vtkBlankStructuredGridWithImage::New();
}

PyObject *PyVTKClass_vtkBlankStructuredGridWithImageNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBlankStructuredGridWithImage_StaticNew,
    PyvtkBlankStructuredGridWithImage_Methods,
    "vtkBlankStructuredGridWithImage", modulename,
    NULL, NULL,
    PyvtkBlankStructuredGridWithImage_Doc(),
    PyVTKClass_vtkStructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkBlankStructuredGridWithImage_Doc()
{
  static const char *docstring[] = {
    "vtkBlankStructuredGridWithImage - blank a structured grid with an\nimage\n\n",
    "Superclass: vtkStructuredGridAlgorithm\n\n",
    "This filter can be used to set the blanking in a structured grid with\nan image. The filter takes two inputs: the structured grid to blank,\nand the image used to set the blanking. Make sure that the dimensions\nof both the image and the structured grid are identical.\n\nNote that the image is interpreted as follows: zero values indicate\nthat the structured grid point is blanked; non-zero values indica",
    "te\nthat the structured grid point is visible. The blanking data must be\nunsigned char.\n\nSee Also:\n\nvtkStructuredGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBlankStructuredGridWithImage(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBlankStructuredGridWithImageNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBlankStructuredGridWithImage", o) != 0)
    {
    Py_DECREF(o);
    }

}

