// python wrapper for vtkImageHybridMedian2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkImageHybridMedian2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageHybridMedian2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageHybridMedian2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageSpatialAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
#endif

static const char **PyvtkImageHybridMedian2D_Doc();


static PyObject *
PyvtkImageHybridMedian2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHybridMedian2D *op = static_cast<vtkImageHybridMedian2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageHybridMedian2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageHybridMedian2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHybridMedian2D *op = static_cast<vtkImageHybridMedian2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageHybridMedian2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageHybridMedian2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHybridMedian2D *op = static_cast<vtkImageHybridMedian2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageHybridMedian2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageHybridMedian2D::NewInstance());

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
PyvtkImageHybridMedian2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageHybridMedian2D *tempr = vtkImageHybridMedian2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageHybridMedian2D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageHybridMedian2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageHybridMedian2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageHybridMedian2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageHybridMedian2D\nC++: vtkImageHybridMedian2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageHybridMedian2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageHybridMedian2D\nC++: vtkImageHybridMedian2D *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageHybridMedian2D_StaticNew()
{
  return vtkImageHybridMedian2D::New();
}

PyObject *PyVTKClass_vtkImageHybridMedian2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageHybridMedian2D_StaticNew,
    PyvtkImageHybridMedian2D_Methods,
    "vtkImageHybridMedian2D", modulename,
    NULL, NULL,
    PyvtkImageHybridMedian2D_Doc(),
    PyVTKClass_vtkImageSpatialAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageHybridMedian2D_Doc()
{
  static const char *docstring[] = {
    "vtkImageHybridMedian2D - Median filter that preserves lines and\n\n",
    "Superclass: vtkImageSpatialAlgorithm\n\n",
    "vtkImageHybridMedian2D is a median filter that preserves thin lines\nand corners.  It operates on a 5x5 pixel neighborhood.  It computes\ntwo values initially: the median of the + neighbors and the median of\nthe x neighbors.  It then computes the median of these two values\nplus the center pixel.  This result of this second median is the\noutput pixel value.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageHybridMedian2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageHybridMedian2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageHybridMedian2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

