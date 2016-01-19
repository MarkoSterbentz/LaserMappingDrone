// python wrapper for vtkSphericalDirectionEncoder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSphericalDirectionEncoder.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSphericalDirectionEncoder(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSphericalDirectionEncoderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDirectionEncoderNew
extern "C" { PyObject *PyVTKClass_vtkDirectionEncoderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDirectionEncoderNew
#endif

static const char **PyvtkSphericalDirectionEncoder_Doc();


static PyObject *
PyvtkSphericalDirectionEncoder_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalDirectionEncoder *op = static_cast<vtkSphericalDirectionEncoder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSphericalDirectionEncoder::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphericalDirectionEncoder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalDirectionEncoder *op = static_cast<vtkSphericalDirectionEncoder *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphericalDirectionEncoder::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphericalDirectionEncoder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalDirectionEncoder *op = static_cast<vtkSphericalDirectionEncoder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSphericalDirectionEncoder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphericalDirectionEncoder::NewInstance());

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
PyvtkSphericalDirectionEncoder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSphericalDirectionEncoder *tempr = vtkSphericalDirectionEncoder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphericalDirectionEncoder_GetEncodedDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalDirectionEncoder *op = static_cast<vtkSphericalDirectionEncoder *>(vp);

  float temp0[3];
  float save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetEncodedDirection(temp0) :
      op->vtkSphericalDirectionEncoder::GetEncodedDirection(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphericalDirectionEncoder_GetDecodedGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecodedGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalDirectionEncoder *op = static_cast<vtkSphericalDirectionEncoder *>(vp);

  int temp0;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetDecodedGradient(temp0) :
      op->vtkSphericalDirectionEncoder::GetDecodedGradient(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSphericalDirectionEncoder_GetNumberOfEncodedDirections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEncodedDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalDirectionEncoder *op = static_cast<vtkSphericalDirectionEncoder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEncodedDirections() :
      op->vtkSphericalDirectionEncoder::GetNumberOfEncodedDirections());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSphericalDirectionEncoder_GetDecodedGradientTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecodedGradientTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalDirectionEncoder *op = static_cast<vtkSphericalDirectionEncoder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetDecodedGradientTable() :
      op->vtkSphericalDirectionEncoder::GetDecodedGradientTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSphericalDirectionEncoder_Methods[] = {
  {(char*)"GetClassName", PyvtkSphericalDirectionEncoder_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSphericalDirectionEncoder_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSphericalDirectionEncoder_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSphericalDirectionEncoder\nC++: vtkSphericalDirectionEncoder *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSphericalDirectionEncoder_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSphericalDirectionEncoder\nC++: vtkSphericalDirectionEncoder *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetEncodedDirection", PyvtkSphericalDirectionEncoder_GetEncodedDirection, METH_VARARGS,
   (char*)"V.GetEncodedDirection([float, float, float]) -> int\nC++: int GetEncodedDirection(float n[3])\n\nGiven a normal vector n, return the encoded direction\n"},
  {(char*)"GetDecodedGradient", PyvtkSphericalDirectionEncoder_GetDecodedGradient, METH_VARARGS,
   (char*)"V.GetDecodedGradient(int) -> (float, float, float)\nC++: float *GetDecodedGradient(int value)\n\n/ Given an encoded value, return a pointer to the normal vector\n"},
  {(char*)"GetNumberOfEncodedDirections", PyvtkSphericalDirectionEncoder_GetNumberOfEncodedDirections, METH_VARARGS,
   (char*)"V.GetNumberOfEncodedDirections() -> int\nC++: int GetNumberOfEncodedDirections(void)\n\nReturn the number of encoded directions\n"},
  {(char*)"GetDecodedGradientTable", PyvtkSphericalDirectionEncoder_GetDecodedGradientTable, METH_VARARGS,
   (char*)"V.GetDecodedGradientTable() -> (float, ...)\nC++: float *GetDecodedGradientTable(void)\n\nGet the decoded gradient table. There are\nthis->GetNumberOfEncodedDirections() entries in the table, each\ncontaining a normal (direction) vector. This is a flat structure\n- 3 times the number of directions floats in an array.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSphericalDirectionEncoder_StaticNew()
{
  return vtkSphericalDirectionEncoder::New();
}

PyObject *PyVTKClass_vtkSphericalDirectionEncoderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSphericalDirectionEncoder_StaticNew,
    PyvtkSphericalDirectionEncoder_Methods,
    "vtkSphericalDirectionEncoder", modulename,
    NULL, NULL,
    PyvtkSphericalDirectionEncoder_Doc(),
    PyVTKClass_vtkDirectionEncoderNew(modulename));
  return cls;
}

const char **PyvtkSphericalDirectionEncoder_Doc()
{
  static const char *docstring[] = {
    "vtkSphericalDirectionEncoder - A direction encoder based on spherical\ncoordinates\n\n",
    "Superclass: vtkDirectionEncoder\n\n",
    "vtkSphericalDirectionEncoder is a direction encoder which uses\nspherical coordinates for mapping (nx, ny, nz) into an azimuth,\nelevation pair.\n\nSee Also:\n\nvtkDirectionEncoder\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSphericalDirectionEncoder(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSphericalDirectionEncoderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSphericalDirectionEncoder", o) != 0)
    {
    Py_DECREF(o);
    }

}

