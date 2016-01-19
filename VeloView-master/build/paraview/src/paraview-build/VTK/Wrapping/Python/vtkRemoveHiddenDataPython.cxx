// python wrapper for vtkRemoveHiddenData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRemoveHiddenData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRemoveHiddenData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRemoveHiddenDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkRemoveHiddenData_Doc();


static PyObject *
PyvtkRemoveHiddenData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveHiddenData *op = static_cast<vtkRemoveHiddenData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRemoveHiddenData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRemoveHiddenData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveHiddenData *op = static_cast<vtkRemoveHiddenData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRemoveHiddenData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRemoveHiddenData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveHiddenData *op = static_cast<vtkRemoveHiddenData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRemoveHiddenData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRemoveHiddenData::NewInstance());

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
PyvtkRemoveHiddenData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRemoveHiddenData *tempr = vtkRemoveHiddenData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRemoveHiddenData_Methods[] = {
  {(char*)"GetClassName", PyvtkRemoveHiddenData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRemoveHiddenData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRemoveHiddenData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRemoveHiddenData\nC++: vtkRemoveHiddenData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRemoveHiddenData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRemoveHiddenData\nC++: vtkRemoveHiddenData *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRemoveHiddenData_StaticNew()
{
  return vtkRemoveHiddenData::New();
}

PyObject *PyVTKClass_vtkRemoveHiddenDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRemoveHiddenData_StaticNew,
    PyvtkRemoveHiddenData_Methods,
    "vtkRemoveHiddenData", modulename,
    NULL, NULL,
    PyvtkRemoveHiddenData_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRemoveHiddenData_Doc()
{
  static const char *docstring[] = {
    "vtkRemoveHiddenData - Removes the rows/edges/vertices of\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "Output only those rows/vertices/edges of the input vtkDataObject that\nare visible, as defined by the vtkAnnotation::HIDE() flag of the\ninput vtkAnnotationLayers. Inputs:\n   Port 0 - vtkDataObject\n   Port 1 - vtkAnnotationLayers (optional)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRemoveHiddenData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRemoveHiddenDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRemoveHiddenData", o) != 0)
    {
    Py_DECREF(o);
    }

}

