// python wrapper for vtkAbstractElectronicData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAbstractElectronicData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAbstractElectronicData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAbstractElectronicDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkAbstractElectronicData_Doc();


static PyObject *
PyvtkAbstractElectronicData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAbstractElectronicData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractElectronicData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractElectronicData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractElectronicData::NewInstance());

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
PyvtkAbstractElectronicData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAbstractElectronicData *tempr = vtkAbstractElectronicData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetNumberOfMOs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMOs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetNumberOfMOs();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetNumberOfElectrons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElectrons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetNumberOfElectrons();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetMO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkImageData *tempr = op->GetMO(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetElectronDensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElectronDensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = op->GetElectronDensity();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetHOMO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHOMO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetHOMO() :
      op->vtkAbstractElectronicData::GetHOMO());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetLUMO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLUMO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetLUMO() :
      op->vtkAbstractElectronicData::GetLUMO());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetHOMOOrbitalNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHOMOOrbitalNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetHOMOOrbitalNumber() :
      op->vtkAbstractElectronicData::GetHOMOOrbitalNumber());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetLUMOOrbitalNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLUMOOrbitalNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetLUMOOrbitalNumber() :
      op->vtkAbstractElectronicData::GetLUMOOrbitalNumber());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_IsHOMO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsHOMO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsHOMO(temp0) :
      op->vtkAbstractElectronicData::IsHOMO(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_IsLUMO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLUMO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsLUMO(temp0) :
      op->vtkAbstractElectronicData::IsLUMO(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkAbstractElectronicData::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkAbstractElectronicData::GetPadding());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractElectronicData_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractElectronicData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractElectronicData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractElectronicData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAbstractElectronicData\nC++: vtkAbstractElectronicData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAbstractElectronicData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAbstractElectronicData\nC++: vtkAbstractElectronicData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfMOs", PyvtkAbstractElectronicData_GetNumberOfMOs, METH_VARARGS,
   (char*)"V.GetNumberOfMOs() -> int\nC++: virtual vtkIdType GetNumberOfMOs()\n\nReturns the number of molecular orbitals available.\n"},
  {(char*)"GetNumberOfElectrons", PyvtkAbstractElectronicData_GetNumberOfElectrons, METH_VARARGS,
   (char*)"V.GetNumberOfElectrons() -> int\nC++: virtual vtkIdType GetNumberOfElectrons()\n\nReturns the number of electrons in the molecule.\n"},
  {(char*)"GetMO", PyvtkAbstractElectronicData_GetMO, METH_VARARGS,
   (char*)"V.GetMO(int) -> vtkImageData\nC++: virtual vtkImageData *GetMO(vtkIdType orbitalNumber)\n\nReturns the vtkImageData for the requested molecular orbital.\n"},
  {(char*)"GetElectronDensity", PyvtkAbstractElectronicData_GetElectronDensity, METH_VARARGS,
   (char*)"V.GetElectronDensity() -> vtkImageData\nC++: virtual vtkImageData *GetElectronDensity()\n\nReturns vtkImageData for the molecule's electron density. The\ndata will be calculated when first requested, and cached for\nlater requests.\n"},
  {(char*)"GetHOMO", PyvtkAbstractElectronicData_GetHOMO, METH_VARARGS,
   (char*)"V.GetHOMO() -> vtkImageData\nC++: vtkImageData *GetHOMO()\n\nReturns vtkImageData for the Highest Occupied Molecular Orbital.\n"},
  {(char*)"GetLUMO", PyvtkAbstractElectronicData_GetLUMO, METH_VARARGS,
   (char*)"V.GetLUMO() -> vtkImageData\nC++: vtkImageData *GetLUMO()\n\nReturns vtkImageData for the Lowest Unoccupied Molecular Orbital.\n"},
  {(char*)"GetHOMOOrbitalNumber", PyvtkAbstractElectronicData_GetHOMOOrbitalNumber, METH_VARARGS,
   (char*)"V.GetHOMOOrbitalNumber() -> int\nC++: vtkIdType GetHOMOOrbitalNumber()\n\n"},
  {(char*)"GetLUMOOrbitalNumber", PyvtkAbstractElectronicData_GetLUMOOrbitalNumber, METH_VARARGS,
   (char*)"V.GetLUMOOrbitalNumber() -> int\nC++: vtkIdType GetLUMOOrbitalNumber()\n\n"},
  {(char*)"IsHOMO", PyvtkAbstractElectronicData_IsHOMO, METH_VARARGS,
   (char*)"V.IsHOMO(int) -> bool\nC++: bool IsHOMO(vtkIdType orbitalNumber)\n\nReturns true if the given orbital number is the Highest Occupied\nMolecular Orbital, false otherwise.\n"},
  {(char*)"IsLUMO", PyvtkAbstractElectronicData_IsLUMO, METH_VARARGS,
   (char*)"V.IsLUMO(int) -> bool\nC++: bool IsLUMO(vtkIdType orbitalNumber)\n\nReturns true if the given orbital number is the Lowest Unoccupied\nMolecular Orbital, false otherwise.\n"},
  {(char*)"DeepCopy", PyvtkAbstractElectronicData_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *obj)\n\nDeep copies the data object into this.\n"},
  {(char*)"GetPadding", PyvtkAbstractElectronicData_GetPadding, METH_VARARGS,
   (char*)"V.GetPadding() -> float\nC++: double GetPadding()\n\nGet the padding between the molecule and the cube boundaries.\nThis is used to determine the dataset's bounds.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractElectronicDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractElectronicData_Methods,
    "vtkAbstractElectronicData", modulename,
    NULL, NULL,
    PyvtkAbstractElectronicData_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkAbstractElectronicData_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractElectronicData - Provides access to and storage of\n\n",
    "Superclass: vtkDataObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractElectronicData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractElectronicDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractElectronicData", o) != 0)
    {
    Py_DECREF(o);
    }

}

