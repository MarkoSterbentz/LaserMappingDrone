// python wrapper for vtkProgrammableElectronicData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProgrammableElectronicData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProgrammableElectronicData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProgrammableElectronicDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractElectronicDataNew
extern "C" { PyObject *PyVTKClass_vtkAbstractElectronicDataNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractElectronicDataNew
#endif

static const char **PyvtkProgrammableElectronicData_Doc();


static PyObject *
PyvtkProgrammableElectronicData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProgrammableElectronicData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProgrammableElectronicData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProgrammableElectronicData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProgrammableElectronicData::NewInstance());

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
PyvtkProgrammableElectronicData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProgrammableElectronicData *tempr = vtkProgrammableElectronicData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_GetNumberOfMOs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMOs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfMOs() :
      op->vtkProgrammableElectronicData::GetNumberOfMOs());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_SetNumberOfMOs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfMOs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfMOs(temp0);
      }
    else
      {
      op->vtkProgrammableElectronicData::SetNumberOfMOs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_GetNumberOfElectrons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElectrons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfElectrons() :
      op->vtkProgrammableElectronicData::GetNumberOfElectrons());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_SetNumberOfElectrons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfElectrons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfElectrons(temp0);
      }
    else
      {
      op->vtkProgrammableElectronicData::SetNumberOfElectrons(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_GetMO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetMO(temp0) :
      op->vtkProgrammableElectronicData::GetMO(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_SetMO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  vtkIdType temp0;
  vtkImageData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetMO(temp0, temp1);
      }
    else
      {
      op->vtkProgrammableElectronicData::SetMO(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_GetElectronDensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElectronDensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetElectronDensity() :
      op->vtkProgrammableElectronicData::GetElectronDensity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_SetElectronDensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElectronDensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetElectronDensity(temp0);
      }
    else
      {
      op->vtkProgrammableElectronicData::SetElectronDensity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPadding(temp0);
      }
    else
      {
      op->vtkProgrammableElectronicData::SetPadding(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkProgrammableElectronicData::GetPadding());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

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
      op->vtkProgrammableElectronicData::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProgrammableElectronicData_Methods[] = {
  {(char*)"GetClassName", PyvtkProgrammableElectronicData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProgrammableElectronicData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProgrammableElectronicData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProgrammableElectronicData\nC++: vtkProgrammableElectronicData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProgrammableElectronicData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProgrammableElectronicData\nC++: vtkProgrammableElectronicData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfMOs", PyvtkProgrammableElectronicData_GetNumberOfMOs, METH_VARARGS,
   (char*)"V.GetNumberOfMOs() -> int\nC++: virtual vtkIdType GetNumberOfMOs()\n\nGet/Set the number of molecular orbitals. Setting this will\nresize this internal array of MOs.\n"},
  {(char*)"SetNumberOfMOs", PyvtkProgrammableElectronicData_SetNumberOfMOs, METH_VARARGS,
   (char*)"V.SetNumberOfMOs(int)\nC++: virtual void SetNumberOfMOs(vtkIdType)\n\nGet/Set the number of molecular orbitals. Setting this will\nresize this internal array of MOs.\n"},
  {(char*)"GetNumberOfElectrons", PyvtkProgrammableElectronicData_GetNumberOfElectrons, METH_VARARGS,
   (char*)"V.GetNumberOfElectrons() -> int\nC++: vtkIdType GetNumberOfElectrons()\n\nGet/Set the number of electrons in the molecule. Needed for\nHOMO/LUMO convenience functions\n"},
  {(char*)"SetNumberOfElectrons", PyvtkProgrammableElectronicData_SetNumberOfElectrons, METH_VARARGS,
   (char*)"V.SetNumberOfElectrons(int)\nC++: void SetNumberOfElectrons(vtkIdType a)\n\nGet/Set the number of electrons in the molecule. Needed for\nHOMO/LUMO convenience functions\n"},
  {(char*)"GetMO", PyvtkProgrammableElectronicData_GetMO, METH_VARARGS,
   (char*)"V.GetMO(int) -> vtkImageData\nC++: virtual vtkImageData *GetMO(vtkIdType orbitalNumber)\n\nGet/Set the vtkImageData for the requested molecular orbital.\n"},
  {(char*)"SetMO", PyvtkProgrammableElectronicData_SetMO, METH_VARARGS,
   (char*)"V.SetMO(int, vtkImageData)\nC++: void SetMO(vtkIdType orbitalNumber, vtkImageData *data)\n\nGet/Set the vtkImageData for the requested molecular orbital.\n"},
  {(char*)"GetElectronDensity", PyvtkProgrammableElectronicData_GetElectronDensity, METH_VARARGS,
   (char*)"V.GetElectronDensity() -> vtkImageData\nC++: vtkImageData *GetElectronDensity()\n\nGet/Set the vtkImageData for the molecule's electron density.\n"},
  {(char*)"SetElectronDensity", PyvtkProgrammableElectronicData_SetElectronDensity, METH_VARARGS,
   (char*)"V.SetElectronDensity(vtkImageData)\nC++: virtual void SetElectronDensity(vtkImageData *)\n\nGet/Set the vtkImageData for the molecule's electron density.\n"},
  {(char*)"SetPadding", PyvtkProgrammableElectronicData_SetPadding, METH_VARARGS,
   (char*)"V.SetPadding(float)\nC++: void SetPadding(double a)\n\nSet/Get the padding around the molecule to which the cube\nextends. This is used to determine the dataset bounds.\n"},
  {(char*)"GetPadding", PyvtkProgrammableElectronicData_GetPadding, METH_VARARGS,
   (char*)"V.GetPadding() -> float\nC++: double GetPadding()\n\nSet/Get the padding around the molecule to which the cube\nextends. This is used to determine the dataset bounds.\n"},
  {(char*)"DeepCopy", PyvtkProgrammableElectronicData_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *obj)\n\nDeep copies the data object into this.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProgrammableElectronicData_StaticNew()
{
  return vtkProgrammableElectronicData::New();
}

PyObject *PyVTKClass_vtkProgrammableElectronicDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProgrammableElectronicData_StaticNew,
    PyvtkProgrammableElectronicData_Methods,
    "vtkProgrammableElectronicData", modulename,
    NULL, NULL,
    PyvtkProgrammableElectronicData_Doc(),
    PyVTKClass_vtkAbstractElectronicDataNew(modulename));
  return cls;
}

const char **PyvtkProgrammableElectronicData_Doc()
{
  static const char *docstring[] = {
    "vtkProgrammableElectronicData - Provides access to and storage of\n\n",
    "Superclass: vtkAbstractElectronicData\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProgrammableElectronicData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProgrammableElectronicDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProgrammableElectronicData", o) != 0)
    {
    Py_DECREF(o);
    }

}

