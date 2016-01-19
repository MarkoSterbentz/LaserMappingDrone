// python wrapper for vtkIdentityTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkIdentityTransform.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkIdentityTransform(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkIdentityTransformNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLinearTransformNew
extern "C" { PyObject *PyVTKClass_vtkLinearTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkLinearTransformNew
#endif

static const char **PyvtkIdentityTransform_Doc();


static PyObject *
PyvtkIdentityTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkIdentityTransform::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdentityTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIdentityTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdentityTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdentityTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIdentityTransform::NewInstance());

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
PyvtkIdentityTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkIdentityTransform *tempr = vtkIdentityTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdentityTransform_TransformPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  vtkPoints *temp0 = NULL;
  vtkPoints *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->TransformPoints(temp0, temp1);
      }
    else
      {
      op->vtkIdentityTransform::TransformPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdentityTransform_TransformNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->TransformNormals(temp0, temp1);
      }
    else
      {
      op->vtkIdentityTransform::TransformNormals(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdentityTransform_TransformVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->TransformVectors(temp0, temp1);
      }
    else
      {
      op->vtkIdentityTransform::TransformVectors(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdentityTransform_TransformPointsNormalsVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPointsNormalsVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  vtkPoints *temp0 = NULL;
  vtkPoints *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  vtkDataArray *temp3 = NULL;
  vtkDataArray *temp4 = NULL;
  vtkDataArray *temp5 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetVTKObject(temp4, "vtkDataArray") &&
      ap.GetVTKObject(temp5, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->TransformPointsNormalsVectors(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkIdentityTransform::TransformPointsNormalsVectors(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdentityTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Inverse();
      }
    else
      {
      op->vtkIdentityTransform::Inverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdentityTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InternalTransformPoint(temp0, temp1);
      }
    else
      {
      op->vtkIdentityTransform::InternalTransformPoint(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdentityTransform_InternalTransformNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InternalTransformNormal(temp0, temp1);
      }
    else
      {
      op->vtkIdentityTransform::InternalTransformNormal(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdentityTransform_InternalTransformVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InternalTransformVector(temp0, temp1);
      }
    else
      {
      op->vtkIdentityTransform::InternalTransformVector(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdentityTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3][3];
  double save2[3][3];
  static int size2[2] = { 3, 3 };
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(*temp2, *save2, size2[0]*size2[1]);

    if (ap.IsBound())
      {
      op->InternalTransformDerivative(temp0, temp1, temp2);
      }
    else
      {
      op->vtkIdentityTransform::InternalTransformDerivative(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(2, *temp2, 2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdentityTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdentityTransform *op = static_cast<vtkIdentityTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkIdentityTransform::MakeTransform());

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

static PyMethodDef PyvtkIdentityTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkIdentityTransform_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIdentityTransform_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIdentityTransform_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkIdentityTransform\nC++: vtkIdentityTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIdentityTransform_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIdentityTransform\nC++: vtkIdentityTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"TransformPoints", PyvtkIdentityTransform_TransformPoints, METH_VARARGS,
   (char*)"V.TransformPoints(vtkPoints, vtkPoints)\nC++: void TransformPoints(vtkPoints *inPts, vtkPoints *outPts)\n\nApply the transformation to a series of points, and append the\nresults to outPts.\n"},
  {(char*)"TransformNormals", PyvtkIdentityTransform_TransformNormals, METH_VARARGS,
   (char*)"V.TransformNormals(vtkDataArray, vtkDataArray)\nC++: void TransformNormals(vtkDataArray *inNms,\n    vtkDataArray *outNms)\n\nApply the transformation to a series of normals, and append the\nresults to outNms.\n"},
  {(char*)"TransformVectors", PyvtkIdentityTransform_TransformVectors, METH_VARARGS,
   (char*)"V.TransformVectors(vtkDataArray, vtkDataArray)\nC++: void TransformVectors(vtkDataArray *inVrs,\n    vtkDataArray *outVrs)\n\nApply the transformation to a series of vectors, and append the\nresults to outVrs.\n"},
  {(char*)"TransformPointsNormalsVectors", PyvtkIdentityTransform_TransformPointsNormalsVectors, METH_VARARGS,
   (char*)"V.TransformPointsNormalsVectors(vtkPoints, vtkPoints,\n    vtkDataArray, vtkDataArray, vtkDataArray, vtkDataArray)\nC++: void TransformPointsNormalsVectors(vtkPoints *inPts,\n    vtkPoints *outPts, vtkDataArray *inNms, vtkDataArray *outNms,\n    vtkDataArray *inVrs, vtkDataArray *outVrs)\n\nApply the transformation to a combination of points, normals and\nvectors.\n"},
  {(char*)"Inverse", PyvtkIdentityTransform_Inverse, METH_VARARGS,
   (char*)"V.Inverse()\nC++: void Inverse()\n\n"},
  {(char*)"InternalTransformPoint", PyvtkIdentityTransform_InternalTransformPoint, METH_VARARGS,
   (char*)"V.InternalTransformPoint((float, float, float), [float, float,\n    float])\nC++: void InternalTransformPoint(const double in[3],\n    double out[3])\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {(char*)"InternalTransformNormal", PyvtkIdentityTransform_InternalTransformNormal, METH_VARARGS,
   (char*)"V.InternalTransformNormal((float, float, float), [float, float,\n    float])\nC++: void InternalTransformNormal(const double in[3],\n    double out[3])\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {(char*)"InternalTransformVector", PyvtkIdentityTransform_InternalTransformVector, METH_VARARGS,
   (char*)"V.InternalTransformVector((float, float, float), [float, float,\n    float])\nC++: void InternalTransformVector(const double in[3],\n    double out[3])\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {(char*)"InternalTransformDerivative", PyvtkIdentityTransform_InternalTransformDerivative, METH_VARARGS,
   (char*)"V.InternalTransformDerivative((float, float, float), [float,\n    float, float], [[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3])\n\nThis will calculate the transformation as well as its derivative\nwithout calling Update.  Meant for use only within other VTK\nclasses.\n"},
  {(char*)"MakeTransform", PyvtkIdentityTransform_MakeTransform, METH_VARARGS,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake a transform of the same type.  This will actually return the\nsame transform.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIdentityTransform_StaticNew()
{
  return vtkIdentityTransform::New();
}

PyObject *PyVTKClass_vtkIdentityTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIdentityTransform_StaticNew,
    PyvtkIdentityTransform_Methods,
    "vtkIdentityTransform", modulename,
    NULL, NULL,
    PyvtkIdentityTransform_Doc(),
    PyVTKClass_vtkLinearTransformNew(modulename));
  return cls;
}

const char **PyvtkIdentityTransform_Doc()
{
  static const char *docstring[] = {
    "vtkIdentityTransform - a transform that doesn't do anything\n\n",
    "Superclass: vtkLinearTransform\n\n",
    "vtkIdentityTransform is a transformation which will simply pass\ncoordinate data unchanged.  All other transform types can also do\nthis, however, the vtkIdentityTransform does so with much greater\nefficiency.\n\nSee Also:\n\nvtkLinearTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIdentityTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIdentityTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIdentityTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

