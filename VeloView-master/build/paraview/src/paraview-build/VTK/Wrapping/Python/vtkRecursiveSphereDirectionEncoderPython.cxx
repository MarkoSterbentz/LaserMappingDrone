// python wrapper for vtkRecursiveSphereDirectionEncoder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRecursiveSphereDirectionEncoder.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRecursiveSphereDirectionEncoder(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRecursiveSphereDirectionEncoderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDirectionEncoderNew
extern "C" { PyObject *PyVTKClass_vtkDirectionEncoderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDirectionEncoderNew
#endif

static const char **PyvtkRecursiveSphereDirectionEncoder_Doc();


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRecursiveSphereDirectionEncoder::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRecursiveSphereDirectionEncoder::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRecursiveSphereDirectionEncoder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRecursiveSphereDirectionEncoder::NewInstance());

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
PyvtkRecursiveSphereDirectionEncoder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRecursiveSphereDirectionEncoder *tempr = vtkRecursiveSphereDirectionEncoder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetEncodedDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

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
      op->vtkRecursiveSphereDirectionEncoder::GetEncodedDirection(temp0));

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
PyvtkRecursiveSphereDirectionEncoder_GetDecodedGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecodedGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  int temp0;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetDecodedGradient(temp0) :
      op->vtkRecursiveSphereDirectionEncoder::GetDecodedGradient(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetNumberOfEncodedDirections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEncodedDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEncodedDirections() :
      op->vtkRecursiveSphereDirectionEncoder::GetNumberOfEncodedDirections());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetDecodedGradientTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecodedGradientTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetDecodedGradientTable() :
      op->vtkRecursiveSphereDirectionEncoder::GetDecodedGradientTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_SetRecursionDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecursionDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRecursionDepth(temp0);
      }
    else
      {
      op->vtkRecursiveSphereDirectionEncoder::SetRecursionDepth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecursionDepthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRecursionDepthMinValue() :
      op->vtkRecursiveSphereDirectionEncoder::GetRecursionDepthMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecursionDepthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRecursionDepthMaxValue() :
      op->vtkRecursiveSphereDirectionEncoder::GetRecursionDepthMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecursionDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveSphereDirectionEncoder *op = static_cast<vtkRecursiveSphereDirectionEncoder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRecursionDepth() :
      op->vtkRecursiveSphereDirectionEncoder::GetRecursionDepth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRecursiveSphereDirectionEncoder_Methods[] = {
  {(char*)"GetClassName", PyvtkRecursiveSphereDirectionEncoder_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRecursiveSphereDirectionEncoder_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRecursiveSphereDirectionEncoder_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRecursiveSphereDirectionEncoder\nC++: vtkRecursiveSphereDirectionEncoder *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRecursiveSphereDirectionEncoder_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRecursiveSphereDirectionEncoder\nC++: vtkRecursiveSphereDirectionEncoder *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"GetEncodedDirection", PyvtkRecursiveSphereDirectionEncoder_GetEncodedDirection, METH_VARARGS,
   (char*)"V.GetEncodedDirection([float, float, float]) -> int\nC++: int GetEncodedDirection(float n[3])\n\nGiven a normal vector n, return the encoded direction\n"},
  {(char*)"GetDecodedGradient", PyvtkRecursiveSphereDirectionEncoder_GetDecodedGradient, METH_VARARGS,
   (char*)"V.GetDecodedGradient(int) -> (float, float, float)\nC++: float *GetDecodedGradient(int value)\n\n/ Given an encoded value, return a pointer to the normal vector\n"},
  {(char*)"GetNumberOfEncodedDirections", PyvtkRecursiveSphereDirectionEncoder_GetNumberOfEncodedDirections, METH_VARARGS,
   (char*)"V.GetNumberOfEncodedDirections() -> int\nC++: int GetNumberOfEncodedDirections(void)\n\nReturn the number of encoded directions\n"},
  {(char*)"GetDecodedGradientTable", PyvtkRecursiveSphereDirectionEncoder_GetDecodedGradientTable, METH_VARARGS,
   (char*)"V.GetDecodedGradientTable() -> (float, ...)\nC++: float *GetDecodedGradientTable(void)\n\nGet the decoded gradient table. There are\nthis->GetNumberOfEncodedDirections() entries in the table, each\ncontaining a normal (direction) vector. This is a flat structure\n- 3 times the number of directions floats in an array.\n"},
  {(char*)"SetRecursionDepth", PyvtkRecursiveSphereDirectionEncoder_SetRecursionDepth, METH_VARARGS,
   (char*)"V.SetRecursionDepth(int)\nC++: void SetRecursionDepth(int)\n\nSet / Get the recursion depth for the subdivision. This indicates\nhow many time one triangle on the initial 8-sided sphere model is\nreplaced by four triangles formed by connecting triangle edge\nmidpoints. A recursion level of 0 yields 8 triangles with 6\nunique vertices. The normals are the vectors from the sphere\ncenter through the vertices. The number of directions will be 11\nsince the four normals with 0 z values will be duplicated in the\ntable - once with +0 values and the other time with -0 values,\nand an addition index will be used to represent the (0,0,0)\nnormal. If we instead choose a recursion level of 6 (the maximum\nthat can fit within 2 bytes) the number of directions is 16643,\nwith 16386 unique directions and a zero normal.\n"},
  {(char*)"GetRecursionDepthMinValue", PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepthMinValue, METH_VARARGS,
   (char*)"V.GetRecursionDepthMinValue() -> int\nC++: int GetRecursionDepthMinValue()\n\nSet / Get the recursion depth for the subdivision. This indicates\nhow many time one triangle on the initial 8-sided sphere model is\nreplaced by four triangles formed by connecting triangle edge\nmidpoints. A recursion level of 0 yields 8 triangles with 6\nunique vertices. The normals are the vectors from the sphere\ncenter through the vertices. The number of directions will be 11\nsince the four normals with 0 z values will be duplicated in the\ntable - once with +0 values and the other time with -0 values,\nand an addition index will be used to represent the (0,0,0)\nnormal. If we instead choose a recursion level of 6 (the maximum\nthat can fit within 2 bytes) the number of directions is 16643,\nwith 16386 unique directions and a zero normal.\n"},
  {(char*)"GetRecursionDepthMaxValue", PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepthMaxValue, METH_VARARGS,
   (char*)"V.GetRecursionDepthMaxValue() -> int\nC++: int GetRecursionDepthMaxValue()\n\nSet / Get the recursion depth for the subdivision. This indicates\nhow many time one triangle on the initial 8-sided sphere model is\nreplaced by four triangles formed by connecting triangle edge\nmidpoints. A recursion level of 0 yields 8 triangles with 6\nunique vertices. The normals are the vectors from the sphere\ncenter through the vertices. The number of directions will be 11\nsince the four normals with 0 z values will be duplicated in the\ntable - once with +0 values and the other time with -0 values,\nand an addition index will be used to represent the (0,0,0)\nnormal. If we instead choose a recursion level of 6 (the maximum\nthat can fit within 2 bytes) the number of directions is 16643,\nwith 16386 unique directions and a zero normal.\n"},
  {(char*)"GetRecursionDepth", PyvtkRecursiveSphereDirectionEncoder_GetRecursionDepth, METH_VARARGS,
   (char*)"V.GetRecursionDepth() -> int\nC++: int GetRecursionDepth()\n\nSet / Get the recursion depth for the subdivision. This indicates\nhow many time one triangle on the initial 8-sided sphere model is\nreplaced by four triangles formed by connecting triangle edge\nmidpoints. A recursion level of 0 yields 8 triangles with 6\nunique vertices. The normals are the vectors from the sphere\ncenter through the vertices. The number of directions will be 11\nsince the four normals with 0 z values will be duplicated in the\ntable - once with +0 values and the other time with -0 values,\nand an addition index will be used to represent the (0,0,0)\nnormal. If we instead choose a recursion level of 6 (the maximum\nthat can fit within 2 bytes) the number of directions is 16643,\nwith 16386 unique directions and a zero normal.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRecursiveSphereDirectionEncoder_StaticNew()
{
  return vtkRecursiveSphereDirectionEncoder::New();
}

PyObject *PyVTKClass_vtkRecursiveSphereDirectionEncoderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRecursiveSphereDirectionEncoder_StaticNew,
    PyvtkRecursiveSphereDirectionEncoder_Methods,
    "vtkRecursiveSphereDirectionEncoder", modulename,
    NULL, NULL,
    PyvtkRecursiveSphereDirectionEncoder_Doc(),
    PyVTKClass_vtkDirectionEncoderNew(modulename));
  return cls;
}

const char **PyvtkRecursiveSphereDirectionEncoder_Doc()
{
  static const char *docstring[] = {
    "vtkRecursiveSphereDirectionEncoder - A direction encoder based on the\nrecursive subdivision of an octahedron\n\n",
    "Superclass: vtkDirectionEncoder\n\n",
    "vtkRecursiveSphereDirectionEncoder is a direction encoder which uses\nthe vertices of a recursive subdivision of an octahedron (with the\nvertices pushed out onto the surface of an enclosing sphere) to\nencode directions into a two byte value.\n\nSee Also:\n\nvtkDirectionEncoder\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRecursiveSphereDirectionEncoder(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRecursiveSphereDirectionEncoderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRecursiveSphereDirectionEncoder", o) != 0)
    {
    Py_DECREF(o);
    }

}

