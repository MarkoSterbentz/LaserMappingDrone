// python wrapper for vtkWedge
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkWedge.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWedge(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWedgeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCell3DNew
extern "C" { PyObject *PyVTKClass_vtkCell3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkCell3DNew
#endif

static const char **PyvtkWedge_Doc();


static PyObject *
PyvtkWedge_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWedge::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWedge::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWedge *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWedge::NewInstance());

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
PyvtkWedge_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWedge *tempr = vtkWedge::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkWedge::GetCellType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellDimension() :
      op->vtkWedge::GetCellDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkWedge::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaces() :
      op->vtkWedge::GetNumberOfFaces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetEdge(temp0) :
      op->vtkWedge::GetEdge(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetFace(temp0) :
      op->vtkWedge::GetFace(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::CellBoundary(temp0, temp1, temp2));

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
PyvtkWedge_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_EvaluatePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkWedge_EvaluateLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::EvaluateLocation(temp0, temp1, temp2, temp3);
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
PyvtkWedge_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkWedge_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::Triangulate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_Derivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Derivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::Derivatives(temp0, temp1, temp2, temp3, temp4);
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
PyvtkWedge_GetParametricCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetParametricCoords() :
      op->vtkWedge::GetParametricCoords());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetParametricCenter(temp0) :
      op->vtkWedge::GetParametricCenter(temp0));

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
PyvtkWedge_InterpolationFunctions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolationFunctions");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkWedge::InterpolationFunctions(temp0, temp1);

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

  return result;
}


static PyObject *
PyvtkWedge_InterpolationDerivs(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolationDerivs");

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[18];
  double save1[18];
  const int size1 = 18;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    vtkWedge::InterpolationDerivs(temp0, temp1);

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

  return result;
}


static PyObject *
PyvtkWedge_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

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
      op->vtkWedge::InterpolateFunctions(temp0, temp1);
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

  return result;
}


static PyObject *
PyvtkWedge_InterpolateDerivs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateDerivs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[18];
  double save1[18];
  const int size1 = 18;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InterpolateDerivs(temp0, temp1);
      }
    else
      {
      op->vtkWedge::InterpolateDerivs(temp0, temp1);
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

  return result;
}


static PyObject *
PyvtkWedge_GetEdgeArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEdgeArray");

  int temp0;
  int sizer = 2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int *tempr = vtkWedge::GetEdgeArray(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkWedge_GetFaceArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFaceArray");

  int temp0;
  int sizer = 4;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int *tempr = vtkWedge::GetFaceArray(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkWedge_Methods[] = {
  {(char*)"GetClassName", PyvtkWedge_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWedge_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWedge_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWedge\nC++: vtkWedge *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWedge_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWedge\nC++: vtkWedge *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetCellType", PyvtkWedge_GetCellType, METH_VARARGS,
   (char*)"V.GetCellType() -> int\nC++: int GetCellType()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetCellDimension", PyvtkWedge_GetCellDimension, METH_VARARGS,
   (char*)"V.GetCellDimension() -> int\nC++: int GetCellDimension()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetNumberOfEdges", PyvtkWedge_GetNumberOfEdges, METH_VARARGS,
   (char*)"V.GetNumberOfEdges() -> int\nC++: int GetNumberOfEdges()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetNumberOfFaces", PyvtkWedge_GetNumberOfFaces, METH_VARARGS,
   (char*)"V.GetNumberOfFaces() -> int\nC++: int GetNumberOfFaces()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetEdge", PyvtkWedge_GetEdge, METH_VARARGS,
   (char*)"V.GetEdge(int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetFace", PyvtkWedge_GetFace, METH_VARARGS,
   (char*)"V.GetFace(int) -> vtkCell\nC++: vtkCell *GetFace(int faceId)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"CellBoundary", PyvtkWedge_CellBoundary, METH_VARARGS,
   (char*)"V.CellBoundary(int, [float, float, float], vtkIdList) -> int\nC++: int CellBoundary(int subId, double pcoords[3],\n    vtkIdList *pts)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"Contour", PyvtkWedge_Contour, METH_VARARGS,
   (char*)"V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"EvaluatePosition", PyvtkWedge_EvaluatePosition, METH_VARARGS,
   (char*)"V.EvaluatePosition([float, float, float], [float, ...], int,\n    [float, float, float], float, [float, ...]) -> int\nC++: int EvaluatePosition(double x[3], double *closestPoint,\n    int &subId, double pcoords[3], double &dist2, double *weights)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"EvaluateLocation", PyvtkWedge_EvaluateLocation, METH_VARARGS,
   (char*)"V.EvaluateLocation(int, [float, float, float], [float, float,\n    float], [float, ...])\nC++: void EvaluateLocation(int &subId, double pcoords[3],\n    double x[3], double *weights)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"IntersectWithLine", PyvtkWedge_IntersectWithLine, METH_VARARGS,
   (char*)"V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: int IntersectWithLine(double p1[3], double p2[3], double tol,\n     double &t, double x[3], double pcoords[3], int &subId)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"Triangulate", PyvtkWedge_Triangulate, METH_VARARGS,
   (char*)"V.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"Derivatives", PyvtkWedge_Derivatives, METH_VARARGS,
   (char*)"V.Derivatives(int, [float, float, float], [float, ...], int,\n    [float, ...])\nC++: void Derivatives(int subId, double pcoords[3],\n    double *values, int dim, double *derivs)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetParametricCoords", PyvtkWedge_GetParametricCoords, METH_VARARGS,
   (char*)"V.GetParametricCoords() -> (float, ...)\nC++: virtual double *GetParametricCoords()\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {(char*)"GetParametricCenter", PyvtkWedge_GetParametricCenter, METH_VARARGS,
   (char*)"V.GetParametricCenter([float, float, float]) -> int\nC++: int GetParametricCenter(double pcoords[3])\n\nReturn the center of the wedge in parametric coordinates.\n"},
  {(char*)"InterpolationFunctions", PyvtkWedge_InterpolationFunctions, METH_VARARGS | METH_STATIC,
   (char*)"V.InterpolationFunctions([float, float, float], [float, float,\n    float, float, float, float])\nC++: static void InterpolationFunctions(double pcoords[3],\n    double weights[6])\n\n@deprecated Replaced by vtkWedge::InterpolateFunctions as of VTK\n5.2\n"},
  {(char*)"InterpolationDerivs", PyvtkWedge_InterpolationDerivs, METH_VARARGS | METH_STATIC,
   (char*)"V.InterpolationDerivs([float, float, float], [float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float])\nC++: static void InterpolationDerivs(double pcoords[3],\n    double derivs[18])\n\n@deprecated Replaced by vtkWedge::InterpolateDerivs as of VTK 5.2\n"},
  {(char*)"InterpolateFunctions", PyvtkWedge_InterpolateFunctions, METH_VARARGS,
   (char*)"V.InterpolateFunctions([float, float, float], [float, float,\n    float, float, float, float])\nC++: virtual void InterpolateFunctions(double pcoords[3],\n    double weights[6])\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {(char*)"InterpolateDerivs", PyvtkWedge_InterpolateDerivs, METH_VARARGS,
   (char*)"V.InterpolateDerivs([float, float, float], [float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float])\nC++: virtual void InterpolateDerivs(double pcoords[3],\n    double derivs[18])\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {(char*)"GetEdgeArray", PyvtkWedge_GetEdgeArray, METH_VARARGS | METH_STATIC,
   (char*)"V.GetEdgeArray(int) -> (int, int)\nC++: static int *GetEdgeArray(int edgeId)\n\nReturn the ids of the vertices defining edge/face\n(`edgeId`/`faceId'). Ids are related to the cell, not to the\ndataset.\n"},
  {(char*)"GetFaceArray", PyvtkWedge_GetFaceArray, METH_VARARGS | METH_STATIC,
   (char*)"V.GetFaceArray(int) -> (int, int, int, int)\nC++: static int *GetFaceArray(int faceId)\n\nReturn the ids of the vertices defining edge/face\n(`edgeId`/`faceId'). Ids are related to the cell, not to the\ndataset.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWedge_StaticNew()
{
  return vtkWedge::New();
}

PyObject *PyVTKClass_vtkWedgeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWedge_StaticNew,
    PyvtkWedge_Methods,
    "vtkWedge", modulename,
    NULL, NULL,
    PyvtkWedge_Doc(),
    PyVTKClass_vtkCell3DNew(modulename));
  return cls;
}

const char **PyvtkWedge_Doc()
{
  static const char *docstring[] = {
    "vtkWedge - a 3D cell that represents a linear wedge\n\n",
    "Superclass: vtkCell3D\n\n",
    "vtkWedge is a concrete implementation of vtkCell to represent a\nlinear 3D wedge. A wedge consists of two triangular and three\nquadrilateral faces and is defined by the six points (0-5). vtkWedge\nuses the standard isoparametric shape functions for a linear wedge.\nThe wedge is defined by the six points (0-5) where (0,1,2) is the\nbase of the wedge which, using the right hand rule, forms a triangle\nwh",
    "ose normal points outward (away from the triangular face (3,4,5)).\n\nSee Also:\n\nvtkConvexPointSet vtkHexahedron vtkPyramid vtkTetra vtkVoxel\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWedge(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWedgeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWedge", o) != 0)
    {
    Py_DECREF(o);
    }

}

