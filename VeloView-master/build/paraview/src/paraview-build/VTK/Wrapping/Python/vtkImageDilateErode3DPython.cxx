// python wrapper for vtkImageDilateErode3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageDilateErode3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageDilateErode3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageDilateErode3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageSpatialAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
#endif

static const char **PyvtkImageDilateErode3D_Doc();


static PyObject *
PyvtkImageDilateErode3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageDilateErode3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDilateErode3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageDilateErode3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDilateErode3D::NewInstance());

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
PyvtkImageDilateErode3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageDilateErode3D *tempr = vtkImageDilateErode3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_SetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetKernelSize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageDilateErode3D::SetKernelSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_SetDilateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDilateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDilateValue(temp0);
      }
    else
      {
      op->vtkImageDilateErode3D::SetDilateValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_GetDilateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDilateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDilateValue() :
      op->vtkImageDilateErode3D::GetDilateValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_SetErodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetErodeValue(temp0);
      }
    else
      {
      op->vtkImageDilateErode3D::SetErodeValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_GetErodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetErodeValue() :
      op->vtkImageDilateErode3D::GetErodeValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageDilateErode3D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageDilateErode3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nConstruct an instance of vtkImageDilateErode3D filter. By default\nzero values are dilated.\n"},
  {(char*)"IsA", PyvtkImageDilateErode3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nConstruct an instance of vtkImageDilateErode3D filter. By default\nzero values are dilated.\n"},
  {(char*)"NewInstance", PyvtkImageDilateErode3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageDilateErode3D\nC++: vtkImageDilateErode3D *NewInstance()\n\nConstruct an instance of vtkImageDilateErode3D filter. By default\nzero values are dilated.\n"},
  {(char*)"SafeDownCast", PyvtkImageDilateErode3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageDilateErode3D\nC++: vtkImageDilateErode3D *SafeDownCast(vtkObject* o)\n\nConstruct an instance of vtkImageDilateErode3D filter. By default\nzero values are dilated.\n"},
  {(char*)"SetKernelSize", PyvtkImageDilateErode3D_SetKernelSize, METH_VARARGS,
   (char*)"V.SetKernelSize(int, int, int)\nC++: void SetKernelSize(int size0, int size1, int size2)\n\nThis method sets the size of the neighborhood.  It also sets the\ndefault middle of the neighborhood and computes the elliptical\nfoot print.\n"},
  {(char*)"SetDilateValue", PyvtkImageDilateErode3D_SetDilateValue, METH_VARARGS,
   (char*)"V.SetDilateValue(float)\nC++: void SetDilateValue(double a)\n\nSet/Get the Dilate and Erode values to be used by this filter.\n"},
  {(char*)"GetDilateValue", PyvtkImageDilateErode3D_GetDilateValue, METH_VARARGS,
   (char*)"V.GetDilateValue() -> float\nC++: double GetDilateValue()\n\nSet/Get the Dilate and Erode values to be used by this filter.\n"},
  {(char*)"SetErodeValue", PyvtkImageDilateErode3D_SetErodeValue, METH_VARARGS,
   (char*)"V.SetErodeValue(float)\nC++: void SetErodeValue(double a)\n\nSet/Get the Dilate and Erode values to be used by this filter.\n"},
  {(char*)"GetErodeValue", PyvtkImageDilateErode3D_GetErodeValue, METH_VARARGS,
   (char*)"V.GetErodeValue() -> float\nC++: double GetErodeValue()\n\nSet/Get the Dilate and Erode values to be used by this filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageDilateErode3D_StaticNew()
{
  return vtkImageDilateErode3D::New();
}

PyObject *PyVTKClass_vtkImageDilateErode3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageDilateErode3D_StaticNew,
    PyvtkImageDilateErode3D_Methods,
    "vtkImageDilateErode3D", modulename,
    NULL, NULL,
    PyvtkImageDilateErode3D_Doc(),
    PyVTKClass_vtkImageSpatialAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageDilateErode3D_Doc()
{
  static const char *docstring[] = {
    "vtkImageDilateErode3D - Dilates one value and erodes another.\n\n",
    "Superclass: vtkImageSpatialAlgorithm\n\n",
    "vtkImageDilateErode3D will dilate one value and erode another. It\nuses an elliptical foot print, and only erodes/dilates on the\nboundary of the two values.  The filter is restricted to the X, Y,\nand Z axes for now.  It can degenerate to a 2 or 1 dimensional filter\nby setting the kernel size to 1 for a specific axis.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageDilateErode3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDilateErode3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageDilateErode3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

