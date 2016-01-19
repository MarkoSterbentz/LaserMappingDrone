// python wrapper for vtkPVSingleOutputExtractSelection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVSingleOutputExtractSelection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVSingleOutputExtractSelection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVSingleOutputExtractSelectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVExtractSelectionNew
extern "C" { PyObject *PyVTKClass_vtkPVExtractSelectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVExtractSelectionNew
#endif

static const char **PyvtkPVSingleOutputExtractSelection_Doc();


static PyObject *
PyvtkPVSingleOutputExtractSelection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSingleOutputExtractSelection *op = static_cast<vtkPVSingleOutputExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVSingleOutputExtractSelection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSingleOutputExtractSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSingleOutputExtractSelection *op = static_cast<vtkPVSingleOutputExtractSelection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSingleOutputExtractSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVSingleOutputExtractSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSingleOutputExtractSelection *op = static_cast<vtkPVSingleOutputExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVSingleOutputExtractSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSingleOutputExtractSelection::NewInstance());

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
PyvtkPVSingleOutputExtractSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVSingleOutputExtractSelection *tempr = vtkPVSingleOutputExtractSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVSingleOutputExtractSelection_Methods[] = {
  {(char*)"GetClassName", PyvtkPVSingleOutputExtractSelection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVSingleOutputExtractSelection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVSingleOutputExtractSelection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVSingleOutputExtractSelection\nC++: vtkPVSingleOutputExtractSelection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVSingleOutputExtractSelection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVSingleOutputExtractSelection\nC++: vtkPVSingleOutputExtractSelection *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVSingleOutputExtractSelection_StaticNew()
{
  return vtkPVSingleOutputExtractSelection::New();
}

PyObject *PyVTKClass_vtkPVSingleOutputExtractSelectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVSingleOutputExtractSelection_StaticNew,
    PyvtkPVSingleOutputExtractSelection_Methods,
    "vtkPVSingleOutputExtractSelection", modulename,
    NULL, NULL,
    PyvtkPVSingleOutputExtractSelection_Doc(),
    PyVTKClass_vtkPVExtractSelectionNew(modulename));
  return cls;
}

const char **PyvtkPVSingleOutputExtractSelection_Doc()
{
  static const char *docstring[] = {
    "vtkPVSingleOutputExtractSelection\n\n",
    "Superclass: vtkPVExtractSelection\n\n",
    "vtkPVSingleOutputExtractSelection extends to vtkPVExtractSelection to\nsimply hide the second output-port. This is the filter used in\nParaView GUI.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVSingleOutputExtractSelection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVSingleOutputExtractSelectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVSingleOutputExtractSelection", o) != 0)
    {
    Py_DECREF(o);
    }

}

