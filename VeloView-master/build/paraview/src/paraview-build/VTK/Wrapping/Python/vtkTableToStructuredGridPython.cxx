// python wrapper for vtkTableToStructuredGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTableToStructuredGrid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTableToStructuredGrid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTableToStructuredGridNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
#endif

static const char **PyvtkTableToStructuredGrid_Doc();


static PyObject *
PyvtkTableToStructuredGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTableToStructuredGrid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableToStructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTableToStructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableToStructuredGrid::NewInstance());

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
PyvtkTableToStructuredGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTableToStructuredGrid *tempr = vtkTableToStructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

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
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTableToStructuredGrid_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTableToStructuredGrid_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkTableToStructuredGrid_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkTableToStructuredGrid_SetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkTableToStructuredGrid_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkTableToStructuredGrid::GetWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetXColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXColumn(temp0);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetXColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXColumn() :
      op->vtkTableToStructuredGrid::GetXColumn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXComponent(temp0);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetXComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXComponentMinValue() :
      op->vtkTableToStructuredGrid::GetXComponentMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXComponentMaxValue() :
      op->vtkTableToStructuredGrid::GetXComponentMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetXComponent() :
      op->vtkTableToStructuredGrid::GetXComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetYColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYColumn(temp0);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetYColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetYColumn() :
      op->vtkTableToStructuredGrid::GetYColumn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYComponent(temp0);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetYComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYComponentMinValue() :
      op->vtkTableToStructuredGrid::GetYComponentMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYComponentMaxValue() :
      op->vtkTableToStructuredGrid::GetYComponentMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetYComponent() :
      op->vtkTableToStructuredGrid::GetYComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetZColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZColumn(temp0);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetZColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetZColumn() :
      op->vtkTableToStructuredGrid::GetZColumn());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetZComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZComponent(temp0);
      }
    else
      {
      op->vtkTableToStructuredGrid::SetZComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZComponentMinValue() :
      op->vtkTableToStructuredGrid::GetZComponentMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZComponentMaxValue() :
      op->vtkTableToStructuredGrid::GetZComponentMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetZComponent() :
      op->vtkTableToStructuredGrid::GetZComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTableToStructuredGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkTableToStructuredGrid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTableToStructuredGrid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTableToStructuredGrid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTableToStructuredGrid\nC++: vtkTableToStructuredGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTableToStructuredGrid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTableToStructuredGrid\nC++: vtkTableToStructuredGrid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWholeExtent", PyvtkTableToStructuredGrid_SetWholeExtent, METH_VARARGS,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {(char*)"GetWholeExtent", PyvtkTableToStructuredGrid_GetWholeExtent, METH_VARARGS,
   (char*)"V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {(char*)"SetXColumn", PyvtkTableToStructuredGrid_SetXColumn, METH_VARARGS,
   (char*)"V.SetXColumn(string)\nC++: void SetXColumn(char *)\n\nSet the name of the column to use as the X coordinate for the\npoints.\n"},
  {(char*)"GetXColumn", PyvtkTableToStructuredGrid_GetXColumn, METH_VARARGS,
   (char*)"V.GetXColumn() -> string\nC++: char *GetXColumn()\n\nSet the name of the column to use as the X coordinate for the\npoints.\n"},
  {(char*)"SetXComponent", PyvtkTableToStructuredGrid_SetXComponent, METH_VARARGS,
   (char*)"V.SetXComponent(int)\nC++: void SetXComponent(int)\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {(char*)"GetXComponentMinValue", PyvtkTableToStructuredGrid_GetXComponentMinValue, METH_VARARGS,
   (char*)"V.GetXComponentMinValue() -> int\nC++: int GetXComponentMinValue()\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {(char*)"GetXComponentMaxValue", PyvtkTableToStructuredGrid_GetXComponentMaxValue, METH_VARARGS,
   (char*)"V.GetXComponentMaxValue() -> int\nC++: int GetXComponentMaxValue()\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {(char*)"GetXComponent", PyvtkTableToStructuredGrid_GetXComponent, METH_VARARGS,
   (char*)"V.GetXComponent() -> int\nC++: int GetXComponent()\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {(char*)"SetYColumn", PyvtkTableToStructuredGrid_SetYColumn, METH_VARARGS,
   (char*)"V.SetYColumn(string)\nC++: void SetYColumn(char *)\n\nSet the name of the column to use as the Y coordinate for the\npoints. Default is 0.\n"},
  {(char*)"GetYColumn", PyvtkTableToStructuredGrid_GetYColumn, METH_VARARGS,
   (char*)"V.GetYColumn() -> string\nC++: char *GetYColumn()\n\nSet the name of the column to use as the Y coordinate for the\npoints. Default is 0.\n"},
  {(char*)"SetYComponent", PyvtkTableToStructuredGrid_SetYComponent, METH_VARARGS,
   (char*)"V.SetYComponent(int)\nC++: void SetYComponent(int)\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetYComponentMinValue", PyvtkTableToStructuredGrid_GetYComponentMinValue, METH_VARARGS,
   (char*)"V.GetYComponentMinValue() -> int\nC++: int GetYComponentMinValue()\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetYComponentMaxValue", PyvtkTableToStructuredGrid_GetYComponentMaxValue, METH_VARARGS,
   (char*)"V.GetYComponentMaxValue() -> int\nC++: int GetYComponentMaxValue()\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetYComponent", PyvtkTableToStructuredGrid_GetYComponent, METH_VARARGS,
   (char*)"V.GetYComponent() -> int\nC++: int GetYComponent()\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"SetZColumn", PyvtkTableToStructuredGrid_SetZColumn, METH_VARARGS,
   (char*)"V.SetZColumn(string)\nC++: void SetZColumn(char *)\n\nSet the name of the column to use as the Z coordinate for the\npoints. Default is 0.\n"},
  {(char*)"GetZColumn", PyvtkTableToStructuredGrid_GetZColumn, METH_VARARGS,
   (char*)"V.GetZColumn() -> string\nC++: char *GetZColumn()\n\nSet the name of the column to use as the Z coordinate for the\npoints. Default is 0.\n"},
  {(char*)"SetZComponent", PyvtkTableToStructuredGrid_SetZComponent, METH_VARARGS,
   (char*)"V.SetZComponent(int)\nC++: void SetZComponent(int)\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetZComponentMinValue", PyvtkTableToStructuredGrid_GetZComponentMinValue, METH_VARARGS,
   (char*)"V.GetZComponentMinValue() -> int\nC++: int GetZComponentMinValue()\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetZComponentMaxValue", PyvtkTableToStructuredGrid_GetZComponentMaxValue, METH_VARARGS,
   (char*)"V.GetZComponentMaxValue() -> int\nC++: int GetZComponentMaxValue()\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {(char*)"GetZComponent", PyvtkTableToStructuredGrid_GetZComponent, METH_VARARGS,
   (char*)"V.GetZComponent() -> int\nC++: int GetZComponent()\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTableToStructuredGrid_StaticNew()
{
  return vtkTableToStructuredGrid::New();
}

PyObject *PyVTKClass_vtkTableToStructuredGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTableToStructuredGrid_StaticNew,
    PyvtkTableToStructuredGrid_Methods,
    "vtkTableToStructuredGrid", modulename,
    NULL, NULL,
    PyvtkTableToStructuredGrid_Doc(),
    PyVTKClass_vtkStructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTableToStructuredGrid_Doc()
{
  static const char *docstring[] = {
    "vtkTableToStructuredGrid - converts vtkTable to a vtkStructuredGrid.\n\n",
    "Superclass: vtkStructuredGridAlgorithm\n\n",
    "vtkTableToStructuredGrid is a filter that converts an input vtkTable\nto a vtkStructuredGrid. It provides API to select columns to use as\npoints in the output structured grid. The specified dimensions of the\noutput (specified using SetWholeExtent()) must match the number of\nrows in the input table.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTableToStructuredGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableToStructuredGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTableToStructuredGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

