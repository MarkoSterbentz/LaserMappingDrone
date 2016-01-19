// python wrapper for vtkChartSelectionRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkChartSelectionRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkChartSelectionRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkChartSelectionRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkPVDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataRepresentationNew
#endif

static const char **PyvtkChartSelectionRepresentation_Doc();


static PyObject *
PyvtkChartSelectionRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartSelectionRepresentation *op = static_cast<vtkChartSelectionRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkChartSelectionRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartSelectionRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartSelectionRepresentation *op = static_cast<vtkChartSelectionRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartSelectionRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartSelectionRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartSelectionRepresentation *op = static_cast<vtkChartSelectionRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartSelectionRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartSelectionRepresentation::NewInstance());

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
PyvtkChartSelectionRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkChartSelectionRepresentation *tempr = vtkChartSelectionRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartSelectionRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartSelectionRepresentation *op = static_cast<vtkChartSelectionRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MarkModified();
      }
    else
      {
      op->vtkChartSelectionRepresentation::MarkModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartSelectionRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartSelectionRepresentation *op = static_cast<vtkChartSelectionRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVisibility(temp0);
      }
    else
      {
      op->vtkChartSelectionRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartSelectionRepresentation_SetChartRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartSelectionRepresentation *op = static_cast<vtkChartSelectionRepresentation *>(vp);

  vtkChartRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkChartRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetChartRepresentation(temp0);
      }
    else
      {
      op->vtkChartSelectionRepresentation::SetChartRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkChartSelectionRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkChartSelectionRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChartSelectionRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChartSelectionRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkChartSelectionRepresentation\nC++: vtkChartSelectionRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChartSelectionRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChartSelectionRepresentation\nC++: vtkChartSelectionRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"MarkModified", PyvtkChartSelectionRepresentation_MarkModified, METH_VARARGS,
   (char*)"V.MarkModified()\nC++: virtual void MarkModified()\n\nThis needs to be called on all instances of\nvtkChartSelectionRepresentation when the input is modified.\n"},
  {(char*)"SetVisibility", PyvtkChartSelectionRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool visible)\n\nSet visibility of the representation.\n"},
  {(char*)"SetChartRepresentation", PyvtkChartSelectionRepresentation_SetChartRepresentation, METH_VARARGS,
   (char*)"V.SetChartRepresentation(vtkChartRepresentation)\nC++: void SetChartRepresentation(vtkChartRepresentation *repr)\n\nGet/Set the chart representation for which this is a selection\nrepresentation. This is not reference counted.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChartSelectionRepresentation_StaticNew()
{
  return vtkChartSelectionRepresentation::New();
}

PyObject *PyVTKClass_vtkChartSelectionRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChartSelectionRepresentation_StaticNew,
    PyvtkChartSelectionRepresentation_Methods,
    "vtkChartSelectionRepresentation", modulename,
    NULL, NULL,
    PyvtkChartSelectionRepresentation_Doc(),
    PyVTKClass_vtkPVDataRepresentationNew(modulename));
  return cls;
}

const char **PyvtkChartSelectionRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkChartSelectionRepresentation - representation for a cube-axes.\n\n",
    "Superclass: vtkPVDataRepresentation\n\n",
    "vtkChartSelectionRepresentation is a representation for the Cube-Axes\nthat shows a bounding box with labels around any input dataset.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChartSelectionRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChartSelectionRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChartSelectionRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

