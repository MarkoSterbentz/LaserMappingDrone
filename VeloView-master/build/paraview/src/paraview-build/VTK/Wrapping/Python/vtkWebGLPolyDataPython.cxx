// python wrapper for vtkWebGLPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkWebGLPolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWebGLPolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWebGLPolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWebGLObjectNew
extern "C" { PyObject *PyVTKClass_vtkWebGLObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkWebGLObjectNew
#endif

static const char **PyvtkWebGLPolyData_Doc();


static PyObject *
PyvtkWebGLPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWebGLPolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebGLPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWebGLPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebGLPolyData::NewInstance());

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
PyvtkWebGLPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWebGLPolyData *tempr = vtkWebGLPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GenerateBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateBinaryData();
      }
    else
      {
      op->vtkWebGLPolyData::GenerateBinaryData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryData(temp0) :
      op->vtkWebGLPolyData::GetBinaryData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetBinarySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinarySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBinarySize(temp0) :
      op->vtkWebGLPolyData::GetBinarySize(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetNumberOfParts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfParts() :
      op->vtkWebGLPolyData::GetNumberOfParts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkTriangleFilter *temp0 = NULL;
  vtkActor *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTriangleFilter") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->GetPoints(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWebGLPolyData::GetPoints(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetLinesFromPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesFromPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkMapper *temp0 = NULL;
  vtkActor *temp1 = NULL;
  int temp2;
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
      ap.GetVTKObject(temp0, "vtkMapper") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->GetLinesFromPolygon(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkWebGLPolyData::GetLinesFromPolygon(temp0, temp1, temp2, temp3);
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
PyvtkWebGLPolyData_GetLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkTriangleFilter *temp0 = NULL;
  vtkActor *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTriangleFilter") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->GetLines(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWebGLPolyData::GetLines(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetColorsFromPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorsFromPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  unsigned char *temp0 = NULL;
  unsigned char *save0 = NULL;
  unsigned char small0[8];
  int size0 = 0;
  vtkPolyData *temp1 = NULL;
  vtkActor *temp2 = NULL;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned char[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetVTKObject(temp2, "vtkActor"))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetColorsFromPolyData(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWebGLPolyData::GetColorsFromPolyData(temp0, temp1, temp2);
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
PyvtkWebGLPolyData_GetPolygonsFromPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonsFromPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkTriangleFilter *temp0 = NULL;
  vtkActor *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTriangleFilter") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->GetPolygonsFromPointData(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWebGLPolyData::GetPolygonsFromPointData(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetPolygonsFromCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonsFromCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkTriangleFilter *temp0 = NULL;
  vtkActor *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTriangleFilter") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->GetPolygonsFromCellData(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWebGLPolyData::GetPolygonsFromCellData(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetColorsFromPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorsFromPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  unsigned char *temp0 = NULL;
  unsigned char *save0 = NULL;
  unsigned char small0[8];
  int size0 = 0;
  vtkPointData *temp1 = NULL;
  vtkPolyData *temp2 = NULL;
  vtkActor *temp3 = NULL;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned char[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkPointData") &&
      ap.GetVTKObject(temp2, "vtkPolyData") &&
      ap.GetVTKObject(temp3, "vtkActor"))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetColorsFromPointData(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkWebGLPolyData::GetColorsFromPointData(temp0, temp1, temp2, temp3);
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
PyvtkWebGLPolyData_SetMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  int temp1;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  int temp3;
  float *temp4 = NULL;
  float *save4 = NULL;
  float small4[8];
  int size4 = 0;
  unsigned char *temp5 = NULL;
  unsigned char *save5 = NULL;
  unsigned char small5[8];
  int size5 = 0;
  float *temp6 = NULL;
  float *save6 = NULL;
  float small6[8];
  int size6 = 0;
  int temp7;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new int[2*size2];
      }
    save2 = &temp2[size2];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new float[2*size4];
      }
    save4 = &temp4[size4];
    size5 = ap.GetArgSize(5);
    temp5 = small5;
    if (size5 > 4)
      {
      temp5 = new unsigned char[2*size5];
      }
    save5 = &temp5[size5];
    size6 = ap.GetArgSize(6);
    temp6 = small6;
    if (size6 > 4)
      {
      temp6 = new float[2*size6];
      }
    save6 = &temp6[size6];
    }

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetValue(temp7))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);
    ap.SaveArray(temp6, save6, size6);

    if (ap.IsBound())
      {
      op->SetMesh(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkWebGLPolyData::SetMesh(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }
  if (temp6 && temp6 != small6)
    {
    delete [] temp6;
    }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_SetLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  int temp1;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  int temp3;
  unsigned char *temp4 = NULL;
  unsigned char *save4 = NULL;
  unsigned char small4[8];
  int size4 = 0;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new int[2*size2];
      }
    save2 = &temp2[size2];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new unsigned char[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      op->SetLine(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkWebGLPolyData::SetLine(temp0, temp1, temp2, temp3, temp4, temp5);
      }

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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
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
PyvtkWebGLPolyData_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  int temp1;
  unsigned char *temp2 = NULL;
  unsigned char *save2 = NULL;
  unsigned char small2[8];
  int size2 = 0;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new unsigned char[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->SetPoints(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkWebGLPolyData::SetPoints(temp0, temp1, temp2, temp3);
      }

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
      result = ap.BuildNone();
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
PyvtkWebGLPolyData_SetTransformationMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetTransformationMatrix(temp0);
      }
    else
      {
      op->vtkWebGLPolyData::SetTransformationMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkWebGLPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkWebGLPolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWebGLPolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWebGLPolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWebGLPolyData\nC++: vtkWebGLPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWebGLPolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWebGLPolyData\nC++: vtkWebGLPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GenerateBinaryData", PyvtkWebGLPolyData_GenerateBinaryData, METH_VARARGS,
   (char*)"V.GenerateBinaryData()\nC++: void GenerateBinaryData()\n\n"},
  {(char*)"GetBinaryData", PyvtkWebGLPolyData_GetBinaryData, METH_VARARGS,
   (char*)"V.GetBinaryData(int) -> (int, ...)\nC++: unsigned char *GetBinaryData(int part)\n\n"},
  {(char*)"GetBinarySize", PyvtkWebGLPolyData_GetBinarySize, METH_VARARGS,
   (char*)"V.GetBinarySize(int) -> int\nC++: int GetBinarySize(int part)\n\n"},
  {(char*)"GetNumberOfParts", PyvtkWebGLPolyData_GetNumberOfParts, METH_VARARGS,
   (char*)"V.GetNumberOfParts() -> int\nC++: int GetNumberOfParts()\n\n"},
  {(char*)"GetPoints", PyvtkWebGLPolyData_GetPoints, METH_VARARGS,
   (char*)"V.GetPoints(vtkTriangleFilter, vtkActor, int)\nC++: void GetPoints(vtkTriangleFilter *polydata, vtkActor *actor,\n    int maxSize)\n\n"},
  {(char*)"GetLinesFromPolygon", PyvtkWebGLPolyData_GetLinesFromPolygon, METH_VARARGS,
   (char*)"V.GetLinesFromPolygon(vtkMapper, vtkActor, int, [float, ...])\nC++: void GetLinesFromPolygon(vtkMapper *mapper, vtkActor *actor,\n    int lineMaxSize, double *edgeColor)\n\n"},
  {(char*)"GetLines", PyvtkWebGLPolyData_GetLines, METH_VARARGS,
   (char*)"V.GetLines(vtkTriangleFilter, vtkActor, int)\nC++: void GetLines(vtkTriangleFilter *polydata, vtkActor *actor,\n    int lineMaxSize)\n\n"},
  {(char*)"GetColorsFromPolyData", PyvtkWebGLPolyData_GetColorsFromPolyData, METH_VARARGS,
   (char*)"V.GetColorsFromPolyData([int, ...], vtkPolyData, vtkActor)\nC++: void GetColorsFromPolyData(unsigned char *color,\n    vtkPolyData *polydata, vtkActor *actor)\n\n"},
  {(char*)"GetPolygonsFromPointData", PyvtkWebGLPolyData_GetPolygonsFromPointData, METH_VARARGS,
   (char*)"V.GetPolygonsFromPointData(vtkTriangleFilter, vtkActor, int)\nC++: void GetPolygonsFromPointData(vtkTriangleFilter *polydata,\n    vtkActor *actor, int maxSize)\n\n"},
  {(char*)"GetPolygonsFromCellData", PyvtkWebGLPolyData_GetPolygonsFromCellData, METH_VARARGS,
   (char*)"V.GetPolygonsFromCellData(vtkTriangleFilter, vtkActor, int)\nC++: void GetPolygonsFromCellData(vtkTriangleFilter *polydata,\n    vtkActor *actor, int maxSize)\n\n"},
  {(char*)"GetColorsFromPointData", PyvtkWebGLPolyData_GetColorsFromPointData, METH_VARARGS,
   (char*)"V.GetColorsFromPointData([int, ...], vtkPointData, vtkPolyData,\n    vtkActor)\nC++: void GetColorsFromPointData(unsigned char *color,\n    vtkPointData *pointdata, vtkPolyData *polydata,\n    vtkActor *actor)\n\n"},
  {(char*)"SetMesh", PyvtkWebGLPolyData_SetMesh, METH_VARARGS,
   (char*)"V.SetMesh([float, ...], int, [int, ...], int, [float, ...], [int,\n    ...], [float, ...], int)\nC++: void SetMesh(float *_vertices, int _numberOfVertices,\n    int *_index, int _numberOfIndexes, float *_normals,\n    unsigned char *_colors, float *_tcoords, int maxSize)\n\n"},
  {(char*)"SetLine", PyvtkWebGLPolyData_SetLine, METH_VARARGS,
   (char*)"V.SetLine([float, ...], int, [int, ...], int, [int, ...], int)\nC++: void SetLine(float *_points, int _numberOfPoints,\n    int *_index, int _numberOfIndex, unsigned char *_colors,\n    int maxSize)\n\n"},
  {(char*)"SetPoints", PyvtkWebGLPolyData_SetPoints, METH_VARARGS,
   (char*)"V.SetPoints([float, ...], int, [int, ...], int)\nC++: void SetPoints(float *points, int numberOfPoints,\n    unsigned char *colors, int maxSize)\n\n"},
  {(char*)"SetTransformationMatrix", PyvtkWebGLPolyData_SetTransformationMatrix, METH_VARARGS,
   (char*)"V.SetTransformationMatrix(vtkMatrix4x4)\nC++: void SetTransformationMatrix(vtkMatrix4x4 *m)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWebGLPolyData_StaticNew()
{
  return vtkWebGLPolyData::New();
}

PyObject *PyVTKClass_vtkWebGLPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWebGLPolyData_StaticNew,
    PyvtkWebGLPolyData_Methods,
    "vtkWebGLPolyData", modulename,
    NULL, NULL,
    PyvtkWebGLPolyData_Doc(),
    PyVTKClass_vtkWebGLObjectNew(modulename));
  return cls;
}

const char **PyvtkWebGLPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkWebGLPolyData\n\n",
    "Superclass: vtkWebGLObject\n\n",
    "PolyData representation for WebGL.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWebGLPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWebGLPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWebGLPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

