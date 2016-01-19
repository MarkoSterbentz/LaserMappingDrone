// python wrapper for vtkPlatonicSolidSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPlatonicSolidSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPlatonicSolidSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPlatonicSolidSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkPlatonicSolidSource_Doc();


static PyObject *
PyvtkPlatonicSolidSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPlatonicSolidSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlatonicSolidSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlatonicSolidSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlatonicSolidSource::NewInstance());

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
PyvtkPlatonicSolidSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPlatonicSolidSource *tempr = vtkPlatonicSolidSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSolidType(temp0);
      }
    else
      {
      op->vtkPlatonicSolidSource::SetSolidType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_GetSolidTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSolidTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSolidTypeMinValue() :
      op->vtkPlatonicSolidSource::GetSolidTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_GetSolidTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSolidTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSolidTypeMaxValue() :
      op->vtkPlatonicSolidSource::GetSolidTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_GetSolidType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSolidType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSolidType() :
      op->vtkPlatonicSolidSource::GetSolidType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidTypeToTetrahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidTypeToTetrahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSolidTypeToTetrahedron();
      }
    else
      {
      op->vtkPlatonicSolidSource::SetSolidTypeToTetrahedron();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidTypeToCube(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidTypeToCube");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSolidTypeToCube();
      }
    else
      {
      op->vtkPlatonicSolidSource::SetSolidTypeToCube();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidTypeToOctahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidTypeToOctahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSolidTypeToOctahedron();
      }
    else
      {
      op->vtkPlatonicSolidSource::SetSolidTypeToOctahedron();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidTypeToIcosahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidTypeToIcosahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSolidTypeToIcosahedron();
      }
    else
      {
      op->vtkPlatonicSolidSource::SetSolidTypeToIcosahedron();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetSolidTypeToDodecahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSolidTypeToDodecahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSolidTypeToDodecahedron();
      }
    else
      {
      op->vtkPlatonicSolidSource::SetSolidTypeToDodecahedron();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

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
      op->vtkPlatonicSolidSource::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlatonicSolidSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlatonicSolidSource *op = static_cast<vtkPlatonicSolidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkPlatonicSolidSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPlatonicSolidSource_Methods[] = {
  {(char*)"GetClassName", PyvtkPlatonicSolidSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlatonicSolidSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlatonicSolidSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPlatonicSolidSource\nC++: vtkPlatonicSolidSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlatonicSolidSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlatonicSolidSource\nC++: vtkPlatonicSolidSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSolidType", PyvtkPlatonicSolidSource_SetSolidType, METH_VARARGS,
   (char*)"V.SetSolidType(int)\nC++: void SetSolidType(int)\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {(char*)"GetSolidTypeMinValue", PyvtkPlatonicSolidSource_GetSolidTypeMinValue, METH_VARARGS,
   (char*)"V.GetSolidTypeMinValue() -> int\nC++: int GetSolidTypeMinValue()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {(char*)"GetSolidTypeMaxValue", PyvtkPlatonicSolidSource_GetSolidTypeMaxValue, METH_VARARGS,
   (char*)"V.GetSolidTypeMaxValue() -> int\nC++: int GetSolidTypeMaxValue()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {(char*)"GetSolidType", PyvtkPlatonicSolidSource_GetSolidType, METH_VARARGS,
   (char*)"V.GetSolidType() -> int\nC++: int GetSolidType()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {(char*)"SetSolidTypeToTetrahedron", PyvtkPlatonicSolidSource_SetSolidTypeToTetrahedron, METH_VARARGS,
   (char*)"V.SetSolidTypeToTetrahedron()\nC++: void SetSolidTypeToTetrahedron()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {(char*)"SetSolidTypeToCube", PyvtkPlatonicSolidSource_SetSolidTypeToCube, METH_VARARGS,
   (char*)"V.SetSolidTypeToCube()\nC++: void SetSolidTypeToCube()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {(char*)"SetSolidTypeToOctahedron", PyvtkPlatonicSolidSource_SetSolidTypeToOctahedron, METH_VARARGS,
   (char*)"V.SetSolidTypeToOctahedron()\nC++: void SetSolidTypeToOctahedron()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {(char*)"SetSolidTypeToIcosahedron", PyvtkPlatonicSolidSource_SetSolidTypeToIcosahedron, METH_VARARGS,
   (char*)"V.SetSolidTypeToIcosahedron()\nC++: void SetSolidTypeToIcosahedron()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {(char*)"SetSolidTypeToDodecahedron", PyvtkPlatonicSolidSource_SetSolidTypeToDodecahedron, METH_VARARGS,
   (char*)"V.SetSolidTypeToDodecahedron()\nC++: void SetSolidTypeToDodecahedron()\n\nSpecify the type of PlatonicSolid solid to create.\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkPlatonicSolidSource_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int a)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkPlatonicSolidSource_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlatonicSolidSource_StaticNew()
{
  return vtkPlatonicSolidSource::New();
}

PyObject *PyVTKClass_vtkPlatonicSolidSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlatonicSolidSource_StaticNew,
    PyvtkPlatonicSolidSource_Methods,
    "vtkPlatonicSolidSource", modulename,
    NULL, NULL,
    PyvtkPlatonicSolidSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPlatonicSolidSource_Doc()
{
  static const char *docstring[] = {
    "vtkPlatonicSolidSource - produce polygonal Platonic solids\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkPlatonicSolidSource can generate each of the five Platonic solids:\ntetrahedron, cube, octahedron, icosahedron, and dodecahedron. Each of\nthe solids is placed inside a sphere centered at the origin with\nradius 1.0. To use this class, simply specify the solid to create.\nNote that this source object creates cell scalars that are (integral\nvalue) face numbers.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlatonicSolidSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlatonicSolidSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlatonicSolidSource", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 5; c++)
    {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_SOLID_TETRAHEDRON", 0 },
        { "VTK_SOLID_CUBE", 1 },
        { "VTK_SOLID_OCTAHEDRON", 2 },
        { "VTK_SOLID_ICOSAHEDRON", 3 },
        { "VTK_SOLID_DODECAHEDRON", 4 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

