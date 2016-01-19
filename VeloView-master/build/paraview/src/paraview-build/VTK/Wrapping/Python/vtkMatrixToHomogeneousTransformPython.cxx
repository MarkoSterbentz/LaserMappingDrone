// python wrapper for vtkMatrixToHomogeneousTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMatrixToHomogeneousTransform.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMatrixToHomogeneousTransform(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMatrixToHomogeneousTransformNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkHomogeneousTransformNew
extern "C" { PyObject *PyVTKClass_vtkHomogeneousTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkHomogeneousTransformNew
#endif

static const char **PyvtkMatrixToHomogeneousTransform_Doc();


static PyObject *
PyvtkMatrixToHomogeneousTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToHomogeneousTransform *op = static_cast<vtkMatrixToHomogeneousTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMatrixToHomogeneousTransform::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToHomogeneousTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToHomogeneousTransform *op = static_cast<vtkMatrixToHomogeneousTransform *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMatrixToHomogeneousTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToHomogeneousTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToHomogeneousTransform *op = static_cast<vtkMatrixToHomogeneousTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrixToHomogeneousTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMatrixToHomogeneousTransform::NewInstance());

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
PyvtkMatrixToHomogeneousTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMatrixToHomogeneousTransform *tempr = vtkMatrixToHomogeneousTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToHomogeneousTransform_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToHomogeneousTransform *op = static_cast<vtkMatrixToHomogeneousTransform *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkMatrixToHomogeneousTransform::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToHomogeneousTransform_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToHomogeneousTransform *op = static_cast<vtkMatrixToHomogeneousTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkMatrixToHomogeneousTransform::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToHomogeneousTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToHomogeneousTransform *op = static_cast<vtkMatrixToHomogeneousTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Inverse();
      }
    else
      {
      op->vtkMatrixToHomogeneousTransform::Inverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToHomogeneousTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToHomogeneousTransform *op = static_cast<vtkMatrixToHomogeneousTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMatrixToHomogeneousTransform::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToHomogeneousTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToHomogeneousTransform *op = static_cast<vtkMatrixToHomogeneousTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkMatrixToHomogeneousTransform::MakeTransform());

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

static PyMethodDef PyvtkMatrixToHomogeneousTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkMatrixToHomogeneousTransform_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMatrixToHomogeneousTransform_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMatrixToHomogeneousTransform_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMatrixToHomogeneousTransform\nC++: vtkMatrixToHomogeneousTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMatrixToHomogeneousTransform_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMatrixToHomogeneousTransform\nC++: vtkMatrixToHomogeneousTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInput", PyvtkMatrixToHomogeneousTransform_SetInput, METH_VARARGS,
   (char*)"V.SetInput(vtkMatrix4x4)\nC++: virtual void SetInput(vtkMatrix4x4 *)\n\n"},
  {(char*)"GetInput", PyvtkMatrixToHomogeneousTransform_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetInput()\n\n"},
  {(char*)"Inverse", PyvtkMatrixToHomogeneousTransform_Inverse, METH_VARARGS,
   (char*)"V.Inverse()\nC++: void Inverse()\n\nThe input matrix is left as-is, but the transformation matrix is\ninverted.\n"},
  {(char*)"GetMTime", PyvtkMatrixToHomogeneousTransform_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the MTime: this is the bit of magic that makes everything\nwork.\n"},
  {(char*)"MakeTransform", PyvtkMatrixToHomogeneousTransform_MakeTransform, METH_VARARGS,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake a new transform of the same type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMatrixToHomogeneousTransform_StaticNew()
{
  return vtkMatrixToHomogeneousTransform::New();
}

PyObject *PyVTKClass_vtkMatrixToHomogeneousTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMatrixToHomogeneousTransform_StaticNew,
    PyvtkMatrixToHomogeneousTransform_Methods,
    "vtkMatrixToHomogeneousTransform", modulename,
    NULL, NULL,
    PyvtkMatrixToHomogeneousTransform_Doc(),
    PyVTKClass_vtkHomogeneousTransformNew(modulename));
  return cls;
}

const char **PyvtkMatrixToHomogeneousTransform_Doc()
{
  static const char *docstring[] = {
    "vtkMatrixToHomogeneousTransform - convert a matrix to a transform\n\n",
    "Superclass: vtkHomogeneousTransform\n\n",
    "This is a very simple class which allows a vtkMatrix4x4 to be used in\nplace of a vtkHomogeneousTransform or vtkAbstractTransform.  For\nexample, if you use it as a proxy between a matrix and\nvtkTransformPolyDataFilter then any modifications to the matrix will\nautomatically be reflected in the output of the filter.\n\nSee Also:\n\nvtkPerspectiveTransform vtkMatrix4x4 vtkMatrixToLinearTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMatrixToHomogeneousTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMatrixToHomogeneousTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMatrixToHomogeneousTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

