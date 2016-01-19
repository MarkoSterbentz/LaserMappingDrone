// python wrapper for vtkAbstractMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAbstractMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAbstractMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAbstractMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkAbstractMapper_Doc();


static PyObject *
PyvtkAbstractMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAbstractMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractMapper::NewInstance());

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
PyvtkAbstractMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAbstractMapper *tempr = vtkAbstractMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAbstractMapper::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

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
      op->vtkAbstractMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetTimeToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTimeToDraw() :
      op->vtkAbstractMapper::GetTimeToDraw());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_AddClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->AddClippingPlane(temp0);
      }
    else
      {
      op->vtkAbstractMapper::AddClippingPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_RemoveClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->RemoveClippingPlane(temp0);
      }
    else
      {
      op->vtkAbstractMapper::RemoveClippingPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_RemoveAllClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllClippingPlanes();
      }
    else
      {
      op->vtkAbstractMapper::RemoveAllClippingPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_SetClippingPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlaneCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
    {
    if (ap.IsBound())
      {
      op->SetClippingPlanes(temp0);
      }
    else
      {
      op->vtkAbstractMapper::SetClippingPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractMapper_SetClippingPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkPlanes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
    {
    if (ap.IsBound())
      {
      op->SetClippingPlanes(temp0);
      }
    else
      {
      op->vtkAbstractMapper::SetClippingPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractMapper_SetClippingPlanes_Methods[] = {
  {NULL, PyvtkAbstractMapper_SetClippingPlanes_s1, METH_VARARGS,
   (char*)"@O *vtkPlaneCollection"},
  {NULL, PyvtkAbstractMapper_SetClippingPlanes_s2, METH_VARARGS,
   (char*)"@O *vtkPlanes"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAbstractMapper_SetClippingPlanes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAbstractMapper_SetClippingPlanes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetClippingPlanes");
  return NULL;
}



static PyObject *
PyvtkAbstractMapper_GetClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlaneCollection *tempr = (ap.IsBound() ?
      op->GetClippingPlanes() :
      op->vtkAbstractMapper::GetClippingPlanes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper *op = static_cast<vtkAbstractMapper *>(vp);

  vtkAbstractMapper *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkAbstractMapper::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetScalars(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetScalars");

  vtkDataSet *temp0 = NULL;
  int temp1;
  int temp2;
  int temp3;
  char *temp4 = NULL;
  int temp5;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    vtkDataArray *tempr = vtkAbstractMapper::GetScalars(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper_GetAbstractScalars(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAbstractScalars");

  vtkDataSet *temp0 = NULL;
  int temp1;
  int temp2;
  int temp3;
  char *temp4 = NULL;
  int temp5;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    vtkAbstractArray *tempr = vtkAbstractMapper::GetAbstractScalars(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAbstractMapper\nC++: vtkAbstractMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAbstractMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAbstractMapper\nC++: vtkAbstractMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkAbstractMapper_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverride Modifiedtime as we have added Clipping planes\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAbstractMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetTimeToDraw", PyvtkAbstractMapper_GetTimeToDraw, METH_VARARGS,
   (char*)"V.GetTimeToDraw() -> float\nC++: double GetTimeToDraw()\n\nGet the time required to draw the geometry last time it was\nrendered\n"},
  {(char*)"AddClippingPlane", PyvtkAbstractMapper_AddClippingPlane, METH_VARARGS,
   (char*)"V.AddClippingPlane(vtkPlane)\nC++: void AddClippingPlane(vtkPlane *plane)\n\nSpecify clipping planes to be applied when the data is mapped (at\nmost 6 clipping planes can be specified).\n"},
  {(char*)"RemoveClippingPlane", PyvtkAbstractMapper_RemoveClippingPlane, METH_VARARGS,
   (char*)"V.RemoveClippingPlane(vtkPlane)\nC++: void RemoveClippingPlane(vtkPlane *plane)\n\nSpecify clipping planes to be applied when the data is mapped (at\nmost 6 clipping planes can be specified).\n"},
  {(char*)"RemoveAllClippingPlanes", PyvtkAbstractMapper_RemoveAllClippingPlanes, METH_VARARGS,
   (char*)"V.RemoveAllClippingPlanes()\nC++: void RemoveAllClippingPlanes()\n\nSpecify clipping planes to be applied when the data is mapped (at\nmost 6 clipping planes can be specified).\n"},
  {(char*)"SetClippingPlanes", PyvtkAbstractMapper_SetClippingPlanes, METH_VARARGS,
   (char*)"V.SetClippingPlanes(vtkPlaneCollection)\nC++: virtual void SetClippingPlanes(vtkPlaneCollection *)\nV.SetClippingPlanes(vtkPlanes)\nC++: void SetClippingPlanes(vtkPlanes *planes)\n\nGet/Set the vtkPlaneCollection which specifies the clipping\nplanes.\n"},
  {(char*)"GetClippingPlanes", PyvtkAbstractMapper_GetClippingPlanes, METH_VARARGS,
   (char*)"V.GetClippingPlanes() -> vtkPlaneCollection\nC++: vtkPlaneCollection *GetClippingPlanes()\n\nGet/Set the vtkPlaneCollection which specifies the clipping\nplanes.\n"},
  {(char*)"ShallowCopy", PyvtkAbstractMapper_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkAbstractMapper)\nC++: void ShallowCopy(vtkAbstractMapper *m)\n\nMake a shallow copy of this mapper.\n"},
  {(char*)"GetScalars", PyvtkAbstractMapper_GetScalars, METH_VARARGS | METH_STATIC,
   (char*)"V.GetScalars(vtkDataSet, int, int, int, string, int)\n    -> vtkDataArray\nC++: static vtkDataArray *GetScalars(vtkDataSet *input,\n    int scalarMode, int arrayAccessMode, int arrayId,\n    const char *arrayName, int &cellFlag)\n\nInternal helper function for getting the active scalars. The\nscalar mode indicates where the scalars come from.  The cellFlag\nis a return value that is set when the scalars actually are cell\nscalars. (0 for point scalars, 1 for cell scalars, 2 for field\nscalars) The arrayAccessMode is used to indicate how to retrieve\nthe scalars from field data, per id or per name (if the\nscalarMode indicates that).\n"},
  {(char*)"GetAbstractScalars", PyvtkAbstractMapper_GetAbstractScalars, METH_VARARGS | METH_STATIC,
   (char*)"V.GetAbstractScalars(vtkDataSet, int, int, int, string, int)\n    -> vtkAbstractArray\nC++: static vtkAbstractArray *GetAbstractScalars(\n    vtkDataSet *input, int scalarMode, int arrayAccessMode,\n    int arrayId, const char *arrayName, int &cellFlag)\n\nInternal helper function for getting the active scalars as an\nabstract array. The scalar mode indicates where the scalars come\nfrom.  The cellFlag is a return value that is set when the\nscalars actually are cell scalars.  (0 for point scalars, 1 for\ncell scalars, 2 for field scalars) The arrayAccessMode is used to\nindicate how to retrieve the scalars from field data, per id or\nper name (if the scalarMode indicates that).\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractMapper_Methods,
    "vtkAbstractMapper", modulename,
    NULL, NULL,
    PyvtkAbstractMapper_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAbstractMapper_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractMapper - abstract class specifies interface to map data\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkAbstractMapper is an abstract class to specify interface between\ndata and graphics primitives or software rendering techniques.\nSubclasses of vtkAbstractMapper can be used for rendering 2D data,\ngeometry, or volumetric data.\n\nSee Also:\n\nvtkAbstractMapper3D vtkMapper vtkPolyDataMapper vtkVolumeMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractMapper", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 8; c++)
    {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "VTK_SCALAR_MODE_DEFAULT", 0 },
        { "VTK_SCALAR_MODE_USE_POINT_DATA", 1 },
        { "VTK_SCALAR_MODE_USE_CELL_DATA", 2 },
        { "VTK_SCALAR_MODE_USE_POINT_FIELD_DATA", 3 },
        { "VTK_SCALAR_MODE_USE_CELL_FIELD_DATA", 4 },
        { "VTK_SCALAR_MODE_USE_FIELD_DATA", 5 },
        { "VTK_GET_ARRAY_BY_ID", 0 },
        { "VTK_GET_ARRAY_BY_NAME", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

