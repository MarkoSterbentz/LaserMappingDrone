// python wrapper for vtkAreaPicker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAreaPicker.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAreaPicker(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAreaPickerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractPropPickerNew
extern "C" { PyObject *PyVTKClass_vtkAbstractPropPickerNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractPropPickerNew
#endif

static const char **PyvtkAreaPicker_Doc();


static PyObject *
PyvtkAreaPicker_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAreaPicker::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAreaPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAreaPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAreaPicker::NewInstance());

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
PyvtkAreaPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAreaPicker *tempr = vtkAreaPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaPicker_SetPickCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetPickCoords(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkAreaPicker::SetPickCoords(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAreaPicker_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkAreaPicker::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAreaPicker_Pick_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Pick() :
      op->vtkAreaPicker::Pick());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAreaPicker_Pick_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkRenderer *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkRenderer")))
    {
    int tempr = (ap.IsBound() ?
      op->Pick(temp0, temp1, temp2, temp3) :
      op->vtkAreaPicker::Pick(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAreaPicker_Pick(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkAreaPicker_Pick_s1(self, args);
    case 3:
    case 4:
      return PyvtkAreaPicker_Pick_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Pick");
  return NULL;
}



static PyObject *
PyvtkAreaPicker_AreaPick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AreaPick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkRenderer *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp4, "vtkRenderer")))
    {
    int tempr = (ap.IsBound() ?
      op->AreaPick(temp0, temp1, temp2, temp3, temp4) :
      op->vtkAreaPicker::AreaPick(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaPicker_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractMapper3D *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkAreaPicker::GetMapper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaPicker_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkAreaPicker::GetDataSet());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaPicker_GetProp3Ds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp3Ds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp3DCollection *tempr = (ap.IsBound() ?
      op->GetProp3Ds() :
      op->vtkAreaPicker::GetProp3Ds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaPicker_GetFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlanes *tempr = (ap.IsBound() ?
      op->GetFrustum() :
      op->vtkAreaPicker::GetFrustum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaPicker_GetClipPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaPicker *op = static_cast<vtkAreaPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetClipPoints() :
      op->vtkAreaPicker::GetClipPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAreaPicker_Methods[] = {
  {(char*)"GetClassName", PyvtkAreaPicker_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAreaPicker_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAreaPicker_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAreaPicker\nC++: vtkAreaPicker *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAreaPicker_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAreaPicker\nC++: vtkAreaPicker *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPickCoords", PyvtkAreaPicker_SetPickCoords, METH_VARARGS,
   (char*)"V.SetPickCoords(float, float, float, float)\nC++: void SetPickCoords(double x0, double y0, double x1,\n    double y1)\n\nSet the default screen rectangle to pick in.\n"},
  {(char*)"SetRenderer", PyvtkAreaPicker_SetRenderer, METH_VARARGS,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *)\n\nSet the default renderer to pick on.\n"},
  {(char*)"Pick", PyvtkAreaPicker_Pick, METH_VARARGS,
   (char*)"V.Pick() -> int\nC++: virtual int Pick()\nV.Pick(float, float, float, vtkRenderer) -> int\nC++: virtual int Pick(double x0, double y0, double z0,\n    vtkRenderer *renderer=NULL)\n\nPerform an AreaPick within the default screen rectangle and\nrenderer.\n"},
  {(char*)"AreaPick", PyvtkAreaPicker_AreaPick, METH_VARARGS,
   (char*)"V.AreaPick(float, float, float, float, vtkRenderer) -> int\nC++: virtual int AreaPick(double x0, double y0, double x1,\n    double y1, vtkRenderer *renderer=NULL)\n\nPerform pick operation in volume behind the given screen\ncoordinates. Props intersecting the selection frustum will be\naccessible via GetProp3D. GetPlanes returns a vtkImplicitFunciton\nsuitable for vtkExtractGeometry.\n"},
  {(char*)"GetMapper", PyvtkAreaPicker_GetMapper, METH_VARARGS,
   (char*)"V.GetMapper() -> vtkAbstractMapper3D\nC++: vtkAbstractMapper3D *GetMapper()\n\nReturn mapper that was picked (if any).\n"},
  {(char*)"GetDataSet", PyvtkAreaPicker_GetDataSet, METH_VARARGS,
   (char*)"V.GetDataSet() -> vtkDataSet\nC++: vtkDataSet *GetDataSet()\n\nGet a pointer to the dataset that was picked (if any). If nothing\nwas picked then NULL is returned.\n"},
  {(char*)"GetProp3Ds", PyvtkAreaPicker_GetProp3Ds, METH_VARARGS,
   (char*)"V.GetProp3Ds() -> vtkProp3DCollection\nC++: vtkProp3DCollection *GetProp3Ds()\n\nReturn a collection of all the prop 3D's that were intersected by\nthe pick ray. This collection is not sorted.\n"},
  {(char*)"GetFrustum", PyvtkAreaPicker_GetFrustum, METH_VARARGS,
   (char*)"V.GetFrustum() -> vtkPlanes\nC++: vtkPlanes *GetFrustum()\n\nReturn the six planes that define the selection frustum. The\nimplicit function defined by the planes evaluates to negative\ninside and positive outside.\n"},
  {(char*)"GetClipPoints", PyvtkAreaPicker_GetClipPoints, METH_VARARGS,
   (char*)"V.GetClipPoints() -> vtkPoints\nC++: vtkPoints *GetClipPoints()\n\nReturn eight points that define the selection frustum.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAreaPicker_StaticNew()
{
  return vtkAreaPicker::New();
}

PyObject *PyVTKClass_vtkAreaPickerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAreaPicker_StaticNew,
    PyvtkAreaPicker_Methods,
    "vtkAreaPicker", modulename,
    NULL, NULL,
    PyvtkAreaPicker_Doc(),
    PyVTKClass_vtkAbstractPropPickerNew(modulename));
  return cls;
}

const char **PyvtkAreaPicker_Doc()
{
  static const char *docstring[] = {
    "vtkAreaPicker - Picks props behind a selection rectangle on a\nviewport.\n\n",
    "Superclass: vtkAbstractPropPicker\n\n",
    "The vtkAreaPicker picks all vtkProp3Ds that lie behind the screen\nspace rectangle from x0,y0 and x1,y1. The selection is based upon the\nbounding box of the prop and is thus not exact.\n\nLike vtkPicker, a pick results in a list of Prop3Ds because many\nprops may lie within the pick frustum. You can also get an\nAssemblyPath, which in this case is defined to be the path to the one\nparticular prop in th",
    "e Prop3D list that lies nearest to the near\nplane.\n\nThis picker also returns the selection frustum, defined as either a\nvtkPlanes, or a set of eight corner vertices in world space. The\nvtkPlanes version is an ImplicitFunction, which is suitable for use\nwith the vtkExtractGeometry. The six frustum planes are in order:\nleft, right, bottom, top, near, far\n\nBecause this picker picks everything within ",
    "a volume, the world pick\npoint result is ill-defined. Therefore if you ask this class for the\nworld pick position, you will get the centroid of the pick frustum.\nThis may be outside of all props in the prop list.\n\nSee Also:\n\nvtkInteractorStyleRubberBandPick, vtkExtractSelectedFrustum.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAreaPicker(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAreaPickerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAreaPicker", o) != 0)
    {
    Py_DECREF(o);
    }

}

