// python wrapper for vtkRegularPolygonSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRegularPolygonSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRegularPolygonSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRegularPolygonSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkRegularPolygonSource_Doc();


static PyObject *
PyvtkRegularPolygonSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRegularPolygonSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRegularPolygonSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRegularPolygonSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRegularPolygonSource::NewInstance());

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
PyvtkRegularPolygonSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRegularPolygonSource *tempr = vtkRegularPolygonSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_SetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSides(temp0);
      }
    else
      {
      op->vtkRegularPolygonSource::SetNumberOfSides(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GetNumberOfSidesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSidesMinValue() :
      op->vtkRegularPolygonSource::GetNumberOfSidesMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GetNumberOfSidesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSidesMaxValue() :
      op->vtkRegularPolygonSource::GetNumberOfSidesMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSides() :
      op->vtkRegularPolygonSource::GetNumberOfSides());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRegularPolygonSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRegularPolygonSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkRegularPolygonSource::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRegularPolygonSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkRegularPolygonSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkRegularPolygonSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkRegularPolygonSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkRegularPolygonSource::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetNormal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRegularPolygonSource::SetNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRegularPolygonSource_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNormal(temp0);
      }
    else
      {
      op->vtkRegularPolygonSource::SetNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRegularPolygonSource_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkRegularPolygonSource_SetNormal_s1(self, args);
    case 1:
      return PyvtkRegularPolygonSource_SetNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return NULL;
}



static PyObject *
PyvtkRegularPolygonSource_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkRegularPolygonSource::GetNormal());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkRegularPolygonSource::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkRegularPolygonSource::GetRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_SetGeneratePolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePolygon(temp0);
      }
    else
      {
      op->vtkRegularPolygonSource::SetGeneratePolygon(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GetGeneratePolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePolygon() :
      op->vtkRegularPolygonSource::GetGeneratePolygon());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GeneratePolygonOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolygonOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePolygonOn();
      }
    else
      {
      op->vtkRegularPolygonSource::GeneratePolygonOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GeneratePolygonOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolygonOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePolygonOff();
      }
    else
      {
      op->vtkRegularPolygonSource::GeneratePolygonOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_SetGeneratePolyline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePolyline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePolyline(temp0);
      }
    else
      {
      op->vtkRegularPolygonSource::SetGeneratePolyline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GetGeneratePolyline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePolyline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePolyline() :
      op->vtkRegularPolygonSource::GetGeneratePolyline());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GeneratePolylineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolylineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePolylineOn();
      }
    else
      {
      op->vtkRegularPolygonSource::GeneratePolylineOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GeneratePolylineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolylineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePolylineOff();
      }
    else
      {
      op->vtkRegularPolygonSource::GeneratePolylineOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPointsPrecision(temp0);
      }
    else
      {
      op->vtkRegularPolygonSource::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRegularPolygonSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRegularPolygonSource *op = static_cast<vtkRegularPolygonSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkRegularPolygonSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRegularPolygonSource_Methods[] = {
  {(char*)"GetClassName", PyvtkRegularPolygonSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instantiation, obtaining type and printing\ninstance values.\n"},
  {(char*)"IsA", PyvtkRegularPolygonSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instantiation, obtaining type and printing\ninstance values.\n"},
  {(char*)"NewInstance", PyvtkRegularPolygonSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRegularPolygonSource\nC++: vtkRegularPolygonSource *NewInstance()\n\nStandard methods for instantiation, obtaining type and printing\ninstance values.\n"},
  {(char*)"SafeDownCast", PyvtkRegularPolygonSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRegularPolygonSource\nC++: vtkRegularPolygonSource *SafeDownCast(vtkObject* o)\n\nStandard methods for instantiation, obtaining type and printing\ninstance values.\n"},
  {(char*)"SetNumberOfSides", PyvtkRegularPolygonSource_SetNumberOfSides, METH_VARARGS,
   (char*)"V.SetNumberOfSides(int)\nC++: void SetNumberOfSides(int)\n\nSet/Get the number of sides of the polygon. By default, the\nnumber of sides is set to six.\n"},
  {(char*)"GetNumberOfSidesMinValue", PyvtkRegularPolygonSource_GetNumberOfSidesMinValue, METH_VARARGS,
   (char*)"V.GetNumberOfSidesMinValue() -> int\nC++: int GetNumberOfSidesMinValue()\n\nSet/Get the number of sides of the polygon. By default, the\nnumber of sides is set to six.\n"},
  {(char*)"GetNumberOfSidesMaxValue", PyvtkRegularPolygonSource_GetNumberOfSidesMaxValue, METH_VARARGS,
   (char*)"V.GetNumberOfSidesMaxValue() -> int\nC++: int GetNumberOfSidesMaxValue()\n\nSet/Get the number of sides of the polygon. By default, the\nnumber of sides is set to six.\n"},
  {(char*)"GetNumberOfSides", PyvtkRegularPolygonSource_GetNumberOfSides, METH_VARARGS,
   (char*)"V.GetNumberOfSides() -> int\nC++: int GetNumberOfSides()\n\nSet/Get the number of sides of the polygon. By default, the\nnumber of sides is set to six.\n"},
  {(char*)"SetCenter", PyvtkRegularPolygonSource_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkRegularPolygonSource_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet/Get the center of the polygon. By default, the center is set\nat the origin (0,0,0).\n"},
  {(char*)"SetNormal", PyvtkRegularPolygonSource_SetNormal, METH_VARARGS,
   (char*)"V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {(char*)"GetNormal", PyvtkRegularPolygonSource_GetNormal, METH_VARARGS,
   (char*)"V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\nSet/Get the normal to the polygon. The ordering of the polygon\nwill be counter-clockwise around the normal (i.e., using the\nright-hand rule). By default, the normal is set to (0,0,1).\n"},
  {(char*)"SetRadius", PyvtkRegularPolygonSource_SetRadius, METH_VARARGS,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double a)\n\nSet/Get the radius of the polygon. By default, the radius is set\nto 0.5.\n"},
  {(char*)"GetRadius", PyvtkRegularPolygonSource_GetRadius, METH_VARARGS,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet/Get the radius of the polygon. By default, the radius is set\nto 0.5.\n"},
  {(char*)"SetGeneratePolygon", PyvtkRegularPolygonSource_SetGeneratePolygon, METH_VARARGS,
   (char*)"V.SetGeneratePolygon(int)\nC++: void SetGeneratePolygon(int a)\n\nControl whether a polygon is produced. By default,\nGeneratePolygon is enabled.\n"},
  {(char*)"GetGeneratePolygon", PyvtkRegularPolygonSource_GetGeneratePolygon, METH_VARARGS,
   (char*)"V.GetGeneratePolygon() -> int\nC++: int GetGeneratePolygon()\n\nControl whether a polygon is produced. By default,\nGeneratePolygon is enabled.\n"},
  {(char*)"GeneratePolygonOn", PyvtkRegularPolygonSource_GeneratePolygonOn, METH_VARARGS,
   (char*)"V.GeneratePolygonOn()\nC++: void GeneratePolygonOn()\n\nControl whether a polygon is produced. By default,\nGeneratePolygon is enabled.\n"},
  {(char*)"GeneratePolygonOff", PyvtkRegularPolygonSource_GeneratePolygonOff, METH_VARARGS,
   (char*)"V.GeneratePolygonOff()\nC++: void GeneratePolygonOff()\n\nControl whether a polygon is produced. By default,\nGeneratePolygon is enabled.\n"},
  {(char*)"SetGeneratePolyline", PyvtkRegularPolygonSource_SetGeneratePolyline, METH_VARARGS,
   (char*)"V.SetGeneratePolyline(int)\nC++: void SetGeneratePolyline(int a)\n\nControl whether a polyline is produced. By default,\nGeneratePolyline is enabled.\n"},
  {(char*)"GetGeneratePolyline", PyvtkRegularPolygonSource_GetGeneratePolyline, METH_VARARGS,
   (char*)"V.GetGeneratePolyline() -> int\nC++: int GetGeneratePolyline()\n\nControl whether a polyline is produced. By default,\nGeneratePolyline is enabled.\n"},
  {(char*)"GeneratePolylineOn", PyvtkRegularPolygonSource_GeneratePolylineOn, METH_VARARGS,
   (char*)"V.GeneratePolylineOn()\nC++: void GeneratePolylineOn()\n\nControl whether a polyline is produced. By default,\nGeneratePolyline is enabled.\n"},
  {(char*)"GeneratePolylineOff", PyvtkRegularPolygonSource_GeneratePolylineOff, METH_VARARGS,
   (char*)"V.GeneratePolylineOff()\nC++: void GeneratePolylineOff()\n\nControl whether a polyline is produced. By default,\nGeneratePolyline is enabled.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkRegularPolygonSource_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkRegularPolygonSource_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRegularPolygonSource_StaticNew()
{
  return vtkRegularPolygonSource::New();
}

PyObject *PyVTKClass_vtkRegularPolygonSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRegularPolygonSource_StaticNew,
    PyvtkRegularPolygonSource_Methods,
    "vtkRegularPolygonSource", modulename,
    NULL, NULL,
    PyvtkRegularPolygonSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRegularPolygonSource_Doc()
{
  static const char *docstring[] = {
    "vtkRegularPolygonSource - create a regular, n-sided polygon and/or\npolyline\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkRegularPolygonSource is a source object that creates a single\nn-sided polygon and/or polyline. The polygon is centered at a\nspecified point, orthogonal to a specified normal, and with a\ncircumscribing radius set by the user. The user can also specify the\nnumber of sides of the polygon ranging from [3,N].\n\nThis object can be used for seeding streamlines or defining regions\nfor clipping/cutting.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRegularPolygonSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRegularPolygonSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRegularPolygonSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

