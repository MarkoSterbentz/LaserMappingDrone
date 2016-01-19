// python wrapper for vtkFieldDataSerializer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMultiProcessStream.h"
#include "vtkFieldDataSerializer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFieldDataSerializer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFieldDataSerializerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkFieldDataSerializer_Doc();


static PyObject *
PyvtkFieldDataSerializer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataSerializer *op = static_cast<vtkFieldDataSerializer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFieldDataSerializer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataSerializer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataSerializer *op = static_cast<vtkFieldDataSerializer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFieldDataSerializer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldDataSerializer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataSerializer *op = static_cast<vtkFieldDataSerializer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFieldDataSerializer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFieldDataSerializer::NewInstance());

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
PyvtkFieldDataSerializer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFieldDataSerializer *tempr = vtkFieldDataSerializer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFieldDataSerializer_Methods[] = {
  {(char*)"GetClassName", PyvtkFieldDataSerializer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFieldDataSerializer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFieldDataSerializer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFieldDataSerializer\nC++: vtkFieldDataSerializer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFieldDataSerializer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFieldDataSerializer\nC++: vtkFieldDataSerializer *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFieldDataSerializer_StaticNew()
{
  return vtkFieldDataSerializer::New();
}

PyObject *PyVTKClass_vtkFieldDataSerializerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFieldDataSerializer_StaticNew,
    PyvtkFieldDataSerializer_Methods,
    "vtkFieldDataSerializer", modulename,
    NULL, NULL,
    PyvtkFieldDataSerializer_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkFieldDataSerializer_Doc()
{
  static const char *docstring[] = {
    "vtkFieldDataSerializer.h -- Field data serialization/de-serialization\n\n",
    "Superclass: vtkObject\n\n",
    "A concrete instance of vtkObject which provides functionality for\n serializing and de-serializing field data, primarily used for the\npurpose\n of preparing the data for transfer over MPI or other communication\n mechanism.\n\nSee Also:\n\nvtkFieldData vtkPointData vtkCellData vtkMultiProcessStream\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFieldDataSerializer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFieldDataSerializerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFieldDataSerializer", o) != 0)
    {
    Py_DECREF(o);
    }

}

