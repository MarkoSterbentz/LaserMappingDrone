// python wrapper for vtkHardwareSelectionPolyDataPainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHardwareSelectionPolyDataPainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHardwareSelectionPolyDataPainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHardwareSelectionPolyDataPainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStandardPolyDataPainterNew
extern "C" { PyObject *PyVTKClass_vtkStandardPolyDataPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkStandardPolyDataPainterNew
#endif

static const char **PyvtkHardwareSelectionPolyDataPainter_Doc();


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHardwareSelectionPolyDataPainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHardwareSelectionPolyDataPainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHardwareSelectionPolyDataPainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHardwareSelectionPolyDataPainter::NewInstance());

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
PyvtkHardwareSelectionPolyDataPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHardwareSelectionPolyDataPainter *tempr = vtkHardwareSelectionPolyDataPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_SetEnableSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableSelection(temp0);
      }
    else
      {
      op->vtkHardwareSelectionPolyDataPainter::SetEnableSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_GetEnableSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEnableSelection() :
      op->vtkHardwareSelectionPolyDataPainter::GetEnableSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_EnableSelectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableSelectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableSelectionOn();
      }
    else
      {
      op->vtkHardwareSelectionPolyDataPainter::EnableSelectionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_EnableSelectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableSelectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableSelectionOff();
      }
    else
      {
      op->vtkHardwareSelectionPolyDataPainter::EnableSelectionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_SetPointIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointIdArrayName(temp0);
      }
    else
      {
      op->vtkHardwareSelectionPolyDataPainter::SetPointIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_GetPointIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPointIdArrayName() :
      op->vtkHardwareSelectionPolyDataPainter::GetPointIdArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_SetCellIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellIdArrayName(temp0);
      }
    else
      {
      op->vtkHardwareSelectionPolyDataPainter::SetCellIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_GetCellIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCellIdArrayName() :
      op->vtkHardwareSelectionPolyDataPainter::GetCellIdArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_SetProcessIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessIdArrayName(temp0);
      }
    else
      {
      op->vtkHardwareSelectionPolyDataPainter::SetProcessIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_GetProcessIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetProcessIdArrayName() :
      op->vtkHardwareSelectionPolyDataPainter::GetProcessIdArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_SetCompositeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompositeIdArrayName(temp0);
      }
    else
      {
      op->vtkHardwareSelectionPolyDataPainter::SetCompositeIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_GetCompositeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCompositeIdArrayName() :
      op->vtkHardwareSelectionPolyDataPainter::GetCompositeIdArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHardwareSelectionPolyDataPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkHardwareSelectionPolyDataPainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHardwareSelectionPolyDataPainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHardwareSelectionPolyDataPainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHardwareSelectionPolyDataPainter\nC++: vtkHardwareSelectionPolyDataPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHardwareSelectionPolyDataPainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHardwareSelectionPolyDataPainter\nC++: vtkHardwareSelectionPolyDataPainter *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetEnableSelection", PyvtkHardwareSelectionPolyDataPainter_SetEnableSelection, METH_VARARGS,
   (char*)"V.SetEnableSelection(int)\nC++: void SetEnableSelection(int a)\n\nEnable/Disable vtkHardwareSelector class. Useful when using this\npainter as an internal painter. Default is enabled.\n"},
  {(char*)"GetEnableSelection", PyvtkHardwareSelectionPolyDataPainter_GetEnableSelection, METH_VARARGS,
   (char*)"V.GetEnableSelection() -> int\nC++: int GetEnableSelection()\n\nEnable/Disable vtkHardwareSelector class. Useful when using this\npainter as an internal painter. Default is enabled.\n"},
  {(char*)"EnableSelectionOn", PyvtkHardwareSelectionPolyDataPainter_EnableSelectionOn, METH_VARARGS,
   (char*)"V.EnableSelectionOn()\nC++: void EnableSelectionOn()\n\nEnable/Disable vtkHardwareSelector class. Useful when using this\npainter as an internal painter. Default is enabled.\n"},
  {(char*)"EnableSelectionOff", PyvtkHardwareSelectionPolyDataPainter_EnableSelectionOff, METH_VARARGS,
   (char*)"V.EnableSelectionOff()\nC++: void EnableSelectionOff()\n\nEnable/Disable vtkHardwareSelector class. Useful when using this\npainter as an internal painter. Default is enabled.\n"},
  {(char*)"SetPointIdArrayName", PyvtkHardwareSelectionPolyDataPainter_SetPointIdArrayName, METH_VARARGS,
   (char*)"V.SetPointIdArrayName(string)\nC++: void SetPointIdArrayName(char *)\n\nBy default, this painters uses the dataset's point and cell ids\nduring rendering. However, one can override those by specifying\ncell and point data arrays to use instead. Currently, only\nvtkIdType array is supported. Set to NULL string (default) to use\nthe point ids instead.\n"},
  {(char*)"GetPointIdArrayName", PyvtkHardwareSelectionPolyDataPainter_GetPointIdArrayName, METH_VARARGS,
   (char*)"V.GetPointIdArrayName() -> string\nC++: char *GetPointIdArrayName()\n\nBy default, this painters uses the dataset's point and cell ids\nduring rendering. However, one can override those by specifying\ncell and point data arrays to use instead. Currently, only\nvtkIdType array is supported. Set to NULL string (default) to use\nthe point ids instead.\n"},
  {(char*)"SetCellIdArrayName", PyvtkHardwareSelectionPolyDataPainter_SetCellIdArrayName, METH_VARARGS,
   (char*)"V.SetCellIdArrayName(string)\nC++: void SetCellIdArrayName(char *)\n\nBy default, this painters uses the dataset's point and cell ids\nduring rendering. However, one can override those by specifying\ncell and point data arrays to use instead. Currently, only\nvtkIdType array is supported. Set to NULL string (default) to use\nthe point ids instead.\n"},
  {(char*)"GetCellIdArrayName", PyvtkHardwareSelectionPolyDataPainter_GetCellIdArrayName, METH_VARARGS,
   (char*)"V.GetCellIdArrayName() -> string\nC++: char *GetCellIdArrayName()\n\nBy default, this painters uses the dataset's point and cell ids\nduring rendering. However, one can override those by specifying\ncell and point data arrays to use instead. Currently, only\nvtkIdType array is supported. Set to NULL string (default) to use\nthe point ids instead.\n"},
  {(char*)"SetProcessIdArrayName", PyvtkHardwareSelectionPolyDataPainter_SetProcessIdArrayName, METH_VARARGS,
   (char*)"V.SetProcessIdArrayName(string)\nC++: void SetProcessIdArrayName(char *)\n\nIf the painter should override the process id using a data-array,\nset this variable to the name of the array to use. It must be a\npoint-array.\n"},
  {(char*)"GetProcessIdArrayName", PyvtkHardwareSelectionPolyDataPainter_GetProcessIdArrayName, METH_VARARGS,
   (char*)"V.GetProcessIdArrayName() -> string\nC++: char *GetProcessIdArrayName()\n\nIf the painter should override the process id using a data-array,\nset this variable to the name of the array to use. It must be a\npoint-array.\n"},
  {(char*)"SetCompositeIdArrayName", PyvtkHardwareSelectionPolyDataPainter_SetCompositeIdArrayName, METH_VARARGS,
   (char*)"V.SetCompositeIdArrayName(string)\nC++: void SetCompositeIdArrayName(char *)\n\nGenerally, vtkCompositePainter can render the composite id when\niterating over composite datasets. However in some cases (as in\nAMR), the rendered structure may not correspond to the input\ndata, in which case we need to provide a cell array that can be\nused to render in the composite id in selection passes. Set to\nNULL (default) to not override the composite id color set by\nvtkCompositePainter if any. The array *MUST* be a cell array and\nof type vtkUnsignedIntArray.\n"},
  {(char*)"GetCompositeIdArrayName", PyvtkHardwareSelectionPolyDataPainter_GetCompositeIdArrayName, METH_VARARGS,
   (char*)"V.GetCompositeIdArrayName() -> string\nC++: char *GetCompositeIdArrayName()\n\nGenerally, vtkCompositePainter can render the composite id when\niterating over composite datasets. However in some cases (as in\nAMR), the rendered structure may not correspond to the input\ndata, in which case we need to provide a cell array that can be\nused to render in the composite id in selection passes. Set to\nNULL (default) to not override the composite id color set by\nvtkCompositePainter if any. The array *MUST* be a cell array and\nof type vtkUnsignedIntArray.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHardwareSelectionPolyDataPainter_StaticNew()
{
  return vtkHardwareSelectionPolyDataPainter::New();
}

PyObject *PyVTKClass_vtkHardwareSelectionPolyDataPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHardwareSelectionPolyDataPainter_StaticNew,
    PyvtkHardwareSelectionPolyDataPainter_Methods,
    "vtkHardwareSelectionPolyDataPainter", modulename,
    NULL, NULL,
    PyvtkHardwareSelectionPolyDataPainter_Doc(),
    PyVTKClass_vtkStandardPolyDataPainterNew(modulename));
  return cls;
}

const char **PyvtkHardwareSelectionPolyDataPainter_Doc()
{
  static const char *docstring[] = {
    "vtkHardwareSelectionPolyDataPainter - painter used to render polydata\n\n",
    "Superclass: vtkStandardPolyDataPainter\n\n",
    "vtkHardwareSelectionPolyDataPainter is a painter for polydata used\nwhen rendering hardware selection passes.\n\nSee Also:\n\nvtkHardwareSelector\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHardwareSelectionPolyDataPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHardwareSelectionPolyDataPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHardwareSelectionPolyDataPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

