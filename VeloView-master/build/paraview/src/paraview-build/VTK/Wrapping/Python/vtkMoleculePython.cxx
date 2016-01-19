// python wrapper for vtkMolecule
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAtom.h"
#include "vtkVector.h"
#include "vtkBond.h"
#include "vtkMolecule.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMolecule(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMoleculeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUndirectedGraphNew
extern "C" { PyObject *PyVTKClass_vtkUndirectedGraphNew(const char *); }
#define DECLARED_PyVTKClass_vtkUndirectedGraphNew
#endif

static const char **PyvtkMolecule_Doc();


static PyObject *
PyvtkMolecule_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMolecule::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMolecule::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMolecule *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMolecule::NewInstance());

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
PyvtkMolecule_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMolecule *tempr = vtkMolecule::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkMolecule::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkMolecule::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_GetNumberOfAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfAtoms() :
      op->vtkMolecule::GetNumberOfAtoms());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_GetNumberOfBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfBonds() :
      op->vtkMolecule::GetNumberOfBonds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_GetAtomAtomicNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomAtomicNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned short tempr = (ap.IsBound() ?
      op->GetAtomAtomicNumber(temp0) :
      op->vtkMolecule::GetAtomAtomicNumber(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_SetAtomAtomicNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomAtomicNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  unsigned short temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAtomAtomicNumber(temp0, temp1);
      }
    else
      {
      op->vtkMolecule::SetAtomAtomicNumber(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_SetAtomPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  vtkVector3f *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector3f"))
    {
    if (ap.IsBound())
      {
      op->SetAtomPosition(temp0, *temp1);
      }
    else
      {
      op->vtkMolecule::SetAtomPosition(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkMolecule_SetAtomPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetAtomPosition(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkMolecule::SetAtomPosition(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMolecule_SetAtomPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkMolecule_SetAtomPosition_s1(self, args);
    case 4:
      return PyvtkMolecule_SetAtomPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAtomPosition");
  return NULL;
}



static PyObject *
PyvtkMolecule_GetAtomPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkVector3f tempr = (ap.IsBound() ?
      op->GetAtomPosition(temp0) :
      op->vtkMolecule::GetAtomPosition(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3f");
      }
    }

  return result;
}

static PyObject *
PyvtkMolecule_GetAtomPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  float temp1[3];
  float save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetAtomPosition(temp0, temp1);
      }
    else
      {
      op->vtkMolecule::GetAtomPosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMolecule_GetAtomPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkMolecule_GetAtomPosition_s1(self, args);
    case 2:
      return PyvtkMolecule_GetAtomPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetAtomPosition");
  return NULL;
}



static PyObject *
PyvtkMolecule_SetBondOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  unsigned short temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBondOrder(temp0, temp1);
      }
    else
      {
      op->vtkMolecule::SetBondOrder(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_GetBondOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned short tempr = (ap.IsBound() ?
      op->GetBondOrder(temp0) :
      op->vtkMolecule::GetBondOrder(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_GetBondLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBondLength(temp0) :
      op->vtkMolecule::GetBondLength(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_GetAtomicPositionArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicPositionArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetAtomicPositionArray() :
      op->vtkMolecule::GetAtomicPositionArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_GetAtomicNumberArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicNumberArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUnsignedShortArray *tempr = (ap.IsBound() ?
      op->GetAtomicNumberArray() :
      op->vtkMolecule::GetAtomicNumberArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_GetElectronicData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElectronicData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractElectronicData *tempr = (ap.IsBound() ?
      op->GetElectronicData() :
      op->vtkMolecule::GetElectronicData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_SetElectronicData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElectronicData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkAbstractElectronicData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractElectronicData"))
    {
    if (ap.IsBound())
      {
      op->SetElectronicData(temp0);
      }
    else
      {
      op->vtkMolecule::SetElectronicData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkMolecule::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

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
      op->vtkMolecule::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_ShallowCopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkMolecule *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMolecule"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopyStructure(temp0);
      }
    else
      {
      op->vtkMolecule::ShallowCopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_DeepCopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkMolecule *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMolecule"))
    {
    if (ap.IsBound())
      {
      op->DeepCopyStructure(temp0);
      }
    else
      {
      op->vtkMolecule::DeepCopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_ShallowCopyAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopyAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkMolecule *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMolecule"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopyAttributes(temp0);
      }
    else
      {
      op->vtkMolecule::ShallowCopyAttributes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMolecule_DeepCopyAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopyAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMolecule *op = static_cast<vtkMolecule *>(vp);

  vtkMolecule *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMolecule"))
    {
    if (ap.IsBound())
      {
      op->DeepCopyAttributes(temp0);
      }
    else
      {
      op->vtkMolecule::DeepCopyAttributes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMolecule_Methods[] = {
  {(char*)"GetClassName", PyvtkMolecule_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMolecule_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMolecule_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMolecule\nC++: vtkMolecule *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMolecule_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMolecule\nC++: vtkMolecule *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkMolecule_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\n"},
  {(char*)"GetDataObjectType", PyvtkMolecule_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"GetNumberOfAtoms", PyvtkMolecule_GetNumberOfAtoms, METH_VARARGS,
   (char*)"V.GetNumberOfAtoms() -> int\nC++: vtkIdType GetNumberOfAtoms()\n\nReturn the number of atoms in the molecule.\n"},
  {(char*)"GetNumberOfBonds", PyvtkMolecule_GetNumberOfBonds, METH_VARARGS,
   (char*)"V.GetNumberOfBonds() -> int\nC++: vtkIdType GetNumberOfBonds()\n\nReturn the number of bonds in the molecule.\n"},
  {(char*)"GetAtomAtomicNumber", PyvtkMolecule_GetAtomAtomicNumber, METH_VARARGS,
   (char*)"V.GetAtomAtomicNumber(int) -> int\nC++: unsigned short GetAtomAtomicNumber(vtkIdType atomId)\n\nReturn the atomic number of the atom with the specified id.\n"},
  {(char*)"SetAtomAtomicNumber", PyvtkMolecule_SetAtomAtomicNumber, METH_VARARGS,
   (char*)"V.SetAtomAtomicNumber(int, int)\nC++: void SetAtomAtomicNumber(vtkIdType atomId,\n    unsigned short atomicNum)\n\nSet the atomic number of the atom with the specified id.\n"},
  {(char*)"SetAtomPosition", PyvtkMolecule_SetAtomPosition, METH_VARARGS,
   (char*)"V.SetAtomPosition(int, vtkVector3f)\nC++: void SetAtomPosition(vtkIdType atomId,\n    const vtkVector3f &pos)\nV.SetAtomPosition(int, float, float, float)\nC++: void SetAtomPosition(vtkIdType atomId, double x, double y,\n    double z)\n\nSet the position of the atom with the specified id.\n"},
  {(char*)"GetAtomPosition", PyvtkMolecule_GetAtomPosition, METH_VARARGS,
   (char*)"V.GetAtomPosition(int) -> vtkVector3f\nC++: vtkVector3f GetAtomPosition(vtkIdType atomId)\nV.GetAtomPosition(int, [float, float, float])\nC++: void GetAtomPosition(vtkIdType atomId, float pos[3])\n\nGet the position of the atom with the specified id.\n"},
  {(char*)"SetBondOrder", PyvtkMolecule_SetBondOrder, METH_VARARGS,
   (char*)"V.SetBondOrder(int, int)\nC++: void SetBondOrder(vtkIdType bondId, unsigned short order)\n\n"},
  {(char*)"GetBondOrder", PyvtkMolecule_GetBondOrder, METH_VARARGS,
   (char*)"V.GetBondOrder(int) -> int\nC++: unsigned short GetBondOrder(vtkIdType bondId)\n\n"},
  {(char*)"GetBondLength", PyvtkMolecule_GetBondLength, METH_VARARGS,
   (char*)"V.GetBondLength(int) -> float\nC++: double GetBondLength(vtkIdType bondId)\n\n"},
  {(char*)"GetAtomicPositionArray", PyvtkMolecule_GetAtomicPositionArray, METH_VARARGS,
   (char*)"V.GetAtomicPositionArray() -> vtkPoints\nC++: vtkPoints *GetAtomicPositionArray()\n\nAccess the raw arrays used in this vtkMolecule instance\n"},
  {(char*)"GetAtomicNumberArray", PyvtkMolecule_GetAtomicNumberArray, METH_VARARGS,
   (char*)"V.GetAtomicNumberArray() -> vtkUnsignedShortArray\nC++: vtkUnsignedShortArray *GetAtomicNumberArray()\n\nAccess the raw arrays used in this vtkMolecule instance\n"},
  {(char*)"GetElectronicData", PyvtkMolecule_GetElectronicData, METH_VARARGS,
   (char*)"V.GetElectronicData() -> vtkAbstractElectronicData\nC++: vtkAbstractElectronicData *GetElectronicData()\n\nSet/Get the AbstractElectronicData-subclassed object for this\nmolecule.\n"},
  {(char*)"SetElectronicData", PyvtkMolecule_SetElectronicData, METH_VARARGS,
   (char*)"V.SetElectronicData(vtkAbstractElectronicData)\nC++: virtual void SetElectronicData(vtkAbstractElectronicData *)\n\nSet/Get the AbstractElectronicData-subclassed object for this\nmolecule.\n"},
  {(char*)"ShallowCopy", PyvtkMolecule_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *obj)\n\nShallow copies the data object into this molecule.\n"},
  {(char*)"DeepCopy", PyvtkMolecule_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *obj)\n\nDeep copies the data object into this molecule.\n"},
  {(char*)"ShallowCopyStructure", PyvtkMolecule_ShallowCopyStructure, METH_VARARGS,
   (char*)"V.ShallowCopyStructure(vtkMolecule)\nC++: virtual void ShallowCopyStructure(vtkMolecule *m)\n\nShallow copies the atoms and bonds from m into this.\n"},
  {(char*)"DeepCopyStructure", PyvtkMolecule_DeepCopyStructure, METH_VARARGS,
   (char*)"V.DeepCopyStructure(vtkMolecule)\nC++: virtual void DeepCopyStructure(vtkMolecule *m)\n\nDeep copies the atoms and bonds from m into this.\n"},
  {(char*)"ShallowCopyAttributes", PyvtkMolecule_ShallowCopyAttributes, METH_VARARGS,
   (char*)"V.ShallowCopyAttributes(vtkMolecule)\nC++: virtual void ShallowCopyAttributes(vtkMolecule *m)\n\nShallow copies attributes (i.e. everything besides atoms and\nbonds) fromm into this.\n"},
  {(char*)"DeepCopyAttributes", PyvtkMolecule_DeepCopyAttributes, METH_VARARGS,
   (char*)"V.DeepCopyAttributes(vtkMolecule)\nC++: virtual void DeepCopyAttributes(vtkMolecule *m)\n\nDeep copies attributes (i.e. everything besides atoms and bonds)\nfromm into this.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMolecule_StaticNew()
{
  return vtkMolecule::New();
}

PyObject *PyVTKClass_vtkMoleculeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMolecule_StaticNew,
    PyvtkMolecule_Methods,
    "vtkMolecule", modulename,
    NULL, NULL,
    PyvtkMolecule_Doc(),
    PyVTKClass_vtkUndirectedGraphNew(modulename));
  return cls;
}

const char **PyvtkMolecule_Doc()
{
  static const char *docstring[] = {
    "vtkMolecule - class describing a molecule\n\n",
    "Superclass: vtkUndirectedGraph\n\n",
    "vtkMolecule and the convenience classes vtkAtom and vtkBond describe\nthe geometry and connectivity of a molecule. The molecule can be\nconstructed using the AppendAtom() and AppendBond() methods in one of\ntwo ways; either by fully specifying the atom/bond in a single call,\nor by incrementally setting the various attributes using the\nconvience vtkAtom and vtkBond classes:\n\nSingle call:vtkMolecule *m",
    "ol = vtkMolecule::New();\nvtkAtom h1 = mol->AppendAtom(1, 0.0, 0.0, -0.5);\nvtkAtom h2 = mol->AppendAtom(1, 0.0, 0.0,  0.5);\nvtkBond b  = mol->AppendBond(h1, h2, 1);\n\nIncremental:vtkMolecule *mol = vtkMolecule::New();\n\nvtkAtom h1 = mol->AppendAtom(); h1.SetAtomicNumber(1);\nh1.SetPosition(0.0, 0.0, -0.5);\n\nvtkAtom h2 = mol->AppendAtom(); h2.SetAtomicNumber(1); vtkVector3d\ndisplacement (0.0, 0.0, 1.0)",
    ";\nh2.SetPosition(h1.GetPositionAsVector3d() + displacement);\n\nvtkBond b  = mol->AppendBond(h1, h2, 1);\n\nBoth of the above methods will produce the same molecule, two\nhydrogens connected with a 1.0 Angstrom single bond, aligned to the\nz-axis. The second example also demostrates the use of VTK's\nvtkVector class, which is fully supported by the Chemistry kit.\n\nThe vtkMolecule object is intended to be",
    " used with the\nvtkMoleculeMapper class for visualizing molecular structure using\ncommon rendering techniques.\n\n\\warning While direct use of the underlying vtkUndirectedGraph\nstructure is possible due to vtkMolecule's public inheritance, this\nshould not be relied upon and may change in the future.\n\nSee Also:\n\nvtkAtom vtkBond vtkMoleculeMapper vtkPeriodicTable\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMolecule(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMoleculeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMolecule", o) != 0)
    {
    Py_DECREF(o);
    }

}

