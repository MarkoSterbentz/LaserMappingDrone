// python wrapper for vtkTerrainContourLineInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTerrainContourLineInterpolator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTerrainContourLineInterpolator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTerrainContourLineInterpolatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContourLineInterpolatorNew
extern "C" { PyObject *PyVTKClass_vtkContourLineInterpolatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkContourLineInterpolatorNew
#endif

static const char **PyvtkTerrainContourLineInterpolator_Doc();


static PyObject *
PyvtkTerrainContourLineInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTerrainContourLineInterpolator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTerrainContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTerrainContourLineInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTerrainContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTerrainContourLineInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTerrainContourLineInterpolator::NewInstance());

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
PyvtkTerrainContourLineInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTerrainContourLineInterpolator *tempr = vtkTerrainContourLineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTerrainContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkContourRepresentation *temp1 = NULL;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkContourRepresentation") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->InterpolateLine(temp0, temp1, temp2, temp3) :
      op->vtkTerrainContourLineInterpolator::InterpolateLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTerrainContourLineInterpolator_UpdateNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkContourRepresentation *temp1 = NULL;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkContourRepresentation") &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->UpdateNode(temp0, temp1, temp2, temp3) :
      op->vtkTerrainContourLineInterpolator::UpdateNode(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkTerrainContourLineInterpolator_SetImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetImageData(temp0);
      }
    else
      {
      op->vtkTerrainContourLineInterpolator::SetImageData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTerrainContourLineInterpolator_GetImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImageData() :
      op->vtkTerrainContourLineInterpolator::GetImageData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTerrainContourLineInterpolator_GetProjector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProjectedTerrainPath *tempr = (ap.IsBound() ?
      op->GetProjector() :
      op->vtkTerrainContourLineInterpolator::GetProjector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTerrainContourLineInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkTerrainContourLineInterpolator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkTerrainContourLineInterpolator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkTerrainContourLineInterpolator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTerrainContourLineInterpolator\nC++: vtkTerrainContourLineInterpolator *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkTerrainContourLineInterpolator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTerrainContourLineInterpolator\nC++: vtkTerrainContourLineInterpolator *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"InterpolateLine", PyvtkTerrainContourLineInterpolator_InterpolateLine, METH_VARARGS,
   (char*)"V.InterpolateLine(vtkRenderer, vtkContourRepresentation, int, int)\n     -> int\nC++: virtual int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2)\n\nInterpolate to create lines between contour nodes idx1 and idx2.\nDepending on the projection mode, the interpolated line may\neither hug the terrain, just connect the two points with a\nstraight line or a non-occluded interpolation. Used internally by\nvtkContourRepresentation.\n"},
  {(char*)"UpdateNode", PyvtkTerrainContourLineInterpolator_UpdateNode, METH_VARARGS,
   (char*)"V.UpdateNode(vtkRenderer, vtkContourRepresentation, [float, ...],\n    int) -> int\nC++: virtual int UpdateNode(vtkRenderer *,\n    vtkContourRepresentation *, double *node, int idx)\n\nThe interpolator is given a chance to update the node. Used\ninternally by vtkContourRepresentation Returns 0 if the node\n(world position) is unchanged.\n"},
  {(char*)"SetImageData", PyvtkTerrainContourLineInterpolator_SetImageData, METH_VARARGS,
   (char*)"V.SetImageData(vtkImageData)\nC++: virtual void SetImageData(vtkImageData *)\n\nSet the height field data. The height field data is a 2D image.\nThe scalars in the image represent the height field. This must be\nset.\n"},
  {(char*)"GetImageData", PyvtkTerrainContourLineInterpolator_GetImageData, METH_VARARGS,
   (char*)"V.GetImageData() -> vtkImageData\nC++: vtkImageData *GetImageData()\n\nSet the height field data. The height field data is a 2D image.\nThe scalars in the image represent the height field. This must be\nset.\n"},
  {(char*)"GetProjector", PyvtkTerrainContourLineInterpolator_GetProjector, METH_VARARGS,
   (char*)"V.GetProjector() -> vtkProjectedTerrainPath\nC++: vtkProjectedTerrainPath *GetProjector()\n\nGet the vtkProjectedTerrainPath operator used to project the\nterrain onto the data. This operator has several modes, See the\ndocumentation of vtkProjectedTerrainPath. The default mode is to\nhug the terrain data at 0 height offset.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTerrainContourLineInterpolator_StaticNew()
{
  return vtkTerrainContourLineInterpolator::New();
}

PyObject *PyVTKClass_vtkTerrainContourLineInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTerrainContourLineInterpolator_StaticNew,
    PyvtkTerrainContourLineInterpolator_Methods,
    "vtkTerrainContourLineInterpolator", modulename,
    NULL, NULL,
    PyvtkTerrainContourLineInterpolator_Doc(),
    PyVTKClass_vtkContourLineInterpolatorNew(modulename));
  return cls;
}

const char **PyvtkTerrainContourLineInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkTerrainContourLineInterpolator - Contour interpolator for DEM data.\n\n",
    "Superclass: vtkContourLineInterpolator\n\n",
    "vtkTerrainContourLineInterpolator interpolates nodes on height field\ndata. The class is meant to be used in conjunciton with a\nvtkContourWidget, enabling you to draw paths on terrain data. The\nclass internally uses a vtkProjectedTerrainPath. Users can set kind\nof interpolation desired between two node points by setting the modes\nof the this filter. For instance:\n\ncontourRepresentation->SetLineInte",
    "rpolator(interpolator);\ninterpolator->SetImageData( demDataFile );\ninterpolator->GetProjector()->SetProjectionModeToHug();\ninterpolator->SetHeightOffset(25.0);\n\nYou are required to set the ImageData to this class as the\nheight-field image.\n\nSee Also:\n\nvtkTerrainDataPointPlacer vtkProjectedTerrainPath\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTerrainContourLineInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTerrainContourLineInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTerrainContourLineInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

