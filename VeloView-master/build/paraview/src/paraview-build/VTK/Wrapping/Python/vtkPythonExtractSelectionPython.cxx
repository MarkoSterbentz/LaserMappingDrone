// python wrapper for vtkPythonExtractSelection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPythonExtractSelection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPythonExtractSelection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPythonExtractSelectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
extern "C" { PyObject *PyVTKClass_vtkExtractSelectionBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
#endif

static const char **PyvtkPythonExtractSelection_Doc();


static PyObject *
PyvtkPythonExtractSelection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonExtractSelection *op = static_cast<vtkPythonExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPythonExtractSelection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonExtractSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonExtractSelection *op = static_cast<vtkPythonExtractSelection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonExtractSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonExtractSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonExtractSelection *op = static_cast<vtkPythonExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPythonExtractSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonExtractSelection::NewInstance());

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
PyvtkPythonExtractSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPythonExtractSelection *tempr = vtkPythonExtractSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonExtractSelection_ExtractElements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonExtractSelection *op = static_cast<vtkPythonExtractSelection *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  vtkDataObject *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetVTKObject(temp2, "vtkDataObject"))
    {
    bool tempr = (ap.IsBound() ?
      op->ExtractElements(temp0, temp1, temp2) :
      op->vtkPythonExtractSelection::ExtractElements(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPythonExtractSelection_ExtractElements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonExtractSelection *op = static_cast<vtkPythonExtractSelection *>(vp);

  int temp0;
  vtkCompositeDataSet *temp1 = NULL;
  vtkCompositeDataSet *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCompositeDataSet") &&
      ap.GetVTKObject(temp2, "vtkCompositeDataSet"))
    {
    bool tempr = (ap.IsBound() ?
      op->ExtractElements(temp0, temp1, temp2) :
      op->vtkPythonExtractSelection::ExtractElements(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPythonExtractSelection_ExtractElements_Methods[] = {
  {NULL, PyvtkPythonExtractSelection_ExtractElements_s1, METH_VARARGS,
   (char*)"@iOO *vtkDataObject *vtkDataObject"},
  {NULL, PyvtkPythonExtractSelection_ExtractElements_s2, METH_VARARGS,
   (char*)"@iOO *vtkCompositeDataSet *vtkCompositeDataSet"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPythonExtractSelection_ExtractElements(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPythonExtractSelection_ExtractElements_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ExtractElements");
  return NULL;
}


static PyMethodDef PyvtkPythonExtractSelection_Methods[] = {
  {(char*)"GetClassName", PyvtkPythonExtractSelection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPythonExtractSelection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPythonExtractSelection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPythonExtractSelection\nC++: vtkPythonExtractSelection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPythonExtractSelection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPythonExtractSelection\nC++: vtkPythonExtractSelection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ExtractElements", PyvtkPythonExtractSelection_ExtractElements, METH_VARARGS,
   (char*)"V.ExtractElements(int, vtkDataObject, vtkDataObject) -> bool\nC++: bool ExtractElements(int attributeType, vtkDataObject *input,\n     vtkDataObject *output)\nV.ExtractElements(int, vtkCompositeDataSet, vtkCompositeDataSet)\n    -> bool\nC++: bool ExtractElements(int attributeType,\n    vtkCompositeDataSet *input, vtkCompositeDataSet *output)\n\nMethod called by Python code to handle the extraction\nlogic.attributeType is vtkDataObject::AttributeTypes and not to\nbe confused with vtkSelectionNode::SelectionField\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPythonExtractSelection_StaticNew()
{
  return vtkPythonExtractSelection::New();
}

PyObject *PyVTKClass_vtkPythonExtractSelectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPythonExtractSelection_StaticNew,
    PyvtkPythonExtractSelection_Methods,
    "vtkPythonExtractSelection", modulename,
    NULL, NULL,
    PyvtkPythonExtractSelection_Doc(),
    PyVTKClass_vtkExtractSelectionBaseNew(modulename));
  return cls;
}

const char **PyvtkPythonExtractSelection_Doc()
{
  static const char *docstring[] = {
    "vtkPythonExtractSelection\n\n",
    "Superclass: vtkExtractSelectionBase\n\n",
    "vtkPythonExtractSelection is a used to extra cells/points using\nnumpy. This enables creation of arbitrary queries to be used as the\nselection criteria.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPythonExtractSelection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPythonExtractSelectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPythonExtractSelection", o) != 0)
    {
    Py_DECREF(o);
    }

}

