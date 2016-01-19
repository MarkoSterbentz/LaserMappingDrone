// python wrapper for vtkGlyph3DRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGlyph3DRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGlyph3DRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGlyph3DRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGeometryRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkGeometryRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkGeometryRepresentationNew
#endif

static const char **PyvtkGlyph3DRepresentation_Doc();


static PyObject *
PyvtkGlyph3DRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGlyph3DRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGlyph3DRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGlyph3DRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGlyph3DRepresentation::NewInstance());

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
PyvtkGlyph3DRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGlyph3DRepresentation *tempr = vtkGlyph3DRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

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
      op->vtkGlyph3DRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetMeshVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMeshVisibility(temp0);
      }
    else
      {
      op->vtkGlyph3DRepresentation::SetMeshVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

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
      op->vtkGlyph3DRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetMaskArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskArray(temp0);
      }
    else
      {
      op->vtkGlyph3DRepresentation::SetMaskArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetScaleArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleArray(temp0);
      }
    else
      {
      op->vtkGlyph3DRepresentation::SetScaleArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetOrientationArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationArray(temp0);
      }
    else
      {
      op->vtkGlyph3DRepresentation::SetOrientationArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaling(temp0);
      }
    else
      {
      op->vtkGlyph3DRepresentation::SetScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleMode(temp0);
      }
    else
      {
      op->vtkGlyph3DRepresentation::SetScaleMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleFactor(temp0);
      }
    else
      {
      op->vtkGlyph3DRepresentation::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrient(temp0);
      }
    else
      {
      op->vtkGlyph3DRepresentation::SetOrient(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetOrientationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationMode(temp0);
      }
    else
      {
      op->vtkGlyph3DRepresentation::SetOrientationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetMasking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMasking(temp0);
      }
    else
      {
      op->vtkGlyph3DRepresentation::SetMasking(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGlyph3DRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetInterpolateScalarsBeforeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateScalarsBeforeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolateScalarsBeforeMapping(temp0);
      }
    else
      {
      op->vtkGlyph3DRepresentation::SetInterpolateScalarsBeforeMapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkGlyph3DRepresentation::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMapScalars(temp0);
      }
    else
      {
      op->vtkGlyph3DRepresentation::SetMapScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph3DRepresentation_SetStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph3DRepresentation *op = static_cast<vtkGlyph3DRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStatic(temp0);
      }
    else
      {
      op->vtkGlyph3DRepresentation::SetStatic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph3DRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkGlyph3DRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGlyph3DRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGlyph3DRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGlyph3DRepresentation\nC++: vtkGlyph3DRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGlyph3DRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGlyph3DRepresentation\nC++: vtkGlyph3DRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ProcessViewRequest", PyvtkGlyph3DRepresentation_ProcessViewRequest, METH_VARARGS,
   (char*)"V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: virtual int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {(char*)"SetMeshVisibility", PyvtkGlyph3DRepresentation_SetMeshVisibility, METH_VARARGS,
   (char*)"V.SetMeshVisibility(bool)\nC++: void SetMeshVisibility(bool visible)\n\nToggle the visibility of the original mesh. If\nthis->GetVisibility() is false, then this has no effect.\n"},
  {(char*)"SetVisibility", PyvtkGlyph3DRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool)\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {(char*)"SetMaskArray", PyvtkGlyph3DRepresentation_SetMaskArray, METH_VARARGS,
   (char*)"V.SetMaskArray(string)\nC++: void SetMaskArray(const char *val)\n\n"},
  {(char*)"SetScaleArray", PyvtkGlyph3DRepresentation_SetScaleArray, METH_VARARGS,
   (char*)"V.SetScaleArray(string)\nC++: void SetScaleArray(const char *val)\n\n"},
  {(char*)"SetOrientationArray", PyvtkGlyph3DRepresentation_SetOrientationArray, METH_VARARGS,
   (char*)"V.SetOrientationArray(string)\nC++: void SetOrientationArray(const char *val)\n\n"},
  {(char*)"SetScaling", PyvtkGlyph3DRepresentation_SetScaling, METH_VARARGS,
   (char*)"V.SetScaling(bool)\nC++: void SetScaling(bool val)\n\n"},
  {(char*)"SetScaleMode", PyvtkGlyph3DRepresentation_SetScaleMode, METH_VARARGS,
   (char*)"V.SetScaleMode(int)\nC++: void SetScaleMode(int val)\n\n"},
  {(char*)"SetScaleFactor", PyvtkGlyph3DRepresentation_SetScaleFactor, METH_VARARGS,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double val)\n\n"},
  {(char*)"SetOrient", PyvtkGlyph3DRepresentation_SetOrient, METH_VARARGS,
   (char*)"V.SetOrient(bool)\nC++: void SetOrient(bool val)\n\n"},
  {(char*)"SetOrientationMode", PyvtkGlyph3DRepresentation_SetOrientationMode, METH_VARARGS,
   (char*)"V.SetOrientationMode(int)\nC++: void SetOrientationMode(int val)\n\n"},
  {(char*)"SetMasking", PyvtkGlyph3DRepresentation_SetMasking, METH_VARARGS,
   (char*)"V.SetMasking(bool)\nC++: void SetMasking(bool val)\n\n"},
  {(char*)"GetBounds", PyvtkGlyph3DRepresentation_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\n"},
  {(char*)"SetInterpolateScalarsBeforeMapping", PyvtkGlyph3DRepresentation_SetInterpolateScalarsBeforeMapping, METH_VARARGS,
   (char*)"V.SetInterpolateScalarsBeforeMapping(int)\nC++: virtual void SetInterpolateScalarsBeforeMapping(int val)\n\n"},
  {(char*)"SetLookupTable", PyvtkGlyph3DRepresentation_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *val)\n\n"},
  {(char*)"SetMapScalars", PyvtkGlyph3DRepresentation_SetMapScalars, METH_VARARGS,
   (char*)"V.SetMapScalars(int)\nC++: virtual void SetMapScalars(int val)\n\n"},
  {(char*)"SetStatic", PyvtkGlyph3DRepresentation_SetStatic, METH_VARARGS,
   (char*)"V.SetStatic(int)\nC++: virtual void SetStatic(int val)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGlyph3DRepresentation_StaticNew()
{
  return vtkGlyph3DRepresentation::New();
}

PyObject *PyVTKClass_vtkGlyph3DRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGlyph3DRepresentation_StaticNew,
    PyvtkGlyph3DRepresentation_Methods,
    "vtkGlyph3DRepresentation", modulename,
    NULL, NULL,
    PyvtkGlyph3DRepresentation_Doc(),
    PyVTKClass_vtkGeometryRepresentationNew(modulename));
  return cls;
}

const char **PyvtkGlyph3DRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkGlyph3DRepresentation\n\n",
    "Superclass: vtkGeometryRepresentation\n\n",
    "vtkGlyph3DRepresentation is a representation that uses the\nvtkGlyph3DMapper for rendering glyphs. Note that\nvtkGlyph3DRepresentation requires that the \"glyph\" source data is\navailable on all rendering processes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGlyph3DRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGlyph3DRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGlyph3DRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

