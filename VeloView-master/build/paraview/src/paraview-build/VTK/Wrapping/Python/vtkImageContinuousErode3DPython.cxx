// python wrapper for vtkImageContinuousErode3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageContinuousErode3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageContinuousErode3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageContinuousErode3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageSpatialAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
#endif

static const char **PyvtkImageContinuousErode3D_Doc();


static PyObject *
PyvtkImageContinuousErode3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousErode3D *op = static_cast<vtkImageContinuousErode3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageContinuousErode3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageContinuousErode3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousErode3D *op = static_cast<vtkImageContinuousErode3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageContinuousErode3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageContinuousErode3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousErode3D *op = static_cast<vtkImageContinuousErode3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageContinuousErode3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageContinuousErode3D::NewInstance());

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
PyvtkImageContinuousErode3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageContinuousErode3D *tempr = vtkImageContinuousErode3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageContinuousErode3D_SetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousErode3D *op = static_cast<vtkImageContinuousErode3D *>(vp);

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
      op->vtkImageContinuousErode3D::SetKernelSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageContinuousErode3D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageContinuousErode3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nConstruct an instance of vtkImageContinuousErode3D filter. By\ndefault zero values are eroded.\n"},
  {(char*)"IsA", PyvtkImageContinuousErode3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nConstruct an instance of vtkImageContinuousErode3D filter. By\ndefault zero values are eroded.\n"},
  {(char*)"NewInstance", PyvtkImageContinuousErode3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageContinuousErode3D\nC++: vtkImageContinuousErode3D *NewInstance()\n\nConstruct an instance of vtkImageContinuousErode3D filter. By\ndefault zero values are eroded.\n"},
  {(char*)"SafeDownCast", PyvtkImageContinuousErode3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageContinuousErode3D\nC++: vtkImageContinuousErode3D *SafeDownCast(vtkObject* o)\n\nConstruct an instance of vtkImageContinuousErode3D filter. By\ndefault zero values are eroded.\n"},
  {(char*)"SetKernelSize", PyvtkImageContinuousErode3D_SetKernelSize, METH_VARARGS,
   (char*)"V.SetKernelSize(int, int, int)\nC++: void SetKernelSize(int size0, int size1, int size2)\n\nThis method sets the size of the neighborhood.  It also sets the\ndefault middle of the neighborhood and computes the elliptical\nfoot print.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageContinuousErode3D_StaticNew()
{
  return vtkImageContinuousErode3D::New();
}

PyObject *PyVTKClass_vtkImageContinuousErode3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageContinuousErode3D_StaticNew,
    PyvtkImageContinuousErode3D_Methods,
    "vtkImageContinuousErode3D", modulename,
    NULL, NULL,
    PyvtkImageContinuousErode3D_Doc(),
    PyVTKClass_vtkImageSpatialAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageContinuousErode3D_Doc()
{
  static const char *docstring[] = {
    "vtkImageContinuousErode3D - Erosion implemented as a minimum.\n\n",
    "Superclass: vtkImageSpatialAlgorithm\n\n",
    "vtkImageContinuousErode3D replaces a pixel with the minimum over an\nellipsoidal neighborhood.  If KernelSize of an axis is 1, no\nprocessing is done on that axis.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageContinuousErode3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageContinuousErode3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageContinuousErode3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

