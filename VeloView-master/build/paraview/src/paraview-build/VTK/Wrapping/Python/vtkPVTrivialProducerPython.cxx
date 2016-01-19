// python wrapper for vtkPVTrivialProducer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkPVTrivialProducer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVTrivialProducer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVTrivialProducerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTrivialProducerNew
extern "C" { PyObject *PyVTKClass_vtkTrivialProducerNew(const char *); }
#define DECLARED_PyVTKClass_vtkTrivialProducerNew
#endif

static const char **PyvtkPVTrivialProducer_Doc();


static PyObject *
PyvtkPVTrivialProducer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrivialProducer *op = static_cast<vtkPVTrivialProducer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVTrivialProducer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTrivialProducer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrivialProducer *op = static_cast<vtkPVTrivialProducer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTrivialProducer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTrivialProducer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrivialProducer *op = static_cast<vtkPVTrivialProducer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVTrivialProducer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTrivialProducer::NewInstance());

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
PyvtkPVTrivialProducer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVTrivialProducer *tempr = vtkPVTrivialProducer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTrivialProducer_SetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrivialProducer *op = static_cast<vtkPVTrivialProducer *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkPVTrivialProducer::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVTrivialProducer_SetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrivialProducer *op = static_cast<vtkPVTrivialProducer *>(vp);

  vtkDataObject *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0, temp1);
      }
    else
      {
      op->vtkPVTrivialProducer::SetOutput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVTrivialProducer_SetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVTrivialProducer_SetOutput_s1(self, args);
    case 2:
      return PyvtkPVTrivialProducer_SetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutput");
  return NULL;
}


static PyMethodDef PyvtkPVTrivialProducer_Methods[] = {
  {(char*)"GetClassName", PyvtkPVTrivialProducer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVTrivialProducer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVTrivialProducer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVTrivialProducer\nC++: vtkPVTrivialProducer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVTrivialProducer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVTrivialProducer\nC++: vtkPVTrivialProducer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutput", PyvtkPVTrivialProducer_SetOutput, METH_VARARGS,
   (char*)"V.SetOutput(vtkDataObject)\nC++: virtual void SetOutput(vtkDataObject *output)\nV.SetOutput(vtkDataObject, float)\nC++: virtual void SetOutput(vtkDataObject *output, double time)\n\nSet the data object that is \"produced\" by this producer.  It is\nnever really modified.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVTrivialProducer_StaticNew()
{
  return vtkPVTrivialProducer::New();
}

PyObject *PyVTKClass_vtkPVTrivialProducerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVTrivialProducer_StaticNew,
    PyvtkPVTrivialProducer_Methods,
    "vtkPVTrivialProducer", modulename,
    NULL, NULL,
    PyvtkPVTrivialProducer_Doc(),
    PyVTKClass_vtkTrivialProducerNew(modulename));
  return cls;
}

const char **PyvtkPVTrivialProducer_Doc()
{
  static const char *docstring[] = {
    "vtkPVTrivialProducer - specialized subclass of vtkTrivialProducer that\n\n",
    "Superclass: vtkTrivialProducer\n\n",
    "vtkPVTrivialProducer is specialized subclass of vtkTrivialProducer\nthat can manage time requests.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVTrivialProducer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVTrivialProducerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVTrivialProducer", o) != 0)
    {
    Py_DECREF(o);
    }

}

