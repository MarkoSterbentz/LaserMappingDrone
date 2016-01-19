// python wrapper for vtkOutlineSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOutlineSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOutlineSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOutlineSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkOutlineSource_Doc();


static PyObject *
PyvtkOutlineSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOutlineSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOutlineSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOutlineSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOutlineSource::NewInstance());

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
PyvtkOutlineSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOutlineSource *tempr = vtkOutlineSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineSource_SetBoxType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBoxType(temp0);
      }
    else
      {
      op->vtkOutlineSource::SetBoxType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineSource_GetBoxType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBoxType() :
      op->vtkOutlineSource::GetBoxType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineSource_SetBoxTypeToAxisAligned(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxTypeToAxisAligned");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBoxTypeToAxisAligned();
      }
    else
      {
      op->vtkOutlineSource::SetBoxTypeToAxisAligned();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineSource_SetBoxTypeToOriented(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxTypeToOriented");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBoxTypeToOriented();
      }
    else
      {
      op->vtkOutlineSource::SetBoxTypeToOriented();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineSource_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkOutlineSource::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkOutlineSource_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkOutlineSource::SetBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkOutlineSource_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkOutlineSource_SetBounds_s1(self, args);
    case 1:
      return PyvtkOutlineSource_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkOutlineSource_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkOutlineSource::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineSource_SetCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  double temp0[24];
  const int size0 = 24;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCorners(temp0);
      }
    else
      {
      op->vtkOutlineSource::SetCorners(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineSource_GetCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  int sizer = 24;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCorners() :
      op->vtkOutlineSource::GetCorners());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineSource_SetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateFaces(temp0);
      }
    else
      {
      op->vtkOutlineSource::SetGenerateFaces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineSource_GenerateFacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFacesOn();
      }
    else
      {
      op->vtkOutlineSource::GenerateFacesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineSource_GenerateFacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFacesOff();
      }
    else
      {
      op->vtkOutlineSource::GenerateFacesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineSource_GetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateFaces() :
      op->vtkOutlineSource::GetGenerateFaces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

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
      op->vtkOutlineSource::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineSource *op = static_cast<vtkOutlineSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkOutlineSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOutlineSource_Methods[] = {
  {(char*)"GetClassName", PyvtkOutlineSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOutlineSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOutlineSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOutlineSource\nC++: vtkOutlineSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOutlineSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOutlineSource\nC++: vtkOutlineSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetBoxType", PyvtkOutlineSource_SetBoxType, METH_VARARGS,
   (char*)"V.SetBoxType(int)\nC++: void SetBoxType(int a)\n\nSet box type to AxisAligned (default) or Oriented. Use the method\nSetBounds() with AxisAligned mode, and SetCorners() with Oriented\nmode.\n"},
  {(char*)"GetBoxType", PyvtkOutlineSource_GetBoxType, METH_VARARGS,
   (char*)"V.GetBoxType() -> int\nC++: int GetBoxType()\n\nSet box type to AxisAligned (default) or Oriented. Use the method\nSetBounds() with AxisAligned mode, and SetCorners() with Oriented\nmode.\n"},
  {(char*)"SetBoxTypeToAxisAligned", PyvtkOutlineSource_SetBoxTypeToAxisAligned, METH_VARARGS,
   (char*)"V.SetBoxTypeToAxisAligned()\nC++: void SetBoxTypeToAxisAligned()\n\nSet box type to AxisAligned (default) or Oriented. Use the method\nSetBounds() with AxisAligned mode, and SetCorners() with Oriented\nmode.\n"},
  {(char*)"SetBoxTypeToOriented", PyvtkOutlineSource_SetBoxTypeToOriented, METH_VARARGS,
   (char*)"V.SetBoxTypeToOriented()\nC++: void SetBoxTypeToOriented()\n\nSet box type to AxisAligned (default) or Oriented. Use the method\nSetBounds() with AxisAligned mode, and SetCorners() with Oriented\nmode.\n"},
  {(char*)"SetBounds", PyvtkOutlineSource_SetBounds, METH_VARARGS,
   (char*)"V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {(char*)"GetBounds", PyvtkOutlineSource_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\nSpecify the bounds of the box to be used in Axis Aligned mode.\n"},
  {(char*)"SetCorners", PyvtkOutlineSource_SetCorners, METH_VARARGS,
   (char*)"V.SetCorners((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float))\nC++: void SetCorners(double a[24])\n\nSpecify the corners of the outline when in Oriented mode, the\nvalues are supplied as 8*3 double values The correct corner\nordering is using {x,y,z} convention for the unit cube as\nfollows:\n{0,0,0},{1,0,0},{0,1,0},{1,1,0},{0,0,1},{1,0,1},{0,1,1},{1,1,1}.\n"},
  {(char*)"GetCorners", PyvtkOutlineSource_GetCorners, METH_VARARGS,
   (char*)"V.GetCorners() -> (float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float)\nC++: double *GetCorners()\n\nSpecify the corners of the outline when in Oriented mode, the\nvalues are supplied as 8*3 double values The correct corner\nordering is using {x,y,z} convention for the unit cube as\nfollows:\n{0,0,0},{1,0,0},{0,1,0},{1,1,0},{0,0,1},{1,0,1},{0,1,1},{1,1,1}.\n"},
  {(char*)"SetGenerateFaces", PyvtkOutlineSource_SetGenerateFaces, METH_VARARGS,
   (char*)"V.SetGenerateFaces(int)\nC++: void SetGenerateFaces(int a)\n\nGenerate solid faces for the box. This is off by default.\n"},
  {(char*)"GenerateFacesOn", PyvtkOutlineSource_GenerateFacesOn, METH_VARARGS,
   (char*)"V.GenerateFacesOn()\nC++: void GenerateFacesOn()\n\nGenerate solid faces for the box. This is off by default.\n"},
  {(char*)"GenerateFacesOff", PyvtkOutlineSource_GenerateFacesOff, METH_VARARGS,
   (char*)"V.GenerateFacesOff()\nC++: void GenerateFacesOff()\n\nGenerate solid faces for the box. This is off by default.\n"},
  {(char*)"GetGenerateFaces", PyvtkOutlineSource_GetGenerateFaces, METH_VARARGS,
   (char*)"V.GetGenerateFaces() -> int\nC++: int GetGenerateFaces()\n\nGenerate solid faces for the box. This is off by default.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkOutlineSource_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkOutlineSource_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOutlineSource_StaticNew()
{
  return vtkOutlineSource::New();
}

PyObject *PyVTKClass_vtkOutlineSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOutlineSource_StaticNew,
    PyvtkOutlineSource_Methods,
    "vtkOutlineSource", modulename,
    NULL, NULL,
    PyvtkOutlineSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkOutlineSource_Doc()
{
  static const char *docstring[] = {
    "vtkOutlineSource - create wireframe outline around bounding box\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkOutlineSource creates a wireframe outline around a user-specified\nbounding box.  The outline may be created aligned with the {x,y,z}\naxis - in which case it is defined by the 6 bounds\n{xmin,xmax,ymin,ymax,zmin,zmax} via SetBounds(). Alternatively, the\nbox may be arbitrarily aligned, in which case it should be set via\nthe SetCorners() member.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOutlineSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOutlineSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOutlineSource", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 2; c++)
    {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_BOX_TYPE_AXIS_ALIGNED", 0 },
        { "VTK_BOX_TYPE_ORIENTED", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

