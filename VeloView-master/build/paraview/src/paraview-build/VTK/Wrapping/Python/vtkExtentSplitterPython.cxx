// python wrapper for vtkExtentSplitter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtentSplitter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtentSplitter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtentSplitterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkExtentSplitter_Doc();


static PyObject *
PyvtkExtentSplitter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtentSplitter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentSplitter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtentSplitter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentSplitter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtentSplitter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtentSplitter::NewInstance());

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
PyvtkExtentSplitter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtentSplitter *tempr = vtkExtentSplitter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentSplitter_AddExtentSource_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddExtentSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    if (ap.IsBound())
      {
      op->AddExtentSource(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkExtentSplitter::AddExtentSource(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtentSplitter_AddExtentSource_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddExtentSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  int temp1;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
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
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->AddExtentSource(temp0, temp1, temp2);
      }
    else
      {
      op->vtkExtentSplitter::AddExtentSource(temp0, temp1, temp2);
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

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkExtentSplitter_AddExtentSource(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 8:
      return PyvtkExtentSplitter_AddExtentSource_s1(self, args);
    case 3:
      return PyvtkExtentSplitter_AddExtentSource_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddExtentSource");
  return NULL;
}



static PyObject *
PyvtkExtentSplitter_RemoveExtentSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveExtentSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveExtentSource(temp0);
      }
    else
      {
      op->vtkExtentSplitter::RemoveExtentSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentSplitter_RemoveAllExtentSources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllExtentSources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllExtentSources();
      }
    else
      {
      op->vtkExtentSplitter::RemoveAllExtentSources();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentSplitter_AddExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->AddExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkExtentSplitter::AddExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtentSplitter_AddExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->AddExtent(temp0);
      }
    else
      {
      op->vtkExtentSplitter::AddExtent(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkExtentSplitter_AddExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkExtentSplitter_AddExtent_s1(self, args);
    case 1:
      return PyvtkExtentSplitter_AddExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddExtent");
  return NULL;
}



static PyObject *
PyvtkExtentSplitter_ComputeSubExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSubExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->ComputeSubExtents() :
      op->vtkExtentSplitter::ComputeSubExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentSplitter_GetNumberOfSubExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubExtents() :
      op->vtkExtentSplitter::GetNumberOfSubExtents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentSplitter_GetSubExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetSubExtent(temp0) :
      op->vtkExtentSplitter::GetSubExtent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkExtentSplitter_GetSubExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
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
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetSubExtent(temp0, temp1);
      }
    else
      {
      op->vtkExtentSplitter::GetSubExtent(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
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

  return result;
}

static PyObject *
PyvtkExtentSplitter_GetSubExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkExtentSplitter_GetSubExtent_s1(self, args);
    case 2:
      return PyvtkExtentSplitter_GetSubExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSubExtent");
  return NULL;
}



static PyObject *
PyvtkExtentSplitter_GetSubExtentSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubExtentSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSubExtentSource(temp0) :
      op->vtkExtentSplitter::GetSubExtentSource(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentSplitter_GetPointMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointMode() :
      op->vtkExtentSplitter::GetPointMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentSplitter_SetPointMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointMode(temp0);
      }
    else
      {
      op->vtkExtentSplitter::SetPointMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentSplitter_PointModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointModeOn();
      }
    else
      {
      op->vtkExtentSplitter::PointModeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentSplitter_PointModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointModeOff();
      }
    else
      {
      op->vtkExtentSplitter::PointModeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtentSplitter_Methods[] = {
  {(char*)"GetClassName", PyvtkExtentSplitter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtentSplitter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtentSplitter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtentSplitter\nC++: vtkExtentSplitter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtentSplitter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtentSplitter\nC++: vtkExtentSplitter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddExtentSource", PyvtkExtentSplitter_AddExtentSource, METH_VARARGS,
   (char*)"V.AddExtentSource(int, int, int, int, int, int, int, int)\nC++: void AddExtentSource(int id, int priority, int x0, int x1,\n    int y0, int y1, int z0, int z1)\nV.AddExtentSource(int, int, [int, ...])\nC++: void AddExtentSource(int id, int priority, int *extent)\n\nAdd/Remove a source providing the given extent.  Sources with\nhigher priority numbers are favored.  Source id numbers and\npriorities must be non-negative.\n"},
  {(char*)"RemoveExtentSource", PyvtkExtentSplitter_RemoveExtentSource, METH_VARARGS,
   (char*)"V.RemoveExtentSource(int)\nC++: void RemoveExtentSource(int id)\n\nAdd/Remove a source providing the given extent.  Sources with\nhigher priority numbers are favored.  Source id numbers and\npriorities must be non-negative.\n"},
  {(char*)"RemoveAllExtentSources", PyvtkExtentSplitter_RemoveAllExtentSources, METH_VARARGS,
   (char*)"V.RemoveAllExtentSources()\nC++: void RemoveAllExtentSources()\n\nAdd/Remove a source providing the given extent.  Sources with\nhigher priority numbers are favored.  Source id numbers and\npriorities must be non-negative.\n"},
  {(char*)"AddExtent", PyvtkExtentSplitter_AddExtent, METH_VARARGS,
   (char*)"V.AddExtent(int, int, int, int, int, int)\nC++: void AddExtent(int x0, int x1, int y0, int y1, int z0,\n    int z1)\nV.AddExtent([int, ...])\nC++: void AddExtent(int *extent)\n\nAdd an extent to the queue of extents to be split among the\navailable sources.\n"},
  {(char*)"ComputeSubExtents", PyvtkExtentSplitter_ComputeSubExtents, METH_VARARGS,
   (char*)"V.ComputeSubExtents() -> int\nC++: int ComputeSubExtents()\n\nSplit the extents currently in the queue among the available\nsources.  The queue is empty when this returns.  Returns 1 if all\nextents could be read.  Returns 0 if any portion of any extent\nwas not available through any source.\n"},
  {(char*)"GetNumberOfSubExtents", PyvtkExtentSplitter_GetNumberOfSubExtents, METH_VARARGS,
   (char*)"V.GetNumberOfSubExtents() -> int\nC++: int GetNumberOfSubExtents()\n\nGet the number of sub-extents into which the original set of\nextents have been split across the available sources.  Valid\nafter a call to ComputeSubExtents.\n"},
  {(char*)"GetSubExtent", PyvtkExtentSplitter_GetSubExtent, METH_VARARGS,
   (char*)"V.GetSubExtent(int) -> (int, int, int, int, int, int)\nC++: int *GetSubExtent(int index)\nV.GetSubExtent(int, [int, ...])\nC++: void GetSubExtent(int index, int *extent)\n\nGet the sub-extent associated with the given index.  Use\nGetSubExtentSource to get the id of the source from which this\nsub-extent should be read.  Valid after a call to\nComputeSubExtents.\n"},
  {(char*)"GetSubExtentSource", PyvtkExtentSplitter_GetSubExtentSource, METH_VARARGS,
   (char*)"V.GetSubExtentSource(int) -> int\nC++: int GetSubExtentSource(int index)\n\nGet the id of the source from which the sub-extent associated\nwith the given index should be read.  Returns -1 if no source\nprovides the sub-extent.\n"},
  {(char*)"GetPointMode", PyvtkExtentSplitter_GetPointMode, METH_VARARGS,
   (char*)"V.GetPointMode() -> int\nC++: int GetPointMode()\n\nGet/Set whether \"point mode\" is on.  In point mode, sub-extents\nare generated to ensure every point in the update request is\nread, but not necessarily every cell.  This can be used when\npoint data are stored in a planar slice per piece with no cell\ndata.  The default is OFF.\n"},
  {(char*)"SetPointMode", PyvtkExtentSplitter_SetPointMode, METH_VARARGS,
   (char*)"V.SetPointMode(int)\nC++: void SetPointMode(int a)\n\nGet/Set whether \"point mode\" is on.  In point mode, sub-extents\nare generated to ensure every point in the update request is\nread, but not necessarily every cell.  This can be used when\npoint data are stored in a planar slice per piece with no cell\ndata.  The default is OFF.\n"},
  {(char*)"PointModeOn", PyvtkExtentSplitter_PointModeOn, METH_VARARGS,
   (char*)"V.PointModeOn()\nC++: void PointModeOn()\n\nGet/Set whether \"point mode\" is on.  In point mode, sub-extents\nare generated to ensure every point in the update request is\nread, but not necessarily every cell.  This can be used when\npoint data are stored in a planar slice per piece with no cell\ndata.  The default is OFF.\n"},
  {(char*)"PointModeOff", PyvtkExtentSplitter_PointModeOff, METH_VARARGS,
   (char*)"V.PointModeOff()\nC++: void PointModeOff()\n\nGet/Set whether \"point mode\" is on.  In point mode, sub-extents\nare generated to ensure every point in the update request is\nread, but not necessarily every cell.  This can be used when\npoint data are stored in a planar slice per piece with no cell\ndata.  The default is OFF.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtentSplitter_StaticNew()
{
  return vtkExtentSplitter::New();
}

PyObject *PyVTKClass_vtkExtentSplitterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtentSplitter_StaticNew,
    PyvtkExtentSplitter_Methods,
    "vtkExtentSplitter", modulename,
    NULL, NULL,
    PyvtkExtentSplitter_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkExtentSplitter_Doc()
{
  static const char *docstring[] = {
    "vtkExtentSplitter - Split an extent across other extents.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkExtentSplitter splits each input extent into non-overlapping\nsub-extents that are completely contained within other \"source\nextents\".  A source extent corresponds to some resource providing an\nextent.  Each source extent has an integer identifier, integer\npriority, and an extent.  The input extents are split into\nsub-extents according to priority, availability, and amount of\noverlap of the sour",
    "ce extents.  This can be used by parallel data\nreaders to read as few piece files as possible.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtentSplitter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtentSplitterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtentSplitter", o) != 0)
    {
    Py_DECREF(o);
    }

}

