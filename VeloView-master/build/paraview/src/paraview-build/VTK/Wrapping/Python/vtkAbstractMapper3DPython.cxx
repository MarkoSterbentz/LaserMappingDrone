// python wrapper for vtkAbstractMapper3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAbstractMapper3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAbstractMapper3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAbstractMapper3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractMapperNew
extern "C" { PyObject *PyVTKClass_vtkAbstractMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractMapperNew
#endif

static const char **PyvtkAbstractMapper3D_Doc();


static PyObject *
PyvtkAbstractMapper3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAbstractMapper3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractMapper3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractMapper3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractMapper3D::NewInstance());

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
PyvtkAbstractMapper3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAbstractMapper3D *tempr = vtkAbstractMapper3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper3D_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    double *tempr = op->GetBounds();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractMapper3D_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkAbstractMapper3D::GetBounds(temp0);
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
PyvtkAbstractMapper3D_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkAbstractMapper3D_GetBounds_s1(self, args);
    case 1:
      return PyvtkAbstractMapper3D_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkAbstractMapper3D_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkAbstractMapper3D::GetCenter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractMapper3D_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetCenter(temp0);
      }
    else
      {
      op->vtkAbstractMapper3D::GetCenter(temp0);
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
PyvtkAbstractMapper3D_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkAbstractMapper3D_GetCenter_s1(self, args);
    case 1:
      return PyvtkAbstractMapper3D_GetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return NULL;
}



static PyObject *
PyvtkAbstractMapper3D_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLength() :
      op->vtkAbstractMapper3D::GetLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper3D_IsARayCastMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsARayCastMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsARayCastMapper() :
      op->vtkAbstractMapper3D::IsARayCastMapper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper3D_IsARenderIntoImageMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsARenderIntoImageMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsARenderIntoImageMapper() :
      op->vtkAbstractMapper3D::IsARenderIntoImageMapper());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractMapper3D_GetClippingPlaneInDataCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingPlaneInDataCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  int temp1;
  double temp2[4];
  double save2[4];
  const int size2 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->GetClippingPlaneInDataCoords(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAbstractMapper3D::GetClippingPlaneInDataCoords(temp0, temp1, temp2);
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
PyvtkAbstractMapper3D_GetNumberOfClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractMapper3D *op = static_cast<vtkAbstractMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfClippingPlanes() :
      op->vtkAbstractMapper3D::GetNumberOfClippingPlanes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractMapper3D_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractMapper3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractMapper3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractMapper3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAbstractMapper3D\nC++: vtkAbstractMapper3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAbstractMapper3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAbstractMapper3D\nC++: vtkAbstractMapper3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBounds", PyvtkAbstractMapper3D_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: virtual void GetBounds(double bounds[6])\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax). Update this->Bounds as a side\neffect.\n"},
  {(char*)"GetCenter", PyvtkAbstractMapper3D_GetCenter, METH_VARARGS,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\nV.GetCenter([float, float, float])\nC++: void GetCenter(double center[3])\n\nReturn the Center of this mapper's data.\n"},
  {(char*)"GetLength", PyvtkAbstractMapper3D_GetLength, METH_VARARGS,
   (char*)"V.GetLength() -> float\nC++: double GetLength()\n\nReturn the diagonal length of this mappers bounding box.\n"},
  {(char*)"IsARayCastMapper", PyvtkAbstractMapper3D_IsARayCastMapper, METH_VARARGS,
   (char*)"V.IsARayCastMapper() -> int\nC++: virtual int IsARayCastMapper()\n\nIs this a ray cast mapper? A subclass would return 1 if the ray\ncaster is needed to generate an image from this mapper.\n"},
  {(char*)"IsARenderIntoImageMapper", PyvtkAbstractMapper3D_IsARenderIntoImageMapper, METH_VARARGS,
   (char*)"V.IsARenderIntoImageMapper() -> int\nC++: virtual int IsARenderIntoImageMapper()\n\nIs this a \"render into image\" mapper? A subclass would return 1\nif the mapper produces an image by rendering into a software\nimage buffer.\n"},
  {(char*)"GetClippingPlaneInDataCoords", PyvtkAbstractMapper3D_GetClippingPlaneInDataCoords, METH_VARARGS,
   (char*)"V.GetClippingPlaneInDataCoords(vtkMatrix4x4, int, [float, float,\n    float, float])\nC++: void GetClippingPlaneInDataCoords(vtkMatrix4x4 *propMatrix,\n    int i, double planeEquation[4])\n\nGet the ith clipping plane as a homogeneous plane equation. Use\nGetNumberOfClippingPlanes to get the number of planes.\n"},
  {(char*)"GetNumberOfClippingPlanes", PyvtkAbstractMapper3D_GetNumberOfClippingPlanes, METH_VARARGS,
   (char*)"V.GetNumberOfClippingPlanes() -> int\nC++: int GetNumberOfClippingPlanes()\n\nGet the number of clipping planes.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractMapper3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractMapper3D_Methods,
    "vtkAbstractMapper3D", modulename,
    NULL, NULL,
    PyvtkAbstractMapper3D_Doc(),
    PyVTKClass_vtkAbstractMapperNew(modulename));
  return cls;
}

const char **PyvtkAbstractMapper3D_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractMapper3D - abstract class specifies interface to map 3D\ndata\n\n",
    "Superclass: vtkAbstractMapper\n\n",
    "vtkAbstractMapper3D is an abstract class to specify interface between\n3D data and graphics primitives or software rendering techniques.\nSubclasses of vtkAbstractMapper3D can be used for rendering geometry\nor rendering volumetric data.\n\nThis class also defines an API to support hardware clipping planes\n(at most six planes can be defined). It also provides geometric data\nabout the input data it maps",
    ", such as the bounding box and center.\n\nSee Also:\n\nvtkAbstractMapper vtkMapper vtkPolyDataMapper vtkVolumeMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractMapper3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractMapper3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractMapper3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

