// python wrapper for vtkPVHardwareSelector
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVHardwareSelector.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVHardwareSelector(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVHardwareSelectorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkOpenGLHardwareSelectorNew
extern "C" { PyObject *PyVTKClass_vtkOpenGLHardwareSelectorNew(const char *); }
#define DECLARED_PyVTKClass_vtkOpenGLHardwareSelectorNew
#endif

static const char **PyvtkPVHardwareSelector_Doc();


static PyObject *
PyvtkPVHardwareSelector_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVHardwareSelector::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVHardwareSelector::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVHardwareSelector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVHardwareSelector::NewInstance());

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
PyvtkPVHardwareSelector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVHardwareSelector *tempr = vtkPVHardwareSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_Select(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  int temp0[4];
  int save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkSelection *tempr = (ap.IsBound() ?
      op->Select(temp0) :
      op->vtkPVHardwareSelector::Select(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_PolygonSelect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolygonSelect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkSelection *tempr = (ap.IsBound() ?
      op->PolygonSelect(temp0, temp1) :
      op->vtkPVHardwareSelector::PolygonSelect(temp0, temp1));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_NeedToRenderForSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToRenderForSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->NeedToRenderForSelection() :
      op->vtkPVHardwareSelector::NeedToRenderForSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_InvalidateCachedSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateCachedSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InvalidateCachedSelection();
      }
    else
      {
      op->vtkPVHardwareSelector::InvalidateCachedSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_AssignUniqueId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignUniqueId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    int tempr = (ap.IsBound() ?
      op->AssignUniqueId(temp0) :
      op->vtkPVHardwareSelector::AssignUniqueId(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVHardwareSelector_SetSynchronizedWindows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSynchronizedWindows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHardwareSelector *op = static_cast<vtkPVHardwareSelector *>(vp);

  vtkPVSynchronizedRenderWindows *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVSynchronizedRenderWindows"))
    {
    if (ap.IsBound())
      {
      op->SetSynchronizedWindows(temp0);
      }
    else
      {
      op->vtkPVHardwareSelector::SetSynchronizedWindows(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVHardwareSelector_Methods[] = {
  {(char*)"GetClassName", PyvtkPVHardwareSelector_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVHardwareSelector_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVHardwareSelector_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVHardwareSelector\nC++: vtkPVHardwareSelector *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVHardwareSelector_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVHardwareSelector\nC++: vtkPVHardwareSelector *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Select", PyvtkPVHardwareSelector_Select, METH_VARARGS,
   (char*)"V.Select([int, int, int, int]) -> vtkSelection\nC++: vtkSelection *Select(int region[4])\n\nOverridden to avoid clearing of captured buffers.\n"},
  {(char*)"PolygonSelect", PyvtkPVHardwareSelector_PolygonSelect, METH_VARARGS,
   (char*)"V.PolygonSelect([int, ...], int) -> vtkSelection\nC++: vtkSelection *PolygonSelect(int *polygonPoints,\n    vtkIdType count)\n\nSame as Select() above, except this one use a polygon, instead of\na rectangle region, and select elements inside the polygon\n"},
  {(char*)"NeedToRenderForSelection", PyvtkPVHardwareSelector_NeedToRenderForSelection, METH_VARARGS,
   (char*)"V.NeedToRenderForSelection() -> bool\nC++: virtual bool NeedToRenderForSelection()\n\nReturns true when the next call to Select() will result in\nrenders to capture the selection-buffers.\n"},
  {(char*)"InvalidateCachedSelection", PyvtkPVHardwareSelector_InvalidateCachedSelection, METH_VARARGS,
   (char*)"V.InvalidateCachedSelection()\nC++: void InvalidateCachedSelection()\n\nCalled to invalidate the cache.\n"},
  {(char*)"AssignUniqueId", PyvtkPVHardwareSelector_AssignUniqueId, METH_VARARGS,
   (char*)"V.AssignUniqueId(vtkProp) -> int\nC++: int AssignUniqueId(vtkProp *)\n\n"},
  {(char*)"SetSynchronizedWindows", PyvtkPVHardwareSelector_SetSynchronizedWindows, METH_VARARGS,
   (char*)"V.SetSynchronizedWindows(vtkPVSynchronizedRenderWindows)\nC++: void SetSynchronizedWindows(vtkPVSynchronizedRenderWindows *)\n\nSet the vtkPVSynchronizedRenderWindows instance. This is used to\ncommunicate between all active processes.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVHardwareSelector_StaticNew()
{
  return vtkPVHardwareSelector::New();
}

PyObject *PyVTKClass_vtkPVHardwareSelectorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVHardwareSelector_StaticNew,
    PyvtkPVHardwareSelector_Methods,
    "vtkPVHardwareSelector", modulename,
    NULL, NULL,
    PyvtkPVHardwareSelector_Doc(),
    PyVTKClass_vtkOpenGLHardwareSelectorNew(modulename));
  return cls;
}

const char **PyvtkPVHardwareSelector_Doc()
{
  static const char *docstring[] = {
    "vtkPVHardwareSelector - vtkHardwareSelector subclass with paraview\n\n",
    "Superclass: vtkOpenGLHardwareSelector\n\n",
    "vtkHardwareSelector is subclass of vtkHardwareSelector that adds\nlogic to reuse the captured buffers as much as possible. Thus\navoiding repeated selection-rendering of repeated selections or\npicking. This class does not know, however, when the cached buffers\nare invalid. External logic must explicitly calls\nInvalidateCachedSelection() to ensure that the cache is not reused.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVHardwareSelector(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVHardwareSelectorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVHardwareSelector", o) != 0)
    {
    Py_DECREF(o);
    }

}

