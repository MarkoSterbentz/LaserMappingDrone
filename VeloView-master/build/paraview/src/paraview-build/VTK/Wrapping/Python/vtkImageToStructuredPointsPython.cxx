// python wrapper for vtkImageToStructuredPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageToStructuredPoints.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageToStructuredPoints(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageToStructuredPointsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageToStructuredPoints_Doc();


static PyObject *
PyvtkImageToStructuredPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToStructuredPoints *op = static_cast<vtkImageToStructuredPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageToStructuredPoints::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToStructuredPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToStructuredPoints *op = static_cast<vtkImageToStructuredPoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageToStructuredPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToStructuredPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToStructuredPoints *op = static_cast<vtkImageToStructuredPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageToStructuredPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageToStructuredPoints::NewInstance());

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
PyvtkImageToStructuredPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageToStructuredPoints *tempr = vtkImageToStructuredPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToStructuredPoints_SetVectorInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToStructuredPoints *op = static_cast<vtkImageToStructuredPoints *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetVectorInputData(temp0);
      }
    else
      {
      op->vtkImageToStructuredPoints::SetVectorInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToStructuredPoints_GetVectorInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToStructuredPoints *op = static_cast<vtkImageToStructuredPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetVectorInput() :
      op->vtkImageToStructuredPoints::GetVectorInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToStructuredPoints_GetStructuredPointsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredPointsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToStructuredPoints *op = static_cast<vtkImageToStructuredPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->GetStructuredPointsOutput() :
      op->vtkImageToStructuredPoints::GetStructuredPointsOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageToStructuredPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkImageToStructuredPoints_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageToStructuredPoints_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageToStructuredPoints_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageToStructuredPoints\nC++: vtkImageToStructuredPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageToStructuredPoints_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageToStructuredPoints\nC++: vtkImageToStructuredPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVectorInputData", PyvtkImageToStructuredPoints_SetVectorInputData, METH_VARARGS,
   (char*)"V.SetVectorInputData(vtkImageData)\nC++: void SetVectorInputData(vtkImageData *input)\n\nSet/Get the input object from the image pipeline.\n"},
  {(char*)"GetVectorInput", PyvtkImageToStructuredPoints_GetVectorInput, METH_VARARGS,
   (char*)"V.GetVectorInput() -> vtkImageData\nC++: vtkImageData *GetVectorInput()\n\nSet/Get the input object from the image pipeline.\n"},
  {(char*)"GetStructuredPointsOutput", PyvtkImageToStructuredPoints_GetStructuredPointsOutput, METH_VARARGS,
   (char*)"V.GetStructuredPointsOutput() -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetStructuredPointsOutput()\n\nGet the output of the filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageToStructuredPoints_StaticNew()
{
  return vtkImageToStructuredPoints::New();
}

PyObject *PyVTKClass_vtkImageToStructuredPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageToStructuredPoints_StaticNew,
    PyvtkImageToStructuredPoints_Methods,
    "vtkImageToStructuredPoints", modulename,
    NULL, NULL,
    PyvtkImageToStructuredPoints_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageToStructuredPoints_Doc()
{
  static const char *docstring[] = {
    "vtkImageToStructuredPoints - Attaches image pipeline to VTK.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageToStructuredPoints changes an image cache format to a\nstructured points dataset.  It takes an Input plus an optional\nVectorInput. The VectorInput converts the RGB scalar components of\nthe VectorInput to vector pointdata attributes. This filter will try\nto reference count the data but in some cases it must make a copy.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageToStructuredPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageToStructuredPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageToStructuredPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

