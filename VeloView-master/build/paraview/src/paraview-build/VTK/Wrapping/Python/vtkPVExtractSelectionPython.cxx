// python wrapper for vtkPVExtractSelection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVExtractSelection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVExtractSelection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVExtractSelectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtractSelectionNew
extern "C" { PyObject *PyVTKClass_vtkExtractSelectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractSelectionNew
#endif

static const char **PyvtkPVExtractSelection_Doc();


static PyObject *
PyvtkPVExtractSelection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractSelection *op = static_cast<vtkPVExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVExtractSelection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractSelection *op = static_cast<vtkPVExtractSelection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVExtractSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractSelection *op = static_cast<vtkPVExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVExtractSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVExtractSelection::NewInstance());

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
PyvtkPVExtractSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVExtractSelection *tempr = vtkPVExtractSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractSelection_RemoveAllSelectionsInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSelectionsInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractSelection *op = static_cast<vtkPVExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllSelectionsInputs();
      }
    else
      {
      op->vtkPVExtractSelection::RemoveAllSelectionsInputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVExtractSelection_Methods[] = {
  {(char*)"GetClassName", PyvtkPVExtractSelection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVExtractSelection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVExtractSelection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVExtractSelection\nC++: vtkPVExtractSelection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVExtractSelection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVExtractSelection\nC++: vtkPVExtractSelection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RemoveAllSelectionsInputs", PyvtkPVExtractSelection_RemoveAllSelectionsInputs, METH_VARARGS,
   (char*)"V.RemoveAllSelectionsInputs()\nC++: void RemoveAllSelectionsInputs()\n\nRemoves all inputs from input port 1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVExtractSelection_StaticNew()
{
  return vtkPVExtractSelection::New();
}

PyObject *PyVTKClass_vtkPVExtractSelectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVExtractSelection_StaticNew,
    PyvtkPVExtractSelection_Methods,
    "vtkPVExtractSelection", modulename,
    NULL, NULL,
    PyvtkPVExtractSelection_Doc(),
    PyVTKClass_vtkExtractSelectionNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "OUTPUT_PORT_EXTRACTED_DATASET", 0 },
          { "OUTPUT_PORT_SELECTION_IDS", 1 },
          { "OUTPUT_PORT_SELECTION_ORIGINAL", 2 },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPVExtractSelection_Doc()
{
  static const char *docstring[] = {
    "vtkPVExtractSelection - Adds a two more output ports to\nvtkExtractSelection,\n\n",
    "Superclass: vtkExtractSelection\n\n",
    "vtkPVExtractSelection adds a second port to vtkExtractSelection.\n\\li Output port 0 -- is the output from the superclass. It's nothing\n    but the\nextracted dataset.\n\n\\li Output port 1 -- is a vtkSelection consisting of indices of the\n    cells/points\nextracted. If vtkSelection used as the input to this filter is of the\nfield type vtkSelection::CELL, then the output vtkSelection has both\nthe cell i",
    "ndicides as well as point indices of the cells/points that\nwere extracted. If input field type is vtkSelection::POINT, then the\noutput vtkSelection only has the indicies of the points that were\nextracted. This second output is useful for correlating particular\ncells in the subset with the original data set. This is used, for\ninstance, by Chart representations to show selections.\n\n\\li Output port 2",
    " -- is simply the input vtkSelection. We currently\n    use this\nfor Histogram View/Representation. Since that view cannot show\narbitrary ID based selections, it needs to get to the original\nvtkSelection to determine if the particular selection can be shown in\nthe view at all.\n\nSee Also:\n\nvtkExtractSelection vtkSelection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVExtractSelection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVExtractSelectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVExtractSelection", o) != 0)
    {
    Py_DECREF(o);
    }

}

