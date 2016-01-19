// python wrapper for vtkTextureMapToCylinder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTextureMapToCylinder.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTextureMapToCylinder(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTextureMapToCylinderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkTextureMapToCylinder_Doc();


static PyObject *
PyvtkTextureMapToCylinder_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTextureMapToCylinder::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextureMapToCylinder::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextureMapToCylinder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextureMapToCylinder::NewInstance());

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
PyvtkTextureMapToCylinder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTextureMapToCylinder *tempr = vtkTextureMapToCylinder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTextureMapToCylinder::SetPoint1(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToCylinder_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPoint1(temp0);
      }
    else
      {
      op->vtkTextureMapToCylinder::SetPoint1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToCylinder_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTextureMapToCylinder_SetPoint1_s1(self, args);
    case 1:
      return PyvtkTextureMapToCylinder_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkTextureMapToCylinder_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkTextureMapToCylinder::GetPoint1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTextureMapToCylinder::SetPoint2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToCylinder_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPoint2(temp0);
      }
    else
      {
      op->vtkTextureMapToCylinder::SetPoint2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToCylinder_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTextureMapToCylinder_SetPoint2_s1(self, args);
    case 1:
      return PyvtkTextureMapToCylinder_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkTextureMapToCylinder_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkTextureMapToCylinder::GetPoint2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_SetAutomaticCylinderGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticCylinderGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutomaticCylinderGeneration(temp0);
      }
    else
      {
      op->vtkTextureMapToCylinder::SetAutomaticCylinderGeneration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_GetAutomaticCylinderGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticCylinderGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticCylinderGeneration() :
      op->vtkTextureMapToCylinder::GetAutomaticCylinderGeneration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_AutomaticCylinderGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticCylinderGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticCylinderGenerationOn();
      }
    else
      {
      op->vtkTextureMapToCylinder::AutomaticCylinderGenerationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_AutomaticCylinderGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticCylinderGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticCylinderGenerationOff();
      }
    else
      {
      op->vtkTextureMapToCylinder::AutomaticCylinderGenerationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_SetPreventSeam(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreventSeam");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreventSeam(temp0);
      }
    else
      {
      op->vtkTextureMapToCylinder::SetPreventSeam(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_GetPreventSeam(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreventSeam");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPreventSeam() :
      op->vtkTextureMapToCylinder::GetPreventSeam());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_PreventSeamOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreventSeamOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreventSeamOn();
      }
    else
      {
      op->vtkTextureMapToCylinder::PreventSeamOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_PreventSeamOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreventSeamOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreventSeamOff();
      }
    else
      {
      op->vtkTextureMapToCylinder::PreventSeamOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTextureMapToCylinder_Methods[] = {
  {(char*)"GetClassName", PyvtkTextureMapToCylinder_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextureMapToCylinder_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextureMapToCylinder_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTextureMapToCylinder\nC++: vtkTextureMapToCylinder *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTextureMapToCylinder_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextureMapToCylinder\nC++: vtkTextureMapToCylinder *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPoint1", PyvtkTextureMapToCylinder_SetPoint1, METH_VARARGS,
   (char*)"V.SetPoint1(float, float, float)\nC++: void SetPoint1(double, double, double)\nV.SetPoint1((float, float, float))\nC++: void SetPoint1(double a[3])\n\n"},
  {(char*)"GetPoint1", PyvtkTextureMapToCylinder_GetPoint1, METH_VARARGS,
   (char*)"V.GetPoint1() -> (float, float, float)\nC++: double *GetPoint1()\n\nSpecify the first point defining the cylinder axis,\n"},
  {(char*)"SetPoint2", PyvtkTextureMapToCylinder_SetPoint2, METH_VARARGS,
   (char*)"V.SetPoint2(float, float, float)\nC++: void SetPoint2(double, double, double)\nV.SetPoint2((float, float, float))\nC++: void SetPoint2(double a[3])\n\n"},
  {(char*)"GetPoint2", PyvtkTextureMapToCylinder_GetPoint2, METH_VARARGS,
   (char*)"V.GetPoint2() -> (float, float, float)\nC++: double *GetPoint2()\n\nSpecify the second point defining the cylinder axis,\n"},
  {(char*)"SetAutomaticCylinderGeneration", PyvtkTextureMapToCylinder_SetAutomaticCylinderGeneration, METH_VARARGS,
   (char*)"V.SetAutomaticCylinderGeneration(int)\nC++: void SetAutomaticCylinderGeneration(int a)\n\nTurn on/off automatic cylinder generation. This means it\nautomatically finds the cylinder center and axis.\n"},
  {(char*)"GetAutomaticCylinderGeneration", PyvtkTextureMapToCylinder_GetAutomaticCylinderGeneration, METH_VARARGS,
   (char*)"V.GetAutomaticCylinderGeneration() -> int\nC++: int GetAutomaticCylinderGeneration()\n\nTurn on/off automatic cylinder generation. This means it\nautomatically finds the cylinder center and axis.\n"},
  {(char*)"AutomaticCylinderGenerationOn", PyvtkTextureMapToCylinder_AutomaticCylinderGenerationOn, METH_VARARGS,
   (char*)"V.AutomaticCylinderGenerationOn()\nC++: void AutomaticCylinderGenerationOn()\n\nTurn on/off automatic cylinder generation. This means it\nautomatically finds the cylinder center and axis.\n"},
  {(char*)"AutomaticCylinderGenerationOff", PyvtkTextureMapToCylinder_AutomaticCylinderGenerationOff, METH_VARARGS,
   (char*)"V.AutomaticCylinderGenerationOff()\nC++: void AutomaticCylinderGenerationOff()\n\nTurn on/off automatic cylinder generation. This means it\nautomatically finds the cylinder center and axis.\n"},
  {(char*)"SetPreventSeam", PyvtkTextureMapToCylinder_SetPreventSeam, METH_VARARGS,
   (char*)"V.SetPreventSeam(int)\nC++: void SetPreventSeam(int a)\n\nControl how the texture coordinates are generated. If PreventSeam\nis set, the s-coordinate ranges from 0->1 and 1->0 corresponding\nto the angle variation from 0->180 and 180->0. Otherwise, the\ns-coordinate ranges from 0->1 from 0->360 degrees.\n"},
  {(char*)"GetPreventSeam", PyvtkTextureMapToCylinder_GetPreventSeam, METH_VARARGS,
   (char*)"V.GetPreventSeam() -> int\nC++: int GetPreventSeam()\n\nControl how the texture coordinates are generated. If PreventSeam\nis set, the s-coordinate ranges from 0->1 and 1->0 corresponding\nto the angle variation from 0->180 and 180->0. Otherwise, the\ns-coordinate ranges from 0->1 from 0->360 degrees.\n"},
  {(char*)"PreventSeamOn", PyvtkTextureMapToCylinder_PreventSeamOn, METH_VARARGS,
   (char*)"V.PreventSeamOn()\nC++: void PreventSeamOn()\n\nControl how the texture coordinates are generated. If PreventSeam\nis set, the s-coordinate ranges from 0->1 and 1->0 corresponding\nto the angle variation from 0->180 and 180->0. Otherwise, the\ns-coordinate ranges from 0->1 from 0->360 degrees.\n"},
  {(char*)"PreventSeamOff", PyvtkTextureMapToCylinder_PreventSeamOff, METH_VARARGS,
   (char*)"V.PreventSeamOff()\nC++: void PreventSeamOff()\n\nControl how the texture coordinates are generated. If PreventSeam\nis set, the s-coordinate ranges from 0->1 and 1->0 corresponding\nto the angle variation from 0->180 and 180->0. Otherwise, the\ns-coordinate ranges from 0->1 from 0->360 degrees.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextureMapToCylinder_StaticNew()
{
  return vtkTextureMapToCylinder::New();
}

PyObject *PyVTKClass_vtkTextureMapToCylinderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextureMapToCylinder_StaticNew,
    PyvtkTextureMapToCylinder_Methods,
    "vtkTextureMapToCylinder", modulename,
    NULL, NULL,
    PyvtkTextureMapToCylinder_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTextureMapToCylinder_Doc()
{
  static const char *docstring[] = {
    "vtkTextureMapToCylinder - generate texture coordinates by mapping\npoints to cylinder\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkTextureMapToCylinder is a filter that generates 2D texture\ncoordinates by mapping input dataset points onto a cylinder. The\ncylinder can either be user specified or generated automatically.\n(The cylinder is generated automatically by computing the axis of the\ncylinder.)  Note that the generated texture coordinates for the\ns-coordinate ranges from (0-1) (corresponding to angle of 0->360\naround a",
    "xis), while the mapping of the t-coordinate is controlled by\nthe projection of points along the axis.\n\nTo specify a cylinder manually, you must provide two points that\ndefine the axis of the cylinder. The length of the axis will affect\nthe t-coordinates.\n\nA special ivar controls how the s-coordinate is generated. If\nPreventSeam is set to true, the s-texture varies from 0->1 and then\n1->0 (correspo",
    "nding to angles of 0->180 and 180->360).\n\nCaveats:\n\nSince the resulting texture s-coordinate will lie between (0,1), and\nthe origin of the texture coordinates is not user-controllable, you\nmay want to use the class vtkTransformTexture to linearly scale and\nshift the origin of the texture coordinates.\n\nSee Also:\n\nvtkTextureMapToPlane vtkTextureMapToSphere vtkTransformTexture\nvtkThresholdTextureCoor",
    "ds\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextureMapToCylinder(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextureMapToCylinderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextureMapToCylinder", o) != 0)
    {
    Py_DECREF(o);
    }

}

