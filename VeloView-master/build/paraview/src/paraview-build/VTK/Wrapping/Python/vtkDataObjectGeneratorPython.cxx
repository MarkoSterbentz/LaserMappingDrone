// python wrapper for vtkDataObjectGenerator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataObjectGenerator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataObjectGenerator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataObjectGeneratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkDataObjectGenerator_Doc();


static PyObject *
PyvtkDataObjectGenerator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataObjectGenerator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObjectGenerator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObjectGenerator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObjectGenerator::NewInstance());

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
PyvtkDataObjectGenerator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataObjectGenerator *tempr = vtkDataObjectGenerator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_SetProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProgram(temp0);
      }
    else
      {
      op->vtkDataObjectGenerator::SetProgram(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_GetProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetProgram() :
      op->vtkDataObjectGenerator::GetProgram());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataObjectGenerator_Methods[] = {
  {(char*)"GetClassName", PyvtkDataObjectGenerator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataObjectGenerator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataObjectGenerator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataObjectGenerator\nC++: vtkDataObjectGenerator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataObjectGenerator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataObjectGenerator\nC++: vtkDataObjectGenerator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetProgram", PyvtkDataObjectGenerator_SetProgram, METH_VARARGS,
   (char*)"V.SetProgram(string)\nC++: void SetProgram(char *)\n\nThe string that will be parsed to specify a dataobject structure.\n"},
  {(char*)"GetProgram", PyvtkDataObjectGenerator_GetProgram, METH_VARARGS,
   (char*)"V.GetProgram() -> string\nC++: char *GetProgram()\n\nThe string that will be parsed to specify a dataobject structure.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataObjectGenerator_StaticNew()
{
  return vtkDataObjectGenerator::New();
}

PyObject *PyVTKClass_vtkDataObjectGeneratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataObjectGenerator_StaticNew,
    PyvtkDataObjectGenerator_Methods,
    "vtkDataObjectGenerator", modulename,
    NULL, NULL,
    PyvtkDataObjectGenerator_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDataObjectGenerator_Doc()
{
  static const char *docstring[] = {
    "vtkDataObjectGenerator - produces simple (composite or atomic) data\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkDataObjectGenerator parses a string and produces dataobjects from\nthe dataobject template names it sees in the string. For example, if\nthe string contains \"ID1\" the generator will create a vtkImageData.\n\"UF1\", \"RG1\", \"SG1\", \"PD1\", and \"UG1\" will produce vtkUniformGrid,\nvtkRectilinearGrid, vtkStructuredGrid, vtkPolyData and\nvtkUnstructuredGrid respectively. \"PD2\" will produce an alternate\nvtkPol",
    "yData. You can compose composite datasets from the atomic ones\nlisted above by placing them within one of the two composite dataset\nidentifiers\n- \"MB{}\" or \"HB[]\". \"MB{ ID1 PD1 MB{} }\" for example will create a\n  vtkMultiBlockDataSet consisting of three blocks: image data, poly\n  data, multi-block (empty). Hierarchical Box data sets additionally\n  require the notion of groups, declared within \"()\"",
    " braces, to\n  specify AMR depth. \"HB[ (UF1)(UF1)(UF1) ]\" will create a\n  vtkHierarchicalBoxDataSet representing an octree that is three\n  levels deep, in which the firstmost cell in each level is refined.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataObjectGenerator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataObjectGeneratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataObjectGenerator", o) != 0)
    {
    Py_DECREF(o);
    }

}

