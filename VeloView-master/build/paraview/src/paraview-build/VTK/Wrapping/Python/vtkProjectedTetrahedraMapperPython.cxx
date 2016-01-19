// python wrapper for vtkProjectedTetrahedraMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProjectedTetrahedraMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProjectedTetrahedraMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProjectedTetrahedraMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridVolumeMapperNew
#endif

static const char **PyvtkProjectedTetrahedraMapper_Doc();


static PyObject *
PyvtkProjectedTetrahedraMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProjectedTetrahedraMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProjectedTetrahedraMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProjectedTetrahedraMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProjectedTetrahedraMapper::NewInstance());

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
PyvtkProjectedTetrahedraMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProjectedTetrahedraMapper *tempr = vtkProjectedTetrahedraMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_SetVisibilitySort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibilitySort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  vtkVisibilitySort *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVisibilitySort"))
    {
    if (ap.IsBound())
      {
      op->SetVisibilitySort(temp0);
      }
    else
      {
      op->vtkProjectedTetrahedraMapper::SetVisibilitySort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_GetVisibilitySort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibilitySort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVisibilitySort *tempr = (ap.IsBound() ?
      op->GetVisibilitySort() :
      op->vtkProjectedTetrahedraMapper::GetVisibilitySort());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_MapScalarsToColors(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MapScalarsToColors");

  vtkDataArray *temp0 = NULL;
  vtkVolumeProperty *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkVolumeProperty") &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
    {
    vtkProjectedTetrahedraMapper::MapScalarsToColors(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_TransformPoints(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformPoints");

  vtkPoints *temp0 = NULL;
  float temp1[16];
  const int size1 = 16;
  float temp2[16];
  const int size2 = 16;
  vtkFloatArray *temp3 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkFloatArray"))
    {
    vtkProjectedTetrahedraMapper::TransformPoints(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTetrahedraMapper_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTetrahedraMapper *op = static_cast<vtkProjectedTetrahedraMapper *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    bool tempr = (ap.IsBound() ?
      op->IsSupported(temp0) :
      op->vtkProjectedTetrahedraMapper::IsSupported(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProjectedTetrahedraMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkProjectedTetrahedraMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProjectedTetrahedraMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProjectedTetrahedraMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProjectedTetrahedraMapper\nC++: vtkProjectedTetrahedraMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProjectedTetrahedraMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProjectedTetrahedraMapper\nC++: vtkProjectedTetrahedraMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVisibilitySort", PyvtkProjectedTetrahedraMapper_SetVisibilitySort, METH_VARARGS,
   (char*)"V.SetVisibilitySort(vtkVisibilitySort)\nC++: virtual void SetVisibilitySort(vtkVisibilitySort *sort)\n\n"},
  {(char*)"GetVisibilitySort", PyvtkProjectedTetrahedraMapper_GetVisibilitySort, METH_VARARGS,
   (char*)"V.GetVisibilitySort() -> vtkVisibilitySort\nC++: vtkVisibilitySort *GetVisibilitySort()\n\n"},
  {(char*)"MapScalarsToColors", PyvtkProjectedTetrahedraMapper_MapScalarsToColors, METH_VARARGS | METH_STATIC,
   (char*)"V.MapScalarsToColors(vtkDataArray, vtkVolumeProperty,\n    vtkDataArray)\nC++: static void MapScalarsToColors(vtkDataArray *colors,\n    vtkVolumeProperty *property, vtkDataArray *scalars)\n\n"},
  {(char*)"TransformPoints", PyvtkProjectedTetrahedraMapper_TransformPoints, METH_VARARGS | METH_STATIC,
   (char*)"V.TransformPoints(vtkPoints, (float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float), (float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float), vtkFloatArray)\nC++: static void TransformPoints(vtkPoints *inPoints,\n    const float projection_mat[16], const float modelview_mat[16],\n     vtkFloatArray *outPoints)\n\n"},
  {(char*)"IsSupported", PyvtkProjectedTetrahedraMapper_IsSupported, METH_VARARGS,
   (char*)"V.IsSupported(vtkRenderWindow) -> bool\nC++: virtual bool IsSupported(vtkRenderWindow *)\n\nReturn true if the rendering context provides the nececessary\nfunctionality to use this class.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProjectedTetrahedraMapper_StaticNew()
{
  return vtkProjectedTetrahedraMapper::New();
}

PyObject *PyVTKClass_vtkProjectedTetrahedraMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProjectedTetrahedraMapper_StaticNew,
    PyvtkProjectedTetrahedraMapper_Methods,
    "vtkProjectedTetrahedraMapper", modulename,
    NULL, NULL,
    PyvtkProjectedTetrahedraMapper_Doc(),
    PyVTKClass_vtkUnstructuredGridVolumeMapperNew(modulename));
  return cls;
}

const char **PyvtkProjectedTetrahedraMapper_Doc()
{
  static const char *docstring[] = {
    "vtkProjectedTetrahedraMapper - Unstructured grid volume renderer.\n\n",
    "Superclass: vtkUnstructuredGridVolumeMapper\n\n",
    "vtkProjectedTetrahedraMapper is an implementation of the classic\nProjected Tetrahedra algorithm presented by Shirley and Tuchman in \"A\nPolygonal Approximation to Direct Scalar Volume Rendering\" in\nComputer Graphics, December 1990.\n\nBugs:\n\nThis mapper relies highly on the implementation of the OpenGL\npipeline. A typical hardware driver has lots of options and some\nsettings can cause this mapper to ",
    "produce artifacts.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProjectedTetrahedraMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProjectedTetrahedraMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProjectedTetrahedraMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

