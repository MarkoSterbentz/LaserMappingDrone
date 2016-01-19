// python wrapper for vtkPVImplicitPlaneRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVImplicitPlaneRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVImplicitPlaneRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVImplicitPlaneRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImplicitPlaneRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkImplicitPlaneRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkImplicitPlaneRepresentationNew
#endif

static const char **PyvtkPVImplicitPlaneRepresentation_Doc();


static PyObject *
PyvtkPVImplicitPlaneRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitPlaneRepresentation *op = static_cast<vtkPVImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVImplicitPlaneRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImplicitPlaneRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitPlaneRepresentation *op = static_cast<vtkPVImplicitPlaneRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVImplicitPlaneRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImplicitPlaneRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitPlaneRepresentation *op = static_cast<vtkPVImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVImplicitPlaneRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVImplicitPlaneRepresentation::NewInstance());

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
PyvtkPVImplicitPlaneRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVImplicitPlaneRepresentation *tempr = vtkPVImplicitPlaneRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImplicitPlaneRepresentation_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitPlaneRepresentation *op = static_cast<vtkPVImplicitPlaneRepresentation *>(vp);

  vtkTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkPVImplicitPlaneRepresentation::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImplicitPlaneRepresentation_ClearTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitPlaneRepresentation *op = static_cast<vtkPVImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearTransform();
      }
    else
      {
      op->vtkPVImplicitPlaneRepresentation::ClearTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImplicitPlaneRepresentation_SetTransformedOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformedOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitPlaneRepresentation *op = static_cast<vtkPVImplicitPlaneRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetTransformedOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVImplicitPlaneRepresentation::SetTransformedOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImplicitPlaneRepresentation_SetTransformedNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformedNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitPlaneRepresentation *op = static_cast<vtkPVImplicitPlaneRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetTransformedNormal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVImplicitPlaneRepresentation::SetTransformedNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImplicitPlaneRepresentation_GetTransformedOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitPlaneRepresentation *op = static_cast<vtkPVImplicitPlaneRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTransformedOrigin() :
      op->vtkPVImplicitPlaneRepresentation::GetTransformedOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImplicitPlaneRepresentation_GetTransformedNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitPlaneRepresentation *op = static_cast<vtkPVImplicitPlaneRepresentation *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTransformedNormal() :
      op->vtkPVImplicitPlaneRepresentation::GetTransformedNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVImplicitPlaneRepresentation_PlaceTransformedWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceTransformedWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitPlaneRepresentation *op = static_cast<vtkPVImplicitPlaneRepresentation *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->PlaceTransformedWidget(temp0);
      }
    else
      {
      op->vtkPVImplicitPlaneRepresentation::PlaceTransformedWidget(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImplicitPlaneRepresentation_UpdateTransformLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTransformLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitPlaneRepresentation *op = static_cast<vtkPVImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateTransformLocation();
      }
    else
      {
      op->vtkPVImplicitPlaneRepresentation::UpdateTransformLocation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVImplicitPlaneRepresentation_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitPlaneRepresentation *op = static_cast<vtkPVImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkPVImplicitPlaneRepresentation::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVImplicitPlaneRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVImplicitPlaneRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVImplicitPlaneRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVImplicitPlaneRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVImplicitPlaneRepresentation\nC++: vtkPVImplicitPlaneRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVImplicitPlaneRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVImplicitPlaneRepresentation\nC++: vtkPVImplicitPlaneRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTransform", PyvtkPVImplicitPlaneRepresentation_SetTransform, METH_VARARGS,
   (char*)"V.SetTransform(vtkTransform)\nC++: void SetTransform(vtkTransform *transform)\n\n"},
  {(char*)"ClearTransform", PyvtkPVImplicitPlaneRepresentation_ClearTransform, METH_VARARGS,
   (char*)"V.ClearTransform()\nC++: void ClearTransform()\n\n"},
  {(char*)"SetTransformedOrigin", PyvtkPVImplicitPlaneRepresentation_SetTransformedOrigin, METH_VARARGS,
   (char*)"V.SetTransformedOrigin(float, float, float)\nC++: void SetTransformedOrigin(double x, double y, double z)\n\n"},
  {(char*)"SetTransformedNormal", PyvtkPVImplicitPlaneRepresentation_SetTransformedNormal, METH_VARARGS,
   (char*)"V.SetTransformedNormal(float, float, float)\nC++: void SetTransformedNormal(double x, double y, double z)\n\n"},
  {(char*)"GetTransformedOrigin", PyvtkPVImplicitPlaneRepresentation_GetTransformedOrigin, METH_VARARGS,
   (char*)"V.GetTransformedOrigin() -> (float, float, float)\nC++: double *GetTransformedOrigin()\n\n"},
  {(char*)"GetTransformedNormal", PyvtkPVImplicitPlaneRepresentation_GetTransformedNormal, METH_VARARGS,
   (char*)"V.GetTransformedNormal() -> (float, float, float)\nC++: double *GetTransformedNormal()\n\n"},
  {(char*)"PlaceTransformedWidget", PyvtkPVImplicitPlaneRepresentation_PlaceTransformedWidget, METH_VARARGS,
   (char*)"V.PlaceTransformedWidget([float, float, float, float, float,\n    float])\nC++: void PlaceTransformedWidget(double bounds[6])\n\n"},
  {(char*)"UpdateTransformLocation", PyvtkPVImplicitPlaneRepresentation_UpdateTransformLocation, METH_VARARGS,
   (char*)"V.UpdateTransformLocation()\nC++: void UpdateTransformLocation()\n\n"},
  {(char*)"Reset", PyvtkPVImplicitPlaneRepresentation_Reset, METH_VARARGS,
   (char*)"V.Reset()\nC++: void Reset()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVImplicitPlaneRepresentation_StaticNew()
{
  return vtkPVImplicitPlaneRepresentation::New();
}

PyObject *PyVTKClass_vtkPVImplicitPlaneRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVImplicitPlaneRepresentation_StaticNew,
    PyvtkPVImplicitPlaneRepresentation_Methods,
    "vtkPVImplicitPlaneRepresentation", modulename,
    NULL, NULL,
    PyvtkPVImplicitPlaneRepresentation_Doc(),
    PyVTKClass_vtkImplicitPlaneRepresentationNew(modulename));
  return cls;
}

const char **PyvtkPVImplicitPlaneRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkPVImplicitPlaneRepresentation - extends\nvtkImplicitPlaneRepresentation\n\n",
    "Superclass: vtkImplicitPlaneRepresentation\n\n",
    "vtkPVImplicitPlaneRepresentation extends\nvtkImplicitPlaneRepresentation to add ParaView proper initialisation\nvalues\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVImplicitPlaneRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVImplicitPlaneRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVImplicitPlaneRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

