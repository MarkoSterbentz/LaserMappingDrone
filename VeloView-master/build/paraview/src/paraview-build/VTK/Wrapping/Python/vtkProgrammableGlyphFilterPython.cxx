// python wrapper for vtkProgrammableGlyphFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProgrammableGlyphFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProgrammableGlyphFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProgrammableGlyphFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkProgrammableGlyphFilter_Doc();


static PyObject *
PyvtkProgrammableGlyphFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProgrammableGlyphFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProgrammableGlyphFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProgrammableGlyphFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProgrammableGlyphFilter::NewInstance());

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
PyvtkProgrammableGlyphFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProgrammableGlyphFilter *tempr = vtkProgrammableGlyphFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSourceConnection(temp0);
      }
    else
      {
      op->vtkProgrammableGlyphFilter::SetSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetSourceData(temp0);
      }
    else
      {
      op->vtkProgrammableGlyphFilter::SetSourceData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkProgrammableGlyphFilter::GetSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_SetGlyphMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFunction(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphMethod(
        (temp0 == Py_None ? NULL : vtkPythonVoidFunc),
        (temp0 == Py_None ? NULL : temp0));
      if (temp0 != Py_None)
        {
        Py_INCREF(temp0);
        }
      op->SetGlyphMethodArgDelete(
        (temp0 == Py_None ? NULL : vtkPythonVoidFuncArgDelete));
      }
    else
      {
      op->vtkProgrammableGlyphFilter::SetGlyphMethod(
        (temp0 == Py_None ? NULL : vtkPythonVoidFunc),
        (temp0 == Py_None ? NULL : temp0));
      if (temp0 != Py_None)
        {
        Py_INCREF(temp0);
        }
      op->vtkProgrammableGlyphFilter::SetGlyphMethodArgDelete(
        (temp0 == Py_None ? NULL : vtkPythonVoidFuncArgDelete));
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_GetPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointId() :
      op->vtkProgrammableGlyphFilter::GetPointId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint() :
      op->vtkProgrammableGlyphFilter::GetPoint());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_GetPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPointData *tempr = (ap.IsBound() ?
      op->GetPointData() :
      op->vtkProgrammableGlyphFilter::GetPointData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorMode(temp0);
      }
    else
      {
      op->vtkProgrammableGlyphFilter::SetColorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkProgrammableGlyphFilter::GetColorMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_SetColorModeToColorByInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToColorByInput();
      }
    else
      {
      op->vtkProgrammableGlyphFilter::SetColorModeToColorByInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_SetColorModeToColorBySource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorBySource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToColorBySource();
      }
    else
      {
      op->vtkProgrammableGlyphFilter::SetColorModeToColorBySource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableGlyphFilter_GetColorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableGlyphFilter *op = static_cast<vtkProgrammableGlyphFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetColorModeAsString() :
      op->vtkProgrammableGlyphFilter::GetColorModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProgrammableGlyphFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkProgrammableGlyphFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProgrammableGlyphFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProgrammableGlyphFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProgrammableGlyphFilter\nC++: vtkProgrammableGlyphFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProgrammableGlyphFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProgrammableGlyphFilter\nC++: vtkProgrammableGlyphFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSourceConnection", PyvtkProgrammableGlyphFilter_SetSourceConnection, METH_VARARGS,
   (char*)"V.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *output)\n\nSetup a connection for the source to use as the glyph. Note: you\ncan change the source during execution of this filter. This is\nequivalent to SetInputConnection(1, output);\n"},
  {(char*)"SetSourceData", PyvtkProgrammableGlyphFilter_SetSourceData, METH_VARARGS,
   (char*)"V.SetSourceData(vtkPolyData)\nC++: void SetSourceData(vtkPolyData *source)\n\nSet/Get the source to use for this glyph. Note that\nSetSourceData() does not set a pipeline connection but directly\nuses the polydata.\n"},
  {(char*)"GetSource", PyvtkProgrammableGlyphFilter_GetSource, METH_VARARGS,
   (char*)"V.GetSource() -> vtkPolyData\nC++: vtkPolyData *GetSource()\n\nSet/Get the source to use for this glyph. Note that\nSetSourceData() does not set a pipeline connection but directly\nuses the polydata.\n"},
  {(char*)"SetGlyphMethod", PyvtkProgrammableGlyphFilter_SetGlyphMethod, METH_VARARGS,
   (char*)"V.SetGlyphMethod(function)\nC++: void SetGlyphMethod(void (*f)(void *), void *arg)\n\nSpecify function to be called for each input point.\n"},
  {(char*)"GetPointId", PyvtkProgrammableGlyphFilter_GetPointId, METH_VARARGS,
   (char*)"V.GetPointId() -> int\nC++: vtkIdType GetPointId()\n\nGet the current point id during processing. Value only valid\nduring the Execute() method of this filter. (Meant to be called\nby the GlyphMethod().)\n"},
  {(char*)"GetPoint", PyvtkProgrammableGlyphFilter_GetPoint, METH_VARARGS,
   (char*)"V.GetPoint() -> (float, float, float)\nC++: double *GetPoint()\n\n"},
  {(char*)"GetPointData", PyvtkProgrammableGlyphFilter_GetPointData, METH_VARARGS,
   (char*)"V.GetPointData() -> vtkPointData\nC++: vtkPointData *GetPointData()\n\nGet the set of point data attributes for the input. A convenience\nto the programmer to be used in the GlyphMethod(). Only valid\nduring the Execute() method of this filter.\n"},
  {(char*)"SetColorMode", PyvtkProgrammableGlyphFilter_SetColorMode, METH_VARARGS,
   (char*)"V.SetColorMode(int)\nC++: void SetColorMode(int a)\n\nEither color by the input or source scalar data.\n"},
  {(char*)"GetColorMode", PyvtkProgrammableGlyphFilter_GetColorMode, METH_VARARGS,
   (char*)"V.GetColorMode() -> int\nC++: int GetColorMode()\n\nEither color by the input or source scalar data.\n"},
  {(char*)"SetColorModeToColorByInput", PyvtkProgrammableGlyphFilter_SetColorModeToColorByInput, METH_VARARGS,
   (char*)"V.SetColorModeToColorByInput()\nC++: void SetColorModeToColorByInput()\n\nEither color by the input or source scalar data.\n"},
  {(char*)"SetColorModeToColorBySource", PyvtkProgrammableGlyphFilter_SetColorModeToColorBySource, METH_VARARGS,
   (char*)"V.SetColorModeToColorBySource()\nC++: void SetColorModeToColorBySource()\n\nEither color by the input or source scalar data.\n"},
  {(char*)"GetColorModeAsString", PyvtkProgrammableGlyphFilter_GetColorModeAsString, METH_VARARGS,
   (char*)"V.GetColorModeAsString() -> string\nC++: const char *GetColorModeAsString()\n\nEither color by the input or source scalar data.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProgrammableGlyphFilter_StaticNew()
{
  return vtkProgrammableGlyphFilter::New();
}

PyObject *PyVTKClass_vtkProgrammableGlyphFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProgrammableGlyphFilter_StaticNew,
    PyvtkProgrammableGlyphFilter_Methods,
    "vtkProgrammableGlyphFilter", modulename,
    NULL, NULL,
    PyvtkProgrammableGlyphFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProgrammableGlyphFilter_Doc()
{
  static const char *docstring[] = {
    "vtkProgrammableGlyphFilter - control the generation and placement of\nglyphs at input points\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkProgrammableGlyphFilter is a filter that allows you to place a\nglyph at each input point in the dataset. In addition, the filter is\nprogrammable which means the user has control over the generation of\nthe glyph. The glyphs can be controlled via the point data attributes\n(e.g., scalars, vectors, etc.) or any other information in the input\ndataset.\n\nThis is the way the filter works. You must defi",
    "ne an input dataset\nwhich at a minimum contains points with associated attribute values.\nAlso, the Source instance variable must be set which is of type\nvtkPolyData. Then, for each point in the input, the PointId is set to\nthe current point id, and a user-defined function is called (i.e.,\nGlyphMethod). In this method you can manipulate the Source data\n(including changing to a different Source obje",
    "ct). After the\nGlyphMethod is called, vtkProgrammableGlyphFilter will invoke an\nUpdate() on its Source object, and then copy its data to the output\nof the vtkProgrammableGlyphFilter. Therefore the output of this\nfilter is of type vtkPolyData.\n\nAnother option to this filter is the way you color the glyphs. You\ncan use the scalar data from the input or the source. The instance\nvariable ColorMode con",
    "trols this behavior.\n\nCaveats:\n\nThis filter operates on point data attributes. If you want to use\ncell data attributes, use a filter like vtkCellCenters to generate\npoints at the centers of cells, and then use these points.\n\nNote that the data attributes (cell and point) are passed to the\noutput of this filter from the Source object. This works well as long\nas you are not changing the class of the",
    " Source object during\nexecution. However, if the class of the Source object changes, then\nthe potential exists that the data attributes might change during\nexecution (e.g., scalars available from one source and not the next),\npossibly fouling up the copying of data attributes to the output. In\nthis case, you may have to manually set the output's copy flags\n(e.g., CopyScalarsOn/Off(), CopyVectorsOn",
    "/Off(), etc.) to control\nwhat's being copied.\n\nSee Also:\n\nvtkGlyph3D vtkTensorGlyph vtkCellCenters\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProgrammableGlyphFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProgrammableGlyphFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProgrammableGlyphFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_COLOR_BY_INPUT", 0 },
        { "VTK_COLOR_BY_SOURCE", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

