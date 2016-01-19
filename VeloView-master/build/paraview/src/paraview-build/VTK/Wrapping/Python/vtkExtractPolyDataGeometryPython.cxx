// python wrapper for vtkExtractPolyDataGeometry
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractPolyDataGeometry.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractPolyDataGeometry(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractPolyDataGeometryNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkExtractPolyDataGeometry_Doc();


static PyObject *
PyvtkExtractPolyDataGeometry_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractPolyDataGeometry::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractPolyDataGeometry::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractPolyDataGeometry *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractPolyDataGeometry::NewInstance());

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
PyvtkExtractPolyDataGeometry_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractPolyDataGeometry *tempr = vtkExtractPolyDataGeometry::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExtractPolyDataGeometry::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetImplicitFunction(temp0);
      }
    else
      {
      op->vtkExtractPolyDataGeometry::SetImplicitFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetImplicitFunction() :
      op->vtkExtractPolyDataGeometry::GetImplicitFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_SetExtractInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtractInside(temp0);
      }
    else
      {
      op->vtkExtractPolyDataGeometry::SetExtractInside(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_GetExtractInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetExtractInside() :
      op->vtkExtractPolyDataGeometry::GetExtractInside());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_ExtractInsideOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractInsideOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractInsideOn();
      }
    else
      {
      op->vtkExtractPolyDataGeometry::ExtractInsideOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_ExtractInsideOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractInsideOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractInsideOff();
      }
    else
      {
      op->vtkExtractPolyDataGeometry::ExtractInsideOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_SetExtractBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtractBoundaryCells(temp0);
      }
    else
      {
      op->vtkExtractPolyDataGeometry::SetExtractBoundaryCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_GetExtractBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetExtractBoundaryCells() :
      op->vtkExtractPolyDataGeometry::GetExtractBoundaryCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_ExtractBoundaryCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractBoundaryCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractBoundaryCellsOn();
      }
    else
      {
      op->vtkExtractPolyDataGeometry::ExtractBoundaryCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_ExtractBoundaryCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractBoundaryCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractBoundaryCellsOff();
      }
    else
      {
      op->vtkExtractPolyDataGeometry::ExtractBoundaryCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_SetPassPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassPoints(temp0);
      }
    else
      {
      op->vtkExtractPolyDataGeometry::SetPassPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_GetPassPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassPoints() :
      op->vtkExtractPolyDataGeometry::GetPassPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_PassPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassPointsOn();
      }
    else
      {
      op->vtkExtractPolyDataGeometry::PassPointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_PassPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassPointsOff();
      }
    else
      {
      op->vtkExtractPolyDataGeometry::PassPointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractPolyDataGeometry_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractPolyDataGeometry_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractPolyDataGeometry_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractPolyDataGeometry_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractPolyDataGeometry\nC++: vtkExtractPolyDataGeometry *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractPolyDataGeometry_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractPolyDataGeometry\nC++: vtkExtractPolyDataGeometry *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkExtractPolyDataGeometry_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime taking into account changes to the implicit\nfunction\n"},
  {(char*)"SetImplicitFunction", PyvtkExtractPolyDataGeometry_SetImplicitFunction, METH_VARARGS,
   (char*)"V.SetImplicitFunction(vtkImplicitFunction)\nC++: virtual void SetImplicitFunction(vtkImplicitFunction *)\n\nSpecify the implicit function for inside/outside checks.\n"},
  {(char*)"GetImplicitFunction", PyvtkExtractPolyDataGeometry_GetImplicitFunction, METH_VARARGS,
   (char*)"V.GetImplicitFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetImplicitFunction()\n\nSpecify the implicit function for inside/outside checks.\n"},
  {(char*)"SetExtractInside", PyvtkExtractPolyDataGeometry_SetExtractInside, METH_VARARGS,
   (char*)"V.SetExtractInside(int)\nC++: void SetExtractInside(int a)\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {(char*)"GetExtractInside", PyvtkExtractPolyDataGeometry_GetExtractInside, METH_VARARGS,
   (char*)"V.GetExtractInside() -> int\nC++: int GetExtractInside()\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {(char*)"ExtractInsideOn", PyvtkExtractPolyDataGeometry_ExtractInsideOn, METH_VARARGS,
   (char*)"V.ExtractInsideOn()\nC++: void ExtractInsideOn()\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {(char*)"ExtractInsideOff", PyvtkExtractPolyDataGeometry_ExtractInsideOff, METH_VARARGS,
   (char*)"V.ExtractInsideOff()\nC++: void ExtractInsideOff()\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {(char*)"SetExtractBoundaryCells", PyvtkExtractPolyDataGeometry_SetExtractBoundaryCells, METH_VARARGS,
   (char*)"V.SetExtractBoundaryCells(int)\nC++: void SetExtractBoundaryCells(int a)\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {(char*)"GetExtractBoundaryCells", PyvtkExtractPolyDataGeometry_GetExtractBoundaryCells, METH_VARARGS,
   (char*)"V.GetExtractBoundaryCells() -> int\nC++: int GetExtractBoundaryCells()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {(char*)"ExtractBoundaryCellsOn", PyvtkExtractPolyDataGeometry_ExtractBoundaryCellsOn, METH_VARARGS,
   (char*)"V.ExtractBoundaryCellsOn()\nC++: void ExtractBoundaryCellsOn()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {(char*)"ExtractBoundaryCellsOff", PyvtkExtractPolyDataGeometry_ExtractBoundaryCellsOff, METH_VARARGS,
   (char*)"V.ExtractBoundaryCellsOff()\nC++: void ExtractBoundaryCellsOff()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {(char*)"SetPassPoints", PyvtkExtractPolyDataGeometry_SetPassPoints, METH_VARARGS,
   (char*)"V.SetPassPoints(int)\nC++: void SetPassPoints(int a)\n\nBoolean controls whether points are culled or simply passed\nthrough to the output.\n"},
  {(char*)"GetPassPoints", PyvtkExtractPolyDataGeometry_GetPassPoints, METH_VARARGS,
   (char*)"V.GetPassPoints() -> int\nC++: int GetPassPoints()\n\nBoolean controls whether points are culled or simply passed\nthrough to the output.\n"},
  {(char*)"PassPointsOn", PyvtkExtractPolyDataGeometry_PassPointsOn, METH_VARARGS,
   (char*)"V.PassPointsOn()\nC++: void PassPointsOn()\n\nBoolean controls whether points are culled or simply passed\nthrough to the output.\n"},
  {(char*)"PassPointsOff", PyvtkExtractPolyDataGeometry_PassPointsOff, METH_VARARGS,
   (char*)"V.PassPointsOff()\nC++: void PassPointsOff()\n\nBoolean controls whether points are culled or simply passed\nthrough to the output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractPolyDataGeometry_StaticNew()
{
  return vtkExtractPolyDataGeometry::New();
}

PyObject *PyVTKClass_vtkExtractPolyDataGeometryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractPolyDataGeometry_StaticNew,
    PyvtkExtractPolyDataGeometry_Methods,
    "vtkExtractPolyDataGeometry", modulename,
    NULL, NULL,
    PyvtkExtractPolyDataGeometry_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractPolyDataGeometry_Doc()
{
  static const char *docstring[] = {
    "vtkExtractPolyDataGeometry - extract vtkPolyData cells that lies\neither entirely inside or outside of a specified implicit function\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkExtractPolyDataGeometry extracts from its input vtkPolyData all\ncells that are either completely inside or outside of a specified\nimplicit function. This filter is specialized to vtkPolyData. On\noutput the filter generates vtkPolyData.\n\nTo use this filter you must specify an implicit function. You must\nalso specify whether to extract cells laying inside or outside of the\nimplicit function. (The",
    " inside of an implicit function is the\nnegative values region.) An option exists to extract cells that are\nneither inside nor outside (i.e., boundary).\n\nNote that this filter also has the option to directly pass all points\nor cull the points that do not satisfy the implicit function test.\nPassing all points is a tad faster, but then points remain that do\nnot pass the test and may mess up subsequen",
    "t glyphing operations and\nso on. By default points are culled.\n\nA more general version of this filter is available for arbitrary\nvtkDataSet input (see vtkExtractGeometry).\n\nSee Also:\n\nvtkExtractGeometry vtkClipPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractPolyDataGeometry(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractPolyDataGeometryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractPolyDataGeometry", o) != 0)
    {
    Py_DECREF(o);
    }

}

