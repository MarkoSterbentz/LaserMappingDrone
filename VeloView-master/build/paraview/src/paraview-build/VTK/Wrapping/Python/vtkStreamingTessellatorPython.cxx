// python wrapper for vtkStreamingTessellator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStreamingTessellator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStreamingTessellator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStreamingTessellatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkStreamingTessellator_Doc();


static PyObject *
PyvtkStreamingTessellator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStreamingTessellator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamingTessellator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStreamingTessellator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamingTessellator::NewInstance());

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
PyvtkStreamingTessellator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStreamingTessellator *tempr = vtkStreamingTessellator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetPrivateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrivateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPrivateData(temp0);
      }
    else
      {
      op->vtkStreamingTessellator::SetPrivateData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetPrivateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrivateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetPrivateData() :
      op->vtkStreamingTessellator::GetPrivateData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetConstPrivateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstPrivateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConstPrivateData(temp0);
      }
    else
      {
      op->vtkStreamingTessellator::SetConstPrivateData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetConstPrivateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstPrivateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const void  *tempr = (ap.IsBound() ?
      op->GetConstPrivateData() :
      op->vtkStreamingTessellator::GetConstPrivateData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetSubdivisionAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivisionAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  vtkEdgeSubdivisionCriterion *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEdgeSubdivisionCriterion"))
    {
    if (ap.IsBound())
      {
      op->SetSubdivisionAlgorithm(temp0);
      }
    else
      {
      op->vtkStreamingTessellator::SetSubdivisionAlgorithm(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetSubdivisionAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivisionAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEdgeSubdivisionCriterion *tempr = (ap.IsBound() ?
      op->GetSubdivisionAlgorithm() :
      op->vtkStreamingTessellator::GetSubdivisionAlgorithm());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetEmbeddingDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEmbeddingDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetEmbeddingDimension(temp0, temp1);
      }
    else
      {
      op->vtkStreamingTessellator::SetEmbeddingDimension(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetEmbeddingDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEmbeddingDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetEmbeddingDimension(temp0) :
      op->vtkStreamingTessellator::GetEmbeddingDimension(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetFieldSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFieldSize(temp0, temp1);
      }
    else
      {
      op->vtkStreamingTessellator::SetFieldSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetFieldSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldSize(temp0) :
      op->vtkStreamingTessellator::GetFieldSize(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfSubdivisions(temp0);
      }
    else
      {
      op->vtkStreamingTessellator::SetMaximumNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSubdivisions() :
      op->vtkStreamingTessellator::GetMaximumNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_AdaptivelySample3Facet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptivelySample3Facet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  double *temp3 = NULL;
  double *save3 = NULL;
  double small3[8];
  int size3 = 0;
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
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new double[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->AdaptivelySample3Facet(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkStreamingTessellator::AdaptivelySample3Facet(temp0, temp1, temp2, temp3);
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
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_AdaptivelySample2Facet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptivelySample2Facet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
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
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->AdaptivelySample2Facet(temp0, temp1, temp2);
      }
    else
      {
      op->vtkStreamingTessellator::AdaptivelySample2Facet(temp0, temp1, temp2);
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
PyvtkStreamingTessellator_AdaptivelySample1Facet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptivelySample1Facet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->AdaptivelySample1Facet(temp0, temp1);
      }
    else
      {
      op->vtkStreamingTessellator::AdaptivelySample1Facet(temp0, temp1);
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
PyvtkStreamingTessellator_AdaptivelySample0Facet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptivelySample0Facet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

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

    if (ap.IsBound())
      {
      op->AdaptivelySample0Facet(temp0);
      }
    else
      {
      op->vtkStreamingTessellator::AdaptivelySample0Facet(temp0);
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
PyvtkStreamingTessellator_ResetCounts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCounts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCounts();
      }
    else
      {
      op->vtkStreamingTessellator::ResetCounts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetCaseCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaseCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCaseCount(temp0) :
      op->vtkStreamingTessellator::GetCaseCount(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetSubcaseCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubcaseCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSubcaseCount(temp0, temp1) :
      op->vtkStreamingTessellator::GetSubcaseCount(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamingTessellator_Methods[] = {
  {(char*)"GetClassName", PyvtkStreamingTessellator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStreamingTessellator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStreamingTessellator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStreamingTessellator\nC++: vtkStreamingTessellator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStreamingTessellator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStreamingTessellator\nC++: vtkStreamingTessellator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPrivateData", PyvtkStreamingTessellator_SetPrivateData, METH_VARARGS,
   (char*)"V.SetPrivateData()\nC++: virtual void SetPrivateData(void *Private)\n\nGet/Set a void pointer passed to the triangle and edge output\nfunctions.\n"},
  {(char*)"GetPrivateData", PyvtkStreamingTessellator_GetPrivateData, METH_VARARGS,
   (char*)"V.GetPrivateData() ->\nC++: virtual void *GetPrivateData()\n\nGet/Set a void pointer passed to the triangle and edge output\nfunctions.\n"},
  {(char*)"SetConstPrivateData", PyvtkStreamingTessellator_SetConstPrivateData, METH_VARARGS,
   (char*)"V.SetConstPrivateData()\nC++: virtual void SetConstPrivateData(const void *ConstPrivate)\n\nGet/Set a constant void pointer passed to the simplex output\nfunctions.\n"},
  {(char*)"GetConstPrivateData", PyvtkStreamingTessellator_GetConstPrivateData, METH_VARARGS,
   (char*)"V.GetConstPrivateData() ->\nC++: virtual const void *GetConstPrivateData()\n\nGet/Set a constant void pointer passed to the simplex output\nfunctions.\n"},
  {(char*)"SetSubdivisionAlgorithm", PyvtkStreamingTessellator_SetSubdivisionAlgorithm, METH_VARARGS,
   (char*)"V.SetSubdivisionAlgorithm(vtkEdgeSubdivisionCriterion)\nC++: virtual void SetSubdivisionAlgorithm(\n    vtkEdgeSubdivisionCriterion *)\n\nGet/Set the algorithm used to determine whether an edge should be\nsubdivided or left as-is. This is used once for each call to\nAdaptivelySample1Facet (which is recursive and will call itself\nresulting in additional edges to be checked) or three times for\neach call to AdaptivelySample2Facet (also recursive).\n"},
  {(char*)"GetSubdivisionAlgorithm", PyvtkStreamingTessellator_GetSubdivisionAlgorithm, METH_VARARGS,
   (char*)"V.GetSubdivisionAlgorithm() -> vtkEdgeSubdivisionCriterion\nC++: virtual vtkEdgeSubdivisionCriterion *GetSubdivisionAlgorithm(\n    )\n\nGet/Set the algorithm used to determine whether an edge should be\nsubdivided or left as-is. This is used once for each call to\nAdaptivelySample1Facet (which is recursive and will call itself\nresulting in additional edges to be checked) or three times for\neach call to AdaptivelySample2Facet (also recursive).\n"},
  {(char*)"SetEmbeddingDimension", PyvtkStreamingTessellator_SetEmbeddingDimension, METH_VARARGS,
   (char*)"V.SetEmbeddingDimension(int, int)\nC++: virtual void SetEmbeddingDimension(int k, int d)\n\nGet/Set the number of parameter-space coordinates associated with\neach input and output point. The default is k for k -facets. You\nmay specify a different dimension, d, for each type of k -facet\nto be processed. For example, SetEmbeddingDimension( 2, 3 ) would\nassociate r, s, andt coordinates with each input and output point\ngenerated by AdaptivelySample2Facet but does not say anything\nabout input or output points generated byAdaptivelySample1Facet.\nCall SetEmbeddingDimension( -1, d ) to specify the same dimension\nfor all possible k values.d may not exceed 8, as that would be\nplain silly.\n"},
  {(char*)"GetEmbeddingDimension", PyvtkStreamingTessellator_GetEmbeddingDimension, METH_VARARGS,
   (char*)"V.GetEmbeddingDimension(int) -> int\nC++: int GetEmbeddingDimension(int k)\n\nGet/Set the number of parameter-space coordinates associated with\neach input and output point. The default is k for k -facets. You\nmay specify a different dimension, d, for each type of k -facet\nto be processed. For example, SetEmbeddingDimension( 2, 3 ) would\nassociate r, s, andt coordinates with each input and output point\ngenerated by AdaptivelySample2Facet but does not say anything\nabout input or output points generated byAdaptivelySample1Facet.\nCall SetEmbeddingDimension( -1, d ) to specify the same dimension\nfor all possible k values.d may not exceed 8, as that would be\nplain silly.\n"},
  {(char*)"SetFieldSize", PyvtkStreamingTessellator_SetFieldSize, METH_VARARGS,
   (char*)"V.SetFieldSize(int, int)\nC++: virtual void SetFieldSize(int k, int s)\n\nGet/Set the number of field value coordinates associated with\neach input and output point. The default is 0; no field values\nare interpolated. You may specify a different size, s, for each\ntype of k -facet to be processed. For example, SetFieldSize( 2, 3\n) would associate 3 field value coordinates with each input and\noutput point of an AdaptivelySample2Facet call, but does not say\nanything about input or output points of AdaptivelySample1Facet.\nCall SetFieldSize( -1, s ) to specify the same dimension for all\npossible k values.s may not exceed\nvtkStreamingTessellator::MaxFieldSize. This is a compile-time\nconstant that defaults to 18, which is large enough for a scalar,\nvector, tensor, normal, and texture coordinate to be included at\neach point.\n\nNormally, you will not call SetFieldSize() directly; instead,\nsubclasses of vtkEdgeSubdivisionCriterion, such as\nvtkShoeMeshSubdivisionAlgorithm, will call it for you.\n\nIn any event, setting FieldSize to a non-zero value means you\nmust pass field values to the AdaptivelySamplekFacet routines;\nFor example,\n    vtkStreamingTessellator* t = vtkStreamingTessellator::New();\n    t->SetFieldSize( 1, 3 );\n    t->SetEmbeddingDimension( 1, 1 ); // not really required, this is the default\n    double p0[3+1+3] = { x0, y0, z0, r0, fx0, fy0, fz0 };\n    double p1[3+1+3] = { x1, y1, z1, r1, fx1, fy1, fz1 };\n    t->AdaptivelySample1Facet( p0, p1 );\n  This would adaptively sample an curve (1-facet) with geometry\nand a vector field at every output point on the curve.\n"},
  {(char*)"GetFieldSize", PyvtkStreamingTessellator_GetFieldSize, METH_VARARGS,
   (char*)"V.GetFieldSize(int) -> int\nC++: int GetFieldSize(int k)\n\nGet/Set the number of field value coordinates associated with\neach input and output point. The default is 0; no field values\nare interpolated. You may specify a different size, s, for each\ntype of k -facet to be processed. For example, SetFieldSize( 2, 3\n) would associate 3 field value coordinates with each input and\noutput point of an AdaptivelySample2Facet call, but does not say\nanything about input or output points of AdaptivelySample1Facet.\nCall SetFieldSize( -1, s ) to specify the same dimension for all\npossible k values.s may not exceed\nvtkStreamingTessellator::MaxFieldSize. This is a compile-time\nconstant that defaults to 18, which is large enough for a scalar,\nvector, tensor, normal, and texture coordinate to be included at\neach point.\n\nNormally, you will not call SetFieldSize() directly; instead,\nsubclasses of vtkEdgeSubdivisionCriterion, such as\nvtkShoeMeshSubdivisionAlgorithm, will call it for you.\n\nIn any event, setting FieldSize to a non-zero value means you\nmust pass field values to the AdaptivelySamplekFacet routines;\nFor example,\n    vtkStreamingTessellator* t = vtkStreamingTessellator::New();\n    t->SetFieldSize( 1, 3 );\n    t->SetEmbeddingDimension( 1, 1 ); // not really required, this is the default\n    double p0[3+1+3] = { x0, y0, z0, r0, fx0, fy0, fz0 };\n    double p1[3+1+3] = { x1, y1, z1, r1, fx1, fy1, fz1 };\n    t->AdaptivelySample1Facet( p0, p1 );\n  This would adaptively sample an curve (1-facet) with geometry\nand a vector field at every output point on the curve.\n"},
  {(char*)"SetMaximumNumberOfSubdivisions", PyvtkStreamingTessellator_SetMaximumNumberOfSubdivisions, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfSubdivisions(int)\nC++: virtual void SetMaximumNumberOfSubdivisions(\n    int num_subdiv_in)\n\nGet/Set the maximum number of subdivisions that may occur.\n"},
  {(char*)"GetMaximumNumberOfSubdivisions", PyvtkStreamingTessellator_GetMaximumNumberOfSubdivisions, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfSubdivisions() -> int\nC++: int GetMaximumNumberOfSubdivisions()\n\nGet/Set the maximum number of subdivisions that may occur.\n"},
  {(char*)"AdaptivelySample3Facet", PyvtkStreamingTessellator_AdaptivelySample3Facet, METH_VARARGS,
   (char*)"V.AdaptivelySample3Facet([float, ...], [float, ...], [float, ...],\n     [float, ...])\nC++: void AdaptivelySample3Facet(double *v1, double *v2,\n    double *v3, double *v4)\n\nThis will adaptively subdivide the tetrahedron (3-facet),\ntriangle (2-facet), or edge (1-facet) until the subdivision\nalgorithm returns false for every edge or the maximum recursion\ndepth is reached.\n\nUse SetMaximumNumberOfSubdivisions to change the maximum\nrecursion depth.\n\nThe AdaptivelySample0Facet method is provided as a convenience.\nObviously, there is no way to adaptively subdivide a vertex.\nInstead the input vertex is passed unchanged to the output via a\ncall to the registered VertexProcessorFunction callback.\n\nWarning:\n\nThis assumes that you have called SetSubdivisionAlgorithm(),\nSetEdgeCallback(), SetTriangleCallback(), and\nSetTetrahedronCallback() with valid values!\n"},
  {(char*)"AdaptivelySample2Facet", PyvtkStreamingTessellator_AdaptivelySample2Facet, METH_VARARGS,
   (char*)"V.AdaptivelySample2Facet([float, ...], [float, ...], [float, ...])\nC++: void AdaptivelySample2Facet(double *v1, double *v2,\n    double *v3)\n\nThis will adaptively subdivide the tetrahedron (3-facet),\ntriangle (2-facet), or edge (1-facet) until the subdivision\nalgorithm returns false for every edge or the maximum recursion\ndepth is reached.\n\nUse SetMaximumNumberOfSubdivisions to change the maximum\nrecursion depth.\n\nThe AdaptivelySample0Facet method is provided as a convenience.\nObviously, there is no way to adaptively subdivide a vertex.\nInstead the input vertex is passed unchanged to the output via a\ncall to the registered VertexProcessorFunction callback.\n\nWarning:\n\nThis assumes that you have called SetSubdivisionAlgorithm(),\nSetEdgeCallback(), SetTriangleCallback(), and\nSetTetrahedronCallback() with valid values!\n"},
  {(char*)"AdaptivelySample1Facet", PyvtkStreamingTessellator_AdaptivelySample1Facet, METH_VARARGS,
   (char*)"V.AdaptivelySample1Facet([float, ...], [float, ...])\nC++: void AdaptivelySample1Facet(double *v1, double *v2)\n\nThis will adaptively subdivide the tetrahedron (3-facet),\ntriangle (2-facet), or edge (1-facet) until the subdivision\nalgorithm returns false for every edge or the maximum recursion\ndepth is reached.\n\nUse SetMaximumNumberOfSubdivisions to change the maximum\nrecursion depth.\n\nThe AdaptivelySample0Facet method is provided as a convenience.\nObviously, there is no way to adaptively subdivide a vertex.\nInstead the input vertex is passed unchanged to the output via a\ncall to the registered VertexProcessorFunction callback.\n\nWarning:\n\nThis assumes that you have called SetSubdivisionAlgorithm(),\nSetEdgeCallback(), SetTriangleCallback(), and\nSetTetrahedronCallback() with valid values!\n"},
  {(char*)"AdaptivelySample0Facet", PyvtkStreamingTessellator_AdaptivelySample0Facet, METH_VARARGS,
   (char*)"V.AdaptivelySample0Facet([float, ...])\nC++: void AdaptivelySample0Facet(double *v1)\n\nThis will adaptively subdivide the tetrahedron (3-facet),\ntriangle (2-facet), or edge (1-facet) until the subdivision\nalgorithm returns false for every edge or the maximum recursion\ndepth is reached.\n\nUse SetMaximumNumberOfSubdivisions to change the maximum\nrecursion depth.\n\nThe AdaptivelySample0Facet method is provided as a convenience.\nObviously, there is no way to adaptively subdivide a vertex.\nInstead the input vertex is passed unchanged to the output via a\ncall to the registered VertexProcessorFunction callback.\n\nWarning:\n\nThis assumes that you have called SetSubdivisionAlgorithm(),\nSetEdgeCallback(), SetTriangleCallback(), and\nSetTetrahedronCallback() with valid values!\n"},
  {(char*)"ResetCounts", PyvtkStreamingTessellator_ResetCounts, METH_VARARGS,
   (char*)"V.ResetCounts()\nC++: void ResetCounts()\n\nReset/access the histogram of subdivision cases encountered. The\nhistogram may be used to examine coverage during testing as well\nas characterizing the tessellation algorithm's performance. You\nshould call ResetCounts() once, at the beginning of a stream of\ntetrahedra. It must be called before AdaptivelySample3Facet() to\nprevent uninitialized memory reads.\n\nThese functions have no effect (and return 0) when\nPARAVIEW_DEBUG_TESSELLATOR has not been defined. By default,\nPARAVIEW_DEBUG_TESSELLATOR is not defined, and your code will be\nfast and efficient. Really!\n"},
  {(char*)"GetCaseCount", PyvtkStreamingTessellator_GetCaseCount, METH_VARARGS,
   (char*)"V.GetCaseCount(int) -> int\nC++: vtkIdType GetCaseCount(int c)\n\nReset/access the histogram of subdivision cases encountered. The\nhistogram may be used to examine coverage during testing as well\nas characterizing the tessellation algorithm's performance. You\nshould call ResetCounts() once, at the beginning of a stream of\ntetrahedra. It must be called before AdaptivelySample3Facet() to\nprevent uninitialized memory reads.\n\nThese functions have no effect (and return 0) when\nPARAVIEW_DEBUG_TESSELLATOR has not been defined. By default,\nPARAVIEW_DEBUG_TESSELLATOR is not defined, and your code will be\nfast and efficient. Really!\n"},
  {(char*)"GetSubcaseCount", PyvtkStreamingTessellator_GetSubcaseCount, METH_VARARGS,
   (char*)"V.GetSubcaseCount(int, int) -> int\nC++: vtkIdType GetSubcaseCount(int casenum, int sub)\n\nReset/access the histogram of subdivision cases encountered. The\nhistogram may be used to examine coverage during testing as well\nas characterizing the tessellation algorithm's performance. You\nshould call ResetCounts() once, at the beginning of a stream of\ntetrahedra. It must be called before AdaptivelySample3Facet() to\nprevent uninitialized memory reads.\n\nThese functions have no effect (and return 0) when\nPARAVIEW_DEBUG_TESSELLATOR has not been defined. By default,\nPARAVIEW_DEBUG_TESSELLATOR is not defined, and your code will be\nfast and efficient. Really!\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStreamingTessellator_StaticNew()
{
  return vtkStreamingTessellator::New();
}

PyObject *PyVTKClass_vtkStreamingTessellatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStreamingTessellator_StaticNew,
    PyvtkStreamingTessellator_Methods,
    "vtkStreamingTessellator", modulename,
    NULL, NULL,
    PyvtkStreamingTessellator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(vtkStreamingTessellator::MaxFieldSize);
    if (o)
      {
      PyDict_SetItemString(d, (char *)"MaxFieldSize", o);
      Py_DECREF(o);
      }
    }

  return cls;
}

const char **PyvtkStreamingTessellator_Doc()
{
  static const char *docstring[] = {
    "vtkStreamingTessellator - An algorithm that refines an initial\nsimplicial tessellation using edge subdivision\n\n",
    "Superclass: vtkObject\n\n",
    "This class is a simple algorithm that takes a single starting simplex\n-- a tetrahedron, triangle, or line segment -- and calls a function\nyou pass it with (possibly many times) tetrahedra, triangles, or\nlines adaptively sampled from the one you specified. It uses an\nalgorithm you specify to control the level of adaptivity.\n\nThis class does not create vtkUnstructuredGrid output because it is\nintend",
    "ed for use in mappers as well as filters. Instead, it calls the\nregistered function with simplices as they are created.\n\nThe subdivision algorithm should change the vertex coordinates (it\nmust change both geometric and, if desired, parametric coordinates)\nof the midpoint. These coordinates need not be changed unless the\nEvaluateEdge() member returns true. The vtkStreamingTessellator\nitself has no ",
    "way of creating a more accurate midpoint vertex.\n\nHere's how to use this class:\n- Call AdaptivelySample1Facet, AdaptivelySample2Facet, or\n  AdaptivelySample3Facet, with an edge, triangle, or tetrahedron you\n  want tessellated.\n- The adaptive tessellator classifies each edge by passing the\n  midpoint values to the vtkEdgeSubdivisionCriterion.\n- After each edge is classified, the tessellator subdivi",
    "des edges as\n  required until the subdivision criterion is satisfied or the\n  maximum subdivision depth has been reached.\n- Edges, triangles, or tetrahedra connecting the vertices generated\n  by the subdivision algorithm are processed by calling the\n  user-defined callback functions (set with SetTetrahedronCallback(),\nSetTriangleCallback(), or SetEdgeCallback() ).\n\nWarning:\n\nNote that the vertices",
    " passed to AdaptivelySample3Facet,\nAdaptivelySample2Facet, or AdaptivelySample1Facet must be at least 6,\n5, or 4 entries long, respectively! This is because the\n&lt;r,s,t&gt;, &lt;r,s&gt;, or &lt;r&gt; parametric coordinates of\nthe vertices are maintained as the facet is subdivided. This\ninformation is often required by the subdivision algorithm in order\nto compute an error metric. You may change ",
    "the number of parametric\ncoordinates associated with each vertex using\nvtkStreamingTessellator::SetEmbeddingDimension().\n\nInterpolating Field Values:\n\nIf you wish, you may also use vtkStreamingTessellator to interpolate\nfield values at newly created vertices. Interpolated field values are\nstored just beyond the parametric coordinates associated with a\nvertex. They will always be double values; it ",
    "does not make sense to\ninterpolate a boolean or string value and your output and subdivision\nsubroutines may always cast to a float or use floor() to truncate an\ninterpolated value to an integer.\n\nSee Also:\n\nvtkEdgeSubdivisionCriterion\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStreamingTessellator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStreamingTessellatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStreamingTessellator", o) != 0)
    {
    Py_DECREF(o);
    }

}

