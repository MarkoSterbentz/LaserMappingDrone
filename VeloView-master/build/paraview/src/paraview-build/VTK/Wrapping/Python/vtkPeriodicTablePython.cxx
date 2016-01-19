// python wrapper for vtkPeriodicTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkColor.h"
#include "vtkPeriodicTable.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPeriodicTable(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPeriodicTableNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPeriodicTable_Doc();


static PyObject *
PyvtkPeriodicTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPeriodicTable::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPeriodicTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPeriodicTable::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPeriodicTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPeriodicTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPeriodicTable::NewInstance());

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
PyvtkPeriodicTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPeriodicTable *tempr = vtkPeriodicTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetBlueObeliskData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlueObeliskData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBlueObeliskData *tempr = (ap.IsBound() ?
      op->GetBlueObeliskData() :
      op->vtkPeriodicTable::GetBlueObeliskData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned short tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkPeriodicTable::GetNumberOfElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetSymbol(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymbol");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetSymbol(temp0) :
      op->vtkPeriodicTable::GetSymbol(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetElementName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetElementName(temp0) :
      op->vtkPeriodicTable::GetElementName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetAtomicNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned short tempr = (ap.IsBound() ?
      op->GetAtomicNumber(temp0) :
      op->vtkPeriodicTable::GetAtomicNumber(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetCovalentRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCovalentRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    float tempr = (ap.IsBound() ?
      op->GetCovalentRadius(temp0) :
      op->vtkPeriodicTable::GetCovalentRadius(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetVDWRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVDWRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    float tempr = (ap.IsBound() ?
      op->GetVDWRadius(temp0) :
      op->vtkPeriodicTable::GetVDWRadius(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetDefaultLUT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultLUT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  vtkLookupTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
    {
    if (ap.IsBound())
      {
      op->GetDefaultLUT(temp0);
      }
    else
      {
      op->vtkPeriodicTable::GetDefaultLUT(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPeriodicTable_GetDefaultRGBTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultRGBTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
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
      op->GetDefaultRGBTuple(temp0, temp1);
      }
    else
      {
      op->vtkPeriodicTable::GetDefaultRGBTuple(temp0, temp1);
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
PyvtkPeriodicTable_GetDefaultRGBTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultRGBTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicTable *op = static_cast<vtkPeriodicTable *>(vp);

  unsigned short temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor3f tempr = (ap.IsBound() ?
      op->GetDefaultRGBTuple(temp0) :
      op->vtkPeriodicTable::GetDefaultRGBTuple(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3f");
      }
    }

  return result;
}

static PyObject *
PyvtkPeriodicTable_GetDefaultRGBTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPeriodicTable_GetDefaultRGBTuple_s1(self, args);
    case 1:
      return PyvtkPeriodicTable_GetDefaultRGBTuple_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDefaultRGBTuple");
  return NULL;
}


static PyMethodDef PyvtkPeriodicTable_Methods[] = {
  {(char*)"GetClassName", PyvtkPeriodicTable_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPeriodicTable_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPeriodicTable_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPeriodicTable\nC++: vtkPeriodicTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPeriodicTable_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPeriodicTable\nC++: vtkPeriodicTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBlueObeliskData", PyvtkPeriodicTable_GetBlueObeliskData, METH_VARARGS,
   (char*)"V.GetBlueObeliskData() -> vtkBlueObeliskData\nC++: virtual vtkBlueObeliskData *GetBlueObeliskData()\n\nAccess the static vtkBlueObeliskData object for raw access to\nBODR data.\n"},
  {(char*)"GetNumberOfElements", PyvtkPeriodicTable_GetNumberOfElements, METH_VARARGS,
   (char*)"V.GetNumberOfElements() -> int\nC++: unsigned short GetNumberOfElements()\n\nReturns the number of elements in the periodic table.\n"},
  {(char*)"GetSymbol", PyvtkPeriodicTable_GetSymbol, METH_VARARGS,
   (char*)"V.GetSymbol(int) -> string\nC++: const char *GetSymbol(const unsigned short atomicNum)\n\nGiven an atomic number, returns the symbol associated with the\nelement\n"},
  {(char*)"GetElementName", PyvtkPeriodicTable_GetElementName, METH_VARARGS,
   (char*)"V.GetElementName(int) -> string\nC++: const char *GetElementName(const unsigned short atomicNum)\n\nGiven an atomic number, returns the name of the element\n"},
  {(char*)"GetAtomicNumber", PyvtkPeriodicTable_GetAtomicNumber, METH_VARARGS,
   (char*)"V.GetAtomicNumber(string) -> int\nC++: unsigned short GetAtomicNumber(const vtkStdString &str)\n\nGiven a case-insensitive string that contains the symbol or name\nof an element, return the corresponding atomic number.\n"},
  {(char*)"GetCovalentRadius", PyvtkPeriodicTable_GetCovalentRadius, METH_VARARGS,
   (char*)"V.GetCovalentRadius(int) -> float\nC++: float GetCovalentRadius(const unsigned short atomicNum)\n\nGiven an atomic number, return the covalent radius of the atom\n"},
  {(char*)"GetVDWRadius", PyvtkPeriodicTable_GetVDWRadius, METH_VARARGS,
   (char*)"V.GetVDWRadius(int) -> float\nC++: float GetVDWRadius(const unsigned short atomicNum)\n\nGiven an atomic number, returns the van der Waals radius of the\natom\n"},
  {(char*)"GetDefaultLUT", PyvtkPeriodicTable_GetDefaultLUT, METH_VARARGS,
   (char*)"V.GetDefaultLUT(vtkLookupTable)\nC++: void GetDefaultLUT(vtkLookupTable *)\n\nFill the given vtkLookupTable to map atomic numbers to the\nfamiliar RGB tuples provided by the Blue Obelisk Data Repository\n"},
  {(char*)"GetDefaultRGBTuple", PyvtkPeriodicTable_GetDefaultRGBTuple, METH_VARARGS,
   (char*)"V.GetDefaultRGBTuple(int, [float, float, float])\nC++: void GetDefaultRGBTuple(unsigned short atomicNum,\n    float rgb[3])\nV.GetDefaultRGBTuple(int) -> vtkColor3f\nC++: vtkColor3f GetDefaultRGBTuple(unsigned short atomicNum)\n\nGiven an atomic number, return the familiar RGB tuple provided by\nthe Blue Obelisk Data Repository\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPeriodicTable_StaticNew()
{
  return vtkPeriodicTable::New();
}

PyObject *PyVTKClass_vtkPeriodicTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPeriodicTable_StaticNew,
    PyvtkPeriodicTable_Methods,
    "vtkPeriodicTable", modulename,
    NULL, NULL,
    PyvtkPeriodicTable_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPeriodicTable_Doc()
{
  static const char *docstring[] = {
    "vtkPeriodicTable - Access to information about the elements.\n\n",
    "Superclass: vtkObject\n\n",
    "Sourced from the Blue Obelisk Data Repository\n\nSee Also:\n\nvtkBlueObeliskData vtkBlueObeliskDataParser\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPeriodicTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPeriodicTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPeriodicTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

