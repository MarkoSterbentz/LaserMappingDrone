// python wrapper for vtkWebUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkWebUtilities.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWebUtilities(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWebUtilitiesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkWebUtilities_Doc();


static PyObject *
PyvtkWebUtilities_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebUtilities *op = static_cast<vtkWebUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWebUtilities::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebUtilities *op = static_cast<vtkWebUtilities *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebUtilities *op = static_cast<vtkWebUtilities *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWebUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebUtilities::NewInstance());

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
PyvtkWebUtilities_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWebUtilities *tempr = vtkWebUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebUtilities_WriteAttributesToJavaScript(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "WriteAttributesToJavaScript");

  int temp0;
  vtkDataSet *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet"))
    {
    std::string tempr = vtkWebUtilities::WriteAttributesToJavaScript(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebUtilities_WriteAttributeHeadersToJavaScript(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "WriteAttributeHeadersToJavaScript");

  int temp0;
  vtkDataSet *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet"))
    {
    std::string tempr = vtkWebUtilities::WriteAttributeHeadersToJavaScript(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebUtilities_ProcessRMIs_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ProcessRMIs");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkWebUtilities::ProcessRMIs();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWebUtilities_ProcessRMIs_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ProcessRMIs");

  int temp0;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkWebUtilities::ProcessRMIs(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWebUtilities_ProcessRMIs(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkWebUtilities_ProcessRMIs_s1(self, args);
    case 1:
    case 2:
      return PyvtkWebUtilities_ProcessRMIs_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ProcessRMIs");
  return NULL;
}


static PyMethodDef PyvtkWebUtilities_Methods[] = {
  {(char*)"GetClassName", PyvtkWebUtilities_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWebUtilities_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWebUtilities_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWebUtilities\nC++: vtkWebUtilities *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWebUtilities_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWebUtilities\nC++: vtkWebUtilities *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"WriteAttributesToJavaScript", PyvtkWebUtilities_WriteAttributesToJavaScript, METH_VARARGS | METH_STATIC,
   (char*)"V.WriteAttributesToJavaScript(int, vtkDataSet) -> string\nC++: static std::string WriteAttributesToJavaScript(\n    int field_type, vtkDataSet *)\n\n"},
  {(char*)"WriteAttributeHeadersToJavaScript", PyvtkWebUtilities_WriteAttributeHeadersToJavaScript, METH_VARARGS | METH_STATIC,
   (char*)"V.WriteAttributeHeadersToJavaScript(int, vtkDataSet) -> string\nC++: static std::string WriteAttributeHeadersToJavaScript(\n    int field_type, vtkDataSet *)\n\n"},
  {(char*)"ProcessRMIs", PyvtkWebUtilities_ProcessRMIs, METH_VARARGS | METH_STATIC,
   (char*)"V.ProcessRMIs()\nC++: static void ProcessRMIs()\nV.ProcessRMIs(int, int)\nC++: static void ProcessRMIs(int reportError, int dont_loop=0)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWebUtilities_StaticNew()
{
  return vtkWebUtilities::New();
}

PyObject *PyVTKClass_vtkWebUtilitiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWebUtilities_StaticNew,
    PyvtkWebUtilities_Methods,
    "vtkWebUtilities", modulename,
    NULL, NULL,
    PyvtkWebUtilities_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkWebUtilities_Doc()
{
  static const char *docstring[] = {
    "vtkWebUtilities - collection of utility functions for ParaView Web.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkWebUtilities consolidates miscellaneous utility functions useful\nfor Python scripts designed for ParaView Web.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWebUtilities(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWebUtilitiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWebUtilities", o) != 0)
    {
    Py_DECREF(o);
    }

}

