// python wrapper for vtkMatrixToLinearTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMatrixToLinearTransform.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMatrixToLinearTransform(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMatrixToLinearTransformNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLinearTransformNew
extern "C" { PyObject *PyVTKClass_vtkLinearTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkLinearTransformNew
#endif

static const char **PyvtkMatrixToLinearTransform_Doc();


static PyObject *
PyvtkMatrixToLinearTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMatrixToLinearTransform::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToLinearTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMatrixToLinearTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToLinearTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrixToLinearTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMatrixToLinearTransform::NewInstance());

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
PyvtkMatrixToLinearTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMatrixToLinearTransform *tempr = vtkMatrixToLinearTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToLinearTransform_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

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
      op->vtkMatrixToLinearTransform::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToLinearTransform_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkMatrixToLinearTransform::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToLinearTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Inverse();
      }
    else
      {
      op->vtkMatrixToLinearTransform::Inverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToLinearTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMatrixToLinearTransform::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixToLinearTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixToLinearTransform *op = static_cast<vtkMatrixToLinearTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkMatrixToLinearTransform::MakeTransform());

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

static PyMethodDef PyvtkMatrixToLinearTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkMatrixToLinearTransform_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMatrixToLinearTransform_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMatrixToLinearTransform_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMatrixToLinearTransform\nC++: vtkMatrixToLinearTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMatrixToLinearTransform_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMatrixToLinearTransform\nC++: vtkMatrixToLinearTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInput", PyvtkMatrixToLinearTransform_SetInput, METH_VARARGS,
   (char*)"V.SetInput(vtkMatrix4x4)\nC++: virtual void SetInput(vtkMatrix4x4 *)\n\nSet the input matrix.  Any modifications to the matrix will be\nreflected in the transformation.\n"},
  {(char*)"GetInput", PyvtkMatrixToLinearTransform_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetInput()\n\nSet the input matrix.  Any modifications to the matrix will be\nreflected in the transformation.\n"},
  {(char*)"Inverse", PyvtkMatrixToLinearTransform_Inverse, METH_VARARGS,
   (char*)"V.Inverse()\nC++: void Inverse()\n\nThe input matrix is left as-is, but the transformation matrix is\ninverted.\n"},
  {(char*)"GetMTime", PyvtkMatrixToLinearTransform_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the MTime: this is the bit of magic that makes everything\nwork.\n"},
  {(char*)"MakeTransform", PyvtkMatrixToLinearTransform_MakeTransform, METH_VARARGS,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake a new transform of the same type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMatrixToLinearTransform_StaticNew()
{
  return vtkMatrixToLinearTransform::New();
}

PyObject *PyVTKClass_vtkMatrixToLinearTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMatrixToLinearTransform_StaticNew,
    PyvtkMatrixToLinearTransform_Methods,
    "vtkMatrixToLinearTransform", modulename,
    NULL, NULL,
    PyvtkMatrixToLinearTransform_Doc(),
    PyVTKClass_vtkLinearTransformNew(modulename));
  return cls;
}

const char **PyvtkMatrixToLinearTransform_Doc()
{
  static const char *docstring[] = {
    "vtkMatrixToLinearTransform - convert a matrix to a transform\n\n",
    "Superclass: vtkLinearTransform\n\n",
    "This is a very simple class which allows a vtkMatrix4x4 to be used in\nplace of a vtkLinearTransform or vtkAbstractTransform.  For example,\nif you use it as a proxy between a matrix and\nvtkTransformPolyDataFilter then any modifications to the matrix will\nautomatically be reflected in the output of the filter.\n\nSee Also:\n\nvtkTransform vtkMatrix4x4 vtkMatrixToHomogeneousTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMatrixToLinearTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMatrixToLinearTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMatrixToLinearTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

