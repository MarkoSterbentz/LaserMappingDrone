// python wrapper for vtkImageTranslateExtent
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageTranslateExtent.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageTranslateExtent(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageTranslateExtentNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageTranslateExtent_Doc();


static PyObject *
PyvtkImageTranslateExtent_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTranslateExtent *op = static_cast<vtkImageTranslateExtent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageTranslateExtent::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTranslateExtent_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTranslateExtent *op = static_cast<vtkImageTranslateExtent *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageTranslateExtent::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTranslateExtent_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTranslateExtent *op = static_cast<vtkImageTranslateExtent *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageTranslateExtent *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageTranslateExtent::NewInstance());

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
PyvtkImageTranslateExtent_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageTranslateExtent *tempr = vtkImageTranslateExtent::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageTranslateExtent_SetTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTranslateExtent *op = static_cast<vtkImageTranslateExtent *>(vp);

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
      op->SetTranslation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageTranslateExtent::SetTranslation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageTranslateExtent_SetTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTranslateExtent *op = static_cast<vtkImageTranslateExtent *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTranslation(temp0);
      }
    else
      {
      op->vtkImageTranslateExtent::SetTranslation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageTranslateExtent_SetTranslation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageTranslateExtent_SetTranslation_s1(self, args);
    case 1:
      return PyvtkImageTranslateExtent_SetTranslation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTranslation");
  return NULL;
}



static PyObject *
PyvtkImageTranslateExtent_GetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTranslateExtent *op = static_cast<vtkImageTranslateExtent *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTranslation() :
      op->vtkImageTranslateExtent::GetTranslation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageTranslateExtent_Methods[] = {
  {(char*)"GetClassName", PyvtkImageTranslateExtent_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageTranslateExtent_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageTranslateExtent_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageTranslateExtent\nC++: vtkImageTranslateExtent *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageTranslateExtent_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageTranslateExtent\nC++: vtkImageTranslateExtent *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTranslation", PyvtkImageTranslateExtent_SetTranslation, METH_VARARGS,
   (char*)"V.SetTranslation(int, int, int)\nC++: void SetTranslation(int, int, int)\nV.SetTranslation((int, int, int))\nC++: void SetTranslation(int a[3])\n\n"},
  {(char*)"GetTranslation", PyvtkImageTranslateExtent_GetTranslation, METH_VARARGS,
   (char*)"V.GetTranslation() -> (int, int, int)\nC++: int *GetTranslation()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageTranslateExtent_StaticNew()
{
  return vtkImageTranslateExtent::New();
}

PyObject *PyVTKClass_vtkImageTranslateExtentNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageTranslateExtent_StaticNew,
    PyvtkImageTranslateExtent_Methods,
    "vtkImageTranslateExtent", modulename,
    NULL, NULL,
    PyvtkImageTranslateExtent_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageTranslateExtent_Doc()
{
  static const char *docstring[] = {
    "vtkImageTranslateExtent - Changes extent, nothing else.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageTranslateExtent  shift the whole extent, but does not change\nthe data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageTranslateExtent(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageTranslateExtentNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageTranslateExtent", o) != 0)
    {
    Py_DECREF(o);
    }

}

