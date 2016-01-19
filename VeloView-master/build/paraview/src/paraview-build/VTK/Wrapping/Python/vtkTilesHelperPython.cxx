// python wrapper for vtkTilesHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTilesHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTilesHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTilesHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTilesHelper_Doc();


static PyObject *
PyvtkTilesHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTilesHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTilesHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTilesHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTilesHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTilesHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTilesHelper::NewInstance());

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
PyvtkTilesHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTilesHelper *tempr = vtkTilesHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTilesHelper_SetTileDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTileDimensions(temp0, temp1);
      }
    else
      {
      op->vtkTilesHelper::SetTileDimensions(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTilesHelper_SetTileDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTileDimensions(temp0);
      }
    else
      {
      op->vtkTilesHelper::SetTileDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTilesHelper_SetTileDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTilesHelper_SetTileDimensions_s1(self, args);
    case 1:
      return PyvtkTilesHelper_SetTileDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTileDimensions");
  return NULL;
}



static PyObject *
PyvtkTilesHelper_GetTileDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTileDimensions() :
      op->vtkTilesHelper::GetTileDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTilesHelper_SetTileMullions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTileMullions(temp0, temp1);
      }
    else
      {
      op->vtkTilesHelper::SetTileMullions(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTilesHelper_SetTileMullions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTileMullions(temp0);
      }
    else
      {
      op->vtkTilesHelper::SetTileMullions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTilesHelper_SetTileMullions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTilesHelper_SetTileMullions_s1(self, args);
    case 1:
      return PyvtkTilesHelper_SetTileMullions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTileMullions");
  return NULL;
}



static PyObject *
PyvtkTilesHelper_GetTileMullions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileMullions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTileMullions() :
      op->vtkTilesHelper::GetTileMullions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTilesHelper_SetTileWindowSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTileWindowSize(temp0, temp1);
      }
    else
      {
      op->vtkTilesHelper::SetTileWindowSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTilesHelper_SetTileWindowSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTileWindowSize(temp0);
      }
    else
      {
      op->vtkTilesHelper::SetTileWindowSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTilesHelper_SetTileWindowSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTilesHelper_SetTileWindowSize_s1(self, args);
    case 1:
      return PyvtkTilesHelper_SetTileWindowSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTileWindowSize");
  return NULL;
}



static PyObject *
PyvtkTilesHelper_GetTileWindowSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileWindowSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTileWindowSize() :
      op->vtkTilesHelper::GetTileWindowSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTilesHelper_GetTileViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  int temp1;
  int temp2[4];
  int save2[4];
  const int size2 = 4;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->GetTileViewport(temp0, temp1, temp2) :
      op->vtkTilesHelper::GetTileViewport(temp0, temp1, temp2));

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkTilesHelper_GetNormalizedTileViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedTileViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  int temp1;
  double temp2[4];
  double save2[4];
  const int size2 = 4;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->GetNormalizedTileViewport(temp0, temp1, temp2) :
      op->vtkTilesHelper::GetNormalizedTileViewport(temp0, temp1, temp2));

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkTilesHelper_GetPhysicalViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhysicalViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  int temp1;
  double temp2[4];
  double save2[4];
  const int size2 = 4;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->GetPhysicalViewport(temp0, temp1, temp2) :
      op->vtkTilesHelper::GetPhysicalViewport(temp0, temp1, temp2));

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkTilesHelper_GetTileIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTilesHelper *op = static_cast<vtkTilesHelper *>(vp);

  int temp0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new int[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->GetTileIndex(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTilesHelper::GetTileIndex(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyMethodDef PyvtkTilesHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkTilesHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTilesHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTilesHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTilesHelper\nC++: vtkTilesHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTilesHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTilesHelper\nC++: vtkTilesHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTileDimensions", PyvtkTilesHelper_SetTileDimensions, METH_VARARGS,
   (char*)"V.SetTileDimensions(int, int)\nC++: void SetTileDimensions(int, int)\nV.SetTileDimensions((int, int))\nC++: void SetTileDimensions(int a[2])\n\n"},
  {(char*)"GetTileDimensions", PyvtkTilesHelper_GetTileDimensions, METH_VARARGS,
   (char*)"V.GetTileDimensions() -> (int, int)\nC++: int *GetTileDimensions()\n\n"},
  {(char*)"SetTileMullions", PyvtkTilesHelper_SetTileMullions, METH_VARARGS,
   (char*)"V.SetTileMullions(int, int)\nC++: void SetTileMullions(int, int)\nV.SetTileMullions((int, int))\nC++: void SetTileMullions(int a[2])\n\n"},
  {(char*)"GetTileMullions", PyvtkTilesHelper_GetTileMullions, METH_VARARGS,
   (char*)"V.GetTileMullions() -> (int, int)\nC++: int *GetTileMullions()\n\n"},
  {(char*)"SetTileWindowSize", PyvtkTilesHelper_SetTileWindowSize, METH_VARARGS,
   (char*)"V.SetTileWindowSize(int, int)\nC++: void SetTileWindowSize(int, int)\nV.SetTileWindowSize((int, int))\nC++: void SetTileWindowSize(int a[2])\n\n"},
  {(char*)"GetTileWindowSize", PyvtkTilesHelper_GetTileWindowSize, METH_VARARGS,
   (char*)"V.GetTileWindowSize() -> (int, int)\nC++: int *GetTileWindowSize()\n\n"},
  {(char*)"GetTileViewport", PyvtkTilesHelper_GetTileViewport, METH_VARARGS,
   (char*)"V.GetTileViewport((float, ...), int, [int, int, int, int]) -> bool\nC++: bool GetTileViewport(const double *viewport, int rank,\n    int out_tile_viewport[4])\n\nReturns (x-origin, y-origin, x-max, y-max) in pixels for a tile\nwith givenrank. viewport is in normalized display coordinates\ni.e. in range [0, 1] indicating the viewport covered by the\ncurrent renderer on the whole i.e. treating all tiles as one\nlarge display if TileDimensions > (1, 1). Returns false to\nindicate the result hasn't been computed.\n"},
  {(char*)"GetNormalizedTileViewport", PyvtkTilesHelper_GetNormalizedTileViewport, METH_VARARGS,
   (char*)"V.GetNormalizedTileViewport((float, ...), int, [float, float,\n    float, float]) -> bool\nC++: bool GetNormalizedTileViewport(const double *viewport,\n    int rank, double out_tile_viewport[4])\n\nSame as GetTileViewport() except that the returns values are in\nnormalized-display coordinates instead of display coordinates.\nReturns false to indicate the result hasn't been computed.\n"},
  {(char*)"GetPhysicalViewport", PyvtkTilesHelper_GetPhysicalViewport, METH_VARARGS,
   (char*)"V.GetPhysicalViewport((float, ...), int, [float, float, float,\n    float]) -> bool\nC++: bool GetPhysicalViewport(const double *global_viewport,\n    int rank, double out_phyiscal_viewport[4])\n\nGiven a global-viewport for a renderer, returns the physical\nviewport on the rank indicated. Returns false to indicate the\nresult hasn't been computed.\n"},
  {(char*)"GetTileIndex", PyvtkTilesHelper_GetTileIndex, METH_VARARGS,
   (char*)"V.GetTileIndex(int, [int, ...], [int, ...])\nC++: void GetTileIndex(int rank, int *tileX, int *tileY)\n\nGiven the rank, returns the tile location.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTilesHelper_StaticNew()
{
  return vtkTilesHelper::New();
}

PyObject *PyVTKClass_vtkTilesHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTilesHelper_StaticNew,
    PyvtkTilesHelper_Methods,
    "vtkTilesHelper", modulename,
    NULL, NULL,
    PyvtkTilesHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkTilesHelper_Doc()
{
  static const char *docstring[] = {
    "vtkTilesHelper - this is a helper class that handles viewport\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTilesHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTilesHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTilesHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

