// python wrapper for vtkLabelHierarchyAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkLabelHierarchyAlgorithm.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLabelHierarchyAlgorithm(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLabelHierarchyAlgorithmNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkLabelHierarchyAlgorithm_Doc();


static PyObject *
PyvtkLabelHierarchyAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLabelHierarchyAlgorithm::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelHierarchyAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLabelHierarchyAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelHierarchyAlgorithm::NewInstance());

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
PyvtkLabelHierarchyAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLabelHierarchyAlgorithm *tempr = vtkLabelHierarchyAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLabelHierarchy *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkLabelHierarchyAlgorithm::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkLabelHierarchy *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkLabelHierarchyAlgorithm::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkLabelHierarchyAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkLabelHierarchyAlgorithm_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkLabelHierarchyAlgorithm_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkLabelHierarchyAlgorithm::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyAlgorithm_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkLabelHierarchyAlgorithm::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkLabelHierarchyAlgorithm::GetInput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkLabelHierarchyAlgorithm_GetInput_s1(self, args);
    case 1:
      return PyvtkLabelHierarchyAlgorithm_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkLabelHierarchyAlgorithm_GetLabelHierarchyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelHierarchyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkLabelHierarchy *tempr = (ap.IsBound() ?
      op->GetLabelHierarchyInput(temp0) :
      op->vtkLabelHierarchyAlgorithm::GetLabelHierarchyInput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyAlgorithm_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkLabelHierarchyAlgorithm::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1);
      }
    else
      {
      op->vtkLabelHierarchyAlgorithm::SetInputData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_SetInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLabelHierarchyAlgorithm_SetInputData_s1(self, args);
    case 2:
      return PyvtkLabelHierarchyAlgorithm_SetInputData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return NULL;
}



static PyObject *
PyvtkLabelHierarchyAlgorithm_AddInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->AddInputData(temp0);
      }
    else
      {
      op->vtkLabelHierarchyAlgorithm::AddInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_AddInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->AddInputData(temp0, temp1);
      }
    else
      {
      op->vtkLabelHierarchyAlgorithm::AddInputData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_AddInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLabelHierarchyAlgorithm_AddInputData_s1(self, args);
    case 2:
      return PyvtkLabelHierarchyAlgorithm_AddInputData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInputData");
  return NULL;
}


static PyMethodDef PyvtkLabelHierarchyAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkLabelHierarchyAlgorithm_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLabelHierarchyAlgorithm_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLabelHierarchyAlgorithm_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLabelHierarchyAlgorithm\nC++: vtkLabelHierarchyAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLabelHierarchyAlgorithm_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLabelHierarchyAlgorithm\nC++: vtkLabelHierarchyAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkLabelHierarchyAlgorithm_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkLabelHierarchy\nC++: vtkLabelHierarchy *GetOutput()\nV.GetOutput(int) -> vtkLabelHierarchy\nC++: vtkLabelHierarchy *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"SetOutput", PyvtkLabelHierarchyAlgorithm_SetOutput, METH_VARARGS,
   (char*)"V.SetOutput(vtkDataObject)\nC++: virtual void SetOutput(vtkDataObject *d)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"GetInput", PyvtkLabelHierarchyAlgorithm_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\nV.GetInput(int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int port)\n\n"},
  {(char*)"GetLabelHierarchyInput", PyvtkLabelHierarchyAlgorithm_GetLabelHierarchyInput, METH_VARARGS,
   (char*)"V.GetLabelHierarchyInput(int) -> vtkLabelHierarchy\nC++: vtkLabelHierarchy *GetLabelHierarchyInput(int port)\n\n"},
  {(char*)"SetInputData", PyvtkLabelHierarchyAlgorithm_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkDataObject)\nC++: void SetInputData(vtkDataObject *)\nV.SetInputData(int, vtkDataObject)\nC++: void SetInputData(int, vtkDataObject *)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {(char*)"AddInputData", PyvtkLabelHierarchyAlgorithm_AddInputData, METH_VARARGS,
   (char*)"V.AddInputData(vtkDataObject)\nC++: void AddInputData(vtkDataObject *)\nV.AddInputData(int, vtkDataObject)\nC++: void AddInputData(int, vtkDataObject *)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use AddInputConnection() to\nsetup a pipeline connection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLabelHierarchyAlgorithm_StaticNew()
{
  return vtkLabelHierarchyAlgorithm::New();
}

PyObject *PyVTKClass_vtkLabelHierarchyAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLabelHierarchyAlgorithm_StaticNew,
    PyvtkLabelHierarchyAlgorithm_Methods,
    "vtkLabelHierarchyAlgorithm", modulename,
    NULL, NULL,
    PyvtkLabelHierarchyAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkLabelHierarchyAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkLabelHierarchyAlgorithm - Superclass for algorithms that produce\nonly label hierarchies as output\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkLabelHierarchyAlgorithm is a convenience class to make writing\nalgorithms easier. It is also designed to help transition old\nalgorithms to the new pipeline architecture. There are some\nassumptions and defaults made by this class you should be aware of.\nThis class defaults such that your filter will have one input port\nand one output port. If that is not the case simply change it with\nSetNumberO",
    "fInputPorts etc. See this class constructor for the\ndefault. This class also provides a FillInputPortInfo method that by\ndefault says that all inputs will be DataObjects. If that isn't the\ncase then please override this method in your subclass. This class\nbreaks out the downstream requests into separate functions such as\nRequestData and RequestInformation.  You should implement\nRequestData( reques",
    "t, inputVec, outputVec) in subclasses.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLabelHierarchyAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLabelHierarchyAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLabelHierarchyAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

