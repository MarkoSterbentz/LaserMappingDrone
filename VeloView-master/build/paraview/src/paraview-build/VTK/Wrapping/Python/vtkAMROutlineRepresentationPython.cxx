// python wrapper for vtkAMROutlineRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAMROutlineRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAMROutlineRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAMROutlineRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkPVDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataRepresentationNew
#endif

static const char **PyvtkAMROutlineRepresentation_Doc();


static PyObject *
PyvtkAMROutlineRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMROutlineRepresentation *op = static_cast<vtkAMROutlineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAMROutlineRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMROutlineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMROutlineRepresentation *op = static_cast<vtkAMROutlineRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMROutlineRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMROutlineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMROutlineRepresentation *op = static_cast<vtkAMROutlineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAMROutlineRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMROutlineRepresentation::NewInstance());

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
PyvtkAMROutlineRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAMROutlineRepresentation *tempr = vtkAMROutlineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMROutlineRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMROutlineRepresentation *op = static_cast<vtkAMROutlineRepresentation *>(vp);

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
      op->vtkAMROutlineRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAMROutlineRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMROutlineRepresentation *op = static_cast<vtkAMROutlineRepresentation *>(vp);

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
      op->vtkAMROutlineRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAMROutlineRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkAMROutlineRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAMROutlineRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAMROutlineRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAMROutlineRepresentation\nC++: vtkAMROutlineRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAMROutlineRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAMROutlineRepresentation\nC++: vtkAMROutlineRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ProcessViewRequest", PyvtkAMROutlineRepresentation_ProcessViewRequest, METH_VARARGS,
   (char*)"V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: virtual int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\nOverridden to handle various view passes.\n"},
  {(char*)"SetVisibility", PyvtkAMROutlineRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool val)\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAMROutlineRepresentation_StaticNew()
{
  return vtkAMROutlineRepresentation::New();
}

PyObject *PyVTKClass_vtkAMROutlineRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAMROutlineRepresentation_StaticNew,
    PyvtkAMROutlineRepresentation_Methods,
    "vtkAMROutlineRepresentation", modulename,
    NULL, NULL,
    PyvtkAMROutlineRepresentation_Doc(),
    PyVTKClass_vtkPVDataRepresentationNew(modulename));
  return cls;
}

const char **PyvtkAMROutlineRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkAMROutlineRepresentation - a simple outline representation for AMR\n\n",
    "Superclass: vtkPVDataRepresentation\n\n",
    "vtkAMROutlineRepresentation is a simple representation for\nOverlapping-AMR datasets that with streaming capabilities. It\ndemonstrates how a representation can exploit streaming capabilities\nprovided by ParaView's Render View (vtkPVRenderView).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAMROutlineRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAMROutlineRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAMROutlineRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

