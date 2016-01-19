// python wrapper for vtkOutlineRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOutlineRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOutlineRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOutlineRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGeometryRepresentationWithFacesNew
extern "C" { PyObject *PyVTKClass_vtkGeometryRepresentationWithFacesNew(const char *); }
#define DECLARED_PyVTKClass_vtkGeometryRepresentationWithFacesNew
#endif

static const char **PyvtkOutlineRepresentation_Doc();


static PyObject *
PyvtkOutlineRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineRepresentation *op = static_cast<vtkOutlineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOutlineRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineRepresentation *op = static_cast<vtkOutlineRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOutlineRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineRepresentation *op = static_cast<vtkOutlineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOutlineRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOutlineRepresentation::NewInstance());

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
PyvtkOutlineRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOutlineRepresentation *tempr = vtkOutlineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineRepresentation_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineRepresentation *op = static_cast<vtkOutlineRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkOutlineRepresentation::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineRepresentation_SetUseOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineRepresentation *op = static_cast<vtkOutlineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOutline(temp0);
      }
    else
      {
      op->vtkOutlineRepresentation::SetUseOutline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineRepresentation_SetSuppressLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuppressLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineRepresentation *op = static_cast<vtkOutlineRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSuppressLOD(temp0);
      }
    else
      {
      op->vtkOutlineRepresentation::SetSuppressLOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineRepresentation_SetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineRepresentation *op = static_cast<vtkOutlineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPickable(temp0);
      }
    else
      {
      op->vtkOutlineRepresentation::SetPickable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOutlineRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkOutlineRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOutlineRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOutlineRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOutlineRepresentation\nC++: vtkOutlineRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOutlineRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOutlineRepresentation\nC++: vtkOutlineRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRepresentation", PyvtkOutlineRepresentation_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(string)\nC++: virtual void SetRepresentation(const char *)\n\n"},
  {(char*)"SetUseOutline", PyvtkOutlineRepresentation_SetUseOutline, METH_VARARGS,
   (char*)"V.SetUseOutline(int)\nC++: virtual void SetUseOutline(int)\n\n"},
  {(char*)"SetSuppressLOD", PyvtkOutlineRepresentation_SetSuppressLOD, METH_VARARGS,
   (char*)"V.SetSuppressLOD(bool)\nC++: virtual void SetSuppressLOD(bool)\n\n"},
  {(char*)"SetPickable", PyvtkOutlineRepresentation_SetPickable, METH_VARARGS,
   (char*)"V.SetPickable(int)\nC++: virtual void SetPickable(int)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOutlineRepresentation_StaticNew()
{
  return vtkOutlineRepresentation::New();
}

PyObject *PyVTKClass_vtkOutlineRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOutlineRepresentation_StaticNew,
    PyvtkOutlineRepresentation_Methods,
    "vtkOutlineRepresentation", modulename,
    NULL, NULL,
    PyvtkOutlineRepresentation_Doc(),
    PyVTKClass_vtkGeometryRepresentationWithFacesNew(modulename));
  return cls;
}

const char **PyvtkOutlineRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkOutlineRepresentation - representation for outline.\n\n",
    "Superclass: vtkGeometryRepresentationWithFaces\n\n",
    "vtkOutlineRepresentation is merely a\nvtkGeometryRepresentationWithFaces that forces the geometry filter to\nproduce outlines.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOutlineRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOutlineRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOutlineRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

