// python wrapper for vtkFillHolesFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFillHolesFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFillHolesFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFillHolesFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkFillHolesFilter_Doc();


static PyObject *
PyvtkFillHolesFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFillHolesFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFillHolesFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFillHolesFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFillHolesFilter::NewInstance());

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
PyvtkFillHolesFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFillHolesFilter *tempr = vtkFillHolesFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_SetHoleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHoleSize(temp0);
      }
    else
      {
      op->vtkFillHolesFilter::SetHoleSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_GetHoleSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHoleSizeMinValue() :
      op->vtkFillHolesFilter::GetHoleSizeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_GetHoleSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHoleSizeMaxValue() :
      op->vtkFillHolesFilter::GetHoleSizeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_GetHoleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHoleSize() :
      op->vtkFillHolesFilter::GetHoleSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFillHolesFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkFillHolesFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {(char*)"IsA", PyvtkFillHolesFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {(char*)"NewInstance", PyvtkFillHolesFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFillHolesFilter\nC++: vtkFillHolesFilter *NewInstance()\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {(char*)"SafeDownCast", PyvtkFillHolesFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFillHolesFilter\nC++: vtkFillHolesFilter *SafeDownCast(vtkObject* o)\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {(char*)"SetHoleSize", PyvtkFillHolesFilter_SetHoleSize, METH_VARARGS,
   (char*)"V.SetHoleSize(float)\nC++: void SetHoleSize(double)\n\nSpecify the maximum hole size to fill. This is represented as a\nradius to the bounding circumsphere containing the hole.  Note\nthat this is an approximate area; the actual area cannot be\ncomputed without first triangulating the hole.\n"},
  {(char*)"GetHoleSizeMinValue", PyvtkFillHolesFilter_GetHoleSizeMinValue, METH_VARARGS,
   (char*)"V.GetHoleSizeMinValue() -> float\nC++: double GetHoleSizeMinValue()\n\nSpecify the maximum hole size to fill. This is represented as a\nradius to the bounding circumsphere containing the hole.  Note\nthat this is an approximate area; the actual area cannot be\ncomputed without first triangulating the hole.\n"},
  {(char*)"GetHoleSizeMaxValue", PyvtkFillHolesFilter_GetHoleSizeMaxValue, METH_VARARGS,
   (char*)"V.GetHoleSizeMaxValue() -> float\nC++: double GetHoleSizeMaxValue()\n\nSpecify the maximum hole size to fill. This is represented as a\nradius to the bounding circumsphere containing the hole.  Note\nthat this is an approximate area; the actual area cannot be\ncomputed without first triangulating the hole.\n"},
  {(char*)"GetHoleSize", PyvtkFillHolesFilter_GetHoleSize, METH_VARARGS,
   (char*)"V.GetHoleSize() -> float\nC++: double GetHoleSize()\n\nSpecify the maximum hole size to fill. This is represented as a\nradius to the bounding circumsphere containing the hole.  Note\nthat this is an approximate area; the actual area cannot be\ncomputed without first triangulating the hole.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFillHolesFilter_StaticNew()
{
  return vtkFillHolesFilter::New();
}

PyObject *PyVTKClass_vtkFillHolesFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFillHolesFilter_StaticNew,
    PyvtkFillHolesFilter_Methods,
    "vtkFillHolesFilter", modulename,
    NULL, NULL,
    PyvtkFillHolesFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkFillHolesFilter_Doc()
{
  static const char *docstring[] = {
    "vtkFillHolesFilter - identify and fill holes in meshes\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkFillHolesFilter is a filter that identifies and fills holes in\ninput vtkPolyData meshes. Holes are identified by locating boundary\nedges, linking them together into loops, and then triangulating the\nresulting loops. Note that you can specify an approximate limit to\nthe size of the hole that can be filled.\n\nCaveats:\n\nNote that any mesh with boundary edges by definition has a\ntopological hole. Th",
    "is even includes a reactangular grid (e.g., the\noutput of vtkPlaneSource). In such situations, if the outer hole is\nfilled, retriangulation of the hole will cause geometric overlap of\nthe mesh. This can be prevented by using the hole size instance\nvariable to prevent the larger holes from being triangulated.\n\nNote this filter only operates on polygons and triangle strips.\nVertices and polylines ar",
    "e passed through untouched.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFillHolesFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFillHolesFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFillHolesFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

