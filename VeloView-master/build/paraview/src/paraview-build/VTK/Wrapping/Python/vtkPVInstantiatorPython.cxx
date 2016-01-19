// python wrapper for vtkPVInstantiator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVInstantiator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVInstantiator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVInstantiatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVInstantiator_Doc();


static PyObject *
PyvtkPVInstantiator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInstantiator *op = static_cast<vtkPVInstantiator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVInstantiator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVInstantiator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInstantiator *op = static_cast<vtkPVInstantiator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVInstantiator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVInstantiator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVInstantiator *op = static_cast<vtkPVInstantiator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVInstantiator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVInstantiator::NewInstance());

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
PyvtkPVInstantiator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVInstantiator *tempr = vtkPVInstantiator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVInstantiator_CreateInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateInstance");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkObject *tempr = vtkPVInstantiator::CreateInstance(temp0);

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

static PyMethodDef PyvtkPVInstantiator_Methods[] = {
  {(char*)"GetClassName", PyvtkPVInstantiator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVInstantiator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVInstantiator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVInstantiator\nC++: vtkPVInstantiator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVInstantiator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVInstantiator\nC++: vtkPVInstantiator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CreateInstance", PyvtkPVInstantiator_CreateInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.CreateInstance(string) -> vtkObject\nC++: static vtkObject *CreateInstance(const char *className)\n\nCreate an instance of the class whose name is given.  If creation\nfails, a NULL pointer is returned. This uses\nvtkClientServerInterpreter::NewInstance() to create the class.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVInstantiator_StaticNew()
{
  return vtkPVInstantiator::New();
}

PyObject *PyVTKClass_vtkPVInstantiatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVInstantiator_StaticNew,
    PyvtkPVInstantiator_Methods,
    "vtkPVInstantiator", modulename,
    NULL, NULL,
    PyvtkPVInstantiator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPVInstantiator_Doc()
{
  static const char *docstring[] = {
    "vtkPVInstantiator - similar to vtkInstantiator except that it uses\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVInstantiator is similar to vtkInstantiator except that it uses\nParaView's client-server streams to create new classes. Thus we don't\nhave to do any additional initialization as needed for\nvtkInstantiator to work.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVInstantiator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVInstantiatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVInstantiator", o) != 0)
    {
    Py_DECREF(o);
    }

}

