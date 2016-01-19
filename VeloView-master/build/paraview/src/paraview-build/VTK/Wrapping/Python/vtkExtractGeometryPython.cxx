// python wrapper for vtkExtractGeometry
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractGeometry.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractGeometry(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractGeometryNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkExtractGeometry_Doc();


static PyObject *
PyvtkExtractGeometry_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractGeometry::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractGeometry::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractGeometry *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractGeometry::NewInstance());

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
PyvtkExtractGeometry_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractGeometry *tempr = vtkExtractGeometry::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExtractGeometry::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

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
      op->vtkExtractGeometry::SetImplicitFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetImplicitFunction() :
      op->vtkExtractGeometry::GetImplicitFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_SetExtractInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

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
      op->vtkExtractGeometry::SetExtractInside(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_GetExtractInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetExtractInside() :
      op->vtkExtractGeometry::GetExtractInside());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_ExtractInsideOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractInsideOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractInsideOn();
      }
    else
      {
      op->vtkExtractGeometry::ExtractInsideOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_ExtractInsideOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractInsideOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractInsideOff();
      }
    else
      {
      op->vtkExtractGeometry::ExtractInsideOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_SetExtractBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

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
      op->vtkExtractGeometry::SetExtractBoundaryCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_GetExtractBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetExtractBoundaryCells() :
      op->vtkExtractGeometry::GetExtractBoundaryCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_ExtractBoundaryCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractBoundaryCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractBoundaryCellsOn();
      }
    else
      {
      op->vtkExtractGeometry::ExtractBoundaryCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_ExtractBoundaryCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractBoundaryCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractBoundaryCellsOff();
      }
    else
      {
      op->vtkExtractGeometry::ExtractBoundaryCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_SetExtractOnlyBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractOnlyBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtractOnlyBoundaryCells(temp0);
      }
    else
      {
      op->vtkExtractGeometry::SetExtractOnlyBoundaryCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_GetExtractOnlyBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractOnlyBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetExtractOnlyBoundaryCells() :
      op->vtkExtractGeometry::GetExtractOnlyBoundaryCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_ExtractOnlyBoundaryCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractOnlyBoundaryCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractOnlyBoundaryCellsOn();
      }
    else
      {
      op->vtkExtractGeometry::ExtractOnlyBoundaryCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractGeometry_ExtractOnlyBoundaryCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractOnlyBoundaryCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractOnlyBoundaryCellsOff();
      }
    else
      {
      op->vtkExtractGeometry::ExtractOnlyBoundaryCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractGeometry_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractGeometry_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractGeometry_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractGeometry_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractGeometry\nC++: vtkExtractGeometry *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractGeometry_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractGeometry\nC++: vtkExtractGeometry *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkExtractGeometry_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime taking into account changes to the implicit\nfunction\n"},
  {(char*)"SetImplicitFunction", PyvtkExtractGeometry_SetImplicitFunction, METH_VARARGS,
   (char*)"V.SetImplicitFunction(vtkImplicitFunction)\nC++: virtual void SetImplicitFunction(vtkImplicitFunction *)\n\nSpecify the implicit function for inside/outside checks.\n"},
  {(char*)"GetImplicitFunction", PyvtkExtractGeometry_GetImplicitFunction, METH_VARARGS,
   (char*)"V.GetImplicitFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetImplicitFunction()\n\nSpecify the implicit function for inside/outside checks.\n"},
  {(char*)"SetExtractInside", PyvtkExtractGeometry_SetExtractInside, METH_VARARGS,
   (char*)"V.SetExtractInside(int)\nC++: void SetExtractInside(int a)\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {(char*)"GetExtractInside", PyvtkExtractGeometry_GetExtractInside, METH_VARARGS,
   (char*)"V.GetExtractInside() -> int\nC++: int GetExtractInside()\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {(char*)"ExtractInsideOn", PyvtkExtractGeometry_ExtractInsideOn, METH_VARARGS,
   (char*)"V.ExtractInsideOn()\nC++: void ExtractInsideOn()\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {(char*)"ExtractInsideOff", PyvtkExtractGeometry_ExtractInsideOff, METH_VARARGS,
   (char*)"V.ExtractInsideOff()\nC++: void ExtractInsideOff()\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {(char*)"SetExtractBoundaryCells", PyvtkExtractGeometry_SetExtractBoundaryCells, METH_VARARGS,
   (char*)"V.SetExtractBoundaryCells(int)\nC++: void SetExtractBoundaryCells(int a)\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {(char*)"GetExtractBoundaryCells", PyvtkExtractGeometry_GetExtractBoundaryCells, METH_VARARGS,
   (char*)"V.GetExtractBoundaryCells() -> int\nC++: int GetExtractBoundaryCells()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {(char*)"ExtractBoundaryCellsOn", PyvtkExtractGeometry_ExtractBoundaryCellsOn, METH_VARARGS,
   (char*)"V.ExtractBoundaryCellsOn()\nC++: void ExtractBoundaryCellsOn()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {(char*)"ExtractBoundaryCellsOff", PyvtkExtractGeometry_ExtractBoundaryCellsOff, METH_VARARGS,
   (char*)"V.ExtractBoundaryCellsOff()\nC++: void ExtractBoundaryCellsOff()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {(char*)"SetExtractOnlyBoundaryCells", PyvtkExtractGeometry_SetExtractOnlyBoundaryCells, METH_VARARGS,
   (char*)"V.SetExtractOnlyBoundaryCells(int)\nC++: void SetExtractOnlyBoundaryCells(int a)\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {(char*)"GetExtractOnlyBoundaryCells", PyvtkExtractGeometry_GetExtractOnlyBoundaryCells, METH_VARARGS,
   (char*)"V.GetExtractOnlyBoundaryCells() -> int\nC++: int GetExtractOnlyBoundaryCells()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {(char*)"ExtractOnlyBoundaryCellsOn", PyvtkExtractGeometry_ExtractOnlyBoundaryCellsOn, METH_VARARGS,
   (char*)"V.ExtractOnlyBoundaryCellsOn()\nC++: void ExtractOnlyBoundaryCellsOn()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {(char*)"ExtractOnlyBoundaryCellsOff", PyvtkExtractGeometry_ExtractOnlyBoundaryCellsOff, METH_VARARGS,
   (char*)"V.ExtractOnlyBoundaryCellsOff()\nC++: void ExtractOnlyBoundaryCellsOff()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractGeometry_StaticNew()
{
  return vtkExtractGeometry::New();
}

PyObject *PyVTKClass_vtkExtractGeometryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractGeometry_StaticNew,
    PyvtkExtractGeometry_Methods,
    "vtkExtractGeometry", modulename,
    NULL, NULL,
    PyvtkExtractGeometry_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractGeometry_Doc()
{
  static const char *docstring[] = {
    "vtkExtractGeometry - extract cells that lie either entirely inside or\noutside of a specified implicit function\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkExtractGeometry extracts from its input dataset all cells that are\neither completely inside or outside of a specified implicit function.\nAny type of dataset can be input to this filter. On output the filter\ngenerates an unstructured grid.\n\nTo use this filter you must specify an implicit function. You must\nalso specify whethter to extract cells laying inside or outside of\nthe implicit function. ",
    "(The inside of an implicit function is the\nnegative values region.) An option exists to extract cells that are\nneither inside or outside (i.e., boundary).\n\nA more efficient version of this filter is available for vtkPolyData\ninput. See vtkExtractPolyDataGeometry.\n\nSee Also:\n\nvtkExtractPolyDataGeometry vtkGeometryFilter vtkExtractVOI\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractGeometry(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractGeometryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractGeometry", o) != 0)
    {
    Py_DECREF(o);
    }

}

