// python wrapper for vtkTextSourceRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTextSourceRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTextSourceRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTextSourceRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkPVDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataRepresentationNew
#endif

static const char **PyvtkTextSourceRepresentation_Doc();


static PyObject *
PyvtkTextSourceRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSourceRepresentation *op = static_cast<vtkTextSourceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTextSourceRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextSourceRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSourceRepresentation *op = static_cast<vtkTextSourceRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextSourceRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextSourceRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSourceRepresentation *op = static_cast<vtkTextSourceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextSourceRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextSourceRepresentation::NewInstance());

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
PyvtkTextSourceRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTextSourceRepresentation *tempr = vtkTextSourceRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextSourceRepresentation_SetTextWidgetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextWidgetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSourceRepresentation *op = static_cast<vtkTextSourceRepresentation *>(vp);

  vtk3DWidgetRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtk3DWidgetRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetTextWidgetRepresentation(temp0);
      }
    else
      {
      op->vtkTextSourceRepresentation::SetTextWidgetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextSourceRepresentation_GetTextWidgetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextWidgetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSourceRepresentation *op = static_cast<vtkTextSourceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtk3DWidgetRepresentation *tempr = (ap.IsBound() ?
      op->GetTextWidgetRepresentation() :
      op->vtkTextSourceRepresentation::GetTextWidgetRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextSourceRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSourceRepresentation *op = static_cast<vtkTextSourceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MarkModified();
      }
    else
      {
      op->vtkTextSourceRepresentation::MarkModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextSourceRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSourceRepresentation *op = static_cast<vtkTextSourceRepresentation *>(vp);

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
      op->vtkTextSourceRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextSourceRepresentation_SetInteractivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSourceRepresentation *op = static_cast<vtkTextSourceRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractivity(temp0);
      }
    else
      {
      op->vtkTextSourceRepresentation::SetInteractivity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextSourceRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextSourceRepresentation *op = static_cast<vtkTextSourceRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  vtkInformation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkTextSourceRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTextSourceRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkTextSourceRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextSourceRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextSourceRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTextSourceRepresentation\nC++: vtkTextSourceRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTextSourceRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextSourceRepresentation\nC++: vtkTextSourceRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTextWidgetRepresentation", PyvtkTextSourceRepresentation_SetTextWidgetRepresentation, METH_VARARGS,
   (char*)"V.SetTextWidgetRepresentation(vtk3DWidgetRepresentation)\nC++: void SetTextWidgetRepresentation(\n    vtk3DWidgetRepresentation *widget)\n\nSet the text widget.\n"},
  {(char*)"GetTextWidgetRepresentation", PyvtkTextSourceRepresentation_GetTextWidgetRepresentation, METH_VARARGS,
   (char*)"V.GetTextWidgetRepresentation() -> vtk3DWidgetRepresentation\nC++: vtk3DWidgetRepresentation *GetTextWidgetRepresentation()\n\nSet the text widget.\n"},
  {(char*)"MarkModified", PyvtkTextSourceRepresentation_MarkModified, METH_VARARGS,
   (char*)"V.MarkModified()\nC++: virtual void MarkModified()\n\n\n"},
  {(char*)"SetVisibility", PyvtkTextSourceRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool)\n\nSet the visibility.\n"},
  {(char*)"SetInteractivity", PyvtkTextSourceRepresentation_SetInteractivity, METH_VARARGS,
   (char*)"V.SetInteractivity(bool)\nC++: void SetInteractivity(bool)\n\nSet the interactivity.\n"},
  {(char*)"ProcessViewRequest", PyvtkTextSourceRepresentation_ProcessViewRequest, METH_VARARGS,
   (char*)"V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextSourceRepresentation_StaticNew()
{
  return vtkTextSourceRepresentation::New();
}

PyObject *PyVTKClass_vtkTextSourceRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextSourceRepresentation_StaticNew,
    PyvtkTextSourceRepresentation_Methods,
    "vtkTextSourceRepresentation", modulename,
    NULL, NULL,
    PyvtkTextSourceRepresentation_Doc(),
    PyVTKClass_vtkPVDataRepresentationNew(modulename));
  return cls;
}

const char **PyvtkTextSourceRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkTextSourceRepresentation\n\n",
    "Superclass: vtkPVDataRepresentation\n\n",
    "vtkTextSourceRepresentation is a representation to show text. The\ninput is expected to a vtkTable with a single row and column (atleast\non the data server nodes). The content of this entry in the table is\nshown as text on the rendering nodes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextSourceRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextSourceRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextSourceRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

