// python wrapper for vtkMoleculeReaderBase
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMoleculeReaderBase.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMoleculeReaderBase(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMoleculeReaderBaseNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMoleculeReaderBase_Doc();


static PyObject *
PyvtkMoleculeReaderBase_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMoleculeReaderBase::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMoleculeReaderBase::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMoleculeReaderBase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMoleculeReaderBase::NewInstance());

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
PyvtkMoleculeReaderBase_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMoleculeReaderBase *tempr = vtkMoleculeReaderBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkMoleculeReaderBase::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMoleculeReaderBase::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_SetBScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBScale(temp0);
      }
    else
      {
      op->vtkMoleculeReaderBase::SetBScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_GetBScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBScale() :
      op->vtkMoleculeReaderBase::GetBScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_SetHBScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHBScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHBScale(temp0);
      }
    else
      {
      op->vtkMoleculeReaderBase::SetHBScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_GetHBScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHBScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetHBScale() :
      op->vtkMoleculeReaderBase::GetHBScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_GetNumberOfAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAtoms() :
      op->vtkMoleculeReaderBase::GetNumberOfAtoms());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMoleculeReaderBase_Methods[] = {
  {(char*)"GetClassName", PyvtkMoleculeReaderBase_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMoleculeReaderBase_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMoleculeReaderBase_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMoleculeReaderBase\nC++: vtkMoleculeReaderBase *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMoleculeReaderBase_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMoleculeReaderBase\nC++: vtkMoleculeReaderBase *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkMoleculeReaderBase_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\n"},
  {(char*)"GetFileName", PyvtkMoleculeReaderBase_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\n"},
  {(char*)"SetBScale", PyvtkMoleculeReaderBase_SetBScale, METH_VARARGS,
   (char*)"V.SetBScale(float)\nC++: void SetBScale(double a)\n\n"},
  {(char*)"GetBScale", PyvtkMoleculeReaderBase_GetBScale, METH_VARARGS,
   (char*)"V.GetBScale() -> float\nC++: double GetBScale()\n\n"},
  {(char*)"SetHBScale", PyvtkMoleculeReaderBase_SetHBScale, METH_VARARGS,
   (char*)"V.SetHBScale(float)\nC++: void SetHBScale(double a)\n\n"},
  {(char*)"GetHBScale", PyvtkMoleculeReaderBase_GetHBScale, METH_VARARGS,
   (char*)"V.GetHBScale() -> float\nC++: double GetHBScale()\n\n"},
  {(char*)"GetNumberOfAtoms", PyvtkMoleculeReaderBase_GetNumberOfAtoms, METH_VARARGS,
   (char*)"V.GetNumberOfAtoms() -> int\nC++: int GetNumberOfAtoms()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkMoleculeReaderBaseNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkMoleculeReaderBase_Methods,
    "vtkMoleculeReaderBase", modulename,
    NULL, NULL,
    PyvtkMoleculeReaderBase_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMoleculeReaderBase_Doc()
{
  static const char *docstring[] = {
    "vtkMoleculeReaderBase - read Molecular Data files\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkMoleculeReaderBase is a source object that reads Molecule files\nThe FileName must be specified\n\nThanks:\n\nDr. Jean M. Favre who developed and contributed this class\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMoleculeReaderBase(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMoleculeReaderBaseNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMoleculeReaderBase", o) != 0)
    {
    Py_DECREF(o);
    }

}

