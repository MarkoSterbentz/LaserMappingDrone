// python wrapper for vtkPYoungsMaterialInterface
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPYoungsMaterialInterface.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPYoungsMaterialInterface(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPYoungsMaterialInterfaceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkYoungsMaterialInterfaceNew
extern "C" { PyObject *PyVTKClass_vtkYoungsMaterialInterfaceNew(const char *); }
#define DECLARED_PyVTKClass_vtkYoungsMaterialInterfaceNew
#endif

static const char **PyvtkPYoungsMaterialInterface_Doc();


static PyObject *
PyvtkPYoungsMaterialInterface_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPYoungsMaterialInterface *op = static_cast<vtkPYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPYoungsMaterialInterface::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPYoungsMaterialInterface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPYoungsMaterialInterface *op = static_cast<vtkPYoungsMaterialInterface *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPYoungsMaterialInterface::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPYoungsMaterialInterface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPYoungsMaterialInterface *op = static_cast<vtkPYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPYoungsMaterialInterface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPYoungsMaterialInterface::NewInstance());

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
PyvtkPYoungsMaterialInterface_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPYoungsMaterialInterface *tempr = vtkPYoungsMaterialInterface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPYoungsMaterialInterface_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPYoungsMaterialInterface *op = static_cast<vtkPYoungsMaterialInterface *>(vp);

  int temp0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->Aggregate(temp0, temp1);
      }
    else
      {
      op->vtkPYoungsMaterialInterface::Aggregate(temp0, temp1);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkPYoungsMaterialInterface_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPYoungsMaterialInterface *op = static_cast<vtkPYoungsMaterialInterface *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPYoungsMaterialInterface::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPYoungsMaterialInterface_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPYoungsMaterialInterface *op = static_cast<vtkPYoungsMaterialInterface *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPYoungsMaterialInterface::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPYoungsMaterialInterface_Methods[] = {
  {(char*)"GetClassName", PyvtkPYoungsMaterialInterface_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPYoungsMaterialInterface_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPYoungsMaterialInterface_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPYoungsMaterialInterface\nC++: vtkPYoungsMaterialInterface *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPYoungsMaterialInterface_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPYoungsMaterialInterface\nC++: vtkPYoungsMaterialInterface *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Aggregate", PyvtkPYoungsMaterialInterface_Aggregate, METH_VARARGS,
   (char*)"V.Aggregate(int, [int, ...])\nC++: virtual void Aggregate(int, int *)\n\nParallel implementation of the material aggregation.\n"},
  {(char*)"SetController", PyvtkPYoungsMaterialInterface_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"GetController", PyvtkPYoungsMaterialInterface_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPYoungsMaterialInterface_StaticNew()
{
  return vtkPYoungsMaterialInterface::New();
}

PyObject *PyVTKClass_vtkPYoungsMaterialInterfaceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPYoungsMaterialInterface_StaticNew,
    PyvtkPYoungsMaterialInterface_Methods,
    "vtkPYoungsMaterialInterface", modulename,
    NULL, NULL,
    PyvtkPYoungsMaterialInterface_Doc(),
    PyVTKClass_vtkYoungsMaterialInterfaceNew(modulename));
  return cls;
}

const char **PyvtkPYoungsMaterialInterface_Doc()
{
  static const char *docstring[] = {
    "vtkPYoungsMaterialInterface - parallel reconstruction of material\ninterfaces\n\n",
    "Superclass: vtkYoungsMaterialInterface\n\n",
    "This is a subclass of vtkYoungsMaterialInterface, implementing the\nreconstruction of material interfaces, for parallel data sets\n\nThanks:\n\nThis file is part of the generalized Youngs material interface\nreconstruction algorithm contributed by\n\nCEA/DIF - Commissariat a l'Energie Atomique, Centre DAM Ile-De-France\n\nBP12, F-91297 Arpajon, France.\n\nImplementation by Thierry Carrard and Philippe Pebay\n\n",
    "See also:\n\nvtkYoungsMaterialInterface\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPYoungsMaterialInterface(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPYoungsMaterialInterfaceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPYoungsMaterialInterface", o) != 0)
    {
    Py_DECREF(o);
    }

}

