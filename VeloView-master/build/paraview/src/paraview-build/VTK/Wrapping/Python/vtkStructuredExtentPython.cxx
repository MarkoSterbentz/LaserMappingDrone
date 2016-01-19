// python wrapper for vtkStructuredExtent
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStructuredExtent.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStructuredExtent(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStructuredExtentNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkStructuredExtent_Doc();


static PyObject *
PyvtkStructuredExtent_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredExtent *op = static_cast<vtkStructuredExtent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStructuredExtent::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredExtent_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredExtent *op = static_cast<vtkStructuredExtent *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredExtent::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredExtent_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredExtent *op = static_cast<vtkStructuredExtent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredExtent *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredExtent::NewInstance());

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
PyvtkStructuredExtent_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStructuredExtent *tempr = vtkStructuredExtent::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredExtent_Clamp(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Clamp");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int *temp1 = NULL;
  int small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  size1 = ap.GetArgSize(1);
  temp1 = small1;
  if (size1 > 4)
    {
    temp1 = new int[size1];
    }

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkStructuredExtent::Clamp(temp0, temp1);

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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkStructuredExtent_StrictlySmaller(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StrictlySmaller");

  int temp0[6];
  const int size0 = 6;
  int temp1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    bool tempr = vtkStructuredExtent::StrictlySmaller(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredExtent_Smaller(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Smaller");

  int temp0[6];
  const int size0 = 6;
  int temp1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    bool tempr = vtkStructuredExtent::Smaller(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredExtent_Grow(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Grow");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkStructuredExtent::Grow(temp0, temp1);

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
PyvtkStructuredExtent_Transform(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Transform");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkStructuredExtent::Transform(temp0, temp1);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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
PyvtkStructuredExtent_GetDimensions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDimensions");

  int temp0[6];
  const int size0 = 6;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    vtkStructuredExtent::GetDimensions(temp0, temp1);

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

static PyMethodDef PyvtkStructuredExtent_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredExtent_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredExtent_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredExtent_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStructuredExtent\nC++: vtkStructuredExtent *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredExtent_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredExtent\nC++: vtkStructuredExtent *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Clamp", PyvtkStructuredExtent_Clamp, METH_VARARGS | METH_STATIC,
   (char*)"V.Clamp([int, int, int, int, int, int], (int, ...))\nC++: static void Clamp(int ext[6], const int wholeExt[])\n\nClamps ext to fit in wholeExt.\n"},
  {(char*)"StrictlySmaller", PyvtkStructuredExtent_StrictlySmaller, METH_VARARGS | METH_STATIC,
   (char*)"V.StrictlySmaller((int, int, int, int, int, int), (int, int, int,\n    int, int, int)) -> bool\nC++: static bool StrictlySmaller(const int ext[6],\n    const int wholeExt[6])\n\nReturns true if ext is fits within wholeExt with atleast 1\ndimension smaller than the wholeExt.\n"},
  {(char*)"Smaller", PyvtkStructuredExtent_Smaller, METH_VARARGS | METH_STATIC,
   (char*)"V.Smaller((int, int, int, int, int, int), (int, int, int, int,\n    int, int)) -> bool\nC++: static bool Smaller(const int ext[6], const int wholeExt[6])\n\nReturns if ext fits within wholeExt. Unline StrictlySmaller, this\nmethod returns true even if ext == wholeExt.\n"},
  {(char*)"Grow", PyvtkStructuredExtent_Grow, METH_VARARGS | METH_STATIC,
   (char*)"V.Grow([int, int, int, int, int, int], int)\nC++: static void Grow(int ext[6], int count)\n\nGrows the ext on each side by the given count.\n"},
  {(char*)"Transform", PyvtkStructuredExtent_Transform, METH_VARARGS | METH_STATIC,
   (char*)"V.Transform([int, int, int, int, int, int], [int, int, int, int,\n    int, int])\nC++: static void Transform(int ext[6], int wholeExt[6])\n\nMakes ext relative to wholeExt.\n"},
  {(char*)"GetDimensions", PyvtkStructuredExtent_GetDimensions, METH_VARARGS | METH_STATIC,
   (char*)"V.GetDimensions((int, int, int, int, int, int), [int, int, int])\nC++: static void GetDimensions(const int ext[6], int dims[3])\n\nGiven the extents, computes the dimensions.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredExtent_StaticNew()
{
  return vtkStructuredExtent::New();
}

PyObject *PyVTKClass_vtkStructuredExtentNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredExtent_StaticNew,
    PyvtkStructuredExtent_Methods,
    "vtkStructuredExtent", modulename,
    NULL, NULL,
    PyvtkStructuredExtent_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkStructuredExtent_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredExtent - helper class to aid working with structured\n\n",
    "Superclass: vtkObject\n\n",
    "vtkStructuredExtent is an helper class that helps in arithmetic with\n structured extents. It defines a bunch of static methods (most of\nwhich are\n inlined) to aid in dealing with extents.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredExtent(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredExtentNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredExtent", o) != 0)
    {
    Py_DECREF(o);
    }

}

