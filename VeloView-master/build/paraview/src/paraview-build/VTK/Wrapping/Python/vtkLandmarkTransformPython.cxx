// python wrapper for vtkLandmarkTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLandmarkTransform.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLandmarkTransform(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLandmarkTransformNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLinearTransformNew
extern "C" { PyObject *PyVTKClass_vtkLinearTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkLinearTransformNew
#endif

static const char **PyvtkLandmarkTransform_Doc();


static PyObject *
PyvtkLandmarkTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLandmarkTransform::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLandmarkTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLandmarkTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLandmarkTransform::NewInstance());

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
PyvtkLandmarkTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLandmarkTransform *tempr = vtkLandmarkTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetSourceLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetSourceLandmarks(temp0);
      }
    else
      {
      op->vtkLandmarkTransform::SetSourceLandmarks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetTargetLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetTargetLandmarks(temp0);
      }
    else
      {
      op->vtkLandmarkTransform::SetTargetLandmarks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetSourceLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetSourceLandmarks() :
      op->vtkLandmarkTransform::GetSourceLandmarks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetTargetLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetTargetLandmarks() :
      op->vtkLandmarkTransform::GetTargetLandmarks());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMode(temp0);
      }
    else
      {
      op->vtkLandmarkTransform::SetMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetModeToRigidBody(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToRigidBody");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetModeToRigidBody();
      }
    else
      {
      op->vtkLandmarkTransform::SetModeToRigidBody();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetModeToSimilarity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToSimilarity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetModeToSimilarity();
      }
    else
      {
      op->vtkLandmarkTransform::SetModeToSimilarity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_SetModeToAffine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToAffine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetModeToAffine();
      }
    else
      {
      op->vtkLandmarkTransform::SetModeToAffine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkLandmarkTransform::GetMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetModeAsString() :
      op->vtkLandmarkTransform::GetModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Inverse();
      }
    else
      {
      op->vtkLandmarkTransform::Inverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkLandmarkTransform::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLandmarkTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLandmarkTransform *op = static_cast<vtkLandmarkTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkLandmarkTransform::MakeTransform());

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

static PyMethodDef PyvtkLandmarkTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkLandmarkTransform_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLandmarkTransform_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLandmarkTransform_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLandmarkTransform\nC++: vtkLandmarkTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLandmarkTransform_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLandmarkTransform\nC++: vtkLandmarkTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSourceLandmarks", PyvtkLandmarkTransform_SetSourceLandmarks, METH_VARARGS,
   (char*)"V.SetSourceLandmarks(vtkPoints)\nC++: void SetSourceLandmarks(vtkPoints *points)\n\nSpecify the source and target landmark sets. The two sets must\nhave the same number of points.  If you add or change points in\nthese objects, you must call Modified() on them or the\ntransformation might not update.\n"},
  {(char*)"SetTargetLandmarks", PyvtkLandmarkTransform_SetTargetLandmarks, METH_VARARGS,
   (char*)"V.SetTargetLandmarks(vtkPoints)\nC++: void SetTargetLandmarks(vtkPoints *points)\n\nSpecify the source and target landmark sets. The two sets must\nhave the same number of points.  If you add or change points in\nthese objects, you must call Modified() on them or the\ntransformation might not update.\n"},
  {(char*)"GetSourceLandmarks", PyvtkLandmarkTransform_GetSourceLandmarks, METH_VARARGS,
   (char*)"V.GetSourceLandmarks() -> vtkPoints\nC++: vtkPoints *GetSourceLandmarks()\n\nSpecify the source and target landmark sets. The two sets must\nhave the same number of points.  If you add or change points in\nthese objects, you must call Modified() on them or the\ntransformation might not update.\n"},
  {(char*)"GetTargetLandmarks", PyvtkLandmarkTransform_GetTargetLandmarks, METH_VARARGS,
   (char*)"V.GetTargetLandmarks() -> vtkPoints\nC++: vtkPoints *GetTargetLandmarks()\n\nSpecify the source and target landmark sets. The two sets must\nhave the same number of points.  If you add or change points in\nthese objects, you must call Modified() on them or the\ntransformation might not update.\n"},
  {(char*)"SetMode", PyvtkLandmarkTransform_SetMode, METH_VARARGS,
   (char*)"V.SetMode(int)\nC++: void SetMode(int a)\n\nSet the number of degrees of freedom to constrain the solution\nto. Rigidbody (VTK_LANDMARK_RIGIDBODY): rotation and translation\nonly. Similarity (VTK_LANDMARK_SIMILARITY): rotation, translation\nand\n           isotropic scaling. Affine (VTK_LANDMARK_AFFINE):\ncollinearity is preserved.\n       Ratios of distances along a line are preserved. The\ndefault is similarity.\n"},
  {(char*)"SetModeToRigidBody", PyvtkLandmarkTransform_SetModeToRigidBody, METH_VARARGS,
   (char*)"V.SetModeToRigidBody()\nC++: void SetModeToRigidBody()\n\nSet the number of degrees of freedom to constrain the solution\nto. Rigidbody (VTK_LANDMARK_RIGIDBODY): rotation and translation\nonly. Similarity (VTK_LANDMARK_SIMILARITY): rotation, translation\nand\n           isotropic scaling. Affine (VTK_LANDMARK_AFFINE):\ncollinearity is preserved.\n       Ratios of distances along a line are preserved. The\ndefault is similarity.\n"},
  {(char*)"SetModeToSimilarity", PyvtkLandmarkTransform_SetModeToSimilarity, METH_VARARGS,
   (char*)"V.SetModeToSimilarity()\nC++: void SetModeToSimilarity()\n\nSet the number of degrees of freedom to constrain the solution\nto. Rigidbody (VTK_LANDMARK_RIGIDBODY): rotation and translation\nonly. Similarity (VTK_LANDMARK_SIMILARITY): rotation, translation\nand\n           isotropic scaling. Affine (VTK_LANDMARK_AFFINE):\ncollinearity is preserved.\n       Ratios of distances along a line are preserved. The\ndefault is similarity.\n"},
  {(char*)"SetModeToAffine", PyvtkLandmarkTransform_SetModeToAffine, METH_VARARGS,
   (char*)"V.SetModeToAffine()\nC++: void SetModeToAffine()\n\nSet the number of degrees of freedom to constrain the solution\nto. Rigidbody (VTK_LANDMARK_RIGIDBODY): rotation and translation\nonly. Similarity (VTK_LANDMARK_SIMILARITY): rotation, translation\nand\n           isotropic scaling. Affine (VTK_LANDMARK_AFFINE):\ncollinearity is preserved.\n       Ratios of distances along a line are preserved. The\ndefault is similarity.\n"},
  {(char*)"GetMode", PyvtkLandmarkTransform_GetMode, METH_VARARGS,
   (char*)"V.GetMode() -> int\nC++: int GetMode()\n\nGet the current transformation mode.\n"},
  {(char*)"GetModeAsString", PyvtkLandmarkTransform_GetModeAsString, METH_VARARGS,
   (char*)"V.GetModeAsString() -> string\nC++: const char *GetModeAsString()\n\nGet the current transformation mode.\n"},
  {(char*)"Inverse", PyvtkLandmarkTransform_Inverse, METH_VARARGS,
   (char*)"V.Inverse()\nC++: void Inverse()\n\nInvert the transformation.  This is done by switching the source\nand target landmarks.\n"},
  {(char*)"GetMTime", PyvtkLandmarkTransform_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the MTime.\n"},
  {(char*)"MakeTransform", PyvtkLandmarkTransform_MakeTransform, METH_VARARGS,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake another transform of the same type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLandmarkTransform_StaticNew()
{
  return vtkLandmarkTransform::New();
}

PyObject *PyVTKClass_vtkLandmarkTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLandmarkTransform_StaticNew,
    PyvtkLandmarkTransform_Methods,
    "vtkLandmarkTransform", modulename,
    NULL, NULL,
    PyvtkLandmarkTransform_Doc(),
    PyVTKClass_vtkLinearTransformNew(modulename));
  return cls;
}

const char **PyvtkLandmarkTransform_Doc()
{
  static const char *docstring[] = {
    "vtkLandmarkTransform - a linear transform specified by two\ncorresponding point sets\n\n",
    "Superclass: vtkLinearTransform\n\n",
    "A vtkLandmarkTransform is defined by two sets of landmarks, the\ntransform computed gives the best fit mapping one onto the other, in\na least squares sense. The indices are taken to correspond, so point\n1 in the first set will get mapped close to point 1 in the second\nset, etc. Call SetSourceLandmarks and SetTargetLandmarks to specify\nthe two sets of landmarks, ensure they have the same number of\np",
    "oints.\n\nCaveats:\n\nWhenever you add, subtract, or set points you must call Modified() on\nthe vtkPoints object, or the transformation might not update.\n\nSee Also:\n\nvtkLinearTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLandmarkTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLandmarkTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLandmarkTransform", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_LANDMARK_RIGIDBODY", 6 },
        { "VTK_LANDMARK_SIMILARITY", 7 },
        { "VTK_LANDMARK_AFFINE", 12 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

