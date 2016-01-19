// python wrapper for vtkProteinRibbonFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProteinRibbonFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProteinRibbonFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProteinRibbonFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkProteinRibbonFilter_Doc();


static PyObject *
PyvtkProteinRibbonFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProteinRibbonFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProteinRibbonFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProteinRibbonFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProteinRibbonFilter::NewInstance());

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
PyvtkProteinRibbonFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProteinRibbonFilter *tempr = vtkProteinRibbonFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_GetCoilWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoilWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetCoilWidth() :
      op->vtkProteinRibbonFilter::GetCoilWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_SetCoilWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoilWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCoilWidth(temp0);
      }
    else
      {
      op->vtkProteinRibbonFilter::SetCoilWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_GetHelixWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHelixWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetHelixWidth() :
      op->vtkProteinRibbonFilter::GetHelixWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_SetHelixWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHelixWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHelixWidth(temp0);
      }
    else
      {
      op->vtkProteinRibbonFilter::SetHelixWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_GetSubdivideFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivideFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSubdivideFactor() :
      op->vtkProteinRibbonFilter::GetSubdivideFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_SetSubdivideFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivideFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSubdivideFactor(temp0);
      }
    else
      {
      op->vtkProteinRibbonFilter::SetSubdivideFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_GetDrawSmallMoleculesAsSpheres(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawSmallMoleculesAsSpheres");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDrawSmallMoleculesAsSpheres() :
      op->vtkProteinRibbonFilter::GetDrawSmallMoleculesAsSpheres());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_SetDrawSmallMoleculesAsSpheres(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawSmallMoleculesAsSpheres");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawSmallMoleculesAsSpheres(temp0);
      }
    else
      {
      op->vtkProteinRibbonFilter::SetDrawSmallMoleculesAsSpheres(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_GetSphereResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSphereResolution() :
      op->vtkProteinRibbonFilter::GetSphereResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_SetSphereResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphereResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSphereResolution(temp0);
      }
    else
      {
      op->vtkProteinRibbonFilter::SetSphereResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProteinRibbonFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkProteinRibbonFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProteinRibbonFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProteinRibbonFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProteinRibbonFilter\nC++: vtkProteinRibbonFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProteinRibbonFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProteinRibbonFilter\nC++: vtkProteinRibbonFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetCoilWidth", PyvtkProteinRibbonFilter_GetCoilWidth, METH_VARARGS,
   (char*)"V.GetCoilWidth() -> float\nC++: float GetCoilWidth()\n\nWidth of the ribbon coil. Default is 0.3.\n"},
  {(char*)"SetCoilWidth", PyvtkProteinRibbonFilter_SetCoilWidth, METH_VARARGS,
   (char*)"V.SetCoilWidth(float)\nC++: void SetCoilWidth(float a)\n\nWidth of the ribbon coil. Default is 0.3.\n"},
  {(char*)"GetHelixWidth", PyvtkProteinRibbonFilter_GetHelixWidth, METH_VARARGS,
   (char*)"V.GetHelixWidth() -> float\nC++: float GetHelixWidth()\n\nWidth of the helix part of the ribbon. Default is 1.3.\n"},
  {(char*)"SetHelixWidth", PyvtkProteinRibbonFilter_SetHelixWidth, METH_VARARGS,
   (char*)"V.SetHelixWidth(float)\nC++: void SetHelixWidth(float a)\n\nWidth of the helix part of the ribbon. Default is 1.3.\n"},
  {(char*)"GetSubdivideFactor", PyvtkProteinRibbonFilter_GetSubdivideFactor, METH_VARARGS,
   (char*)"V.GetSubdivideFactor() -> int\nC++: int GetSubdivideFactor()\n\nSmoothing factor of the ribbon. Default is 20.\n"},
  {(char*)"SetSubdivideFactor", PyvtkProteinRibbonFilter_SetSubdivideFactor, METH_VARARGS,
   (char*)"V.SetSubdivideFactor(int)\nC++: void SetSubdivideFactor(int a)\n\nSmoothing factor of the ribbon. Default is 20.\n"},
  {(char*)"GetDrawSmallMoleculesAsSpheres", PyvtkProteinRibbonFilter_GetDrawSmallMoleculesAsSpheres, METH_VARARGS,
   (char*)"V.GetDrawSmallMoleculesAsSpheres() -> bool\nC++: bool GetDrawSmallMoleculesAsSpheres()\n\nIf enabled, small molecules (HETATMs) are drawn as spheres.\nDefault is true.\n"},
  {(char*)"SetDrawSmallMoleculesAsSpheres", PyvtkProteinRibbonFilter_SetDrawSmallMoleculesAsSpheres, METH_VARARGS,
   (char*)"V.SetDrawSmallMoleculesAsSpheres(bool)\nC++: void SetDrawSmallMoleculesAsSpheres(bool a)\n\nIf enabled, small molecules (HETATMs) are drawn as spheres.\nDefault is true.\n"},
  {(char*)"GetSphereResolution", PyvtkProteinRibbonFilter_GetSphereResolution, METH_VARARGS,
   (char*)"V.GetSphereResolution() -> int\nC++: int GetSphereResolution()\n\nResolution of the spheres for small molecules. Default is 20.\n"},
  {(char*)"SetSphereResolution", PyvtkProteinRibbonFilter_SetSphereResolution, METH_VARARGS,
   (char*)"V.SetSphereResolution(int)\nC++: void SetSphereResolution(int a)\n\nResolution of the spheres for small molecules. Default is 20.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProteinRibbonFilter_StaticNew()
{
  return vtkProteinRibbonFilter::New();
}

PyObject *PyVTKClass_vtkProteinRibbonFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProteinRibbonFilter_StaticNew,
    PyvtkProteinRibbonFilter_Methods,
    "vtkProteinRibbonFilter", modulename,
    NULL, NULL,
    PyvtkProteinRibbonFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProteinRibbonFilter_Doc()
{
  static const char *docstring[] = {
    "vtkProteinRibbonFilter - generates protein ribbons\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkProteinRibbonFilter is a polydata algorithm that generates protein\nribbons.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProteinRibbonFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProteinRibbonFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProteinRibbonFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

