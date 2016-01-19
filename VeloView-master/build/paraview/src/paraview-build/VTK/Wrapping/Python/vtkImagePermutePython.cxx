// python wrapper for vtkImagePermute
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImagePermute.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImagePermute(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImagePermuteNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageResliceNew
extern "C" { PyObject *PyVTKClass_vtkImageResliceNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageResliceNew
#endif

static const char **PyvtkImagePermute_Doc();


static PyObject *
PyvtkImagePermute_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePermute *op = static_cast<vtkImagePermute *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImagePermute::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePermute_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePermute *op = static_cast<vtkImagePermute *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImagePermute::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePermute_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePermute *op = static_cast<vtkImagePermute *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImagePermute *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImagePermute::NewInstance());

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
PyvtkImagePermute_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImagePermute *tempr = vtkImagePermute::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePermute_SetFilteredAxes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilteredAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePermute *op = static_cast<vtkImagePermute *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetFilteredAxes(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImagePermute::SetFilteredAxes(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImagePermute_SetFilteredAxes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilteredAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePermute *op = static_cast<vtkImagePermute *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetFilteredAxes(temp0);
      }
    else
      {
      op->vtkImagePermute::SetFilteredAxes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImagePermute_SetFilteredAxes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImagePermute_SetFilteredAxes_s1(self, args);
    case 1:
      return PyvtkImagePermute_SetFilteredAxes_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetFilteredAxes");
  return NULL;
}



static PyObject *
PyvtkImagePermute_GetFilteredAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilteredAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePermute *op = static_cast<vtkImagePermute *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetFilteredAxes() :
      op->vtkImagePermute::GetFilteredAxes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImagePermute_Methods[] = {
  {(char*)"GetClassName", PyvtkImagePermute_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImagePermute_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImagePermute_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImagePermute\nC++: vtkImagePermute *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImagePermute_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImagePermute\nC++: vtkImagePermute *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFilteredAxes", PyvtkImagePermute_SetFilteredAxes, METH_VARARGS,
   (char*)"V.SetFilteredAxes(int, int, int)\nC++: void SetFilteredAxes(int x, int y, int z)\nV.SetFilteredAxes((int, int, int))\nC++: void SetFilteredAxes(const int xyz[3])\n\nThe filtered axes are the input axes that get relabeled to X,Y,Z.\n"},
  {(char*)"GetFilteredAxes", PyvtkImagePermute_GetFilteredAxes, METH_VARARGS,
   (char*)"V.GetFilteredAxes() -> (int, int, int)\nC++: int *GetFilteredAxes()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImagePermute_StaticNew()
{
  return vtkImagePermute::New();
}

PyObject *PyVTKClass_vtkImagePermuteNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImagePermute_StaticNew,
    PyvtkImagePermute_Methods,
    "vtkImagePermute", modulename,
    NULL, NULL,
    PyvtkImagePermute_Doc(),
    PyVTKClass_vtkImageResliceNew(modulename));
  return cls;
}

const char **PyvtkImagePermute_Doc()
{
  static const char *docstring[] = {
    "vtkImagePermute -  Permutes axes of input.\n\n",
    "Superclass: vtkImageReslice\n\n",
    "vtkImagePermute reorders the axes of the input. Filtered axes specify\nthe input axes which become X, Y, Z.  The input has to have the same\nscalar type of the output. The filter does copy the data when it\nexecutes. This filter is actually a very thin wrapper around\nvtkImageReslice.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImagePermute(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImagePermuteNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImagePermute", o) != 0)
    {
    Py_DECREF(o);
    }

}

