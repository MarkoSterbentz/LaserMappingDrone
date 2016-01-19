// python wrapper for vtkDataSetEdgeSubdivisionCriterion
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataSetEdgeSubdivisionCriterion.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataSetEdgeSubdivisionCriterion(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataSetEdgeSubdivisionCriterionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkEdgeSubdivisionCriterionNew
extern "C" { PyObject *PyVTKClass_vtkEdgeSubdivisionCriterionNew(const char *); }
#define DECLARED_PyVTKClass_vtkEdgeSubdivisionCriterionNew
#endif

static const char **PyvtkDataSetEdgeSubdivisionCriterion_Doc();


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataSetEdgeSubdivisionCriterion::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetEdgeSubdivisionCriterion::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetEdgeSubdivisionCriterion *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetEdgeSubdivisionCriterion::NewInstance());

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
PyvtkDataSetEdgeSubdivisionCriterion_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataSetEdgeSubdivisionCriterion *tempr = vtkDataSetEdgeSubdivisionCriterion::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SetMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetMesh(temp0);
      }
    else
      {
      op->vtkDataSetEdgeSubdivisionCriterion::SetMesh(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetMesh() :
      op->vtkDataSetEdgeSubdivisionCriterion::GetMesh());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellId(temp0);
      }
    else
      {
      op->vtkDataSetEdgeSubdivisionCriterion::SetCellId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType *tempr = (ap.IsBound() ?
      &op->GetCellId() :
      &op->vtkDataSetEdgeSubdivisionCriterion::GetCellId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell() :
      op->vtkDataSetEdgeSubdivisionCriterion::GetCell());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_EvaluateEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  double *temp2 = NULL;
  double small2[4];
  int size2 = 0;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[size2];
      }
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->EvaluateEdge(temp0, temp1, temp2, temp3) :
      op->vtkDataSetEdgeSubdivisionCriterion::EvaluateEdge(temp0, temp1, temp2, temp3));

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
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


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_EvaluateFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  int temp2;
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
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    double *tempr = (ap.IsBound() ?
      op->EvaluateFields(temp0, temp1, temp2) :
      op->vtkDataSetEdgeSubdivisionCriterion::EvaluateFields(temp0, temp1, temp2));

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
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_EvaluatePointDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePointDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  int temp2;
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
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->EvaluatePointDataField(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataSetEdgeSubdivisionCriterion::EvaluatePointDataField(temp0, temp1, temp2);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_EvaluateCellDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateCellDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  int temp2;
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
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->EvaluateCellDataField(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataSetEdgeSubdivisionCriterion::EvaluateCellDataField(temp0, temp1, temp2);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SetChordError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChordError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetChordError2(temp0);
      }
    else
      {
      op->vtkDataSetEdgeSubdivisionCriterion::SetChordError2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetChordError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChordError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetChordError2() :
      op->vtkDataSetEdgeSubdivisionCriterion::GetChordError2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SetFieldError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFieldError2(temp0, temp1);
      }
    else
      {
      op->vtkDataSetEdgeSubdivisionCriterion::SetFieldError2(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetFieldError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFieldError2(temp0) :
      op->vtkDataSetEdgeSubdivisionCriterion::GetFieldError2(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_ResetFieldError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFieldError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetFieldError2();
      }
    else
      {
      op->vtkDataSetEdgeSubdivisionCriterion::ResetFieldError2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetActiveFieldCriteria(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveFieldCriteria");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetActiveFieldCriteria() :
      op->vtkDataSetEdgeSubdivisionCriterion::GetActiveFieldCriteria());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetEdgeSubdivisionCriterion_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetEdgeSubdivisionCriterion_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetEdgeSubdivisionCriterion_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetEdgeSubdivisionCriterion_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataSetEdgeSubdivisionCriterion\nC++: vtkDataSetEdgeSubdivisionCriterion *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataSetEdgeSubdivisionCriterion_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataSetEdgeSubdivisionCriterion\nC++: vtkDataSetEdgeSubdivisionCriterion *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetMesh", PyvtkDataSetEdgeSubdivisionCriterion_SetMesh, METH_VARARGS,
   (char*)"V.SetMesh(vtkDataSet)\nC++: virtual void SetMesh(vtkDataSet *)\n\n"},
  {(char*)"GetMesh", PyvtkDataSetEdgeSubdivisionCriterion_GetMesh, METH_VARARGS,
   (char*)"V.GetMesh() -> vtkDataSet\nC++: vtkDataSet *GetMesh()\n\n"},
  {(char*)"SetCellId", PyvtkDataSetEdgeSubdivisionCriterion_SetCellId, METH_VARARGS,
   (char*)"V.SetCellId(int)\nC++: virtual void SetCellId(vtkIdType cell)\n\n"},
  {(char*)"GetCellId", PyvtkDataSetEdgeSubdivisionCriterion_GetCellId, METH_VARARGS,
   (char*)"V.GetCellId() -> int\nC++: vtkIdType &GetCellId()\n\n"},
  {(char*)"GetCell", PyvtkDataSetEdgeSubdivisionCriterion_GetCell, METH_VARARGS,
   (char*)"V.GetCell() -> vtkCell\nC++: vtkCell *GetCell()\n\n"},
  {(char*)"EvaluateEdge", PyvtkDataSetEdgeSubdivisionCriterion_EvaluateEdge, METH_VARARGS,
   (char*)"V.EvaluateEdge((float, ...), [float, ...], (float, ...), int)\n    -> bool\nC++: virtual bool EvaluateEdge(const double *p0, double *midpt,\n    const double *p1, int field_start)\n\n"},
  {(char*)"EvaluateFields", PyvtkDataSetEdgeSubdivisionCriterion_EvaluateFields, METH_VARARGS,
   (char*)"V.EvaluateFields([float, ...], [float, ...], int) -> (float, ...)\nC++: double *EvaluateFields(double *vertex, double *weights,\n    int field_start)\n\nEvaluate all of the fields that should be output with the given\nvertex and store them just past the parametric coordinates of\nvertex, at the offsets given\nbyvtkEdgeSubdivisionCriterion::GetFieldOffsets() plus\nfield_start.field_start contains the number of world-space\ncoordinates (always 3) plus the embedding dimension (the size of\nthe parameter-space in which the cell is embedded). It will range\nbetween 3 and 6, inclusive.\n\nYou must have called SetCellId() before calling this routine or\nthere will not be a mesh over which to evaluate the fields.\n\nYou must have called\nvtkEdgeSubdivisionCriterion::PassDefaultFields() or\nvtkEdgeSubdivisionCriterion::PassField() or there will be no\nfields defined for the output vertex.\n\nThis routine is public and returns its input argument so that it\nmay be used as an argument\ntovtkStreamingTessellator::AdaptivelySamplekFacet():\n   vtkStreamingTessellator* t = vtkStreamingTessellator::New();\n   vtkEdgeSubdivisionCriterion* s;\n   ...\n   t->AdaptivelySample1Facet( s->EvaluateFields( p0 ), s->EvaluateFields( p1 ) );\n   ...\n  Although this will work, using EvaluateFields() in this manner\nshould be avoided. It's much more efficient to fetch the corner\nvalues for each attribute and copy them into p0, p1, ... as\nopposed to performing shape function evaluations. The only case\nwhere you wouldn't want to do this is when the field you are\ninterpolating is discontinuous at cell borders, such as with a\ndiscontinuous galerkin method or when all the Gauss points for\nquadrature are interior to the cell.\n\nThe final argument, weights, is the array of weights to apply to\neach point's data when interpolating the field. This is returned\nbyvtkCell::EvaluateLocation() when evaluating the geometry.\n"},
  {(char*)"EvaluatePointDataField", PyvtkDataSetEdgeSubdivisionCriterion_EvaluatePointDataField, METH_VARARGS,
   (char*)"V.EvaluatePointDataField([float, ...], [float, ...], int)\nC++: void EvaluatePointDataField(double *result, double *weights,\n    int field)\n\nEvaluate either a cell or nodal field. This exists because of the\nfunky way that Exodus data will be handled. Sure, it's a hack,\nbut what are ya gonna do?\n"},
  {(char*)"EvaluateCellDataField", PyvtkDataSetEdgeSubdivisionCriterion_EvaluateCellDataField, METH_VARARGS,
   (char*)"V.EvaluateCellDataField([float, ...], [float, ...], int)\nC++: void EvaluateCellDataField(double *result, double *weights,\n    int field)\n\nEvaluate either a cell or nodal field. This exists because of the\nfunky way that Exodus data will be handled. Sure, it's a hack,\nbut what are ya gonna do?\n"},
  {(char*)"SetChordError2", PyvtkDataSetEdgeSubdivisionCriterion_SetChordError2, METH_VARARGS,
   (char*)"V.SetChordError2(float)\nC++: void SetChordError2(double a)\n\nGet/Set the square of the allowable chord error at any edge's\nmidpoint. This value is used by EvaluateEdge.\n"},
  {(char*)"GetChordError2", PyvtkDataSetEdgeSubdivisionCriterion_GetChordError2, METH_VARARGS,
   (char*)"V.GetChordError2() -> float\nC++: double GetChordError2()\n\nGet/Set the square of the allowable chord error at any edge's\nmidpoint. This value is used by EvaluateEdge.\n"},
  {(char*)"SetFieldError2", PyvtkDataSetEdgeSubdivisionCriterion_SetFieldError2, METH_VARARGS,
   (char*)"V.SetFieldError2(int, float)\nC++: virtual void SetFieldError2(int s, double err)\n\nGet/Set the square of the allowable error magnitude for the\nscalar field s at any edge's midpoint. A value less than or equal\nto 0 indicates that the field should not be used as a criterion\nfor subdivision.\n"},
  {(char*)"GetFieldError2", PyvtkDataSetEdgeSubdivisionCriterion_GetFieldError2, METH_VARARGS,
   (char*)"V.GetFieldError2(int) -> float\nC++: double GetFieldError2(int s)\n\nGet/Set the square of the allowable error magnitude for the\nscalar field s at any edge's midpoint. A value less than or equal\nto 0 indicates that the field should not be used as a criterion\nfor subdivision.\n"},
  {(char*)"ResetFieldError2", PyvtkDataSetEdgeSubdivisionCriterion_ResetFieldError2, METH_VARARGS,
   (char*)"V.ResetFieldError2()\nC++: virtual void ResetFieldError2()\n\nTell the subdivider not to use any field values as subdivision\ncriteria. Effectively calls SetFieldError2( a, -1. ) for all\nfields.\n"},
  {(char*)"GetActiveFieldCriteria", PyvtkDataSetEdgeSubdivisionCriterion_GetActiveFieldCriteria, METH_VARARGS,
   (char*)"V.GetActiveFieldCriteria() -> int\nC++: int GetActiveFieldCriteria()\n\nReturn a bitfield specifying which FieldError2 criteria are\npositive (i.e., actively used to decide edge subdivisions). This\nis stored as separate state to make subdivisions go faster.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataSetEdgeSubdivisionCriterion_StaticNew()
{
  return vtkDataSetEdgeSubdivisionCriterion::New();
}

PyObject *PyVTKClass_vtkDataSetEdgeSubdivisionCriterionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataSetEdgeSubdivisionCriterion_StaticNew,
    PyvtkDataSetEdgeSubdivisionCriterion_Methods,
    "vtkDataSetEdgeSubdivisionCriterion", modulename,
    NULL, NULL,
    PyvtkDataSetEdgeSubdivisionCriterion_Doc(),
    PyVTKClass_vtkEdgeSubdivisionCriterionNew(modulename));
  return cls;
}

const char **PyvtkDataSetEdgeSubdivisionCriterion_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetEdgeSubdivisionCriterion - a subclass of\nvtkEdgeSubdivisionCriterion for vtkDataSet objects.\n\n",
    "Superclass: vtkEdgeSubdivisionCriterion\n\n",
    "This is a subclass of vtkEdgeSubdivisionCriterion that is used for\ntessellating cells of a vtkDataSet, particularly nonlinear cells.\n\nIt provides functions for setting the current cell being tessellated\nand a convenience routine, EvaluateFields() to evaluate field values\nat a point. You should call EvaluateFields() from inside\nEvaluateEdge() whenever the result of EvaluateEdge() will be true.\nOthe",
    "rwise, do not call EvaluateFields() as the midpoint is about to\nbe discarded. (Implementor's note</i>: This isn't true if\nUGLY_ASPECT_RATIO_HACK has been defined. But in that case, we don't\nwant the exact field values; we need the linearly interpolated ones\nat the midpoint for continuity.)\n\nSee Also:\n\nvtkEdgeSubdivisionCriterion\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetEdgeSubdivisionCriterion(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetEdgeSubdivisionCriterionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetEdgeSubdivisionCriterion", o) != 0)
    {
    Py_DECREF(o);
    }

}

