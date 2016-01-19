// python wrapper for vtkImageExtractComponents
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageExtractComponents.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageExtractComponents(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageExtractComponentsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageExtractComponents_Doc();


static PyObject *
PyvtkImageExtractComponents_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExtractComponents *op = static_cast<vtkImageExtractComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageExtractComponents::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExtractComponents_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExtractComponents *op = static_cast<vtkImageExtractComponents *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageExtractComponents::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExtractComponents_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExtractComponents *op = static_cast<vtkImageExtractComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageExtractComponents *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageExtractComponents::NewInstance());

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
PyvtkImageExtractComponents_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageExtractComponents *tempr = vtkImageExtractComponents::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExtractComponents_SetComponents_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExtractComponents *op = static_cast<vtkImageExtractComponents *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComponents(temp0);
      }
    else
      {
      op->vtkImageExtractComponents::SetComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageExtractComponents_SetComponents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExtractComponents *op = static_cast<vtkImageExtractComponents *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetComponents(temp0, temp1);
      }
    else
      {
      op->vtkImageExtractComponents::SetComponents(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageExtractComponents_SetComponents_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExtractComponents *op = static_cast<vtkImageExtractComponents *>(vp);

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
      op->SetComponents(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageExtractComponents::SetComponents(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageExtractComponents_SetComponents(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageExtractComponents_SetComponents_s1(self, args);
    case 2:
      return PyvtkImageExtractComponents_SetComponents_s2(self, args);
    case 3:
      return PyvtkImageExtractComponents_SetComponents_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetComponents");
  return NULL;
}



static PyObject *
PyvtkImageExtractComponents_GetComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExtractComponents *op = static_cast<vtkImageExtractComponents *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetComponents() :
      op->vtkImageExtractComponents::GetComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageExtractComponents_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExtractComponents *op = static_cast<vtkImageExtractComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkImageExtractComponents::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageExtractComponents_Methods[] = {
  {(char*)"GetClassName", PyvtkImageExtractComponents_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageExtractComponents_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageExtractComponents_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageExtractComponents\nC++: vtkImageExtractComponents *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageExtractComponents_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageExtractComponents\nC++: vtkImageExtractComponents *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetComponents", PyvtkImageExtractComponents_SetComponents, METH_VARARGS,
   (char*)"V.SetComponents(int)\nC++: void SetComponents(int c1)\nV.SetComponents(int, int)\nC++: void SetComponents(int c1, int c2)\nV.SetComponents(int, int, int)\nC++: void SetComponents(int c1, int c2, int c3)\n\nSet/Get the components to extract.\n"},
  {(char*)"GetComponents", PyvtkImageExtractComponents_GetComponents, METH_VARARGS,
   (char*)"V.GetComponents() -> (int, int, int)\nC++: int *GetComponents()\n\n"},
  {(char*)"GetNumberOfComponents", PyvtkImageExtractComponents_GetNumberOfComponents, METH_VARARGS,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nGet the number of components to extract. This is set implicitly\nby the SetComponents() method.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageExtractComponents_StaticNew()
{
  return vtkImageExtractComponents::New();
}

PyObject *PyVTKClass_vtkImageExtractComponentsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageExtractComponents_StaticNew,
    PyvtkImageExtractComponents_Methods,
    "vtkImageExtractComponents", modulename,
    NULL, NULL,
    PyvtkImageExtractComponents_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageExtractComponents_Doc()
{
  static const char *docstring[] = {
    "vtkImageExtractComponents - Outputs a single component\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageExtractComponents takes an input with any number of\ncomponents and outputs some of them.  It does involve a copy of the\ndata.\n\nSee Also:\n\nvtkImageAppendComponents\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageExtractComponents(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageExtractComponentsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageExtractComponents", o) != 0)
    {
    Py_DECREF(o);
    }

}

