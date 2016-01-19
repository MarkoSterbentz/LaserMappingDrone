// python wrapper for vtkSpherePuzzleArrows
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSpherePuzzleArrows.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSpherePuzzleArrows(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSpherePuzzleArrowsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSpherePuzzleArrows_Doc();


static PyObject *
PyvtkSpherePuzzleArrows_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSpherePuzzleArrows::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpherePuzzleArrows::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSpherePuzzleArrows *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpherePuzzleArrows::NewInstance());

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
PyvtkSpherePuzzleArrows_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSpherePuzzleArrows *tempr = vtkSpherePuzzleArrows::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_SetPermutation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPermutation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  int temp0[32];
  const int size0 = 32;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPermutation(temp0);
      }
    else
      {
      op->vtkSpherePuzzleArrows::SetPermutation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSpherePuzzleArrows_SetPermutation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPermutation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  vtkSpherePuzzle *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpherePuzzle"))
    {
    if (ap.IsBound())
      {
      op->SetPermutation(temp0);
      }
    else
      {
      op->vtkSpherePuzzleArrows::SetPermutation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSpherePuzzleArrows_SetPermutation_Methods[] = {
  {NULL, PyvtkSpherePuzzleArrows_SetPermutation_s1, METH_VARARGS,
   (char*)"@O *i"},
  {NULL, PyvtkSpherePuzzleArrows_SetPermutation_s2, METH_VARARGS,
   (char*)"@O *vtkSpherePuzzle"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSpherePuzzleArrows_SetPermutation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSpherePuzzleArrows_SetPermutation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPermutation");
  return NULL;
}



static PyObject *
PyvtkSpherePuzzleArrows_GetPermutation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPermutation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  int sizer = 32;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetPermutation() :
      op->vtkSpherePuzzleArrows::GetPermutation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSpherePuzzleArrows_SetPermutationComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPermutationComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzleArrows *op = static_cast<vtkSpherePuzzleArrows *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPermutationComponent(temp0, temp1);
      }
    else
      {
      op->vtkSpherePuzzleArrows::SetPermutationComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSpherePuzzleArrows_Methods[] = {
  {(char*)"GetClassName", PyvtkSpherePuzzleArrows_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSpherePuzzleArrows_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSpherePuzzleArrows_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSpherePuzzleArrows\nC++: vtkSpherePuzzleArrows *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSpherePuzzleArrows_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSpherePuzzleArrows\nC++: vtkSpherePuzzleArrows *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPermutation", PyvtkSpherePuzzleArrows_SetPermutation, METH_VARARGS,
   (char*)"V.SetPermutation((int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int))\nC++: void SetPermutation(int a[32])\nV.SetPermutation(vtkSpherePuzzle)\nC++: void SetPermutation(vtkSpherePuzzle *puz)\n\nPermutation is an array of puzzle piece ids. Arrows will be\ngenerated for any id that does not contain itself. Permutation[3]\n= 3 will produce no arrow. Permutation[3] = 10 will draw an arrow\nfrom location 3 to 10.\n"},
  {(char*)"GetPermutation", PyvtkSpherePuzzleArrows_GetPermutation, METH_VARARGS,
   (char*)"V.GetPermutation() -> (int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int,\n    int, int, int, int, int, int, int, int, int, int, int, int)\nC++: int *GetPermutation()\n\nPermutation is an array of puzzle piece ids. Arrows will be\ngenerated for any id that does not contain itself. Permutation[3]\n= 3 will produce no arrow. Permutation[3] = 10 will draw an arrow\nfrom location 3 to 10.\n"},
  {(char*)"SetPermutationComponent", PyvtkSpherePuzzleArrows_SetPermutationComponent, METH_VARARGS,
   (char*)"V.SetPermutationComponent(int, int)\nC++: void SetPermutationComponent(int comp, int val)\n\nPermutation is an array of puzzle piece ids. Arrows will be\ngenerated for any id that does not contain itself. Permutation[3]\n= 3 will produce no arrow. Permutation[3] = 10 will draw an arrow\nfrom location 3 to 10.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSpherePuzzleArrows_StaticNew()
{
  return vtkSpherePuzzleArrows::New();
}

PyObject *PyVTKClass_vtkSpherePuzzleArrowsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSpherePuzzleArrows_StaticNew,
    PyvtkSpherePuzzleArrows_Methods,
    "vtkSpherePuzzleArrows", modulename,
    NULL, NULL,
    PyvtkSpherePuzzleArrows_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSpherePuzzleArrows_Doc()
{
  static const char *docstring[] = {
    "vtkSpherePuzzleArrows - Visualize permutation of the sphere puzzle.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSpherePuzzleArrows creates\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSpherePuzzleArrows(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSpherePuzzleArrowsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSpherePuzzleArrows", o) != 0)
    {
    Py_DECREF(o);
    }

}

