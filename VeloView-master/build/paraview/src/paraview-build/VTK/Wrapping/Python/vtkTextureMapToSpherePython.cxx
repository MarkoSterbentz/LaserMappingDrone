// python wrapper for vtkTextureMapToSphere
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTextureMapToSphere.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTextureMapToSphere(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTextureMapToSphereNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkTextureMapToSphere_Doc();


static PyObject *
PyvtkTextureMapToSphere_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTextureMapToSphere::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextureMapToSphere::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextureMapToSphere *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextureMapToSphere::NewInstance());

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
PyvtkTextureMapToSphere_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTextureMapToSphere *tempr = vtkTextureMapToSphere::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

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
      op->vtkTextureMapToSphere::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToSphere_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

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
      op->vtkTextureMapToSphere::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToSphere_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTextureMapToSphere_SetCenter_s1(self, args);
    case 1:
      return PyvtkTextureMapToSphere_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkTextureMapToSphere_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkTextureMapToSphere::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_SetAutomaticSphereGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticSphereGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutomaticSphereGeneration(temp0);
      }
    else
      {
      op->vtkTextureMapToSphere::SetAutomaticSphereGeneration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_GetAutomaticSphereGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticSphereGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticSphereGeneration() :
      op->vtkTextureMapToSphere::GetAutomaticSphereGeneration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_AutomaticSphereGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticSphereGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticSphereGenerationOn();
      }
    else
      {
      op->vtkTextureMapToSphere::AutomaticSphereGenerationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_AutomaticSphereGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticSphereGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticSphereGenerationOff();
      }
    else
      {
      op->vtkTextureMapToSphere::AutomaticSphereGenerationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_SetPreventSeam(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreventSeam");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

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
      op->vtkTextureMapToSphere::SetPreventSeam(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_GetPreventSeam(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreventSeam");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPreventSeam() :
      op->vtkTextureMapToSphere::GetPreventSeam());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_PreventSeamOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreventSeamOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreventSeamOn();
      }
    else
      {
      op->vtkTextureMapToSphere::PreventSeamOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToSphere_PreventSeamOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreventSeamOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToSphere *op = static_cast<vtkTextureMapToSphere *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreventSeamOff();
      }
    else
      {
      op->vtkTextureMapToSphere::PreventSeamOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTextureMapToSphere_Methods[] = {
  {(char*)"GetClassName", PyvtkTextureMapToSphere_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextureMapToSphere_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextureMapToSphere_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTextureMapToSphere\nC++: vtkTextureMapToSphere *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTextureMapToSphere_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextureMapToSphere\nC++: vtkTextureMapToSphere *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCenter", PyvtkTextureMapToSphere_SetCenter, METH_VARARGS,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkTextureMapToSphere_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSpecify a point defining the center of the sphere.\n"},
  {(char*)"SetAutomaticSphereGeneration", PyvtkTextureMapToSphere_SetAutomaticSphereGeneration, METH_VARARGS,
   (char*)"V.SetAutomaticSphereGeneration(int)\nC++: void SetAutomaticSphereGeneration(int a)\n\nTurn on/off automatic sphere generation. This means it\nautomatically finds the sphere center.\n"},
  {(char*)"GetAutomaticSphereGeneration", PyvtkTextureMapToSphere_GetAutomaticSphereGeneration, METH_VARARGS,
   (char*)"V.GetAutomaticSphereGeneration() -> int\nC++: int GetAutomaticSphereGeneration()\n\nTurn on/off automatic sphere generation. This means it\nautomatically finds the sphere center.\n"},
  {(char*)"AutomaticSphereGenerationOn", PyvtkTextureMapToSphere_AutomaticSphereGenerationOn, METH_VARARGS,
   (char*)"V.AutomaticSphereGenerationOn()\nC++: void AutomaticSphereGenerationOn()\n\nTurn on/off automatic sphere generation. This means it\nautomatically finds the sphere center.\n"},
  {(char*)"AutomaticSphereGenerationOff", PyvtkTextureMapToSphere_AutomaticSphereGenerationOff, METH_VARARGS,
   (char*)"V.AutomaticSphereGenerationOff()\nC++: void AutomaticSphereGenerationOff()\n\nTurn on/off automatic sphere generation. This means it\nautomatically finds the sphere center.\n"},
  {(char*)"SetPreventSeam", PyvtkTextureMapToSphere_SetPreventSeam, METH_VARARGS,
   (char*)"V.SetPreventSeam(int)\nC++: void SetPreventSeam(int a)\n\nControl how the texture coordinates are generated. If PreventSeam\nis set, the s-coordinate ranges from 0->1 and 1->0 corresponding\nto the theta angle variation between 0->180 and 180->0 degrees.\nOtherwise, the s-coordinate ranges from 0->1 between 0->360\ndegrees.\n"},
  {(char*)"GetPreventSeam", PyvtkTextureMapToSphere_GetPreventSeam, METH_VARARGS,
   (char*)"V.GetPreventSeam() -> int\nC++: int GetPreventSeam()\n\nControl how the texture coordinates are generated. If PreventSeam\nis set, the s-coordinate ranges from 0->1 and 1->0 corresponding\nto the theta angle variation between 0->180 and 180->0 degrees.\nOtherwise, the s-coordinate ranges from 0->1 between 0->360\ndegrees.\n"},
  {(char*)"PreventSeamOn", PyvtkTextureMapToSphere_PreventSeamOn, METH_VARARGS,
   (char*)"V.PreventSeamOn()\nC++: void PreventSeamOn()\n\nControl how the texture coordinates are generated. If PreventSeam\nis set, the s-coordinate ranges from 0->1 and 1->0 corresponding\nto the theta angle variation between 0->180 and 180->0 degrees.\nOtherwise, the s-coordinate ranges from 0->1 between 0->360\ndegrees.\n"},
  {(char*)"PreventSeamOff", PyvtkTextureMapToSphere_PreventSeamOff, METH_VARARGS,
   (char*)"V.PreventSeamOff()\nC++: void PreventSeamOff()\n\nControl how the texture coordinates are generated. If PreventSeam\nis set, the s-coordinate ranges from 0->1 and 1->0 corresponding\nto the theta angle variation between 0->180 and 180->0 degrees.\nOtherwise, the s-coordinate ranges from 0->1 between 0->360\ndegrees.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextureMapToSphere_StaticNew()
{
  return vtkTextureMapToSphere::New();
}

PyObject *PyVTKClass_vtkTextureMapToSphereNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextureMapToSphere_StaticNew,
    PyvtkTextureMapToSphere_Methods,
    "vtkTextureMapToSphere", modulename,
    NULL, NULL,
    PyvtkTextureMapToSphere_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTextureMapToSphere_Doc()
{
  static const char *docstring[] = {
    "vtkTextureMapToSphere - generate texture coordinates by mapping\npoints to sphere\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkTextureMapToSphere is a filter that generates 2D texture\ncoordinates by mapping input dataset points onto a sphere. The sphere\ncan either be user specified or generated automatically. (The sphere\nis generated automatically by computing the center (i.e., averaged\ncoordinates) of the sphere.)  Note that the generated texture\ncoordinates range between (0,1). The s-coordinate lies in the angular\ndi",
    "rection around the z-axis, measured counter-clockwise from the\nx-axis. The t-coordinate lies in the angular direction measured down\nfrom the north pole towards the south pole.\n\nA special ivar controls how the s-coordinate is generated. If\nPreventSeam is set to true, the s-texture varies from 0->1 and then\n1->0 (corresponding to angles of 0->180 and 180->360).\n\nCaveats:\n\nThe resulting texture coord",
    "inates will lie between (0,1), and the\ntexture coordinates are determined with respect to the modeler's\nx-y-z coordinate system. Use the class vtkTransformTextureCoords to\nlinearly scale and shift the origin of the texture coordinates (if\nnecessary).\n\nSee Also:\n\nvtkTextureMapToPlane vtkTextureMapToCylinder vtkTransformTexture\nvtkThresholdTextureCoords\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextureMapToSphere(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextureMapToSphereNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextureMapToSphere", o) != 0)
    {
    Py_DECREF(o);
    }

}

