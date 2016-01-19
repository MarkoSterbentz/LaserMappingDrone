// python wrapper for vtkChartMatrix
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkVector.h"
#include "vtkChartMatrix.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkChartMatrix(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkChartMatrixNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractContextItemNew
extern "C" { PyObject *PyVTKClass_vtkAbstractContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractContextItemNew
#endif

static const char **PyvtkChartMatrix_Doc();


static PyObject *
PyvtkChartMatrix_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkChartMatrix::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartMatrix_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartMatrix::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartMatrix_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartMatrix *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartMatrix::NewInstance());

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
PyvtkChartMatrix_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkChartMatrix *tempr = vtkChartMatrix::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartMatrix_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkChartMatrix::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartMatrix_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartMatrix::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
    {
    if (ap.IsBound())
      {
      op->SetSize(*temp0);
      }
    else
      {
      op->vtkChartMatrix::SetSize(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkChartMatrix::GetSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
      }
    }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetBorders(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkChartMatrix::SetBorders(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetBorderLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorderLeft(temp0);
      }
    else
      {
      op->vtkChartMatrix::SetBorderLeft(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetBorderBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorderBottom(temp0);
      }
    else
      {
      op->vtkChartMatrix::SetBorderBottom(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetBorderRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorderRight(temp0);
      }
    else
      {
      op->vtkChartMatrix::SetBorderRight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetBorderTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorderTop(temp0);
      }
    else
      {
      op->vtkChartMatrix::SetBorderTop(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartMatrix_GetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0[4];
  int save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBorders(temp0);
      }
    else
      {
      op->vtkChartMatrix::GetBorders(temp0);
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

  return result;
}


static PyObject *
PyvtkChartMatrix_SetGutter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGutter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    if (ap.IsBound())
      {
      op->SetGutter(*temp0);
      }
    else
      {
      op->vtkChartMatrix::SetGutter(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_SetGutterX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGutterX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGutterX(temp0);
      }
    else
      {
      op->vtkChartMatrix::SetGutterX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetGutterY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGutterY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGutterY(temp0);
      }
    else
      {
      op->vtkChartMatrix::SetGutterY(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartMatrix_GetGutter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGutter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVector2f tempr = (ap.IsBound() ?
      op->GetGutter() :
      op->vtkChartMatrix::GetGutter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  return result;
}


static PyObject *
PyvtkChartMatrix_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Allocate();
      }
    else
      {
      op->vtkChartMatrix::Allocate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkChart *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      ap.GetVTKObject(temp1, "vtkChart"))
    {
    bool tempr = (ap.IsBound() ?
      op->SetChart(*temp0, temp1) :
      op->vtkChartMatrix::SetChart(*temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
    {
    vtkChart *tempr = (ap.IsBound() ?
      op->GetChart(*temp0) :
      op->vtkChartMatrix::GetChart(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_SetChartSpan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartSpan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkVector2i *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2i"))
    {
    bool tempr = (ap.IsBound() ?
      op->SetChartSpan(*temp0, *temp1) :
      op->vtkChartMatrix::SetChartSpan(*temp0, *temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkChartMatrix_GetChartSpan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartSpan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
    {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetChartSpan(*temp0) :
      op->vtkChartMatrix::GetChartSpan(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_GetChartIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetChartIndex(*temp0) :
      op->vtkChartMatrix::GetChartIndex(*temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkChartMatrix_Methods[] = {
  {(char*)"GetClassName", PyvtkChartMatrix_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChartMatrix_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChartMatrix_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkChartMatrix\nC++: vtkChartMatrix *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChartMatrix_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChartMatrix\nC++: vtkChartMatrix *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkChartMatrix_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering.\n"},
  {(char*)"Paint", PyvtkChartMatrix_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the chart matrix.\n"},
  {(char*)"SetSize", PyvtkChartMatrix_SetSize, METH_VARARGS,
   (char*)"V.SetSize(vtkVector2i)\nC++: virtual void SetSize(const vtkVector2i &size)\n\nSet the width and height of the chart matrix. This will cause an\nimmediate resize of the chart matrix, the default size is 0x0 (no\ncharts). No chart objects are created until Allocate is called.\n"},
  {(char*)"GetSize", PyvtkChartMatrix_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> vtkVector2i\nC++: virtual vtkVector2i GetSize()\n\nGet the width and height of the chart matrix.\n"},
  {(char*)"SetBorders", PyvtkChartMatrix_SetBorders, METH_VARARGS,
   (char*)"V.SetBorders(int, int, int, int)\nC++: virtual void SetBorders(int left, int bottom, int right,\n    int top)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart).\n"},
  {(char*)"SetBorderLeft", PyvtkChartMatrix_SetBorderLeft, METH_VARARGS,
   (char*)"V.SetBorderLeft(int)\nC++: void SetBorderLeft(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart).\n"},
  {(char*)"SetBorderBottom", PyvtkChartMatrix_SetBorderBottom, METH_VARARGS,
   (char*)"V.SetBorderBottom(int)\nC++: void SetBorderBottom(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart).\n"},
  {(char*)"SetBorderRight", PyvtkChartMatrix_SetBorderRight, METH_VARARGS,
   (char*)"V.SetBorderRight(int)\nC++: void SetBorderRight(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart).\n"},
  {(char*)"SetBorderTop", PyvtkChartMatrix_SetBorderTop, METH_VARARGS,
   (char*)"V.SetBorderTop(int)\nC++: void SetBorderTop(int value)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart).\n"},
  {(char*)"GetBorders", PyvtkChartMatrix_GetBorders, METH_VARARGS,
   (char*)"V.GetBorders([int, int, int, int])\nC++: virtual void GetBorders(int borders[4])\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart).\n"},
  {(char*)"SetGutter", PyvtkChartMatrix_SetGutter, METH_VARARGS,
   (char*)"V.SetGutter(vtkVector2f)\nC++: virtual void SetGutter(const vtkVector2f &gutter)\n\nSet the gutter that should be left between the charts in the\nmatrix.\n"},
  {(char*)"SetGutterX", PyvtkChartMatrix_SetGutterX, METH_VARARGS,
   (char*)"V.SetGutterX(float)\nC++: void SetGutterX(float value)\n\nSet the gutter that should be left between the charts in the\nmatrix.\n"},
  {(char*)"SetGutterY", PyvtkChartMatrix_SetGutterY, METH_VARARGS,
   (char*)"V.SetGutterY(float)\nC++: void SetGutterY(float value)\n\nSet the gutter that should be left between the charts in the\nmatrix.\n"},
  {(char*)"GetGutter", PyvtkChartMatrix_GetGutter, METH_VARARGS,
   (char*)"V.GetGutter() -> vtkVector2f\nC++: virtual vtkVector2f GetGutter()\n\nGet the gutter that should be left between the charts in the\nmatrix.\n"},
  {(char*)"Allocate", PyvtkChartMatrix_Allocate, METH_VARARGS,
   (char*)"V.Allocate()\nC++: virtual void Allocate()\n\nAllocate the charts, this will cause any null chart to be\nallocated.\n"},
  {(char*)"SetChart", PyvtkChartMatrix_SetChart, METH_VARARGS,
   (char*)"V.SetChart(vtkVector2i, vtkChart) -> bool\nC++: virtual bool SetChart(const vtkVector2i &position,\n    vtkChart *chart)\n\nSet the chart element, note that the chart matrix must be large\nenough to accommodate the element being set. Note that this class\nwill take ownership of the chart object.\n\\return false if the element cannot be set.\n"},
  {(char*)"GetChart", PyvtkChartMatrix_GetChart, METH_VARARGS,
   (char*)"V.GetChart(vtkVector2i) -> vtkChart\nC++: virtual vtkChart *GetChart(const vtkVector2i &position)\n\nGet the specified chart element, if the element does not exist\nNULL will be returned. If the chart element has not yet been\nallocated it will be at this point.\n"},
  {(char*)"SetChartSpan", PyvtkChartMatrix_SetChartSpan, METH_VARARGS,
   (char*)"V.SetChartSpan(vtkVector2i, vtkVector2i) -> bool\nC++: virtual bool SetChartSpan(const vtkVector2i &position,\n    const vtkVector2i &span)\n\nSet the span of a chart in the matrix. This defaults to 1x1, and\ncannot exceed the remaining space in x or y.\n\\return false If the span is not possible.\n"},
  {(char*)"GetChartSpan", PyvtkChartMatrix_GetChartSpan, METH_VARARGS,
   (char*)"V.GetChartSpan(vtkVector2i) -> vtkVector2i\nC++: virtual vtkVector2i GetChartSpan(const vtkVector2i &position)\n\nGet the span of the specified chart.\n"},
  {(char*)"GetChartIndex", PyvtkChartMatrix_GetChartIndex, METH_VARARGS,
   (char*)"V.GetChartIndex(vtkVector2f) -> vtkVector2i\nC++: virtual vtkVector2i GetChartIndex(\n    const vtkVector2f &position)\n\nGet the position of the chart in the matrix at the specified\nlocation. The position should be specified in scene coordinates.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChartMatrix_StaticNew()
{
  return vtkChartMatrix::New();
}

PyObject *PyVTKClass_vtkChartMatrixNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChartMatrix_StaticNew,
    PyvtkChartMatrix_Methods,
    "vtkChartMatrix", modulename,
    NULL, NULL,
    PyvtkChartMatrix_Doc(),
    PyVTKClass_vtkAbstractContextItemNew(modulename));
  return cls;
}

const char **PyvtkChartMatrix_Doc()
{
  static const char *docstring[] = {
    "vtkChartMatrix - container for a matrix of charts.\n\n",
    "Superclass: vtkAbstractContextItem\n\n",
    "This class contains a matrix of charts. These charts will be of type\nvtkChartXY by default, but this can be overridden. The class will\nmanage their layout and object lifetime.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChartMatrix(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChartMatrixNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChartMatrix", o) != 0)
    {
    Py_DECREF(o);
    }

}

