// python wrapper for vtkPVExtractBagPlots
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVExtractBagPlots.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVExtractBagPlots(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVExtractBagPlotsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTransposeTableNew
extern "C" { PyObject *PyVTKClass_vtkTransposeTableNew(const char *); }
#define DECLARED_PyVTKClass_vtkTransposeTableNew
#endif

static const char **PyvtkPVExtractBagPlots_Doc();


static PyObject *
PyvtkPVExtractBagPlots_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVExtractBagPlots::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVExtractBagPlots::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVExtractBagPlots *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVExtractBagPlots::NewInstance());

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
PyvtkPVExtractBagPlots_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVExtractBagPlots *tempr = vtkPVExtractBagPlots::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_EnableAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->EnableAttributeArray(temp0);
      }
    else
      {
      op->vtkPVExtractBagPlots::EnableAttributeArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_ClearAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearAttributeArrays();
      }
    else
      {
      op->vtkPVExtractBagPlots::ClearAttributeArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_GetTransposeTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransposeTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetTransposeTable() :
      op->vtkPVExtractBagPlots::GetTransposeTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_SetTransposeTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransposeTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTransposeTable(temp0);
      }
    else
      {
      op->vtkPVExtractBagPlots::SetTransposeTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_TransposeTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransposeTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TransposeTableOn();
      }
    else
      {
      op->vtkPVExtractBagPlots::TransposeTableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_TransposeTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransposeTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TransposeTableOff();
      }
    else
      {
      op->vtkPVExtractBagPlots::TransposeTableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_GetRobustPCA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRobustPCA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetRobustPCA() :
      op->vtkPVExtractBagPlots::GetRobustPCA());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_SetRobustPCA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRobustPCA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRobustPCA(temp0);
      }
    else
      {
      op->vtkPVExtractBagPlots::SetRobustPCA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_GetSigma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSigma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSigma() :
      op->vtkPVExtractBagPlots::GetSigma());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVExtractBagPlots_SetSigma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSigma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractBagPlots *op = static_cast<vtkPVExtractBagPlots *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSigma(temp0);
      }
    else
      {
      op->vtkPVExtractBagPlots::SetSigma(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVExtractBagPlots_Methods[] = {
  {(char*)"GetClassName", PyvtkPVExtractBagPlots_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVExtractBagPlots_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVExtractBagPlots_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVExtractBagPlots\nC++: vtkPVExtractBagPlots *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVExtractBagPlots_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVExtractBagPlots\nC++: vtkPVExtractBagPlots *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EnableAttributeArray", PyvtkPVExtractBagPlots_EnableAttributeArray, METH_VARARGS,
   (char*)"V.EnableAttributeArray(string)\nC++: void EnableAttributeArray(const char *)\n\nInterface for preparing selection of arrays in ParaView.\n"},
  {(char*)"ClearAttributeArrays", PyvtkPVExtractBagPlots_ClearAttributeArrays, METH_VARARGS,
   (char*)"V.ClearAttributeArrays()\nC++: void ClearAttributeArrays()\n\nInterface for preparing selection of arrays in ParaView.\n"},
  {(char*)"GetTransposeTable", PyvtkPVExtractBagPlots_GetTransposeTable, METH_VARARGS,
   (char*)"V.GetTransposeTable() -> bool\nC++: bool GetTransposeTable()\n\nSet/get if the process must be done on the transposed of the\ninput table\n"},
  {(char*)"SetTransposeTable", PyvtkPVExtractBagPlots_SetTransposeTable, METH_VARARGS,
   (char*)"V.SetTransposeTable(bool)\nC++: void SetTransposeTable(bool a)\n\nSet/get if the process must be done on the transposed of the\ninput table\n"},
  {(char*)"TransposeTableOn", PyvtkPVExtractBagPlots_TransposeTableOn, METH_VARARGS,
   (char*)"V.TransposeTableOn()\nC++: void TransposeTableOn()\n\nSet/get if the process must be done on the transposed of the\ninput table\n"},
  {(char*)"TransposeTableOff", PyvtkPVExtractBagPlots_TransposeTableOff, METH_VARARGS,
   (char*)"V.TransposeTableOff()\nC++: void TransposeTableOff()\n\nSet/get if the process must be done on the transposed of the\ninput table\n"},
  {(char*)"GetRobustPCA", PyvtkPVExtractBagPlots_GetRobustPCA, METH_VARARGS,
   (char*)"V.GetRobustPCA() -> bool\nC++: bool GetRobustPCA()\n\nSet/get if the PCA must be done in robust mode\n"},
  {(char*)"SetRobustPCA", PyvtkPVExtractBagPlots_SetRobustPCA, METH_VARARGS,
   (char*)"V.SetRobustPCA(bool)\nC++: void SetRobustPCA(bool a)\n\nSet/get if the PCA must be done in robust mode\n"},
  {(char*)"GetSigma", PyvtkPVExtractBagPlots_GetSigma, METH_VARARGS,
   (char*)"V.GetSigma() -> float\nC++: double GetSigma()\n\nSet/get the sigma parameter for the HDR filter\n"},
  {(char*)"SetSigma", PyvtkPVExtractBagPlots_SetSigma, METH_VARARGS,
   (char*)"V.SetSigma(float)\nC++: void SetSigma(double a)\n\nSet/get the sigma parameter for the HDR filter\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVExtractBagPlots_StaticNew()
{
  return vtkPVExtractBagPlots::New();
}

PyObject *PyVTKClass_vtkPVExtractBagPlotsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVExtractBagPlots_StaticNew,
    PyvtkPVExtractBagPlots_Methods,
    "vtkPVExtractBagPlots", modulename,
    NULL, NULL,
    PyvtkPVExtractBagPlots_Doc(),
    PyVTKClass_vtkTransposeTableNew(modulename));
  return cls;
}

const char **PyvtkPVExtractBagPlots_Doc()
{
  static const char *docstring[] = {
    "vtkPVExtractBagPlots\n\n",
    "Superclass: vtkTransposeTable\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVExtractBagPlots(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVExtractBagPlotsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVExtractBagPlots", o) != 0)
    {
    Py_DECREF(o);
    }

}

