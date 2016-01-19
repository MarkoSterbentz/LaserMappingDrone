// python wrapper for vtkSMDeserializerXML
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDeserializerXML.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMDeserializerXML(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMDeserializerXMLNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDeserializerNew
extern "C" { PyObject *PyVTKClass_vtkSMDeserializerNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDeserializerNew
#endif

static const char **PyvtkSMDeserializerXML_Doc();


static PyObject *
PyvtkSMDeserializerXML_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerXML *op = static_cast<vtkSMDeserializerXML *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMDeserializerXML::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDeserializerXML_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerXML *op = static_cast<vtkSMDeserializerXML *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDeserializerXML::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDeserializerXML_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializerXML *op = static_cast<vtkSMDeserializerXML *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDeserializerXML *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDeserializerXML::NewInstance());

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
PyvtkSMDeserializerXML_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMDeserializerXML *tempr = vtkSMDeserializerXML::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDeserializerXML_Methods[] = {
  {(char*)"GetClassName", PyvtkSMDeserializerXML_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMDeserializerXML_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMDeserializerXML_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMDeserializerXML\nC++: vtkSMDeserializerXML *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMDeserializerXML_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMDeserializerXML\nC++: vtkSMDeserializerXML *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMDeserializerXML_StaticNew()
{
  return vtkSMDeserializerXML::New();
}

PyObject *PyVTKClass_vtkSMDeserializerXMLNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMDeserializerXML_StaticNew,
    PyvtkSMDeserializerXML_Methods,
    "vtkSMDeserializerXML", modulename,
    NULL, NULL,
    PyvtkSMDeserializerXML_Doc(),
    PyVTKClass_vtkSMDeserializerNew(modulename));
  return cls;
}

const char **PyvtkSMDeserializerXML_Doc()
{
  static const char *docstring[] = {
    "vtkSMDeserializerXML - deserializes proxies from their XML states.\n\n",
    "Superclass: vtkSMDeserializer\n\n",
    "vtkSMDeserializer is used to deserialize proxies from their XML\nstates. This is the base class of deserialization classes that load\nXMLs to restore servermanager state (or part thereof).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMDeserializerXML(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMDeserializerXMLNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMDeserializerXML", o) != 0)
    {
    Py_DECREF(o);
    }

}

