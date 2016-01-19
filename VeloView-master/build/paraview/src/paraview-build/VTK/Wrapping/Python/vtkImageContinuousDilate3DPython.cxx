// python wrapper for vtkImageContinuousDilate3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageContinuousDilate3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageContinuousDilate3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageContinuousDilate3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageSpatialAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
#endif

static const char **PyvtkImageContinuousDilate3D_Doc();


static PyObject *
PyvtkImageContinuousDilate3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousDilate3D *op = static_cast<vtkImageContinuousDilate3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageContinuousDilate3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageContinuousDilate3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousDilate3D *op = static_cast<vtkImageContinuousDilate3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageContinuousDilate3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageContinuousDilate3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousDilate3D *op = static_cast<vtkImageContinuousDilate3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageContinuousDilate3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageContinuousDilate3D::NewInstance());

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
PyvtkImageContinuousDilate3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageContinuousDilate3D *tempr = vtkImageContinuousDilate3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageContinuousDilate3D_SetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousDilate3D *op = static_cast<vtkImageContinuousDilate3D *>(vp);

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
      op->vtkImageContinuousDilate3D::SetKernelSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageContinuousDilate3D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageContinuousDilate3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nConstruct an instance of vtkImageContinuousDilate3D filter. By\ndefault zero values are dilated.\n"},
  {(char*)"IsA", PyvtkImageContinuousDilate3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nConstruct an instance of vtkImageContinuousDilate3D filter. By\ndefault zero values are dilated.\n"},
  {(char*)"NewInstance", PyvtkImageContinuousDilate3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageContinuousDilate3D\nC++: vtkImageContinuousDilate3D *NewInstance()\n\nConstruct an instance of vtkImageContinuousDilate3D filter. By\ndefault zero values are dilated.\n"},
  {(char*)"SafeDownCast", PyvtkImageContinuousDilate3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageContinuousDilate3D\nC++: vtkImageContinuousDilate3D *SafeDownCast(vtkObject* o)\n\nConstruct an instance of vtkImageContinuousDilate3D filter. By\ndefault zero values are dilated.\n"},
  {(char*)"SetKernelSize", PyvtkImageContinuousDilate3D_SetKernelSize, METH_VARARGS,
   (char*)"V.SetKernelSize(int, int, int)\nC++: void SetKernelSize(int size0, int size1, int size2)\n\nThis method sets the size of the neighborhood.  It also sets the\ndefault middle of the neighborhood and computes the elliptical\nfoot print.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageContinuousDilate3D_StaticNew()
{
  return vtkImageContinuousDilate3D::New();
}

PyObject *PyVTKClass_vtkImageContinuousDilate3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageContinuousDilate3D_StaticNew,
    PyvtkImageContinuousDilate3D_Methods,
    "vtkImageContinuousDilate3D", modulename,
    NULL, NULL,
    PyvtkImageContinuousDilate3D_Doc(),
    PyVTKClass_vtkImageSpatialAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageContinuousDilate3D_Doc()
{
  static const char *docstring[] = {
    "vtkImageContinuousDilate3D - Dilate implemented as a maximum.\n\n",
    "Superclass: vtkImageSpatialAlgorithm\n\n",
    "vtkImageContinuousDilate3D replaces a pixel with the maximum over an\nellipsoidal neighborhood.  If KernelSize of an axis is 1, no\nprocessing is done on that axis.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageContinuousDilate3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageContinuousDilate3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageContinuousDilate3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

