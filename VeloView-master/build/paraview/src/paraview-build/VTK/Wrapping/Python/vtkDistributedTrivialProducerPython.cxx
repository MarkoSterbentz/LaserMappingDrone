// python wrapper for vtkDistributedTrivialProducer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDistributedTrivialProducer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDistributedTrivialProducer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDistributedTrivialProducerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVTrivialProducerNew
extern "C" { PyObject *PyVTKClass_vtkPVTrivialProducerNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVTrivialProducerNew
#endif

static const char **PyvtkDistributedTrivialProducer_Doc();


static PyObject *
PyvtkDistributedTrivialProducer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedTrivialProducer *op = static_cast<vtkDistributedTrivialProducer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDistributedTrivialProducer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedTrivialProducer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedTrivialProducer *op = static_cast<vtkDistributedTrivialProducer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDistributedTrivialProducer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedTrivialProducer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedTrivialProducer *op = static_cast<vtkDistributedTrivialProducer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDistributedTrivialProducer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDistributedTrivialProducer::NewInstance());

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
PyvtkDistributedTrivialProducer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDistributedTrivialProducer *tempr = vtkDistributedTrivialProducer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedTrivialProducer_SetGlobalOutput(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalOutput");

  char *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    vtkDistributedTrivialProducer::SetGlobalOutput(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedTrivialProducer_ReleaseGlobalOutput(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ReleaseGlobalOutput");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDistributedTrivialProducer::ReleaseGlobalOutput(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistributedTrivialProducer_UpdateFromGlobal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateFromGlobal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedTrivialProducer *op = static_cast<vtkDistributedTrivialProducer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UpdateFromGlobal(temp0);
      }
    else
      {
      op->vtkDistributedTrivialProducer::UpdateFromGlobal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDistributedTrivialProducer_Methods[] = {
  {(char*)"GetClassName", PyvtkDistributedTrivialProducer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDistributedTrivialProducer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDistributedTrivialProducer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDistributedTrivialProducer\nC++: vtkDistributedTrivialProducer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDistributedTrivialProducer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDistributedTrivialProducer\nC++: vtkDistributedTrivialProducer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGlobalOutput", PyvtkDistributedTrivialProducer_SetGlobalOutput, METH_VARARGS | METH_STATIC,
   (char*)"V.SetGlobalOutput(string, vtkDataObject)\nC++: static void SetGlobalOutput(const char *key,\n    vtkDataObject *output)\n\nProvide a global method to store a data object accross processes\nand allow a given instance of TrivialProducer to use it based on\nits registred key.\n"},
  {(char*)"ReleaseGlobalOutput", PyvtkDistributedTrivialProducer_ReleaseGlobalOutput, METH_VARARGS | METH_STATIC,
   (char*)"V.ReleaseGlobalOutput(string)\nC++: static void ReleaseGlobalOutput(const char *key)\n\nRelease a given Global output if a valid key (not NULL) is\nprovided, otherwise the global output map will be cleared.\n"},
  {(char*)"UpdateFromGlobal", PyvtkDistributedTrivialProducer_UpdateFromGlobal, METH_VARARGS,
   (char*)"V.UpdateFromGlobal(string)\nC++: virtual void UpdateFromGlobal(const char *key)\n\nUpdate the current instance to use a previously registred global\ndata object as current output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDistributedTrivialProducer_StaticNew()
{
  return vtkDistributedTrivialProducer::New();
}

PyObject *PyVTKClass_vtkDistributedTrivialProducerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDistributedTrivialProducer_StaticNew,
    PyvtkDistributedTrivialProducer_Methods,
    "vtkDistributedTrivialProducer", modulename,
    NULL, NULL,
    PyvtkDistributedTrivialProducer_Doc(),
    PyVTKClass_vtkPVTrivialProducerNew(modulename));
  return cls;
}

const char **PyvtkDistributedTrivialProducer_Doc()
{
  static const char *docstring[] = {
    "vtkDistributedTrivialProducer\n\n",
    "Superclass: vtkPVTrivialProducer\n\n",
    "Extend vtkPVTrivialProducer to allow distributed code to easily\npopulate a trivial producer with local DataObject while using a\nregular Proxy Model.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDistributedTrivialProducer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDistributedTrivialProducerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDistributedTrivialProducer", o) != 0)
    {
    Py_DECREF(o);
    }

}

