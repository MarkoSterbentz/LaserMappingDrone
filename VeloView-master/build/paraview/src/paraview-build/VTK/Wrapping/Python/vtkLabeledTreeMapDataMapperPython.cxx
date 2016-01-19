// python wrapper for vtkLabeledTreeMapDataMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLabeledTreeMapDataMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLabeledTreeMapDataMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLabeledTreeMapDataMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLabeledDataMapperNew
extern "C" { PyObject *PyVTKClass_vtkLabeledDataMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkLabeledDataMapperNew
#endif

static const char **PyvtkLabeledTreeMapDataMapper_Doc();


static PyObject *
PyvtkLabeledTreeMapDataMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLabeledTreeMapDataMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabeledTreeMapDataMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLabeledTreeMapDataMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabeledTreeMapDataMapper::NewInstance());

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
PyvtkLabeledTreeMapDataMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLabeledTreeMapDataMapper *tempr = vtkLabeledTreeMapDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  vtkViewport *temp0 = NULL;
  vtkActor2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderOpaqueGeometry(temp0, temp1);
      }
    else
      {
      op->vtkLabeledTreeMapDataMapper::RenderOpaqueGeometry(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  vtkViewport *temp0 = NULL;
  vtkActor2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderOverlay(temp0, temp1);
      }
    else
      {
      op->vtkLabeledTreeMapDataMapper::RenderOverlay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_GetInputTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetInputTree() :
      op->vtkLabeledTreeMapDataMapper::GetInputTree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_SetRectanglesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRectanglesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRectanglesArrayName(temp0);
      }
    else
      {
      op->vtkLabeledTreeMapDataMapper::SetRectanglesArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_GetClipTextMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipTextMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClipTextMode() :
      op->vtkLabeledTreeMapDataMapper::GetClipTextMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_SetClipTextMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipTextMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClipTextMode(temp0);
      }
    else
      {
      op->vtkLabeledTreeMapDataMapper::SetClipTextMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_GetChildMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetChildMotion() :
      op->vtkLabeledTreeMapDataMapper::GetChildMotion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_SetChildMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChildMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetChildMotion(temp0);
      }
    else
      {
      op->vtkLabeledTreeMapDataMapper::SetChildMotion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_GetDynamicLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDynamicLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDynamicLevel() :
      op->vtkLabeledTreeMapDataMapper::GetDynamicLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_SetDynamicLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDynamicLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDynamicLevel(temp0);
      }
    else
      {
      op->vtkLabeledTreeMapDataMapper::SetDynamicLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

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
      op->vtkLabeledTreeMapDataMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_SetFontSizeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontSizeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  int temp0;
  int temp1;
  int temp2 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->SetFontSizeRange(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLabeledTreeMapDataMapper::SetFontSizeRange(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_GetFontSizeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSizeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetFontSizeRange(temp0);
      }
    else
      {
      op->vtkLabeledTreeMapDataMapper::GetFontSizeRange(temp0);
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
PyvtkLabeledTreeMapDataMapper_SetLevelRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLevelRange(temp0, temp1);
      }
    else
      {
      op->vtkLabeledTreeMapDataMapper::SetLevelRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabeledTreeMapDataMapper_GetLevelRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledTreeMapDataMapper *op = static_cast<vtkLabeledTreeMapDataMapper *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetLevelRange(temp0);
      }
    else
      {
      op->vtkLabeledTreeMapDataMapper::GetLevelRange(temp0);
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

static PyMethodDef PyvtkLabeledTreeMapDataMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkLabeledTreeMapDataMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLabeledTreeMapDataMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLabeledTreeMapDataMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLabeledTreeMapDataMapper\nC++: vtkLabeledTreeMapDataMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLabeledTreeMapDataMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLabeledTreeMapDataMapper\nC++: vtkLabeledTreeMapDataMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkLabeledTreeMapDataMapper_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport, vtkActor2D)\nC++: virtual void RenderOpaqueGeometry(vtkViewport *viewport,\n    vtkActor2D *actor)\n\nDraw the text to the screen at each input point.\n"},
  {(char*)"RenderOverlay", PyvtkLabeledTreeMapDataMapper_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport, vtkActor2D)\nC++: virtual void RenderOverlay(vtkViewport *viewport,\n    vtkActor2D *actor)\n\nDraw the text to the screen at each input point.\n"},
  {(char*)"GetInputTree", PyvtkLabeledTreeMapDataMapper_GetInputTree, METH_VARARGS,
   (char*)"V.GetInputTree() -> vtkTree\nC++: virtual vtkTree *GetInputTree()\n\nThe input to this filter.\n"},
  {(char*)"SetRectanglesArrayName", PyvtkLabeledTreeMapDataMapper_SetRectanglesArrayName, METH_VARARGS,
   (char*)"V.SetRectanglesArrayName(string)\nC++: virtual void SetRectanglesArrayName(const char *name)\n\nThe name of the 4-tuple array used for\n"},
  {(char*)"GetClipTextMode", PyvtkLabeledTreeMapDataMapper_GetClipTextMode, METH_VARARGS,
   (char*)"V.GetClipTextMode() -> int\nC++: int GetClipTextMode()\n\nIndicates if the label can be displayed clipped by the Window\nmode = 0 - ok to clip labels 1 - auto center labels w/r to the\narea of the vertex's clipped region\n"},
  {(char*)"SetClipTextMode", PyvtkLabeledTreeMapDataMapper_SetClipTextMode, METH_VARARGS,
   (char*)"V.SetClipTextMode(int)\nC++: void SetClipTextMode(int a)\n\nIndicates if the label can be displayed clipped by the Window\nmode = 0 - ok to clip labels 1 - auto center labels w/r to the\narea of the vertex's clipped region\n"},
  {(char*)"GetChildMotion", PyvtkLabeledTreeMapDataMapper_GetChildMotion, METH_VARARGS,
   (char*)"V.GetChildMotion() -> int\nC++: int GetChildMotion()\n\nIndicates if the label can be moved by its ancestors\n"},
  {(char*)"SetChildMotion", PyvtkLabeledTreeMapDataMapper_SetChildMotion, METH_VARARGS,
   (char*)"V.SetChildMotion(int)\nC++: void SetChildMotion(int a)\n\nIndicates if the label can be moved by its ancestors\n"},
  {(char*)"GetDynamicLevel", PyvtkLabeledTreeMapDataMapper_GetDynamicLevel, METH_VARARGS,
   (char*)"V.GetDynamicLevel() -> int\nC++: int GetDynamicLevel()\n\nIndicates at which level labeling should be dynamic\n"},
  {(char*)"SetDynamicLevel", PyvtkLabeledTreeMapDataMapper_SetDynamicLevel, METH_VARARGS,
   (char*)"V.SetDynamicLevel(int)\nC++: void SetDynamicLevel(int a)\n\nIndicates at which level labeling should be dynamic\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkLabeledTreeMapDataMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor.\n"},
  {(char*)"SetFontSizeRange", PyvtkLabeledTreeMapDataMapper_SetFontSizeRange, METH_VARARGS,
   (char*)"V.SetFontSizeRange(int, int, int)\nC++: void SetFontSizeRange(int maxSize, int minSize, int delta=4)\n\nThe range of font sizes to use when rendering the labels.\n"},
  {(char*)"GetFontSizeRange", PyvtkLabeledTreeMapDataMapper_GetFontSizeRange, METH_VARARGS,
   (char*)"V.GetFontSizeRange([int, int, int])\nC++: void GetFontSizeRange(int range[3])\n\nThe range of font sizes to use when rendering the labels.\n"},
  {(char*)"SetLevelRange", PyvtkLabeledTreeMapDataMapper_SetLevelRange, METH_VARARGS,
   (char*)"V.SetLevelRange(int, int)\nC++: void SetLevelRange(int startLevel, int endLevel)\n\nThe range of levels to attempt to label. The level of a vertex is\nthe length of the path to the root (the root has level 0).\n"},
  {(char*)"GetLevelRange", PyvtkLabeledTreeMapDataMapper_GetLevelRange, METH_VARARGS,
   (char*)"V.GetLevelRange([int, int])\nC++: void GetLevelRange(int range[2])\n\nThe range of levels to attempt to label. The level of a vertex is\nthe length of the path to the root (the root has level 0).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLabeledTreeMapDataMapper_StaticNew()
{
  return vtkLabeledTreeMapDataMapper::New();
}

PyObject *PyVTKClass_vtkLabeledTreeMapDataMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLabeledTreeMapDataMapper_StaticNew,
    PyvtkLabeledTreeMapDataMapper_Methods,
    "vtkLabeledTreeMapDataMapper", modulename,
    NULL, NULL,
    PyvtkLabeledTreeMapDataMapper_Doc(),
    PyVTKClass_vtkLabeledDataMapperNew(modulename));
  return cls;
}

const char **PyvtkLabeledTreeMapDataMapper_Doc()
{
  static const char *docstring[] = {
    "vtkLabeledTreeMapDataMapper - draw text labels on a tree map\n\n",
    "Superclass: vtkLabeledDataMapper\n\n",
    "vtkLabeledTreeMapDataMapper is a mapper that renders text on a tree\nmap. A tree map is a vtkTree with an associated 4-tuple array used\nfor storing the boundary rectangle for each vertex in the tree. The\nuser must specify the array name used for storing the rectangles.\n\nThe mapper iterates through the tree and attempts and renders a label\ninside the vertex's rectangle as long as the following condi",
    "tions\nhold:\n1. The vertex level is within the range of levels specified for\n   labeling.\n2. The label can fully fit inside its box.\n3. The label does not overlap an ancestor's label.\n\nSee Also:\n\nvtkLabeledDataMapper\n\nThanks:\n\nThanks to Patricia Crossno, Ken Moreland, Andrew Wilson and Brian\nWylie from Sandia National Laboratories for their help in developing\nthis class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLabeledTreeMapDataMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLabeledTreeMapDataMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLabeledTreeMapDataMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

