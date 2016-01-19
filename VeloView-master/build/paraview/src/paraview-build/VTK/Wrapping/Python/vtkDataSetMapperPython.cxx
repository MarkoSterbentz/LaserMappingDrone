// python wrapper for vtkDataSetMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataSetMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataSetMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataSetMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMapperNew
extern "C" { PyObject *PyVTKClass_vtkMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkMapperNew
#endif

static const char **PyvtkDataSetMapper_Doc();


static PyObject *
PyvtkDataSetMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetMapper *op = static_cast<vtkDataSetMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataSetMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetMapper *op = static_cast<vtkDataSetMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetMapper *op = static_cast<vtkDataSetMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetMapper::NewInstance());

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
PyvtkDataSetMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataSetMapper *tempr = vtkDataSetMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetMapper *op = static_cast<vtkDataSetMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkDataSetMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetMapper_GetPolyDataMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetMapper *op = static_cast<vtkDataSetMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyDataMapper *tempr = (ap.IsBound() ?
      op->GetPolyDataMapper() :
      op->vtkDataSetMapper::GetPolyDataMapper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetMapper *op = static_cast<vtkDataSetMapper *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkDataSetMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetMapper *op = static_cast<vtkDataSetMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDataSetMapper::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetMapper *op = static_cast<vtkDataSetMapper *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkDataSetMapper::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetMapper *op = static_cast<vtkDataSetMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkDataSetMapper::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataSetMapper\nC++: vtkDataSetMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataSetMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataSetMapper\nC++: vtkDataSetMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkDataSetMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkActor)\nC++: void Render(vtkRenderer *ren, vtkActor *act)\n\n"},
  {(char*)"GetPolyDataMapper", PyvtkDataSetMapper_GetPolyDataMapper, METH_VARARGS,
   (char*)"V.GetPolyDataMapper() -> vtkPolyDataMapper\nC++: vtkPolyDataMapper *GetPolyDataMapper()\n\nGet the internal poly data mapper used to map data set to\ngraphics system.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkDataSetMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetMTime", PyvtkDataSetMapper_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the mtime also considering the lookup table.\n"},
  {(char*)"SetInputData", PyvtkDataSetMapper_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkDataSet)\nC++: void SetInputData(vtkDataSet *input)\n\nSet the Input of this mapper.\n"},
  {(char*)"GetInput", PyvtkDataSetMapper_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nSet the Input of this mapper.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataSetMapper_StaticNew()
{
  return vtkDataSetMapper::New();
}

PyObject *PyVTKClass_vtkDataSetMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataSetMapper_StaticNew,
    PyvtkDataSetMapper_Methods,
    "vtkDataSetMapper", modulename,
    NULL, NULL,
    PyvtkDataSetMapper_Doc(),
    PyVTKClass_vtkMapperNew(modulename));
  return cls;
}

const char **PyvtkDataSetMapper_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetMapper - map vtkDataSet and derived classes to graphics\nprimitives\n\n",
    "Superclass: vtkMapper\n\n",
    "vtkDataSetMapper is a mapper to map data sets (i.e., vtkDataSet and\nall derived classes) to graphics primitives. The mapping procedure is\nas follows: all 0D, 1D, and 2D cells are converted into points,\nlines, and polygons/triangle strips and then mapped to the graphics\nsystem. The 2D faces of 3D cells are mapped only if they are used by\nonly one cell, i.e., on the boundary of the data set.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

