// python wrapper for vtkScatterPlotPainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkScatterPlotPainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkScatterPlotPainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkScatterPlotPainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPainterNew
extern "C" { PyObject *PyVTKClass_vtkPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPainterNew
#endif

static const char **PyvtkScatterPlotPainter_Doc();


static PyObject *
PyvtkScatterPlotPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotPainter *op = static_cast<vtkScatterPlotPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkScatterPlotPainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotPainter *op = static_cast<vtkScatterPlotPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScatterPlotPainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotPainter *op = static_cast<vtkScatterPlotPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkScatterPlotPainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScatterPlotPainter::NewInstance());

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
PyvtkScatterPlotPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkScatterPlotPainter *tempr = vtkScatterPlotPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotPainter *op = static_cast<vtkScatterPlotPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkScatterPlotPainter::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_GetArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotPainter *op = static_cast<vtkScatterPlotPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetArray(temp0) :
      op->vtkScatterPlotPainter::GetArray(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkScatterPlotPainter_GetArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotPainter *op = static_cast<vtkScatterPlotPainter *>(vp);

  int temp0;
  vtkDataSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet"))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetArray(temp0, temp1) :
      op->vtkScatterPlotPainter::GetArray(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkScatterPlotPainter_GetArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkScatterPlotPainter_GetArray_s1(self, args);
    case 2:
      return PyvtkScatterPlotPainter_GetArray_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetArray");
  return NULL;
}



static PyObject *
PyvtkScatterPlotPainter_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotPainter *op = static_cast<vtkScatterPlotPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent(temp0) :
      op->vtkScatterPlotPainter::GetArrayComponent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_THREED_MODE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "THREED_MODE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkScatterPlotPainter::THREED_MODE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_COLORIZE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COLORIZE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkScatterPlotPainter::COLORIZE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_GLYPH_MODE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GLYPH_MODE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkScatterPlotPainter::GLYPH_MODE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_SCALING_ARRAY_MODE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SCALING_ARRAY_MODE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkScatterPlotPainter::SCALING_ARRAY_MODE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_SCALE_MODE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SCALE_MODE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkScatterPlotPainter::SCALE_MODE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_SCALE_FACTOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SCALE_FACTOR");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleKey *tempr = vtkScatterPlotPainter::SCALE_FACTOR();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_ORIENTATION_MODE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ORIENTATION_MODE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkScatterPlotPainter::ORIENTATION_MODE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_NESTED_DISPLAY_LISTS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NESTED_DISPLAY_LISTS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkScatterPlotPainter::NESTED_DISPLAY_LISTS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_PARALLEL_TO_CAMERA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PARALLEL_TO_CAMERA");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkScatterPlotPainter::PARALLEL_TO_CAMERA();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_SetSourceGlyphMappers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceGlyphMappers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotPainter *op = static_cast<vtkScatterPlotPainter *>(vp);

  vtkCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
    {
    if (ap.IsBound())
      {
      op->SetSourceGlyphMappers(temp0);
      }
    else
      {
      op->vtkScatterPlotPainter::SetSourceGlyphMappers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_GetSourceGlyphMappers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceGlyphMappers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotPainter *op = static_cast<vtkScatterPlotPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetSourceGlyphMappers() :
      op->vtkScatterPlotPainter::GetSourceGlyphMappers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotPainter *op = static_cast<vtkScatterPlotPainter *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkScatterPlotPainter::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_UpdateBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotPainter *op = static_cast<vtkScatterPlotPainter *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->UpdateBounds(temp0);
      }
    else
      {
      op->vtkScatterPlotPainter::UpdateBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScatterPlotPainter_GetInputArrayInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArrayInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotPainter *op = static_cast<vtkScatterPlotPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInputArrayInformation(temp0) :
      op->vtkScatterPlotPainter::GetInputArrayInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkScatterPlotPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkScatterPlotPainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkScatterPlotPainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkScatterPlotPainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkScatterPlotPainter\nC++: vtkScatterPlotPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkScatterPlotPainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkScatterPlotPainter\nC++: vtkScatterPlotPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkScatterPlotPainter_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\n"},
  {(char*)"GetArray", PyvtkScatterPlotPainter_GetArray, METH_VARARGS,
   (char*)"V.GetArray(int) -> vtkDataArray\nC++: vtkDataArray *GetArray(int idx)\nV.GetArray(int, vtkDataSet) -> vtkDataArray\nC++: vtkDataArray *GetArray(int idx, vtkDataSet *input)\n\nSee vtkScatterPlotMapper::ArrayIndex\n"},
  {(char*)"GetArrayComponent", PyvtkScatterPlotPainter_GetArrayComponent, METH_VARARGS,
   (char*)"V.GetArrayComponent(int) -> int\nC++: int GetArrayComponent(int idx)\n\nSee vtkScatterPlotMapper::ArrayIndex\n"},
  {(char*)"THREED_MODE", PyvtkScatterPlotPainter_THREED_MODE, METH_VARARGS | METH_STATIC,
   (char*)"V.THREED_MODE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *THREED_MODE()\n\n"},
  {(char*)"COLORIZE", PyvtkScatterPlotPainter_COLORIZE, METH_VARARGS | METH_STATIC,
   (char*)"V.COLORIZE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *COLORIZE()\n\n"},
  {(char*)"GLYPH_MODE", PyvtkScatterPlotPainter_GLYPH_MODE, METH_VARARGS | METH_STATIC,
   (char*)"V.GLYPH_MODE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *GLYPH_MODE()\n\n"},
  {(char*)"SCALING_ARRAY_MODE", PyvtkScatterPlotPainter_SCALING_ARRAY_MODE, METH_VARARGS | METH_STATIC,
   (char*)"V.SCALING_ARRAY_MODE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *SCALING_ARRAY_MODE()\n\n"},
  {(char*)"SCALE_MODE", PyvtkScatterPlotPainter_SCALE_MODE, METH_VARARGS | METH_STATIC,
   (char*)"V.SCALE_MODE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *SCALE_MODE()\n\n"},
  {(char*)"SCALE_FACTOR", PyvtkScatterPlotPainter_SCALE_FACTOR, METH_VARARGS | METH_STATIC,
   (char*)"V.SCALE_FACTOR() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *SCALE_FACTOR()\n\n"},
  {(char*)"ORIENTATION_MODE", PyvtkScatterPlotPainter_ORIENTATION_MODE, METH_VARARGS | METH_STATIC,
   (char*)"V.ORIENTATION_MODE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ORIENTATION_MODE()\n\n"},
  {(char*)"NESTED_DISPLAY_LISTS", PyvtkScatterPlotPainter_NESTED_DISPLAY_LISTS, METH_VARARGS | METH_STATIC,
   (char*)"V.NESTED_DISPLAY_LISTS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *NESTED_DISPLAY_LISTS()\n\n"},
  {(char*)"PARALLEL_TO_CAMERA", PyvtkScatterPlotPainter_PARALLEL_TO_CAMERA, METH_VARARGS | METH_STATIC,
   (char*)"V.PARALLEL_TO_CAMERA() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PARALLEL_TO_CAMERA()\n\n"},
  {(char*)"SetSourceGlyphMappers", PyvtkScatterPlotPainter_SetSourceGlyphMappers, METH_VARARGS,
   (char*)"V.SetSourceGlyphMappers(vtkCollection)\nC++: virtual void SetSourceGlyphMappers(vtkCollection *)\n\n"},
  {(char*)"GetSourceGlyphMappers", PyvtkScatterPlotPainter_GetSourceGlyphMappers, METH_VARARGS,
   (char*)"V.GetSourceGlyphMappers() -> vtkCollection\nC++: vtkCollection *GetSourceGlyphMappers()\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkScatterPlotPainter_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *window)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"UpdateBounds", PyvtkScatterPlotPainter_UpdateBounds, METH_VARARGS,
   (char*)"V.UpdateBounds([float, float, float, float, float, float])\nC++: virtual void UpdateBounds(double bounds[6])\n\n"},
  {(char*)"GetInputArrayInformation", PyvtkScatterPlotPainter_GetInputArrayInformation, METH_VARARGS,
   (char*)"V.GetInputArrayInformation(int) -> vtkInformation\nC++: vtkInformation *GetInputArrayInformation(int idx)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkScatterPlotPainter_StaticNew()
{
  return vtkScatterPlotPainter::New();
}

PyObject *PyVTKClass_vtkScatterPlotPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkScatterPlotPainter_StaticNew,
    PyvtkScatterPlotPainter_Methods,
    "vtkScatterPlotPainter", modulename,
    NULL, NULL,
    PyvtkScatterPlotPainter_Doc(),
    PyVTKClass_vtkPainterNew(modulename));
  return cls;
}

const char **PyvtkScatterPlotPainter_Doc()
{
  static const char *docstring[] = {
    "vtkScatterPlotMapper - Display a vtkDataSet with flexibility\n\n",
    "Superclass: vtkPainter\n\n",
    "The mappers gives flexibility in the display of the input. By setting\nthe arrays to process, every element of the display can be\ncontrolled. i.e. the coordinates of the points can be controlled by\nany field array or the color of the points can controlled by the\nx-axes.\n\nImplementation:\n\nSee Also:\n\nvtkGlyph3D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkScatterPlotPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkScatterPlotPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkScatterPlotPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

