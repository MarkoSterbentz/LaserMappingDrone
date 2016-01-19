// python wrapper for vtkPointPicker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPointPicker.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPointPicker(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPointPickerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPickerNew
extern "C" { PyObject *PyVTKClass_vtkPickerNew(const char *); }
#define DECLARED_PyVTKClass_vtkPickerNew
#endif

static const char **PyvtkPointPicker_Doc();


static PyObject *
PyvtkPointPicker_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPointPicker::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointPicker::NewInstance());

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
PyvtkPointPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPointPicker *tempr = vtkPointPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPicker_GetPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointId() :
      op->vtkPointPicker::GetPointId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPicker_SetUseCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseCells(temp0);
      }
    else
      {
      op->vtkPointPicker::SetUseCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointPicker_GetUseCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseCells() :
      op->vtkPointPicker::GetUseCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPicker_UseCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCellsOn();
      }
    else
      {
      op->vtkPointPicker::UseCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointPicker_UseCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCellsOff();
      }
    else
      {
      op->vtkPointPicker::UseCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPointPicker_Methods[] = {
  {(char*)"GetClassName", PyvtkPointPicker_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointPicker_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointPicker_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPointPicker\nC++: vtkPointPicker *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPointPicker_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointPicker\nC++: vtkPointPicker *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetPointId", PyvtkPointPicker_GetPointId, METH_VARARGS,
   (char*)"V.GetPointId() -> int\nC++: vtkIdType GetPointId()\n\nGet the id of the picked point. If PointId = -1, nothing was\npicked.\n"},
  {(char*)"SetUseCells", PyvtkPointPicker_SetUseCells, METH_VARARGS,
   (char*)"V.SetUseCells(int)\nC++: void SetUseCells(int a)\n\nSpecify whether the point search should be based on cell points\nor directly on the point list.\n"},
  {(char*)"GetUseCells", PyvtkPointPicker_GetUseCells, METH_VARARGS,
   (char*)"V.GetUseCells() -> int\nC++: int GetUseCells()\n\nSpecify whether the point search should be based on cell points\nor directly on the point list.\n"},
  {(char*)"UseCellsOn", PyvtkPointPicker_UseCellsOn, METH_VARARGS,
   (char*)"V.UseCellsOn()\nC++: void UseCellsOn()\n\nSpecify whether the point search should be based on cell points\nor directly on the point list.\n"},
  {(char*)"UseCellsOff", PyvtkPointPicker_UseCellsOff, METH_VARARGS,
   (char*)"V.UseCellsOff()\nC++: void UseCellsOff()\n\nSpecify whether the point search should be based on cell points\nor directly on the point list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointPicker_StaticNew()
{
  return vtkPointPicker::New();
}

PyObject *PyVTKClass_vtkPointPickerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointPicker_StaticNew,
    PyvtkPointPicker_Methods,
    "vtkPointPicker", modulename,
    NULL, NULL,
    PyvtkPointPicker_Doc(),
    PyVTKClass_vtkPickerNew(modulename));
  return cls;
}

const char **PyvtkPointPicker_Doc()
{
  static const char *docstring[] = {
    "vtkPointPicker - select a point by shooting a ray into a graphics\nwindow\n\n",
    "Superclass: vtkPicker\n\n",
    "See Also:\n\nvtkPicker vtkCellPicker.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointPicker(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointPickerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointPicker", o) != 0)
    {
    Py_DECREF(o);
    }

}

