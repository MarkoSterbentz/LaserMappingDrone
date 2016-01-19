// python wrapper for vtkExtractStructuredGridHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractStructuredGridHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractStructuredGridHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractStructuredGridHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkExtractStructuredGridHelper_Doc();


static PyObject *
PyvtkExtractStructuredGridHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractStructuredGridHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractStructuredGridHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractStructuredGridHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractStructuredGridHelper::NewInstance());

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
PyvtkExtractStructuredGridHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractStructuredGridHelper *tempr = vtkExtractStructuredGridHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetOutputWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetOutputWholeExtent() :
      op->vtkExtractStructuredGridHelper::GetOutputWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  int temp2[3];
  int save2[3];
  const int size2 = 3;
  bool temp3 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->Initialize(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkExtractStructuredGridHelper::Initialize(temp0, temp1, temp2, temp3);
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

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_IsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsValid() :
      op->vtkExtractStructuredGridHelper::IsValid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSize(temp0) :
      op->vtkExtractStructuredGridHelper::GetSize(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetMappedIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMappedIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetMappedIndex(temp0, temp1) :
      op->vtkExtractStructuredGridHelper::GetMappedIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetMappedIndexFromExtentValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMappedIndexFromExtentValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetMappedIndexFromExtentValue(temp0, temp1) :
      op->vtkExtractStructuredGridHelper::GetMappedIndexFromExtentValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetMappedExtentValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMappedExtentValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetMappedExtentValue(temp0, temp1) :
      op->vtkExtractStructuredGridHelper::GetMappedExtentValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetMappedExtentValueFromIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMappedExtentValueFromIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetMappedExtentValueFromIndex(temp0, temp1) :
      op->vtkExtractStructuredGridHelper::GetMappedExtentValueFromIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_ComputeBeginAndEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBeginAndEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  int temp2[3];
  int save2[3];
  const int size2 = 3;
  int temp3[3];
  int save3[3];
  const int size3 = 3;
  PyObject *result = NULL;

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
      op->ComputeBeginAndEnd(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkExtractStructuredGridHelper::ComputeBeginAndEnd(temp0, temp1, temp2, temp3);
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

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_CopyPointsAndPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyPointsAndPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  vtkPointData *temp2 = NULL;
  vtkPoints *temp3 = NULL;
  vtkPointData *temp4 = NULL;
  vtkPoints *temp5 = NULL;
  int temp6[3];
  int save6[3];
  const int size6 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPointData") &&
      ap.GetVTKObject(temp3, "vtkPoints") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPoints") &&
      ap.GetArray(temp6, size6))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp6, save6, size6);

    if (ap.IsBound())
      {
      op->CopyPointsAndPointData(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkExtractStructuredGridHelper::CopyPointsAndPointData(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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

    if (ap.ArrayHasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(6, temp6, size6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_CopyCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  vtkCellData *temp2 = NULL;
  vtkCellData *temp3 = NULL;
  int temp4[3];
  int save4[3];
  const int size4 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkCellData") &&
      ap.GetVTKObject(temp3, "vtkCellData") &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      op->CopyCellData(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkExtractStructuredGridHelper::CopyCellData(temp0, temp1, temp2, temp3, temp4);
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

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetPartitionedVOI(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPartitionedVOI");

  int temp0[6];
  const int size0 = 6;
  int temp1[6];
  const int size1 = 6;
  int temp2[3];
  const int size2 = 3;
  bool temp3 = false;
  int temp4[6];
  int save4[6];
  const int size4 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp4, save4, size4);

    vtkExtractStructuredGridHelper::GetPartitionedVOI(temp0, temp1, temp2, temp3, temp4);

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

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetPartitionedOutputExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPartitionedOutputExtent");

  int temp0[6];
  const int size0 = 6;
  int temp1[6];
  const int size1 = 6;
  int temp2[6];
  const int size2 = 6;
  int temp3[3];
  const int size3 = 3;
  bool temp4 = false;
  int temp5[6];
  int save5[6];
  const int size5 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp5, save5, size5);

    vtkExtractStructuredGridHelper::GetPartitionedOutputExtent(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractStructuredGridHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractStructuredGridHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractStructuredGridHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractStructuredGridHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractStructuredGridHelper\nC++: vtkExtractStructuredGridHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractStructuredGridHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractStructuredGridHelper\nC++: vtkExtractStructuredGridHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutputWholeExtent", PyvtkExtractStructuredGridHelper_GetOutputWholeExtent, METH_VARARGS,
   (char*)"V.GetOutputWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetOutputWholeExtent()\n\n"},
  {(char*)"Initialize", PyvtkExtractStructuredGridHelper_Initialize, METH_VARARGS,
   (char*)"V.Initialize([int, int, int, int, int, int], [int, int, int, int,\n    int, int], [int, int, int], bool)\nC++: void Initialize(int voi[6], int wholeExt[6],\n    int sampleRate[3], bool includeBoundary)\n\n\\brief Initializes the index map.\n\\param voi the extent of the volume of interest\n\\param wholeExt the whole extent of the domain\n\\param smapleRate the sampling rate\n\\param includeBoundary indicates whether to include the boundary\n    or not.\n"},
  {(char*)"IsValid", PyvtkExtractStructuredGridHelper_IsValid, METH_VARARGS,
   (char*)"V.IsValid() -> bool\nC++: bool IsValid()\n\nReturns true if the helper is properly initialized.\n"},
  {(char*)"GetSize", PyvtkExtractStructuredGridHelper_GetSize, METH_VARARGS,
   (char*)"V.GetSize(int) -> int\nC++: int GetSize(const int dim)\n\n\\brief Returns the size along a given dimension\n\\param dim the dimension in query\n\\pre dim >= 0 && dim < 3\n"},
  {(char*)"GetMappedIndex", PyvtkExtractStructuredGridHelper_GetMappedIndex, METH_VARARGS,
   (char*)"V.GetMappedIndex(int, int) -> int\nC++: int GetMappedIndex(int dim, int outIdx)\n\n\\brief Given a dimension and output index, return the\n    corresponding\nextent index. This method should be used to convert array\nindices, such as the coordinate arrays for rectilinear grids.\n\\param dim the data dimension\n\\param outIdx The output index along the given dimension.\n\\pre dim >= 0 && dim < 3\n\\pre outIdx >= 0 && outIdx < this->GetSize( dim )\n\\return The input extent index along the given dimension.\\sa\n    GetMappedExtentValue\\sa GetMappedExtentValueFromIndex\n"},
  {(char*)"GetMappedIndexFromExtentValue", PyvtkExtractStructuredGridHelper_GetMappedIndexFromExtentValue, METH_VARARGS,
   (char*)"V.GetMappedIndexFromExtentValue(int, int) -> int\nC++: int GetMappedIndexFromExtentValue(int dim, int outExtVal)\n\n\\brief Given a dimension and output extent value, return the\n    corresponding\ninput extent index. This method should be used to compute extent\nindices from extent values.\n\\param dim the data dimension\n\\param outExtVal The output extent value along the given\n    dimension.\n\\pre dim >= 0 && dim < 3\n\\pre outExtVal >= this->GetOutputWholeExtent()[2*dim] &&\n     outExtVal <= this->GetOutputWholeExtent()[2*dim+1]\n\\return The input extent index along the given dimension.\\sa\n    GetMappedExtentValue\\sa GetMappedExtentValueFromIndex\n"},
  {(char*)"GetMappedExtentValue", PyvtkExtractStructuredGridHelper_GetMappedExtentValue, METH_VARARGS,
   (char*)"V.GetMappedExtentValue(int, int) -> int\nC++: int GetMappedExtentValue(int dim, int outExtVal)\n\n\\brief Given a dimension and output extent value, return the\n    corresponding\ninput extent value. This method should be used to convert extent\nvalues.\n\\param dim the data dimension.\n\\param outExtVal The output extent value along the given\n    dimension.\n\\pre dim >= 0 && dim < 3\n\\pre outExtVal >= this->GetOutputWholeExtent()[2*dim] &&\n     outExtVal <= this->GetOutputWholeExtent()[2*dim+1]\n\\return The input extent value along the given dimension.\\sa\n    GetMappedIndex\\sa GetMappedExtentValueFromIndex\n"},
  {(char*)"GetMappedExtentValueFromIndex", PyvtkExtractStructuredGridHelper_GetMappedExtentValueFromIndex, METH_VARARGS,
   (char*)"V.GetMappedExtentValueFromIndex(int, int) -> int\nC++: int GetMappedExtentValueFromIndex(int dim, int outIdx)\n\n\\brief Given a dimension and output extent index, return the\n    corresponding\ninput extent value. This method should be used to compute extent\nvalues from extent indices.\n\\param dim the data dimension.\n\\param outIdx The output index along the given dimension.\n\\pre dim >= 0 && dim < 3\n\\pre outIdx >= 0 && outIdx < this->GetSize( dim )\n\\return The input extent value along the given dimension.\\sa\n    GetMappedIndex\\sa GetMappedExtentValue\n"},
  {(char*)"ComputeBeginAndEnd", PyvtkExtractStructuredGridHelper_ComputeBeginAndEnd, METH_VARARGS,
   (char*)"V.ComputeBeginAndEnd([int, int, int, int, int, int], [int, int,\n    int, int, int, int], [int, int, int], [int, int, int])\nC++: void ComputeBeginAndEnd(int inExt[6], int voi[6],\n    int begin[3], int end[3])\n\n\\brief Returns the begin & end extent that intersects with the\n    VOI\n\\param inExt the input extent\n\\param voi the volume of interest\n\\param begin the begin extent\n\\param end the end extent\n"},
  {(char*)"CopyPointsAndPointData", PyvtkExtractStructuredGridHelper_CopyPointsAndPointData, METH_VARARGS,
   (char*)"V.CopyPointsAndPointData([int, int, int, int, int, int], [int,\n    int, int, int, int, int], vtkPointData, vtkPoints,\n    vtkPointData, vtkPoints, [int, int, int])\nC++: void CopyPointsAndPointData(int inExt[6], int outExt[6],\n    vtkPointData *pd, vtkPoints *inpnts, vtkPointData *outPD,\n    vtkPoints *outpnts, int sampleRate[3]=NULL)\n\n\\brief Copies the points & point data to the output.\n\\param inExt the input grid extent.\n\\param outExt the output grid extent.\n\\param pd pointer to the input point data.\n\\param inpnts pointer to the input points, or NULL if uniform\n    grid.\n\\param outPD point to the output point data.\n\\param outpnts pointer to the output points, or NULL if uniform\n    grid.\n\\param sampleRate The sample rate in each dimension. Optional,\n    used to\noptimizing copy operations if present.\n\\pre pd != NULL.\n\\pre outPD != NULL.\n"},
  {(char*)"CopyCellData", PyvtkExtractStructuredGridHelper_CopyCellData, METH_VARARGS,
   (char*)"V.CopyCellData([int, int, int, int, int, int], [int, int, int,\n    int, int, int], vtkCellData, vtkCellData, [int, int, int])\nC++: void CopyCellData(int inExt[6], int outExt[6],\n    vtkCellData *cd, vtkCellData *outCD, int sampleRate[3]=NULL)\n\n\\brief Copies the cell data to the output.\n\\param inExt the input grid extent.\n\\param outExt the output grid extent.\n\\param cd the input cell data.\n\\param outCD the output cell data.\n\\param sampleRate The sample rate in each dimension. Optional,\n    used to\noptimizing copy operations if present.\n\\pre cd != NULL.\n\\pre outCD != NULL.\n"},
  {(char*)"GetPartitionedVOI", PyvtkExtractStructuredGridHelper_GetPartitionedVOI, METH_VARARGS | METH_STATIC,
   (char*)"V.GetPartitionedVOI((int, int, int, int, int, int), (int, int,\n    int, int, int, int), (int, int, int), bool, [int, int, int,\n    int, int, int])\nC++: static void GetPartitionedVOI(const int globalVOI[6],\n    const int partitionedExtent[6], const int sampleRate[3],\n    bool includeBoundary, int partitionedVOI[6])\n\nCalculate the VOI for a partitioned structured dataset. This\nmethod setspartitionedVOI to the VOI that extracts as much of\nthepartitionedExtent as possible while considering the globalVOI,\nthesampleRate, and the boundary conditions.\n\\param globalVOI The full VOI for the entire distributed dataset.\n\\param partitionedExtent Extent of the process's partitioned\n    input data.\n\\param sampleRate The sampling rate in each dimension.\n\\param includeBoundary Whether or not to include the boundary of\n    the VOI,\neven if it doesn't fit the spacing.\n\\param partitionedVOI The extent of the process's partitioned\n    dataset that\nshould be extracted by a serial extraction filter.\n"},
  {(char*)"GetPartitionedOutputExtent", PyvtkExtractStructuredGridHelper_GetPartitionedOutputExtent, METH_VARARGS | METH_STATIC,
   (char*)"V.GetPartitionedOutputExtent((int, int, int, int, int, int), (int,\n     int, int, int, int, int), (int, int, int, int, int, int), (\n    int, int, int), bool, [int, int, int, int, int, int])\nC++: static void GetPartitionedOutputExtent(\n    const int globalVOI[6], const int partitionedVOI[6],\n    const int outputWholeExtent[6], const int sampleRate[3],\n    bool includeBoundary, int partitionedOutputExtent[6])\n\nCalculate the partitioned output extent for a partitioned\nstructured dataset. This method sets partitionedOutputExtent to\nthe correct extent of an extracted dataset, such that it properly\nfits with the other partitioned pieces while considering the\nglobalVOI, thesampleRate, and the boundary conditions.\n\\param globalVOI The full VOI for the entire distributed dataset.\n\\param partitionedVOI The VOI used in the serial extraction.\n\\param outputWholeExtent The output extent of the full dataset.\n\\param sampleRate The sampling rate in each dimension.\n\\param includeBoundary Whether or not to include the boundary of\n    the VOI,\neven if it doesn't fit the spacing.\n\\param partitionedOutputExtent The correct output extent of the\n    extracted\ndataset.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractStructuredGridHelper_StaticNew()
{
  return vtkExtractStructuredGridHelper::New();
}

PyObject *PyVTKClass_vtkExtractStructuredGridHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractStructuredGridHelper_StaticNew,
    PyvtkExtractStructuredGridHelper_Methods,
    "vtkExtractStructuredGridHelper", modulename,
    NULL, NULL,
    PyvtkExtractStructuredGridHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkExtractStructuredGridHelper_Doc()
{
  static const char *docstring[] = {
    "vtkExtractStructuredGridHelper - helper for extracting/sub-sampling\n\n",
    "Superclass: vtkObject\n\n",
    "vtkExtractStructuredGridHelper provides some common functionality\nthat is used by filters that extract and sub-sample structured data.\nSpecifically, it provides functionality for calculating the mapping\nfrom the output extent of each process to the input extent.\n\nSee Also:\n\nvtkExtractGrid vtkExtractVOI vtkExtractRectilinearGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractStructuredGridHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractStructuredGridHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractStructuredGridHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

