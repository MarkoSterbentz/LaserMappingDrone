// python wrapper for vtkEarthSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEarthSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEarthSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEarthSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkEarthSource_Doc();


static PyObject *
PyvtkEarthSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEarthSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEarthSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEarthSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEarthSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEarthSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEarthSource::NewInstance());

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
PyvtkEarthSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEarthSource *tempr = vtkEarthSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEarthSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

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
      op->vtkEarthSource::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEarthSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkEarthSource::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEarthSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkEarthSource::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEarthSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkEarthSource::GetRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEarthSource_SetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOnRatio(temp0);
      }
    else
      {
      op->vtkEarthSource::SetOnRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEarthSource_GetOnRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMinValue() :
      op->vtkEarthSource::GetOnRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEarthSource_GetOnRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMaxValue() :
      op->vtkEarthSource::GetOnRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEarthSource_GetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOnRatio() :
      op->vtkEarthSource::GetOnRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEarthSource_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutline(temp0);
      }
    else
      {
      op->vtkEarthSource::SetOutline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEarthSource_GetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutline() :
      op->vtkEarthSource::GetOutline());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEarthSource_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineOn();
      }
    else
      {
      op->vtkEarthSource::OutlineOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEarthSource_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEarthSource *op = static_cast<vtkEarthSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineOff();
      }
    else
      {
      op->vtkEarthSource::OutlineOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkEarthSource_Methods[] = {
  {(char*)"GetClassName", PyvtkEarthSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEarthSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEarthSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEarthSource\nC++: vtkEarthSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEarthSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEarthSource\nC++: vtkEarthSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRadius", PyvtkEarthSource_SetRadius, METH_VARARGS,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double)\n\nSet radius of earth.\n"},
  {(char*)"GetRadiusMinValue", PyvtkEarthSource_GetRadiusMinValue, METH_VARARGS,
   (char*)"V.GetRadiusMinValue() -> float\nC++: double GetRadiusMinValue()\n\nSet radius of earth.\n"},
  {(char*)"GetRadiusMaxValue", PyvtkEarthSource_GetRadiusMaxValue, METH_VARARGS,
   (char*)"V.GetRadiusMaxValue() -> float\nC++: double GetRadiusMaxValue()\n\nSet radius of earth.\n"},
  {(char*)"GetRadius", PyvtkEarthSource_GetRadius, METH_VARARGS,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet radius of earth.\n"},
  {(char*)"SetOnRatio", PyvtkEarthSource_SetOnRatio, METH_VARARGS,
   (char*)"V.SetOnRatio(int)\nC++: void SetOnRatio(int)\n\nTurn on every nth entity. This controls how much detail the model\nwill have. The maximum ratio is sixteen. (The smaller OnRatio,\nthe more detail there is.)\n"},
  {(char*)"GetOnRatioMinValue", PyvtkEarthSource_GetOnRatioMinValue, METH_VARARGS,
   (char*)"V.GetOnRatioMinValue() -> int\nC++: int GetOnRatioMinValue()\n\nTurn on every nth entity. This controls how much detail the model\nwill have. The maximum ratio is sixteen. (The smaller OnRatio,\nthe more detail there is.)\n"},
  {(char*)"GetOnRatioMaxValue", PyvtkEarthSource_GetOnRatioMaxValue, METH_VARARGS,
   (char*)"V.GetOnRatioMaxValue() -> int\nC++: int GetOnRatioMaxValue()\n\nTurn on every nth entity. This controls how much detail the model\nwill have. The maximum ratio is sixteen. (The smaller OnRatio,\nthe more detail there is.)\n"},
  {(char*)"GetOnRatio", PyvtkEarthSource_GetOnRatio, METH_VARARGS,
   (char*)"V.GetOnRatio() -> int\nC++: int GetOnRatio()\n\nTurn on every nth entity. This controls how much detail the model\nwill have. The maximum ratio is sixteen. (The smaller OnRatio,\nthe more detail there is.)\n"},
  {(char*)"SetOutline", PyvtkEarthSource_SetOutline, METH_VARARGS,
   (char*)"V.SetOutline(int)\nC++: void SetOutline(int a)\n\nTurn on/off drawing continents as filled polygons or as wireframe\noutlines. Warning: some graphics systems will have trouble with\nthe very large, concave filled polygons. Recommend you use\nOutlienOn (i.e., disable filled polygons) for now.\n"},
  {(char*)"GetOutline", PyvtkEarthSource_GetOutline, METH_VARARGS,
   (char*)"V.GetOutline() -> int\nC++: int GetOutline()\n\nTurn on/off drawing continents as filled polygons or as wireframe\noutlines. Warning: some graphics systems will have trouble with\nthe very large, concave filled polygons. Recommend you use\nOutlienOn (i.e., disable filled polygons) for now.\n"},
  {(char*)"OutlineOn", PyvtkEarthSource_OutlineOn, METH_VARARGS,
   (char*)"V.OutlineOn()\nC++: void OutlineOn()\n\nTurn on/off drawing continents as filled polygons or as wireframe\noutlines. Warning: some graphics systems will have trouble with\nthe very large, concave filled polygons. Recommend you use\nOutlienOn (i.e., disable filled polygons) for now.\n"},
  {(char*)"OutlineOff", PyvtkEarthSource_OutlineOff, METH_VARARGS,
   (char*)"V.OutlineOff()\nC++: void OutlineOff()\n\nTurn on/off drawing continents as filled polygons or as wireframe\noutlines. Warning: some graphics systems will have trouble with\nthe very large, concave filled polygons. Recommend you use\nOutlienOn (i.e., disable filled polygons) for now.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEarthSource_StaticNew()
{
  return vtkEarthSource::New();
}

PyObject *PyVTKClass_vtkEarthSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEarthSource_StaticNew,
    PyvtkEarthSource_Methods,
    "vtkEarthSource", modulename,
    NULL, NULL,
    PyvtkEarthSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkEarthSource_Doc()
{
  static const char *docstring[] = {
    "vtkEarthSource - create the continents of the Earth as a sphere\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkEarthSource creates a spherical rendering of the geographical\nshapes of the major continents of the earth. The OnRatio determines\nhow much of the data is actually used. The radius defines the radius\nof the sphere at which the continents are placed. Obtains data from\nan imbedded array of coordinates.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEarthSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEarthSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEarthSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

