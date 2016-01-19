// python wrapper for vtkDataSetGhostGenerator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkDataSetGhostGenerator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataSetGhostGenerator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataSetGhostGeneratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkDataSetGhostGenerator_Doc();


static PyObject *
PyvtkDataSetGhostGenerator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGhostGenerator *op = static_cast<vtkDataSetGhostGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataSetGhostGenerator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGhostGenerator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGhostGenerator *op = static_cast<vtkDataSetGhostGenerator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetGhostGenerator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGhostGenerator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGhostGenerator *op = static_cast<vtkDataSetGhostGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataSetGhostGenerator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetGhostGenerator::NewInstance());

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
PyvtkDataSetGhostGenerator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataSetGhostGenerator *tempr = vtkDataSetGhostGenerator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGhostGenerator_SetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGhostGenerator *op = static_cast<vtkDataSetGhostGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfGhostLayers(temp0);
      }
    else
      {
      op->vtkDataSetGhostGenerator::SetNumberOfGhostLayers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGhostGenerator_GetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGhostGenerator *op = static_cast<vtkDataSetGhostGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGhostLayers() :
      op->vtkDataSetGhostGenerator::GetNumberOfGhostLayers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGhostGenerator_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGhostGenerator *op = static_cast<vtkDataSetGhostGenerator *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkDataSetGhostGenerator::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGhostGenerator_FillOutputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillOutputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGhostGenerator *op = static_cast<vtkDataSetGhostGenerator *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->FillOutputPortInformation(temp0, temp1) :
      op->vtkDataSetGhostGenerator::FillOutputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetGhostGenerator_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetGhostGenerator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetGhostGenerator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetGhostGenerator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataSetGhostGenerator\nC++: vtkDataSetGhostGenerator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataSetGhostGenerator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataSetGhostGenerator\nC++: vtkDataSetGhostGenerator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfGhostLayers", PyvtkDataSetGhostGenerator_SetNumberOfGhostLayers, METH_VARARGS,
   (char*)"V.SetNumberOfGhostLayers(int)\nC++: void SetNumberOfGhostLayers(int a)\n\nSet/Get for number of ghost layers to generate.\n"},
  {(char*)"GetNumberOfGhostLayers", PyvtkDataSetGhostGenerator_GetNumberOfGhostLayers, METH_VARARGS,
   (char*)"V.GetNumberOfGhostLayers() -> int\nC++: int GetNumberOfGhostLayers()\n\nSet/Get for number of ghost layers to generate.\n"},
  {(char*)"FillInputPortInformation", PyvtkDataSetGhostGenerator_FillInputPortInformation, METH_VARARGS,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: virtual int FillInputPortInformation(int port,\n    vtkInformation *info)\n\n"},
  {(char*)"FillOutputPortInformation", PyvtkDataSetGhostGenerator_FillOutputPortInformation, METH_VARARGS,
   (char*)"V.FillOutputPortInformation(int, vtkInformation) -> int\nC++: virtual int FillOutputPortInformation(int port,\n    vtkInformation *info)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDataSetGhostGeneratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDataSetGhostGenerator_Methods,
    "vtkDataSetGhostGenerator", modulename,
    NULL, NULL,
    PyvtkDataSetGhostGenerator_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDataSetGhostGenerator_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetGhostGenerator.h -- Base class for ghost data generators\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "An abstract class that provides common functionality and implements\nan\n interface for all ghost data generators. Ghost data generators\naccept as\n input a partitioned data-set, defined by a vtkMultiBlockDataSet,\nwhere each\n block corresponds to a partition. The output consists of\nvtkMultiBlockDataSet\n where each block holds the corresponding ghosted data-set. For more\ndetails,\n see concrete impleme",
    "ntations.\n\nSee Also:\n\nvtkUniformGridGhostDataGenerator,\nvtkStructuredGridGhostDataGenerator,\nvtkRectilinearGridGhostDataGenerator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetGhostGenerator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetGhostGeneratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetGhostGenerator", o) != 0)
    {
    Py_DECREF(o);
    }

}

