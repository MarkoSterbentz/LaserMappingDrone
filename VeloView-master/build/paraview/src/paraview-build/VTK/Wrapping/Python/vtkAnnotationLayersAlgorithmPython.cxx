// python wrapper for vtkAnnotationLayersAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkAnnotationLayersAlgorithm.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAnnotationLayersAlgorithm(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAnnotationLayersAlgorithmNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkAnnotationLayersAlgorithm_Doc();


static PyObject *
PyvtkAnnotationLayersAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayersAlgorithm *op = static_cast<vtkAnnotationLayersAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAnnotationLayersAlgorithm::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayersAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayersAlgorithm *op = static_cast<vtkAnnotationLayersAlgorithm *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnnotationLayersAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayersAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayersAlgorithm *op = static_cast<vtkAnnotationLayersAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAnnotationLayersAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnnotationLayersAlgorithm::NewInstance());

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
PyvtkAnnotationLayersAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAnnotationLayersAlgorithm *tempr = vtkAnnotationLayersAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayersAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayersAlgorithm *op = static_cast<vtkAnnotationLayersAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAnnotationLayers *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkAnnotationLayersAlgorithm::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAnnotationLayersAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayersAlgorithm *op = static_cast<vtkAnnotationLayersAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAnnotationLayers *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkAnnotationLayersAlgorithm::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAnnotationLayersAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkAnnotationLayersAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkAnnotationLayersAlgorithm_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkAnnotationLayersAlgorithm_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayersAlgorithm *op = static_cast<vtkAnnotationLayersAlgorithm *>(vp);

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
      op->vtkAnnotationLayersAlgorithm::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAnnotationLayersAlgorithm_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayersAlgorithm *op = static_cast<vtkAnnotationLayersAlgorithm *>(vp);

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
      op->vtkAnnotationLayersAlgorithm::SetInputData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAnnotationLayersAlgorithm_SetInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAnnotationLayersAlgorithm_SetInputData_s1(self, args);
    case 2:
      return PyvtkAnnotationLayersAlgorithm_SetInputData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return NULL;
}


static PyMethodDef PyvtkAnnotationLayersAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkAnnotationLayersAlgorithm_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAnnotationLayersAlgorithm_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAnnotationLayersAlgorithm_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAnnotationLayersAlgorithm\nC++: vtkAnnotationLayersAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAnnotationLayersAlgorithm_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAnnotationLayersAlgorithm\nC++: vtkAnnotationLayersAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkAnnotationLayersAlgorithm_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkAnnotationLayers\nC++: vtkAnnotationLayers *GetOutput()\nV.GetOutput(int) -> vtkAnnotationLayers\nC++: vtkAnnotationLayers *GetOutput(int index)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"SetInputData", PyvtkAnnotationLayersAlgorithm_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkDataObject)\nC++: void SetInputData(vtkDataObject *obj)\nV.SetInputData(int, vtkDataObject)\nC++: void SetInputData(int index, vtkDataObject *obj)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAnnotationLayersAlgorithm_StaticNew()
{
  return vtkAnnotationLayersAlgorithm::New();
}

PyObject *PyVTKClass_vtkAnnotationLayersAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAnnotationLayersAlgorithm_StaticNew,
    PyvtkAnnotationLayersAlgorithm_Methods,
    "vtkAnnotationLayersAlgorithm", modulename,
    NULL, NULL,
    PyvtkAnnotationLayersAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAnnotationLayersAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkAnnotationLayersAlgorithm - Superclass for algorithms that produce\nonly vtkAnnotationLayers as output\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkAnnotationLayersAlgorithm is a convenience class to make writing\nalgorithms easier. It is also designed to help transition old\nalgorithms to the new pipeline architecture. There are some\nassumptions and defaults made by this class you should be aware of.\nThis class defaults such that your filter will have one input port\nand one output port. If that is not the case simply change it with\nSetNumbe",
    "rOfInputPorts etc. See this class constructor for the\ndefault. This class also provides a FillInputPortInfo method that by\ndefault says that all inputs will be vtkAnnotationLayers. If that\nisn't the case then please override this method in your subclass. You\nshould implement the subclass's algorithm into RequestData( request,\ninputVec, outputVec).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAnnotationLayersAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAnnotationLayersAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAnnotationLayersAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

