// python wrapper for vtkMoleculeToAtomBallFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMoleculeToAtomBallFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMoleculeToAtomBallFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMoleculeToAtomBallFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMoleculeToPolyDataFilterNew
extern "C" { PyObject *PyVTKClass_vtkMoleculeToPolyDataFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkMoleculeToPolyDataFilterNew
#endif

static const char **PyvtkMoleculeToAtomBallFilter_Doc();


static PyObject *
PyvtkMoleculeToAtomBallFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMoleculeToAtomBallFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMoleculeToAtomBallFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMoleculeToAtomBallFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMoleculeToAtomBallFilter::NewInstance());

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
PyvtkMoleculeToAtomBallFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMoleculeToAtomBallFilter *tempr = vtkMoleculeToAtomBallFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_GetRadiusSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRadiusSource() :
      op->vtkMoleculeToAtomBallFilter::GetRadiusSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_SetRadiusSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadiusSource(temp0);
      }
    else
      {
      op->vtkMoleculeToAtomBallFilter::SetRadiusSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkMoleculeToAtomBallFilter::GetResolution());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResolution(temp0);
      }
    else
      {
      op->vtkMoleculeToAtomBallFilter::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_GetRadiusScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRadiusScale() :
      op->vtkMoleculeToAtomBallFilter::GetRadiusScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_SetRadiusScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadiusScale(temp0);
      }
    else
      {
      op->vtkMoleculeToAtomBallFilter::SetRadiusScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMoleculeToAtomBallFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkMoleculeToAtomBallFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMoleculeToAtomBallFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMoleculeToAtomBallFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMoleculeToAtomBallFilter\nC++: vtkMoleculeToAtomBallFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMoleculeToAtomBallFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMoleculeToAtomBallFilter\nC++: vtkMoleculeToAtomBallFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetRadiusSource", PyvtkMoleculeToAtomBallFilter_GetRadiusSource, METH_VARARGS,
   (char*)"V.GetRadiusSource() -> int\nC++: int GetRadiusSource()\n\n"},
  {(char*)"SetRadiusSource", PyvtkMoleculeToAtomBallFilter_SetRadiusSource, METH_VARARGS,
   (char*)"V.SetRadiusSource(int)\nC++: void SetRadiusSource(int a)\n\n"},
  {(char*)"GetResolution", PyvtkMoleculeToAtomBallFilter_GetResolution, METH_VARARGS,
   (char*)"V.GetResolution() -> int\nC++: int GetResolution()\n\n"},
  {(char*)"SetResolution", PyvtkMoleculeToAtomBallFilter_SetResolution, METH_VARARGS,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(int a)\n\n"},
  {(char*)"GetRadiusScale", PyvtkMoleculeToAtomBallFilter_GetRadiusScale, METH_VARARGS,
   (char*)"V.GetRadiusScale() -> float\nC++: double GetRadiusScale()\n\n"},
  {(char*)"SetRadiusScale", PyvtkMoleculeToAtomBallFilter_SetRadiusScale, METH_VARARGS,
   (char*)"V.SetRadiusScale(float)\nC++: void SetRadiusScale(double a)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMoleculeToAtomBallFilter_StaticNew()
{
  return vtkMoleculeToAtomBallFilter::New();
}

PyObject *PyVTKClass_vtkMoleculeToAtomBallFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMoleculeToAtomBallFilter_StaticNew,
    PyvtkMoleculeToAtomBallFilter_Methods,
    "vtkMoleculeToAtomBallFilter", modulename,
    NULL, NULL,
    PyvtkMoleculeToAtomBallFilter_Doc(),
    PyVTKClass_vtkMoleculeToPolyDataFilterNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "CovalentRadius", vtkMoleculeToAtomBallFilter::CovalentRadius },
          { "VDWRadius", vtkMoleculeToAtomBallFilter::VDWRadius },
          { "UnitRadius", vtkMoleculeToAtomBallFilter::UnitRadius },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkMoleculeToAtomBallFilter_Doc()
{
  static const char *docstring[] = {
    "vtkMoleculeToAtomBallFilter - Generate polydata with spheres\n\n",
    "Superclass: vtkMoleculeToPolyDataFilter\n\n",
    "This filter is used to generate one sphere for each atom in the input\nvtkMolecule. Each sphere is centered at the atom center and can be\nscaled using either covalent or van der Waals radii. The point\nscalars of the output vtkPolyData contains the atomic number of the\nappropriate atom for color mapping.\n\note Consider using the faster, simpler vtkMoleculeMapper class,\nrather than generating polydata",
    " manually via these filters.\n\nSee Also:\n\nvtkMoleculeMapper vtkMoleculeToBondStickFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMoleculeToAtomBallFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMoleculeToAtomBallFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMoleculeToAtomBallFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

