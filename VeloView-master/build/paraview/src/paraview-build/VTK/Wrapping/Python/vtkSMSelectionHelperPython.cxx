// python wrapper for vtkSMSelectionHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMSelectionHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMSelectionHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMSelectionHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMSelectionHelper_Doc();


static PyObject *
PyvtkSMSelectionHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionHelper *op = static_cast<vtkSMSelectionHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMSelectionHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSelectionHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionHelper *op = static_cast<vtkSMSelectionHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSelectionHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSelectionHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionHelper *op = static_cast<vtkSMSelectionHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSelectionHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSelectionHelper::NewInstance());

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
PyvtkSMSelectionHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMSelectionHelper *tempr = vtkSMSelectionHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSelectionHelper_NewSelectionSourceFromSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NewSelectionSourceFromSelection");

  vtkSMSession *temp0 = NULL;
  vtkSelection *temp1 = NULL;
  bool temp2 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkSMSession") &&
      ap.GetVTKObject(temp1, "vtkSelection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    vtkSMProxy *tempr = vtkSMSelectionHelper::NewSelectionSourceFromSelection(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSelectionHelper_NewSelectionSourcesFromSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NewSelectionSourcesFromSelection");

  vtkSelection *temp0 = NULL;
  vtkSMProxy *temp1 = NULL;
  vtkCollection *temp2 = NULL;
  vtkCollection *temp3 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetVTKObject(temp2, "vtkCollection") &&
      ap.GetVTKObject(temp3, "vtkCollection"))
    {
    vtkSMSelectionHelper::NewSelectionSourcesFromSelection(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMSelectionHelper_ConvertSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertSelection");

  int temp0;
  vtkSMProxy *temp1 = NULL;
  vtkSMSourceProxy *temp2 = NULL;
  int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetVTKObject(temp2, "vtkSMSourceProxy") &&
      ap.GetValue(temp3))
    {
    vtkSMProxy *tempr = vtkSMSelectionHelper::ConvertSelection(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMSelectionHelper_MergeSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MergeSelection");

  vtkSMSourceProxy *temp0 = NULL;
  vtkSMSourceProxy *temp1 = NULL;
  vtkSMSourceProxy *temp2 = NULL;
  int temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetVTKObject(temp1, "vtkSMSourceProxy") &&
      ap.GetVTKObject(temp2, "vtkSMSourceProxy") &&
      ap.GetValue(temp3))
    {
    bool tempr = vtkSMSelectionHelper::MergeSelection(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMSelectionHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkSMSelectionHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMSelectionHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMSelectionHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMSelectionHelper\nC++: vtkSMSelectionHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMSelectionHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMSelectionHelper\nC++: vtkSMSelectionHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"NewSelectionSourceFromSelection", PyvtkSMSelectionHelper_NewSelectionSourceFromSelection, METH_VARARGS | METH_STATIC,
   (char*)"V.NewSelectionSourceFromSelection(vtkSMSession, vtkSelection,\n    bool) -> vtkSMProxy\nC++: static vtkSMProxy *NewSelectionSourceFromSelection(\n    vtkSMSession *session, vtkSelection *selection,\n    bool ignore_composite_keys=false)\n\nGiven a selection, returns a proxy for a selection source that\nhas the ids specified by it. This source can then be used as\ninput to a vtkExtractSelection filter. CAVEAT: Make sure to\nspecify the connection id for the server on which the selection\nwas performed. This method can only handle 3 types of selection\nFRUSTUM, INDICES and GLOBALIDS. We can easily change this to\nhandle all other types of selection but that's not required\ncurrently and hence we not adding that code.\n"},
  {(char*)"NewSelectionSourcesFromSelection", PyvtkSMSelectionHelper_NewSelectionSourcesFromSelection, METH_VARARGS | METH_STATIC,
   (char*)"V.NewSelectionSourcesFromSelection(vtkSelection, vtkSMProxy,\n    vtkCollection, vtkCollection)\nC++: static void NewSelectionSourcesFromSelection(\n    vtkSelection *selection, vtkSMProxy *view,\n    vtkCollection *selSources, vtkCollection *selRepresentations)\n\n"},
  {(char*)"ConvertSelection", PyvtkSMSelectionHelper_ConvertSelection, METH_VARARGS | METH_STATIC,
   (char*)"V.ConvertSelection(int, vtkSMProxy, vtkSMSourceProxy, int)\n    -> vtkSMProxy\nC++: static vtkSMProxy *ConvertSelection(int outputType,\n    vtkSMProxy *selectionSourceProxy,\n    vtkSMSourceProxy *dataSource, int outputport)\n\nGiven the ContentType for an output vtkSelection, this create a\nnew source proxy generating the selection, the input\nselectionSourceProxy is used to fill the default values for\ncreated selection source.\n"},
  {(char*)"MergeSelection", PyvtkSMSelectionHelper_MergeSelection, METH_VARARGS | METH_STATIC,
   (char*)"V.MergeSelection(vtkSMSourceProxy, vtkSMSourceProxy,\n    vtkSMSourceProxy, int) -> bool\nC++: static bool MergeSelection(vtkSMSourceProxy *output,\n    vtkSMSourceProxy *input, vtkSMSourceProxy *dataSource,\n    int outputport)\n\nUpdates output to be a combination of (input | output) if the two\nselection sources are mergeable. Returns true if merge\nsuccessful. dataSource and outputport are needed if a conversion\nis needed to make the input expandable to the type of the output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMSelectionHelper_StaticNew()
{
  return vtkSMSelectionHelper::New();
}

PyObject *PyVTKClass_vtkSMSelectionHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMSelectionHelper_StaticNew,
    PyvtkSMSelectionHelper_Methods,
    "vtkSMSelectionHelper", modulename,
    NULL, NULL,
    PyvtkSMSelectionHelper_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMSelectionHelper_Doc()
{
  static const char *docstring[] = {
    "vtkSMSelectionHelper - Utility class to help with selection tasks\n\n",
    "Superclass: vtkSMObject\n\n",
    "This class contains several static methods that help with the\ncomplicated selection task.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMSelectionHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMSelectionHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMSelectionHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

