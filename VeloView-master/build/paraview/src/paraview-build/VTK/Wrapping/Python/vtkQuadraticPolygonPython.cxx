// python wrapper for vtkQuadraticPolygon
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkQuadraticPolygon.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkQuadraticPolygon(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkQuadraticPolygonNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkNonLinearCellNew
extern "C" { PyObject *PyVTKClass_vtkNonLinearCellNew(const char *); }
#define DECLARED_PyVTKClass_vtkNonLinearCellNew
#endif

static const char **PyvtkQuadraticPolygon_Doc();


static PyObject *
PyvtkQuadraticPolygon_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkQuadraticPolygon::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuadraticPolygon::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkQuadraticPolygon *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuadraticPolygon::NewInstance());

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
PyvtkQuadraticPolygon_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkQuadraticPolygon *tempr = vtkQuadraticPolygon::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkQuadraticPolygon::GetCellType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellDimension() :
      op->vtkQuadraticPolygon::GetCellDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkQuadraticPolygon::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaces() :
      op->vtkQuadraticPolygon::GetNumberOfFaces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetEdge(temp0) :
      op->vtkQuadraticPolygon::GetEdge(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetFace(temp0) :
      op->vtkQuadraticPolygon::GetFace(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_IsPrimaryCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrimaryCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsPrimaryCell() :
      op->vtkQuadraticPolygon::IsPrimaryCell());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->CellBoundary(temp0, temp1, temp2) :
      op->vtkQuadraticPolygon::CellBoundary(temp0, temp1, temp2));

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
PyvtkQuadraticPolygon_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  double temp0;
  vtkDataArray *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkCellArray *temp4 = NULL;
  vtkCellArray *temp5 = NULL;
  vtkPointData *temp6 = NULL;
  vtkPointData *temp7 = NULL;
  vtkCellData *temp8 = NULL;
  vtkIdType temp9;
  vtkCellData *temp10 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(11) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkCellArray") &&
      ap.GetVTKObject(temp5, "vtkCellArray") &&
      ap.GetVTKObject(temp6, "vtkPointData") &&
      ap.GetVTKObject(temp7, "vtkPointData") &&
      ap.GetVTKObject(temp8, "vtkCellData") &&
      ap.GetValue(temp9) &&
      ap.GetVTKObject(temp10, "vtkCellData"))
    {
    if (ap.IsBound())
      {
      op->Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
      }
    else
      {
      op->vtkQuadraticPolygon::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  double temp0;
  vtkDataArray *temp1 = NULL;
  vtkIncrementalPointLocator *temp2 = NULL;
  vtkCellArray *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkPointData *temp5 = NULL;
  vtkCellData *temp6 = NULL;
  vtkIdType temp7;
  vtkCellData *temp8 = NULL;
  int temp9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData") &&
      ap.GetValue(temp9))
    {
    if (ap.IsBound())
      {
      op->Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }
    else
      {
      op->vtkQuadraticPolygon::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_EvaluatePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

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
  double *temp5 = NULL;
  double *save5 = NULL;
  double small5[8];
  int size5 = 0;
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
    size5 = ap.GetArgSize(5);
    temp5 = small5;
    if (size5 > 4)
      {
      temp5 = new double[2*size5];
      }
    save5 = &temp5[size5];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkQuadraticPolygon::EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5));

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
    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
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
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_EvaluateLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
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

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->EvaluateLocation(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkQuadraticPolygon::EvaluateLocation(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
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
PyvtkQuadraticPolygon_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

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

  if (op && ap.CheckArgCount(7) &&
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

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkQuadraticPolygon::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkQuadraticPolygon_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
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
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InterpolateFunctions(temp0, temp1);
      }
    else
      {
      op->vtkQuadraticPolygon::InterpolateFunctions(temp0, temp1);
      }

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
PyvtkQuadraticPolygon_ComputeCentroid(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCentroid");

  vtkIdTypeArray *temp0 = NULL;
  vtkPoints *temp1 = NULL;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    vtkQuadraticPolygon::ComputeCentroid(temp0, temp1, temp2);

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
PyvtkQuadraticPolygon_ParameterizePolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParameterizePolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->ParameterizePolygon(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkQuadraticPolygon::ParameterizePolygon(temp0, temp1, temp2, temp3, temp4, temp5));

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
    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_PointInPolygon(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PointInPolygon");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  double temp3[6];
  double save3[6];
  const int size3 = 6;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  PyObject *result = NULL;

  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new double[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = vtkQuadraticPolygon::PointInPolygon(temp0, temp1, temp2, temp3, temp4);

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

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
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
PyvtkQuadraticPolygon_Triangulate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    int tempr = (ap.IsBound() ?
      op->Triangulate(temp0) :
      op->vtkQuadraticPolygon::Triangulate(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkQuadraticPolygon_Triangulate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  int temp0;
  vtkIdList *temp1 = NULL;
  vtkPoints *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkPoints"))
    {
    int tempr = (ap.IsBound() ?
      op->Triangulate(temp0, temp1, temp2) :
      op->vtkQuadraticPolygon::Triangulate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkQuadraticPolygon_Triangulate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkQuadraticPolygon_Triangulate_s1(self, args);
    case 3:
      return PyvtkQuadraticPolygon_Triangulate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Triangulate");
  return NULL;
}



static PyObject *
PyvtkQuadraticPolygon_NonDegenerateTriangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonDegenerateTriangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    int tempr = (ap.IsBound() ?
      op->NonDegenerateTriangulate(temp0) :
      op->vtkQuadraticPolygon::NonDegenerateTriangulate(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_DistanceToPolygon(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DistanceToPolygon");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  double temp3[6];
  double save3[6];
  const int size3 = 6;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  PyObject *result = NULL;

  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new double[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    double tempr = vtkQuadraticPolygon::DistanceToPolygon(temp0, temp1, temp2, temp3, temp4);

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

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
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
PyvtkQuadraticPolygon_IntersectPolygonWithPolygon(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IntersectPolygonWithPolygon");

  int temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  double temp2[6];
  double save2[6];
  const int size2 = 6;
  int temp3;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
  double temp5[3];
  double save5[3];
  const int size5 = 3;
  double temp6;
  double temp7[3];
  double save7[3];
  const int size7 = 3;
  PyObject *result = NULL;

  size1 = ap.GetArgSize(1);
  temp1 = small1;
  if (size1 > 4)
    {
    temp1 = new double[2*size1];
    }
  save1 = &temp1[size1];
  size4 = ap.GetArgSize(4);
  temp4 = small4;
  if (size4 > 4)
    {
    temp4 = new double[2*size4];
    }
  save4 = &temp4[size4];

  if (ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetArray(temp7, size7))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);
    ap.SaveArray(temp7, save7, size7);

    int tempr = vtkQuadraticPolygon::IntersectPolygonWithPolygon(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

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

    if (ap.ArrayHasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(7, temp7, size7);
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
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_IntersectConvex2DCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IntersectConvex2DCells");

  vtkCell *temp0 = NULL;
  vtkCell *temp1 = NULL;
  double temp2;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkCell") &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = vtkQuadraticPolygon::IntersectConvex2DCells(temp0, temp1, temp2, temp3, temp4);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_Derivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Derivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  int temp3;
  double *temp4 = NULL;
  double *save4 = NULL;
  double small4[8];
  int size4 = 0;
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
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new double[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      op->Derivatives(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkQuadraticPolygon::Derivatives(temp0, temp1, temp2, temp3, temp4);
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

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
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
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_GetUseMVCInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMVCInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseMVCInterpolation() :
      op->vtkQuadraticPolygon::GetUseMVCInterpolation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_SetUseMVCInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMVCInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseMVCInterpolation(temp0);
      }
    else
      {
      op->vtkQuadraticPolygon::SetUseMVCInterpolation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkQuadraticPolygon_Methods[] = {
  {(char*)"GetClassName", PyvtkQuadraticPolygon_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkQuadraticPolygon_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkQuadraticPolygon_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkQuadraticPolygon\nC++: vtkQuadraticPolygon *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkQuadraticPolygon_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkQuadraticPolygon\nC++: vtkQuadraticPolygon *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetCellType", PyvtkQuadraticPolygon_GetCellType, METH_VARARGS,
   (char*)"V.GetCellType() -> int\nC++: int GetCellType()\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"GetCellDimension", PyvtkQuadraticPolygon_GetCellDimension, METH_VARARGS,
   (char*)"V.GetCellDimension() -> int\nC++: int GetCellDimension()\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"GetNumberOfEdges", PyvtkQuadraticPolygon_GetNumberOfEdges, METH_VARARGS,
   (char*)"V.GetNumberOfEdges() -> int\nC++: int GetNumberOfEdges()\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"GetNumberOfFaces", PyvtkQuadraticPolygon_GetNumberOfFaces, METH_VARARGS,
   (char*)"V.GetNumberOfFaces() -> int\nC++: int GetNumberOfFaces()\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"GetEdge", PyvtkQuadraticPolygon_GetEdge, METH_VARARGS,
   (char*)"V.GetEdge(int) -> vtkCell\nC++: vtkCell *GetEdge(int)\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"GetFace", PyvtkQuadraticPolygon_GetFace, METH_VARARGS,
   (char*)"V.GetFace(int) -> vtkCell\nC++: vtkCell *GetFace(int)\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"IsPrimaryCell", PyvtkQuadraticPolygon_IsPrimaryCell, METH_VARARGS,
   (char*)"V.IsPrimaryCell() -> int\nC++: int IsPrimaryCell()\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {(char*)"CellBoundary", PyvtkQuadraticPolygon_CellBoundary, METH_VARARGS,
   (char*)"V.CellBoundary(int, [float, float, float], vtkIdList) -> int\nC++: int CellBoundary(int subId, double pcoords[3],\n    vtkIdList *pts)\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {(char*)"Contour", PyvtkQuadraticPolygon_Contour, METH_VARARGS,
   (char*)"V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd)\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {(char*)"Clip", PyvtkQuadraticPolygon_Clip, METH_VARARGS,
   (char*)"V.Clip(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData, int)\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *polys,\n    vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd,\n    vtkIdType cellId, vtkCellData *outCd, int insideOut)\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {(char*)"EvaluatePosition", PyvtkQuadraticPolygon_EvaluatePosition, METH_VARARGS,
   (char*)"V.EvaluatePosition([float, float, float], [float, ...], int,\n    [float, float, float], float, [float, ...]) -> int\nC++: int EvaluatePosition(double x[3], double *closestPoint,\n    int &subId, double pcoords[3], double &dist2, double *weights)\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {(char*)"EvaluateLocation", PyvtkQuadraticPolygon_EvaluateLocation, METH_VARARGS,
   (char*)"V.EvaluateLocation(int, [float, float, float], [float, float,\n    float], [float, ...])\nC++: void EvaluateLocation(int &subId, double pcoords[3],\n    double x[3], double *weights)\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {(char*)"IntersectWithLine", PyvtkQuadraticPolygon_IntersectWithLine, METH_VARARGS,
   (char*)"V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: int IntersectWithLine(double p1[3], double p2[3], double tol,\n     double &t, double x[3], double pcoords[3], int &subId)\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {(char*)"InterpolateFunctions", PyvtkQuadraticPolygon_InterpolateFunctions, METH_VARARGS,
   (char*)"V.InterpolateFunctions([float, float, float], [float, ...])\nC++: virtual void InterpolateFunctions(double x[3],\n    double *weights)\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {(char*)"ComputeCentroid", PyvtkQuadraticPolygon_ComputeCentroid, METH_VARARGS | METH_STATIC,
   (char*)"V.ComputeCentroid(vtkIdTypeArray, vtkPoints, [float, float,\n    float])\nC++: static void ComputeCentroid(vtkIdTypeArray *ids,\n    vtkPoints *pts, double centroid[3])\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {(char*)"ParameterizePolygon", PyvtkQuadraticPolygon_ParameterizePolygon, METH_VARARGS,
   (char*)"V.ParameterizePolygon([float, float, float], [float, float,\n    float], float, [float, float, float], float, [float, float,\n    float]) -> int\nC++: int ParameterizePolygon(double p0[3], double p10[3],\n    double &l10, double p20[3], double &l20, double n[3])\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {(char*)"PointInPolygon", PyvtkQuadraticPolygon_PointInPolygon, METH_VARARGS | METH_STATIC,
   (char*)"V.PointInPolygon([float, float, float], int, [float, ...], [float,\n     float, float, float, float, float], [float, float, float])\n    -> int\nC++: static int PointInPolygon(double x[3], int numPts,\n    double *pts, double bounds[6], double n[3])\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {(char*)"Triangulate", PyvtkQuadraticPolygon_Triangulate, METH_VARARGS,
   (char*)"V.Triangulate(vtkIdList) -> int\nC++: int Triangulate(vtkIdList *outTris)\nV.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {(char*)"NonDegenerateTriangulate", PyvtkQuadraticPolygon_NonDegenerateTriangulate, METH_VARARGS,
   (char*)"V.NonDegenerateTriangulate(vtkIdList) -> int\nC++: int NonDegenerateTriangulate(vtkIdList *outTris)\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {(char*)"DistanceToPolygon", PyvtkQuadraticPolygon_DistanceToPolygon, METH_VARARGS | METH_STATIC,
   (char*)"V.DistanceToPolygon([float, float, float], int, [float, ...],\n    [float, float, float, float, float, float], [float, float,\n    float]) -> float\nC++: static double DistanceToPolygon(double x[3], int numPts,\n    double *pts, double bounds[6], double closest[3])\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {(char*)"IntersectPolygonWithPolygon", PyvtkQuadraticPolygon_IntersectPolygonWithPolygon, METH_VARARGS | METH_STATIC,
   (char*)"V.IntersectPolygonWithPolygon(int, [float, ...], [float, float,\n    float, float, float, float], int, [float, ...], [float, float,\n     float], float, [float, float, float]) -> int\nC++: static int IntersectPolygonWithPolygon(int npts, double *pts,\n     double bounds[6], int npts2, double *pts2, double bounds2[3],\n     double tol, double x[3])\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {(char*)"IntersectConvex2DCells", PyvtkQuadraticPolygon_IntersectConvex2DCells, METH_VARARGS | METH_STATIC,
   (char*)"V.IntersectConvex2DCells(vtkCell, vtkCell, float, [float, float,\n    float], [float, float, float]) -> int\nC++: static int IntersectConvex2DCells(vtkCell *cell1,\n    vtkCell *cell2, double tol, double p0[3], double p1[3])\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {(char*)"Derivatives", PyvtkQuadraticPolygon_Derivatives, METH_VARARGS,
   (char*)"V.Derivatives(int, [float, float, float], [float, ...], int,\n    [float, ...])\nC++: void Derivatives(int subId, double pcoords[3],\n    double *values, int dim, double *derivs)\n\n"},
  {(char*)"GetUseMVCInterpolation", PyvtkQuadraticPolygon_GetUseMVCInterpolation, METH_VARARGS,
   (char*)"V.GetUseMVCInterpolation() -> bool\nC++: bool GetUseMVCInterpolation()\n\nSet/Get the flag indicating whether to use Mean Value Coordinate\nfor the interpolation. If true, InterpolateFunctions() uses the\nMean Value Coordinate to compute weights. Otherwise, the\nconventional 1/r^2 method is used. The UseMVCInterpolation\nparameter is set to true by default.\n"},
  {(char*)"SetUseMVCInterpolation", PyvtkQuadraticPolygon_SetUseMVCInterpolation, METH_VARARGS,
   (char*)"V.SetUseMVCInterpolation(bool)\nC++: void SetUseMVCInterpolation(bool a)\n\nSet/Get the flag indicating whether to use Mean Value Coordinate\nfor the interpolation. If true, InterpolateFunctions() uses the\nMean Value Coordinate to compute weights. Otherwise, the\nconventional 1/r^2 method is used. The UseMVCInterpolation\nparameter is set to true by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuadraticPolygon_StaticNew()
{
  return vtkQuadraticPolygon::New();
}

PyObject *PyVTKClass_vtkQuadraticPolygonNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuadraticPolygon_StaticNew,
    PyvtkQuadraticPolygon_Methods,
    "vtkQuadraticPolygon", modulename,
    NULL, NULL,
    PyvtkQuadraticPolygon_Doc(),
    PyVTKClass_vtkNonLinearCellNew(modulename));
  return cls;
}

const char **PyvtkQuadraticPolygon_Doc()
{
  static const char *docstring[] = {
    "vtkQuadraticPolygon - a cell that represents a parabolic n-sided\npolygon\n\n",
    "Superclass: vtkNonLinearCell\n\n",
    "vtkQuadraticPolygon is a concrete implementation of vtkNonLinearCell\nto represent a 2D n-sided (2*n nodes) parabolic polygon. The polygon\ncannot have any internal holes, and cannot self-intersect. The cell\nincludes a mid-edge node for each of the n edges of the cell. The\nordering of the 2*n points defining the cell are point ids (0..n-1\nand n..2*n-1) where ids 0..n-1 define the corner vertices of ",
    "the\npolygon; ids n..2*n-1 define the midedge nodes. Define the polygon\nwith points ordered in the counter- clockwise direction; do not\nrepeat the last point.\n\nSee Also:\n\nvtkQuadraticEdge vtkQuadraticTriangle vtkQuadraticTetra\nvtkQuadraticHexahedron vtkQuadraticWedge vtkQuadraticPyramid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuadraticPolygon(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuadraticPolygonNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuadraticPolygon", o) != 0)
    {
    Py_DECREF(o);
    }

}

