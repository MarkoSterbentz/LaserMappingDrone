// python wrapper for vtkBSPIntersections
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBSPIntersections.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBSPIntersections(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBSPIntersectionsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkBSPIntersections_Doc();


static PyObject *
PyvtkBSPIntersections_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBSPIntersections::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBSPIntersections::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBSPIntersections *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBSPIntersections::NewInstance());

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
PyvtkBSPIntersections_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBSPIntersections *tempr = vtkBSPIntersections::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_SetCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  vtkBSPCuts *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBSPCuts"))
    {
    if (ap.IsBound())
      {
      op->SetCuts(temp0);
      }
    else
      {
      op->vtkBSPIntersections::SetCuts(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_GetCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBSPCuts *tempr = (ap.IsBound() ?
      op->GetCuts() :
      op->vtkBSPIntersections::GetCuts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetBounds(temp0) :
      op->vtkBSPIntersections::GetBounds(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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
PyvtkBSPIntersections_GetNumberOfRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRegions() :
      op->vtkBSPIntersections::GetNumberOfRegions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_GetRegionBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetRegionBounds(temp0, temp1) :
      op->vtkBSPIntersections::GetRegionBounds(temp0, temp1));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_GetRegionDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetRegionDataBounds(temp0, temp1) :
      op->vtkBSPIntersections::GetRegionDataBounds(temp0, temp1));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_IntersectsBox_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->IntersectsBox(temp0, temp1) :
      op->vtkBSPIntersections::IntersectsBox(temp0, temp1));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkBSPIntersections_IntersectsBox_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    int tempr = (ap.IsBound() ?
      op->IntersectsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkBSPIntersections::IntersectsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkBSPIntersections_IntersectsBox_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
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
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->IntersectsBox(temp0, temp1, temp2) :
      op->vtkBSPIntersections::IntersectsBox(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

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
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkBSPIntersections_IntersectsBox_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
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

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->IntersectsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkBSPIntersections::IntersectsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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
PyvtkBSPIntersections_IntersectsBox(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBSPIntersections_IntersectsBox_s1(self, args);
    case 7:
      return PyvtkBSPIntersections_IntersectsBox_s2(self, args);
    case 3:
      return PyvtkBSPIntersections_IntersectsBox_s3(self, args);
    case 8:
      return PyvtkBSPIntersections_IntersectsBox_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IntersectsBox");
  return NULL;
}



static PyObject *
PyvtkBSPIntersections_IntersectsSphere2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsSphere2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    int tempr = (ap.IsBound() ?
      op->IntersectsSphere2(temp0, temp1, temp2, temp3, temp4) :
      op->vtkBSPIntersections::IntersectsSphere2(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkBSPIntersections_IntersectsSphere2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsSphere2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->IntersectsSphere2(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkBSPIntersections::IntersectsSphere2(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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
PyvtkBSPIntersections_IntersectsSphere2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkBSPIntersections_IntersectsSphere2_s1(self, args);
    case 6:
      return PyvtkBSPIntersections_IntersectsSphere2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IntersectsSphere2");
  return NULL;
}



static PyObject *
PyvtkBSPIntersections_IntersectsCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  vtkCell *temp1 = NULL;
  int temp2 = -1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    int tempr = (ap.IsBound() ?
      op->IntersectsCell(temp0, temp1, temp2) :
      op->vtkBSPIntersections::IntersectsCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkBSPIntersections_IntersectsCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int temp1;
  vtkCell *temp2 = NULL;
  int temp3 = -1;
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

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkCell") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->IntersectsCell(temp0, temp1, temp2, temp3) :
      op->vtkBSPIntersections::IntersectsCell(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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

static PyMethodDef PyvtkBSPIntersections_IntersectsCell_Methods[] = {
  {NULL, PyvtkBSPIntersections_IntersectsCell_s1, METH_VARARGS,
   (char*)"@iO|i *vtkCell"},
  {NULL, PyvtkBSPIntersections_IntersectsCell_s2, METH_VARARGS,
   (char*)"@OiO|i *i *vtkCell"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkBSPIntersections_IntersectsCell(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBSPIntersections_IntersectsCell_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBSPIntersections_IntersectsCell_s1(self, args);
    case 4:
      return PyvtkBSPIntersections_IntersectsCell_s2(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IntersectsCell");
  return NULL;
}



static PyObject *
PyvtkBSPIntersections_GetComputeIntersectionsUsingDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeIntersectionsUsingDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeIntersectionsUsingDataBounds() :
      op->vtkBSPIntersections::GetComputeIntersectionsUsingDataBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_SetComputeIntersectionsUsingDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeIntersectionsUsingDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeIntersectionsUsingDataBounds(temp0);
      }
    else
      {
      op->vtkBSPIntersections::SetComputeIntersectionsUsingDataBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_ComputeIntersectionsUsingDataBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeIntersectionsUsingDataBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeIntersectionsUsingDataBoundsOn();
      }
    else
      {
      op->vtkBSPIntersections::ComputeIntersectionsUsingDataBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_ComputeIntersectionsUsingDataBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeIntersectionsUsingDataBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeIntersectionsUsingDataBoundsOff();
      }
    else
      {
      op->vtkBSPIntersections::ComputeIntersectionsUsingDataBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBSPIntersections_Methods[] = {
  {(char*)"GetClassName", PyvtkBSPIntersections_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBSPIntersections_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBSPIntersections_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBSPIntersections\nC++: vtkBSPIntersections *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBSPIntersections_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBSPIntersections\nC++: vtkBSPIntersections *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCuts", PyvtkBSPIntersections_SetCuts, METH_VARARGS,
   (char*)"V.SetCuts(vtkBSPCuts)\nC++: void SetCuts(vtkBSPCuts *cuts)\n\nDefine the binary spatial partitioning.\n"},
  {(char*)"GetCuts", PyvtkBSPIntersections_GetCuts, METH_VARARGS,
   (char*)"V.GetCuts() -> vtkBSPCuts\nC++: vtkBSPCuts *GetCuts()\n\nDefine the binary spatial partitioning.\n"},
  {(char*)"GetBounds", PyvtkBSPIntersections_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, ...]) -> int\nC++: int GetBounds(double *bounds)\n\nGet the bounds of the whole space (xmin, xmax, ymin, ymax, zmin,\nzmax)\n  Return 0 if OK, 1 on error.\n"},
  {(char*)"GetNumberOfRegions", PyvtkBSPIntersections_GetNumberOfRegions, METH_VARARGS,
   (char*)"V.GetNumberOfRegions() -> int\nC++: int GetNumberOfRegions()\n\nThe number of regions in the binary spatial partitioning\n"},
  {(char*)"GetRegionBounds", PyvtkBSPIntersections_GetRegionBounds, METH_VARARGS,
   (char*)"V.GetRegionBounds(int, [float, float, float, float, float, float])\n     -> int\nC++: int GetRegionBounds(int regionID, double bounds[6])\n\nGet the spatial bounds of a particular region\n  Return 0 if OK, 1 on error.\n"},
  {(char*)"GetRegionDataBounds", PyvtkBSPIntersections_GetRegionDataBounds, METH_VARARGS,
   (char*)"V.GetRegionDataBounds(int, [float, float, float, float, float,\n    float]) -> int\nC++: int GetRegionDataBounds(int regionID, double bounds[6])\n\nGet the bounds of the data within the k-d tree region, possibly\n   smaller than the bounds of the region.\n  Return 0 if OK, 1 on error.\n"},
  {(char*)"IntersectsBox", PyvtkBSPIntersections_IntersectsBox, METH_VARARGS,
   (char*)"V.IntersectsBox(int, [float, ...]) -> int\nC++: int IntersectsBox(int regionId, double *x)\nV.IntersectsBox(int, float, float, float, float, float, float)\n    -> int\nC++: int IntersectsBox(int regionId, double xmin, double xmax,\n    double ymin, double ymax, double zmin, double zmax)\nV.IntersectsBox([int, ...], int, [float, ...]) -> int\nC++: int IntersectsBox(int *ids, int len, double *x)\nV.IntersectsBox([int, ...], int, float, float, float, float,\n    float, float) -> int\nC++: int IntersectsBox(int *ids, int len, double x0, double x1,\n    double y0, double y1, double z0, double z1)\n\nDetermine whether a region of the spatial decomposition\n   intersects an axis aligned box.\n"},
  {(char*)"IntersectsSphere2", PyvtkBSPIntersections_IntersectsSphere2, METH_VARARGS,
   (char*)"V.IntersectsSphere2(int, float, float, float, float) -> int\nC++: int IntersectsSphere2(int regionId, double x, double y,\n    double z, double rSquared)\nV.IntersectsSphere2([int, ...], int, float, float, float, float)\n    -> int\nC++: int IntersectsSphere2(int *ids, int len, double x, double y,\n    double z, double rSquared)\n\nDetermine whether a region of the spatial decomposition\n   intersects a sphere, given the center of the sphere\n   and the square of it's radius.\n"},
  {(char*)"IntersectsCell", PyvtkBSPIntersections_IntersectsCell, METH_VARARGS,
   (char*)"V.IntersectsCell(int, vtkCell, int) -> int\nC++: int IntersectsCell(int regionId, vtkCell *cell,\n    int cellRegion=-1)\nV.IntersectsCell([int, ...], int, vtkCell, int) -> int\nC++: int IntersectsCell(int *ids, int len, vtkCell *cell,\n    int cellRegion=-1)\n\nDetermine whether a region of the spatial decomposition\n   intersects the given cell.  If you already\n   know the region that the cell centroid lies in, provide\n   that as the last argument to make the computation quicker.\n"},
  {(char*)"GetComputeIntersectionsUsingDataBounds", PyvtkBSPIntersections_GetComputeIntersectionsUsingDataBounds, METH_VARARGS,
   (char*)"V.GetComputeIntersectionsUsingDataBounds() -> int\nC++: int GetComputeIntersectionsUsingDataBounds()\n\nWhen computing the intersection of k-d tree regions with other\n  objects, we use the spatial bounds of the region.  To use the\n  tighter bound of the bounding box of the data within the\nregion,\n  set this variable ON.  (Specifying data bounds in the\nvtkBSPCuts\n  object is optional.  If data bounds were not specified, this\n  option has no meaning.)\n"},
  {(char*)"SetComputeIntersectionsUsingDataBounds", PyvtkBSPIntersections_SetComputeIntersectionsUsingDataBounds, METH_VARARGS,
   (char*)"V.SetComputeIntersectionsUsingDataBounds(int)\nC++: void SetComputeIntersectionsUsingDataBounds(int c)\n\nWhen computing the intersection of k-d tree regions with other\n  objects, we use the spatial bounds of the region.  To use the\n  tighter bound of the bounding box of the data within the\nregion,\n  set this variable ON.  (Specifying data bounds in the\nvtkBSPCuts\n  object is optional.  If data bounds were not specified, this\n  option has no meaning.)\n"},
  {(char*)"ComputeIntersectionsUsingDataBoundsOn", PyvtkBSPIntersections_ComputeIntersectionsUsingDataBoundsOn, METH_VARARGS,
   (char*)"V.ComputeIntersectionsUsingDataBoundsOn()\nC++: void ComputeIntersectionsUsingDataBoundsOn()\n\nWhen computing the intersection of k-d tree regions with other\n  objects, we use the spatial bounds of the region.  To use the\n  tighter bound of the bounding box of the data within the\nregion,\n  set this variable ON.  (Specifying data bounds in the\nvtkBSPCuts\n  object is optional.  If data bounds were not specified, this\n  option has no meaning.)\n"},
  {(char*)"ComputeIntersectionsUsingDataBoundsOff", PyvtkBSPIntersections_ComputeIntersectionsUsingDataBoundsOff, METH_VARARGS,
   (char*)"V.ComputeIntersectionsUsingDataBoundsOff()\nC++: void ComputeIntersectionsUsingDataBoundsOff()\n\nWhen computing the intersection of k-d tree regions with other\n  objects, we use the spatial bounds of the region.  To use the\n  tighter bound of the bounding box of the data within the\nregion,\n  set this variable ON.  (Specifying data bounds in the\nvtkBSPCuts\n  object is optional.  If data bounds were not specified, this\n  option has no meaning.)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBSPIntersections_StaticNew()
{
  return vtkBSPIntersections::New();
}

PyObject *PyVTKClass_vtkBSPIntersectionsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBSPIntersections_StaticNew,
    PyvtkBSPIntersections_Methods,
    "vtkBSPIntersections", modulename,
    NULL, NULL,
    PyvtkBSPIntersections_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkBSPIntersections_Doc()
{
  static const char *docstring[] = {
    "vtkBSPIntersections - Perform calculations (mostly intersection\n\n",
    "Superclass: vtkObject\n\n",
    "Given an axis aligned binary spatial partitioning described by a\n   vtkBSPCuts object, perform intersection queries on various\n   geometric entities with regions of the spatial partitioning.\n\nSee Also:\n\n\n   vtkBSPCuts  vtkKdTree\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBSPIntersections(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBSPIntersectionsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBSPIntersections", o) != 0)
    {
    Py_DECREF(o);
    }

}

