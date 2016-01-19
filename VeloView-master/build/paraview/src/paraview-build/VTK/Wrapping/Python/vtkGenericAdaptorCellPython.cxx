// python wrapper for vtkGenericAdaptorCell
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericCellIterator.h"
#include "vtkGenericAdaptorCell.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericAdaptorCell(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericAdaptorCellNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGenericAdaptorCell_Doc();


static PyObject *
PyvtkGenericAdaptorCell_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericAdaptorCell::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericAdaptorCell::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericAdaptorCell *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericAdaptorCell::NewInstance());

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
PyvtkGenericAdaptorCell_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericAdaptorCell *tempr = vtkGenericAdaptorCell::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetId();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_IsInDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->IsInDataSet();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetType();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetDimension();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetGeometryOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetGeometryOrder();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_IsGeometryLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsGeometryLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsGeometryLinear() :
      op->vtkGenericAdaptorCell::IsGeometryLinear());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetAttributeOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  vtkGenericAttribute *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttribute"))
    {
    int tempr = op->GetAttributeOrder(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetHighestOrderAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighestOrderAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  vtkGenericAttributeCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttributeCollection"))
    {
    int tempr = (ap.IsBound() ?
      op->GetHighestOrderAttribute(temp0) :
      op->vtkGenericAdaptorCell::GetHighestOrderAttribute(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_IsAttributeLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAttributeLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  vtkGenericAttribute *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttribute"))
    {
    int tempr = (ap.IsBound() ?
      op->IsAttributeLinear(temp0) :
      op->vtkGenericAdaptorCell::IsAttributeLinear(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_IsPrimary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrimary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->IsPrimary();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetNumberOfPoints();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetNumberOfBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  int temp0 = -1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    int tempr = op->GetNumberOfBoundaries(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetNumberOfDOFNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDOFNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetNumberOfDOFNodes();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetPointIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  vtkGenericPointIterator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericPointIterator"))
    {
    op->GetPointIterator(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_NewCellIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewCellIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkGenericCellIterator *tempr = op->NewCellIterator();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetBoundaryIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  vtkGenericCellIterator *temp0 = NULL;
  int temp1 = -1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkGenericCellIterator") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    op->GetBoundaryIterator(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_CountNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CountNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  vtkGenericAdaptorCell *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell"))
    {
    int tempr = op->CountNeighbors(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_CountEdgeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CountEdgeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->CountEdgeNeighbors(temp0);

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
PyvtkGenericAdaptorCell_GetNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  vtkGenericAdaptorCell *temp0 = NULL;
  vtkGenericCellIterator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell") &&
      ap.GetVTKObject(temp1, "vtkGenericCellIterator"))
    {
    op->GetNeighbors(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_EvaluatePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  int temp2;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4;
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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);

    int tempr = op->EvaluatePosition(temp0, temp1, temp2, temp3, temp4);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
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
PyvtkGenericAdaptorCell_EvaluateLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    op->EvaluateLocation(temp0, temp1, temp2);

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

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_InterpolateTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  vtkGenericAttribute *temp0 = NULL;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkGenericAttribute") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    op->InterpolateTuple(temp0, temp1, temp2);

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

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkGenericAdaptorCell_InterpolateTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  vtkGenericAttributeCollection *temp0 = NULL;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkGenericAttributeCollection") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    op->InterpolateTuple(temp0, temp1, temp2);

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

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyMethodDef PyvtkGenericAdaptorCell_InterpolateTuple_Methods[] = {
  {NULL, PyvtkGenericAdaptorCell_InterpolateTuple_s1, METH_VARARGS,
   (char*)"@OOO *vtkGenericAttribute *d *d"},
  {NULL, PyvtkGenericAdaptorCell_InterpolateTuple_s2, METH_VARARGS,
   (char*)"@OOO *vtkGenericAttributeCollection *d *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGenericAdaptorCell_InterpolateTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGenericAdaptorCell_InterpolateTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InterpolateTuple");
  return NULL;
}



static PyObject *
PyvtkGenericAdaptorCell_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  vtkContourValues *temp0 = NULL;
  vtkImplicitFunction *temp1 = NULL;
  vtkGenericAttributeCollection *temp2 = NULL;
  vtkGenericCellTessellator *temp3 = NULL;
  vtkIncrementalPointLocator *temp4 = NULL;
  vtkCellArray *temp5 = NULL;
  vtkCellArray *temp6 = NULL;
  vtkCellArray *temp7 = NULL;
  vtkPointData *temp8 = NULL;
  vtkCellData *temp9 = NULL;
  vtkPointData *temp10 = NULL;
  vtkPointData *temp11 = NULL;
  vtkCellData *temp12 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(13) &&
      ap.GetVTKObject(temp0, "vtkContourValues") &&
      ap.GetVTKObject(temp1, "vtkImplicitFunction") &&
      ap.GetVTKObject(temp2, "vtkGenericAttributeCollection") &&
      ap.GetVTKObject(temp3, "vtkGenericCellTessellator") &&
      ap.GetVTKObject(temp4, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp5, "vtkCellArray") &&
      ap.GetVTKObject(temp6, "vtkCellArray") &&
      ap.GetVTKObject(temp7, "vtkCellArray") &&
      ap.GetVTKObject(temp8, "vtkPointData") &&
      ap.GetVTKObject(temp9, "vtkCellData") &&
      ap.GetVTKObject(temp10, "vtkPointData") &&
      ap.GetVTKObject(temp11, "vtkPointData") &&
      ap.GetVTKObject(temp12, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12);
      }
    else
      {
      op->vtkGenericAdaptorCell::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  double temp0;
  vtkImplicitFunction *temp1 = NULL;
  vtkGenericAttributeCollection *temp2 = NULL;
  vtkGenericCellTessellator *temp3 = NULL;
  int temp4;
  vtkIncrementalPointLocator *temp5 = NULL;
  vtkCellArray *temp6 = NULL;
  vtkPointData *temp7 = NULL;
  vtkCellData *temp8 = NULL;
  vtkPointData *temp9 = NULL;
  vtkPointData *temp10 = NULL;
  vtkCellData *temp11 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(12) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImplicitFunction") &&
      ap.GetVTKObject(temp2, "vtkGenericAttributeCollection") &&
      ap.GetVTKObject(temp3, "vtkGenericCellTessellator") &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp6, "vtkCellArray") &&
      ap.GetVTKObject(temp7, "vtkPointData") &&
      ap.GetVTKObject(temp8, "vtkCellData") &&
      ap.GetVTKObject(temp9, "vtkPointData") &&
      ap.GetVTKObject(temp10, "vtkPointData") &&
      ap.GetVTKObject(temp11, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11);
      }
    else
      {
      op->vtkGenericAdaptorCell::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2;
  double temp3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  int temp6;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    int tempr = op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_Derivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Derivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  vtkGenericAttribute *temp2 = NULL;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new double[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkGenericAttribute") &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);

    op->Derivatives(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetBounds(temp0);

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
PyvtkGenericAdaptorCell_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGenericAdaptorCell::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericAdaptorCell_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkGenericAdaptorCell_GetBounds_s1(self, args);
    case 0:
      return PyvtkGenericAdaptorCell_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkGenericAdaptorCell_GetLength2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLength2() :
      op->vtkGenericAdaptorCell::GetLength2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = op->GetParametricCenter(temp0);

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

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetParametricDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    double tempr = op->GetParametricDistance(temp0);

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

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetParametricCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    double *tempr = op->GetParametricCoords();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_Tessellate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tessellate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  vtkGenericAttributeCollection *temp0 = NULL;
  vtkGenericCellTessellator *temp1 = NULL;
  vtkPoints *temp2 = NULL;
  vtkIncrementalPointLocator *temp3 = NULL;
  vtkCellArray *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkPointData *temp6 = NULL;
  vtkCellData *temp7 = NULL;
  vtkUnsignedCharArray *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkGenericAttributeCollection") &&
      ap.GetVTKObject(temp1, "vtkGenericCellTessellator") &&
      ap.GetVTKObject(temp2, "vtkPoints") &&
      ap.GetVTKObject(temp3, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp4, "vtkCellArray") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkPointData") &&
      ap.GetVTKObject(temp7, "vtkCellData") &&
      ap.GetVTKObject(temp8, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->Tessellate(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkGenericAdaptorCell::Tessellate(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_IsFaceOnBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFaceOnBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = op->IsFaceOnBoundary(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_IsOnBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOnBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->IsOnBoundary();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType *save0 = NULL;
  vtkIdType small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->GetPointIds(temp0);

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
PyvtkGenericAdaptorCell_TriangulateFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulateFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  vtkGenericAttributeCollection *temp0 = NULL;
  vtkGenericCellTessellator *temp1 = NULL;
  int temp2;
  vtkPoints *temp3 = NULL;
  vtkIncrementalPointLocator *temp4 = NULL;
  vtkCellArray *temp5 = NULL;
  vtkPointData *temp6 = NULL;
  vtkPointData *temp7 = NULL;
  vtkCellData *temp8 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkGenericAttributeCollection") &&
      ap.GetVTKObject(temp1, "vtkGenericCellTessellator") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPoints") &&
      ap.GetVTKObject(temp4, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp5, "vtkCellArray") &&
      ap.GetVTKObject(temp6, "vtkPointData") &&
      ap.GetVTKObject(temp7, "vtkPointData") &&
      ap.GetVTKObject(temp8, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->TriangulateFace(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }
    else
      {
      op->vtkGenericAdaptorCell::TriangulateFace(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetFaceArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int *tempr = op->GetFaceArray(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetNumberOfVerticesOnFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVerticesOnFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = op->GetNumberOfVerticesOnFace(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAdaptorCell_GetEdgeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAdaptorCell *op = static_cast<vtkGenericAdaptorCell *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int *tempr = op->GetEdgeArray(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericAdaptorCell_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericAdaptorCell_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericAdaptorCell_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericAdaptorCell_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericAdaptorCell\nC++: vtkGenericAdaptorCell *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericAdaptorCell_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericAdaptorCell\nC++: vtkGenericAdaptorCell *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetId", PyvtkGenericAdaptorCell_GetId, METH_VARARGS,
   (char*)"V.GetId() -> int\nC++: virtual vtkIdType GetId()\n\nUnique identification number of the cell over the whole data set.\nThis unique key may not be contiguous.\n"},
  {(char*)"IsInDataSet", PyvtkGenericAdaptorCell_IsInDataSet, METH_VARARGS,
   (char*)"V.IsInDataSet() -> int\nC++: virtual int IsInDataSet()\n\nDoes `this' a cell of a dataset? (otherwise, it is a boundary\ncell)\n"},
  {(char*)"GetType", PyvtkGenericAdaptorCell_GetType, METH_VARARGS,
   (char*)"V.GetType() -> int\nC++: virtual int GetType()\n\nReturn the type of the current cell.\n\\post (result==VTK_HIGHER_ORDER_EDGE)||\n      (result==VTK_HIGHER_ORDER_TRIANGLE)||\n      (result==VTK_HIGHER_ORDER_TETRAHEDRON)\n"},
  {(char*)"GetDimension", PyvtkGenericAdaptorCell_GetDimension, METH_VARARGS,
   (char*)"V.GetDimension() -> int\nC++: virtual int GetDimension()\n\nReturn the topological dimension of the current cell.\n\\post valid_result: result>=0 && result<=3\n"},
  {(char*)"GetGeometryOrder", PyvtkGenericAdaptorCell_GetGeometryOrder, METH_VARARGS,
   (char*)"V.GetGeometryOrder() -> int\nC++: virtual int GetGeometryOrder()\n\nReturn the interpolation order of the geometry.\n\\post positive_result: result>=0\n"},
  {(char*)"IsGeometryLinear", PyvtkGenericAdaptorCell_IsGeometryLinear, METH_VARARGS,
   (char*)"V.IsGeometryLinear() -> int\nC++: int IsGeometryLinear()\n\nDoes the cell have a non-linear interpolation for the geometry?\n\\post definition: result==(GetGeometryOrder()==1)\n"},
  {(char*)"GetAttributeOrder", PyvtkGenericAdaptorCell_GetAttributeOrder, METH_VARARGS,
   (char*)"V.GetAttributeOrder(vtkGenericAttribute) -> int\nC++: virtual int GetAttributeOrder(vtkGenericAttribute *a)\n\nReturn the interpolation order of attribute `a' on the cell (may\ndiffer by cell).\n\\pre a_exists: a!=0\n\\post positive_result: result>=0\n"},
  {(char*)"GetHighestOrderAttribute", PyvtkGenericAdaptorCell_GetHighestOrderAttribute, METH_VARARGS,
   (char*)"V.GetHighestOrderAttribute(vtkGenericAttributeCollection) -> int\nC++: virtual int GetHighestOrderAttribute(\n    vtkGenericAttributeCollection *ac)\n\nReturn the index of the first point centered attribute with the\nhighest order in `ac'.\n\\pre ac_exists: ac!=0\n\\post valid_result: result>=-1 &&\n    result<ac->GetNumberOfAttributes()\n"},
  {(char*)"IsAttributeLinear", PyvtkGenericAdaptorCell_IsAttributeLinear, METH_VARARGS,
   (char*)"V.IsAttributeLinear(vtkGenericAttribute) -> int\nC++: int IsAttributeLinear(vtkGenericAttribute *a)\n\nDoes the attribute `a' have a non-linear interpolation?\n\\pre a_exists: a!=0\n\\post definition: result==(GetAttributeOrder()==1)\n"},
  {(char*)"IsPrimary", PyvtkGenericAdaptorCell_IsPrimary, METH_VARARGS,
   (char*)"V.IsPrimary() -> int\nC++: virtual int IsPrimary()\n\nIs the cell primary (i.e. not composite) ?\n"},
  {(char*)"GetNumberOfPoints", PyvtkGenericAdaptorCell_GetNumberOfPoints, METH_VARARGS,
   (char*)"V.GetNumberOfPoints() -> int\nC++: virtual int GetNumberOfPoints()\n\nReturn the number of corner points that compose the cell.\n\\post positive_result: result>=0\n"},
  {(char*)"GetNumberOfBoundaries", PyvtkGenericAdaptorCell_GetNumberOfBoundaries, METH_VARARGS,
   (char*)"V.GetNumberOfBoundaries(int) -> int\nC++: virtual int GetNumberOfBoundaries(int dim=-1)\n\nReturn the number of boundaries of dimension `dim' (or all\ndimensions greater than 0 and less than GetDimension() if -1) of\nthe cell. When dim is -1, the number of vertices is not included\nin the count because vertices are a special case: a vertex will\nhave at most a single field value associated with it; DOF nodes\nmay have an arbitrary number of field values associated with\nthem.\n\\pre valid_dim_range: (dim==-1) ||\n    ((dim>=0)&&(dim<GetDimension()))\n\\post positive_result: result>=0\n"},
  {(char*)"GetNumberOfDOFNodes", PyvtkGenericAdaptorCell_GetNumberOfDOFNodes, METH_VARARGS,
   (char*)"V.GetNumberOfDOFNodes() -> int\nC++: virtual int GetNumberOfDOFNodes()\n\nAccumulated number of DOF nodes of the current cell. A DOF node\nis a component of cell with a given topological dimension. e.g.:\na triangle has 4 DOF: 1 face and 3 edges. An hexahedron has 19\nDOF: 1 region, 6 faces, and 12 edges.\n\nThe number of vertices is not included in the count because\nvertices are a special case: a vertex will have at most a single\nfield value associated with it; DOF nodes may have an arbitrary\nnumber of field values associated with them.\n\\post valid_result: result==GetNumberOfBoundaries(-1)+1\n"},
  {(char*)"GetPointIterator", PyvtkGenericAdaptorCell_GetPointIterator, METH_VARARGS,
   (char*)"V.GetPointIterator(vtkGenericPointIterator)\nC++: virtual void GetPointIterator(vtkGenericPointIterator *it)\n\nReturn the points of cell into `it'.\n\\pre it_exists: it!=0\n"},
  {(char*)"NewCellIterator", PyvtkGenericAdaptorCell_NewCellIterator, METH_VARARGS,
   (char*)"V.NewCellIterator() -> vtkGenericCellIterator\nC++: virtual vtkGenericCellIterator *NewCellIterator()\n\nCreate an empty cell iterator. The user is responsible for\ndeleting it.\n\\post result_exists: result!=0\n"},
  {(char*)"GetBoundaryIterator", PyvtkGenericAdaptorCell_GetBoundaryIterator, METH_VARARGS,
   (char*)"V.GetBoundaryIterator(vtkGenericCellIterator, int)\nC++: virtual void GetBoundaryIterator(\n    vtkGenericCellIterator *boundaries, int dim=-1)\n\nReturn the `boundaries' cells of dimension `dim' (or all\ndimensions less than GetDimension() if -1) that are part of the\nboundary of the cell.\n\\pre valid_dim_range: (dim==-1) ||\n    ((dim>=0)&&(dim<GetDimension()))\n\\pre boundaries_exist: boundaries!=0\n"},
  {(char*)"CountNeighbors", PyvtkGenericAdaptorCell_CountNeighbors, METH_VARARGS,
   (char*)"V.CountNeighbors(vtkGenericAdaptorCell) -> int\nC++: virtual int CountNeighbors(vtkGenericAdaptorCell *boundary)\n\nNumber of cells (dimension>boundary->GetDimension()) of the\ndataset that share the boundary `boundary' of `this'. `this' IS\nNOT INCLUDED.\n\\pre boundary_exists: boundary!=0\n\\pre real_boundary: !boundary->IsInDataSet()\n\\pre cell_of_the_dataset: IsInDataSet()\n\\pre boundary: HasBoundary(boundary)\n\\post positive_result: result>=0\n"},
  {(char*)"CountEdgeNeighbors", PyvtkGenericAdaptorCell_CountEdgeNeighbors, METH_VARARGS,
   (char*)"V.CountEdgeNeighbors([int, ...])\nC++: virtual void CountEdgeNeighbors(int *sharing)\n\nNumber of cells (dimension>boundary->GetDimension()) of the\ndataset that share the boundary `boundary' of `this'. `this' IS\nNOT INCLUDED.\n\\pre boundary_exists: boundary!=0\n\\pre real_boundary: !boundary->IsInDataSet()\n\\pre cell_of_the_dataset: IsInDataSet()\n\\pre boundary: HasBoundary(boundary)\n\\post positive_result: result>=0\n"},
  {(char*)"GetNeighbors", PyvtkGenericAdaptorCell_GetNeighbors, METH_VARARGS,
   (char*)"V.GetNeighbors(vtkGenericAdaptorCell, vtkGenericCellIterator)\nC++: virtual void GetNeighbors(vtkGenericAdaptorCell *boundary,\n    vtkGenericCellIterator *neighbors)\n\nPut into `neighbors' the cells\n(dimension>boundary->GetDimension()) of the dataset that share\nthe boundary `boundary' with this cell. `this' IS NOT INCLUDED.\n\\pre boundary_exists: boundary!=0\n\\pre real_boundary: !boundary->IsInDataSet()\n\\pre cell_of_the_dataset: IsInDataSet()\n\\pre boundary: HasBoundary(boundary)\n\\pre neighbors_exist: neighbors!=0\n"},
  {(char*)"EvaluatePosition", PyvtkGenericAdaptorCell_EvaluatePosition, METH_VARARGS,
   (char*)"V.EvaluatePosition([float, float, float], [float, ...], int,\n    [float, float, float], float) -> int\nC++: virtual int EvaluatePosition(double x[3],\n    double *closestPoint, int &subId, double pcoords[3],\n    double &dist2)\n\nIs `x' inside the current cell? It also evaluates parametric\ncoordinates `pcoords', sub-cell id `subId' (0 means primary\ncell), distance squared to the sub-cell in `dist2' and closest corner point\n`closestPoint'. `dist2' and `closestPoint' are not evaluated if\n`closestPoint'==0. If a numerical error occurred, -1 is returned\nand all other results should be ignored.\n\\post valid_result: result==-1 || result==0 || result==1\n\\post positive_distance: result!=-1 implies (closestPoint!=0\n    implies\n                                              dist2>=0)\n"},
  {(char*)"EvaluateLocation", PyvtkGenericAdaptorCell_EvaluateLocation, METH_VARARGS,
   (char*)"V.EvaluateLocation(int, [float, float, float], [float, float,\n    float])\nC++: virtual void EvaluateLocation(int subId, double pcoords[3],\n    double x[3])\n\nDetermine the global coordinates `x' from sub-cell `subId' and\nparametric coordinates `pcoords' in the cell.\n\\pre positive_subId: subId>=0\n\\pre clamped_pcoords:\n    (0<=pcoords[0])&&(pcoords[0]<=1)&&(0<=pcoords[1])\n&&(pcoords[1]<=1)&&(0<=pcoords[2])&&(pcoords[2]<=1)\n"},
  {(char*)"InterpolateTuple", PyvtkGenericAdaptorCell_InterpolateTuple, METH_VARARGS,
   (char*)"V.InterpolateTuple(vtkGenericAttribute, [float, float, float],\n    [float, ...])\nC++: virtual void InterpolateTuple(vtkGenericAttribute *a,\n    double pcoords[3], double *val)\nV.InterpolateTuple(vtkGenericAttributeCollection, [float, float,\n    float], [float, ...])\nC++: virtual void InterpolateTuple(\n    vtkGenericAttributeCollection *c, double pcoords[3],\n    double *val)\n\nInterpolate the attribute `a' at local position `pcoords' of the\ncell into `val'.\n\\pre a_exists: a!=0\n\\pre a_is_point_centered: a->GetCentering()==vtkPointCentered\n\\pre clamped_point: pcoords[0]>=0 && pcoords[0]<=1 &&\n    pcoords[1]>=0 &&\n                    pcoords[1]<=1 && pcoords[2]>=0 &&\npcoords[2]<=1\n\\pre val_exists: val!=0\n\\pre valid_size: sizeof(val)==a->GetNumberOfComponents()\n"},
  {(char*)"Contour", PyvtkGenericAdaptorCell_Contour, METH_VARARGS,
   (char*)"V.Contour(vtkContourValues, vtkImplicitFunction,\n    vtkGenericAttributeCollection, vtkGenericCellTessellator,\n    vtkIncrementalPointLocator, vtkCellArray, vtkCellArray,\n    vtkCellArray, vtkPointData, vtkCellData, vtkPointData,\n    vtkPointData, vtkCellData)\nC++: virtual void Contour(vtkContourValues *values,\n    vtkImplicitFunction *f,\n    vtkGenericAttributeCollection *attributes,\n    vtkGenericCellTessellator *tess,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *outPd,\n     vtkCellData *outCd, vtkPointData *internalPd,\n    vtkPointData *secondaryPd, vtkCellData *secondaryCd)\n\nGenerate a contour (contouring primitives) for each `values' or\nwith respect to an implicit function `f'. Contouring is performed\non the scalar attribute (`attributes->GetActiveAttribute()'\n`attributes->GetActiveComponent()').  Contouring interpolates the\n`attributes->GetNumberOfattributesToInterpolate()' attributes\n`attributes->GetAttributesToInterpolate()'.  The `locator',\n`verts', `lines', `polys', `outPd' and `outCd' are cumulative\ndata arrays over cell iterations: they store the result of each\ncall to Contour():\n- `locator' is a points list that merges points as they are\n  inserted (i.e., prevents duplicates).\n- `verts' is an array of generated vertices\n- `lines' is an array of generated lines\n- `polys' is an array of generated polygons\n- `outPd' is an array of interpolated point data along the edge\n  (if not-NULL)\n- `outCd' is an array of copied cell data of the current cell (if\n  not-NULL) `internalPd', `secondaryPd' and `secondaryCd' are\n  initialized by the filter that call it from `attributes'.\n- `internalPd' stores the result of the tessellation pass: the\n  higher-order cell is tessellated into linear sub-cells.\n- `secondaryPd' and `secondaryCd' are used internally as inputs\n  to the Contour() method on linear sub-cells. Note: the\n  CopyAllocate() method must be invoked on both `outPd' and\n ...\n [Truncated]\n"},
  {(char*)"Clip", PyvtkGenericAdaptorCell_Clip, METH_VARARGS,
   (char*)"V.Clip(float, vtkImplicitFunction, vtkGenericAttributeCollection,\n    vtkGenericCellTessellator, int, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkCellData, vtkPointData,\n    vtkPointData, vtkCellData)\nC++: virtual void Clip(double value, vtkImplicitFunction *f,\n    vtkGenericAttributeCollection *attributes,\n    vtkGenericCellTessellator *tess, int insideOut,\n    vtkIncrementalPointLocator *locator,\n    vtkCellArray *connectivity, vtkPointData *outPd,\n    vtkCellData *outCd, vtkPointData *internalPd,\n    vtkPointData *secondaryPd, vtkCellData *secondaryCd)\n\nCut (or clip) the current cell with respect to the contour\ndefined by the `value' or the implicit function `f' of the scalar\nattribute\n(`attributes->GetActiveAttribute()',`attributes->GetActiveComponent()'\n). If `f' exists, `value' is not used. The output is the part of\nthe current cell which is inside the contour.  The output is a\nset of zero, one or more cells of the same topological dimension\nas the current cell. Normally, cell points whose scalar value is\ngreater than \"value\" are considered inside. If `insideOut' is on,\nthis is reversed.  Clipping interpolates the\n`attributes->GetNumberOfattributesToInterpolate()' attributes\n`attributes->GetAttributesToInterpolate()'.  `locator',\n`connectivity', `outPd' and `outCd' are cumulative data arrays\nover cell iterations: they store the result of each call to\nClip():\n- `locator' is a points list that merges points as they are\n  inserted (i.e., prevents duplicates).\n- `connectivity' is an array of generated cells\n- `outPd' is an array of interpolated point data along the edge\n  (if not-NULL)\n- `outCd' is an array of copied cell data of the current cell (if\n  not-NULL) `internalPd', `secondaryPd' and `secondaryCd' are\n  initialized by the filter that call it from `attributes'.\n- `internalPd' stores the result of the tessellation pass: the\n  higher-order cell is tessellated into linear sub-cells.\n- `secondaryPd' and `secondaryCd' are use ...\n [Truncated]\n"},
  {(char*)"IntersectWithLine", PyvtkGenericAdaptorCell_IntersectWithLine, METH_VARARGS,
   (char*)"V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: virtual int IntersectWithLine(double p1[3], double p2[3],\n    double tol, double &t, double x[3], double pcoords[3],\n    int &subId)\n\nIs there an intersection between the current cell and the ray\n(`p1',`p2') according to a tolerance `tol'? If true, `x' is the\nglobal intersection, `t' is the parametric coordinate for the line,\n`pcoords' are the parametric coordinates for cell. `subId' is the\nsub-cell where the intersection occurs.\n\\pre positive_tolerance: tol>0\n"},
  {(char*)"Derivatives", PyvtkGenericAdaptorCell_Derivatives, METH_VARARGS,
   (char*)"V.Derivatives(int, [float, float, float], vtkGenericAttribute,\n    [float, ...])\nC++: virtual void Derivatives(int subId, double pcoords[3],\n    vtkGenericAttribute *attribute, double *derivs)\n\nCompute derivatives `derivs' of the attribute `attribute' (from\nits values at the corner points of the cell) given sub-cell\n`subId' (0 means primary cell) and parametric coordinates\n`pcoords'. Derivatives are in the x-y-z coordinate directions for\neach data value.\n\\pre positive_subId: subId>=0\n\\pre clamped_pcoords:\n    (0<=pcoords[0])&&(pcoords[0]<=1)&&(0<=pcoords[1])\n&&(pcoords[1]<=1)&&(0<=pcoords[2])%%(pcoords[2]<=1)\n\\pre attribute_exists: attribute!=0\n\\pre derivs_exists: derivs!=0\n\\pre valid_size:\n    sizeof(derivs)>=attribute->GetNumberOfComponents()*3\n"},
  {(char*)"GetBounds", PyvtkGenericAdaptorCell_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds([float, float, float, float, float, float])\nC++: virtual void GetBounds(double bounds[6])\nV.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\n\nCompute the bounding box of the current cell in `bounds' in\nglobal coordinates. THREAD SAFE\n"},
  {(char*)"GetLength2", PyvtkGenericAdaptorCell_GetLength2, METH_VARARGS,
   (char*)"V.GetLength2() -> float\nC++: virtual double GetLength2()\n\nReturn the bounding box diagonal squared of the current cell.\n\\post positive_result: result>=0\n"},
  {(char*)"GetParametricCenter", PyvtkGenericAdaptorCell_GetParametricCenter, METH_VARARGS,
   (char*)"V.GetParametricCenter([float, float, float]) -> int\nC++: virtual int GetParametricCenter(double pcoords[3])\n\nGet the center of the current cell (in parametric coordinates)\nand place it in `pcoords'.  If the current cell is a composite,\nthe return value is the sub-cell id that the center is in.  \\post\nvalid_result: (result>=0) && (IsPrimary() implies result==0)\n"},
  {(char*)"GetParametricDistance", PyvtkGenericAdaptorCell_GetParametricDistance, METH_VARARGS,
   (char*)"V.GetParametricDistance([float, float, float]) -> float\nC++: virtual double GetParametricDistance(double pcoords[3])\n\nReturn the distance of the parametric coordinate `pcoords' to the\ncurrent cell.  If inside the cell, a distance of zero is\nreturned. This is used during picking to get the correct cell\npicked. (The tolerance will occasionally allow cells to be picked\nwho are not really intersected \"inside\" the cell.)  \\post\npositive_result: result>=0\n"},
  {(char*)"GetParametricCoords", PyvtkGenericAdaptorCell_GetParametricCoords, METH_VARARGS,
   (char*)"V.GetParametricCoords() -> (float, ...)\nC++: virtual double *GetParametricCoords()\n\nReturn a contiguous array of parametric coordinates of the\ncorrner points defining the current cell. In other words,\n(px,py,pz, px,py,pz, etc..) The coordinates are ordered\nconsistent with the definition of the point ordering for the\ncell. Note that 3D parametric coordinates are returned no matter\nwhat the topological dimension of the cell.\n\\post valid_result_exists: ((IsPrimary()) && (result!=0)) ||\n                            ((!IsPrimary()) && (result==0))\n                    result!=0 implies\nsizeof(result)==GetNumberOfPoints()\n"},
  {(char*)"Tessellate", PyvtkGenericAdaptorCell_Tessellate, METH_VARARGS,
   (char*)"V.Tessellate(vtkGenericAttributeCollection,\n    vtkGenericCellTessellator, vtkPoints,\n    vtkIncrementalPointLocator, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, vtkUnsignedCharArray)\nC++: virtual void Tessellate(\n    vtkGenericAttributeCollection *attributes,\n    vtkGenericCellTessellator *tess, vtkPoints *points,\n    vtkIncrementalPointLocator *locator, vtkCellArray *cellArray,\n    vtkPointData *internalPd, vtkPointData *pd, vtkCellData *cd,\n    vtkUnsignedCharArray *types)\n\nTessellate the cell if it is not linear or if at least one\nattribute of `attributes' is not linear. The output are linear\ncells of the same dimension than the cell. If the cell is linear\nand all attributes are linear, the output is just a copy of the\ncurrent cell. `points', `cellArray', `pd' and `cd' are cumulative\noutput data arrays over cell iterations: they store the result of\neach call to Tessellate(). `internalPd' is initialized by the\ncalling filter and stores the result of the tessellation. If it\nis not null, `types' is filled with the types of the linear\ncells. `types' is null when it is called from\nvtkGenericGeometryFilter and not null when it is called from\nvtkGenericDatasetTessellator.\n\\pre attributes_exist: attributes!=0\n\\pre tessellator_exists: tess!=0\n\\pre points_exist: points!=0\n\\pre cellArray_exists: cellArray!=0\n\\pre internalPd_exists: internalPd!=0\n\\pre pd_exist: pd!=0\n\\pre cd_exists: cd!=0\n"},
  {(char*)"IsFaceOnBoundary", PyvtkGenericAdaptorCell_IsFaceOnBoundary, METH_VARARGS,
   (char*)"V.IsFaceOnBoundary(int) -> int\nC++: virtual int IsFaceOnBoundary(vtkIdType faceId)\n\nIs the face `faceId' of the current cell on the exterior boundary\nof the dataset?\n\\pre 3d: GetDimension()==3\n"},
  {(char*)"IsOnBoundary", PyvtkGenericAdaptorCell_IsOnBoundary, METH_VARARGS,
   (char*)"V.IsOnBoundary() -> int\nC++: virtual int IsOnBoundary()\n\nIs the cell on the exterior boundary of the dataset?\n\\pre 2d: GetDimension()==2\n"},
  {(char*)"GetPointIds", PyvtkGenericAdaptorCell_GetPointIds, METH_VARARGS,
   (char*)"V.GetPointIds([int, ...])\nC++: virtual void GetPointIds(vtkIdType *id)\n\nPut into `id' the list of the dataset points that define the\ncorner points of the cell.\n\\pre id_exists: id!=0\n\\pre valid_size: sizeof(id)==GetNumberOfPoints();\n"},
  {(char*)"TriangulateFace", PyvtkGenericAdaptorCell_TriangulateFace, METH_VARARGS,
   (char*)"V.TriangulateFace(vtkGenericAttributeCollection,\n    vtkGenericCellTessellator, int, vtkPoints,\n    vtkIncrementalPointLocator, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData)\nC++: virtual void TriangulateFace(\n    vtkGenericAttributeCollection *attributes,\n    vtkGenericCellTessellator *tess, int index, vtkPoints *points,\n     vtkIncrementalPointLocator *locator, vtkCellArray *cellArray,\n     vtkPointData *internalPd, vtkPointData *pd, vtkCellData *cd)\n\nTessellate face `index' of the cell. See Tessellate() for further\nexplanations.\n\\pre cell_is_3d: GetDimension()==3\n\\pre attributes_exist: attributes!=0\n\\pre tessellator_exists: tess!=0\n\\pre valid_face: index>=0\n\\pre points_exist: points!=0\n\\pre cellArray_exists: cellArray!=0\n\\pre internalPd_exists: internalPd!=0\n\\pre pd_exist: pd!=0\n\\pre cd_exists: cd!=0\n"},
  {(char*)"GetFaceArray", PyvtkGenericAdaptorCell_GetFaceArray, METH_VARARGS,
   (char*)"V.GetFaceArray(int) -> (int, ...)\nC++: virtual int *GetFaceArray(int faceId)\n\nReturn the ids of the vertices defining face `faceId'. Ids are\nrelated to the cell, not to the dataset.\n\\pre is_3d: this->GetDimension()==3\n\\pre valid_faceId_range: faceId>=0 &&\n    faceId<this->GetNumberOfBoundaries(2)\n\\post result_exists: result!=0\n\\post valid_size:\n    sizeof(result)>=GetNumberOfVerticesOnFace(faceId)\n"},
  {(char*)"GetNumberOfVerticesOnFace", PyvtkGenericAdaptorCell_GetNumberOfVerticesOnFace, METH_VARARGS,
   (char*)"V.GetNumberOfVerticesOnFace(int) -> int\nC++: virtual int GetNumberOfVerticesOnFace(int faceId)\n\nReturn the number of vertices defining face `faceId'.\n\\pre is_3d: this->GetDimension()==3\n\\pre valid_faceId_range: faceId>=0 &&\n    faceId<this->GetNumberOfBoundaries(2)\n\\post positive_result: && result>0\n"},
  {(char*)"GetEdgeArray", PyvtkGenericAdaptorCell_GetEdgeArray, METH_VARARGS,
   (char*)"V.GetEdgeArray(int) -> (int, ...)\nC++: virtual int *GetEdgeArray(int edgeId)\n\nReturn the ids of the vertices defining edge `edgeId'. Ids are\nrelated to the cell, not to the dataset.\n\\pre valid_dimension: this->GetDimension()>=2\n\\pre valid_edgeId_range: edgeId>=0 &&\n    edgeId<this->GetNumberOfBoundaries(1)\n\\post result_exists: result!=0\n\\post valid_size: sizeof(result)==2\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGenericAdaptorCellNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGenericAdaptorCell_Methods,
    "vtkGenericAdaptorCell", modulename,
    NULL, NULL,
    PyvtkGenericAdaptorCell_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGenericAdaptorCell_Doc()
{
  static const char *docstring[] = {
    "vtkGenericAdaptorCell - defines cell interface\n\n",
    "Superclass: vtkObject\n\n",
    "In VTK, spatial-temporal data is defined in terms of a dataset which\nis composed of cells. The cells are topological entities over which\nan interpolation field is applied. Cells are defined in terms of a\ntopology (e.g., vertices, lines, triangles, polygons, tetrahedra,\netc.), points that instantiate the geometry of the cells, and\ninterpolation fields (in the general case one interpolation field is",
    "\nfor geometry, the other is for attribute data associated with the\ncell).\n\nCurrently most algorithms in VTK use vtkCell and vtkDataSet, which\nmake assumptions about the nature of datasets, cells, and attributes.\nIn particular, this abstraction assumes that cell interpolation\nfunctions are linear, or products of linear functions. Further, VTK\nimplements most of the interpolation functions. This imp",
    "lementation\nstarts breaking down as the complexity of the interpolation (or\nbasis) functions increases.\n\nvtkGenericAdaptorCell addresses these issues by providing more\ngeneral abstraction for cells. It also adopts modern C++ practices\nincluding using iterators. The vtkGenericAdaptorCell is designed to\nfit within the adaptor framework; meaning that it is meant to adapt\nVTK to external simulation sy",
    "stems (see the\nGenericFiltering/README.html).\n\nPlease note that most cells are defined in terms of other cells (the\nboundary cells). They are also defined in terms of points, which are\nnot the same as vertices (vertices are a 0-D cell; points represent a\nposition in space).\n\nAnother important concept is the notion of DOFNodes. These concept\nsupports cell types with complex interpolation functions.",
    " For\nexample, higher-order p-method finite elements may have different\nfunctions on each of their topological features (edges, faces,\nregion). The coefficients of these polynomial functions are\nassociated with DOFNodes. (There is a single DOFNode for each\ntopological feature.) Note that from this perspective, points are\nused to establish the topological form of the cell; mid-side nodes\nand such ar",
    "e considered DOFNodes.\n\nSee Also:\n\nvtkGenericDataSet\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericAdaptorCell(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericAdaptorCellNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericAdaptorCell", o) != 0)
    {
    Py_DECREF(o);
    }

}

