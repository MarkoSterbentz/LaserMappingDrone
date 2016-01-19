// python wrapper for vtkStructuredVisibilityConstraint
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStructuredVisibilityConstraint.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStructuredVisibilityConstraint(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStructuredVisibilityConstraintNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkStructuredVisibilityConstraint_Doc();


static PyObject *
PyvtkStructuredVisibilityConstraint_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredVisibilityConstraint *op = static_cast<vtkStructuredVisibilityConstraint *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStructuredVisibilityConstraint::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredVisibilityConstraint_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredVisibilityConstraint *op = static_cast<vtkStructuredVisibilityConstraint *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredVisibilityConstraint::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredVisibilityConstraint_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredVisibilityConstraint *op = static_cast<vtkStructuredVisibilityConstraint *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredVisibilityConstraint *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredVisibilityConstraint::NewInstance());

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
PyvtkStructuredVisibilityConstraint_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStructuredVisibilityConstraint *tempr = vtkStructuredVisibilityConstraint::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredVisibilityConstraint_IsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredVisibilityConstraint *op = static_cast<vtkStructuredVisibilityConstraint *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned char tempr = (ap.IsBound() ?
      op->IsVisible(temp0) :
      op->vtkStructuredVisibilityConstraint::IsVisible(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredVisibilityConstraint_Blank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Blank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredVisibilityConstraint *op = static_cast<vtkStructuredVisibilityConstraint *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Blank(temp0);
      }
    else
      {
      op->vtkStructuredVisibilityConstraint::Blank(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredVisibilityConstraint_UnBlank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredVisibilityConstraint *op = static_cast<vtkStructuredVisibilityConstraint *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UnBlank(temp0);
      }
    else
      {
      op->vtkStructuredVisibilityConstraint::UnBlank(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredVisibilityConstraint_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredVisibilityConstraint *op = static_cast<vtkStructuredVisibilityConstraint *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkStructuredVisibilityConstraint::GetDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredVisibilityConstraint_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredVisibilityConstraint *op = static_cast<vtkStructuredVisibilityConstraint *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkStructuredVisibilityConstraint::Initialize(temp0);
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
PyvtkStructuredVisibilityConstraint_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredVisibilityConstraint *op = static_cast<vtkStructuredVisibilityConstraint *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Allocate();
      }
    else
      {
      op->vtkStructuredVisibilityConstraint::Allocate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredVisibilityConstraint_SetVisibilityById(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibilityById");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredVisibilityConstraint *op = static_cast<vtkStructuredVisibilityConstraint *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->SetVisibilityById(temp0);
      }
    else
      {
      op->vtkStructuredVisibilityConstraint::SetVisibilityById(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredVisibilityConstraint_GetVisibilityById(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibilityById");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredVisibilityConstraint *op = static_cast<vtkStructuredVisibilityConstraint *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetVisibilityById() :
      op->vtkStructuredVisibilityConstraint::GetVisibilityById());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredVisibilityConstraint_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredVisibilityConstraint *op = static_cast<vtkStructuredVisibilityConstraint *>(vp);

  vtkStructuredVisibilityConstraint *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStructuredVisibilityConstraint"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkStructuredVisibilityConstraint::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredVisibilityConstraint_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredVisibilityConstraint *op = static_cast<vtkStructuredVisibilityConstraint *>(vp);

  vtkStructuredVisibilityConstraint *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStructuredVisibilityConstraint"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkStructuredVisibilityConstraint::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredVisibilityConstraint_IsConstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsConstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredVisibilityConstraint *op = static_cast<vtkStructuredVisibilityConstraint *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char tempr = (ap.IsBound() ?
      op->IsConstrained() :
      op->vtkStructuredVisibilityConstraint::IsConstrained());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredVisibilityConstraint_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredVisibilityConstraint_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredVisibilityConstraint_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredVisibilityConstraint_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStructuredVisibilityConstraint\nC++: vtkStructuredVisibilityConstraint *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredVisibilityConstraint_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredVisibilityConstraint\nC++: vtkStructuredVisibilityConstraint *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsVisible", PyvtkStructuredVisibilityConstraint_IsVisible, METH_VARARGS,
   (char*)"V.IsVisible(int) -> int\nC++: unsigned char IsVisible(vtkIdType id)\n\nReturns 1 is the point/cell is visible, 0 otherwise.\n"},
  {(char*)"Blank", PyvtkStructuredVisibilityConstraint_Blank, METH_VARARGS,
   (char*)"V.Blank(int)\nC++: void Blank(vtkIdType id)\n\nSets the visibility flag of the given point/cell off. The first\ntime blank is called, a new visibility array is created if it\ndoesn't exist.\n"},
  {(char*)"UnBlank", PyvtkStructuredVisibilityConstraint_UnBlank, METH_VARARGS,
   (char*)"V.UnBlank(int)\nC++: void UnBlank(vtkIdType id)\n\nSets the visibility flag of the given point/cell on.\n"},
  {(char*)"GetDimensions", PyvtkStructuredVisibilityConstraint_GetDimensions, METH_VARARGS,
   (char*)"V.GetDimensions() -> (int, int, int)\nC++: int *GetDimensions()\n\nGet the dimensions used to initialize the object.\n"},
  {(char*)"Initialize", PyvtkStructuredVisibilityConstraint_Initialize, METH_VARARGS,
   (char*)"V.Initialize([int, int, int])\nC++: void Initialize(int dims[3])\n\nSet the dimensions and set the Initialized flag to 1. Once an\nobject is initialized, it's dimensions can not be changed\nanymore.\n"},
  {(char*)"Allocate", PyvtkStructuredVisibilityConstraint_Allocate, METH_VARARGS,
   (char*)"V.Allocate()\nC++: void Allocate()\n\nAllocates the internal visibility data-structure iff the object\nhas been initialized.\n"},
  {(char*)"SetVisibilityById", PyvtkStructuredVisibilityConstraint_SetVisibilityById, METH_VARARGS,
   (char*)"V.SetVisibilityById(vtkUnsignedCharArray)\nC++: void SetVisibilityById(vtkUnsignedCharArray *vis)\n\nSet/Get the array used to store the visibility flags.\n"},
  {(char*)"GetVisibilityById", PyvtkStructuredVisibilityConstraint_GetVisibilityById, METH_VARARGS,
   (char*)"V.GetVisibilityById() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetVisibilityById()\n\nSet/Get the array used to store the visibility flags.\n"},
  {(char*)"ShallowCopy", PyvtkStructuredVisibilityConstraint_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkStructuredVisibilityConstraint)\nC++: void ShallowCopy(vtkStructuredVisibilityConstraint *src)\n\nCopies the dimensions, the visibility array pointer and the\ninitialized flag.\n"},
  {(char*)"DeepCopy", PyvtkStructuredVisibilityConstraint_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkStructuredVisibilityConstraint)\nC++: void DeepCopy(vtkStructuredVisibilityConstraint *src)\n\nCopies the dimensions, the visibility array and the initialized\nflag.\n"},
  {(char*)"IsConstrained", PyvtkStructuredVisibilityConstraint_IsConstrained, METH_VARARGS,
   (char*)"V.IsConstrained() -> int\nC++: unsigned char IsConstrained()\n\nReturns 0 if there is no visibility array (all cells/points are\nvisible), 0 otherwise.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredVisibilityConstraint_StaticNew()
{
  return vtkStructuredVisibilityConstraint::New();
}

PyObject *PyVTKClass_vtkStructuredVisibilityConstraintNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredVisibilityConstraint_StaticNew,
    PyvtkStructuredVisibilityConstraint_Methods,
    "vtkStructuredVisibilityConstraint", modulename,
    NULL, NULL,
    PyvtkStructuredVisibilityConstraint_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkStructuredVisibilityConstraint_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredVisibilityConstraint - helper object to manage the\n\n",
    "Superclass: vtkObject\n\n",
    "vtkStructuredVisibilityConstraint is a general class to manage a list\nof points/cell marked as invalid or invisible. Currently, it does\nthis by maintaining an unsigned char array associated with\npoints/cells. To conserve memory, this array is allocated only when\nit is needed (when Blank() is called the first time). Make sure to\ncall Initialize() with the right dimensions before calling any\nmethods",
    " that set/get visibility.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredVisibilityConstraint(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredVisibilityConstraintNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredVisibilityConstraint", o) != 0)
    {
    Py_DECREF(o);
    }

}

