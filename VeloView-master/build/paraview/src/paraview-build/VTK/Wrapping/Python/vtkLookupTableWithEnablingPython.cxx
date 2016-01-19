// python wrapper for vtkLookupTableWithEnabling
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLookupTableWithEnabling.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLookupTableWithEnabling(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLookupTableWithEnablingNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLookupTableNew
extern "C" { PyObject *PyVTKClass_vtkLookupTableNew(const char *); }
#define DECLARED_PyVTKClass_vtkLookupTableNew
#endif

static const char **PyvtkLookupTableWithEnabling_Doc();


static PyObject *
PyvtkLookupTableWithEnabling_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLookupTableWithEnabling::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLookupTableWithEnabling::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLookupTableWithEnabling *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLookupTableWithEnabling::NewInstance());

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
PyvtkLookupTableWithEnabling_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLookupTableWithEnabling *tempr = vtkLookupTableWithEnabling::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_GetEnabledArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetEnabledArray() :
      op->vtkLookupTableWithEnabling::GetEnabledArray());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_SetEnabledArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetEnabledArray(temp0);
      }
    else
      {
      op->vtkLookupTableWithEnabling::SetEnabledArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_MapScalarsThroughTable2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsThroughTable2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  void  *temp0 = NULL;
  unsigned char *temp1 = NULL;
  unsigned char *save1 = NULL;
  unsigned char small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new unsigned char[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkLookupTableWithEnabling::MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_DisableColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char *temp3 = NULL;
  unsigned char *save3 = NULL;
  unsigned char small3[8];
  int size3 = 0;
  unsigned char *temp4 = NULL;
  unsigned char *save4 = NULL;
  unsigned char small4[8];
  int size4 = 0;
  unsigned char *temp5 = NULL;
  unsigned char *save5 = NULL;
  unsigned char small5[8];
  int size5 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new unsigned char[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new unsigned char[2*size4];
      }
    save4 = &temp4[size4];
    size5 = ap.GetArgSize(5);
    temp5 = small5;
    if (size5 > 4)
      {
      temp5 = new unsigned char[2*size5];
      }
    save5 = &temp5[size5];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);

    if (ap.IsBound())
      {
      op->DisableColor(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkLookupTableWithEnabling::DisableColor(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }
  if (temp5 && temp5 != small5)
    {
    delete [] temp5;
    }

  return result;
}

static PyMethodDef PyvtkLookupTableWithEnabling_Methods[] = {
  {(char*)"GetClassName", PyvtkLookupTableWithEnabling_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLookupTableWithEnabling_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLookupTableWithEnabling_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLookupTableWithEnabling\nC++: vtkLookupTableWithEnabling *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLookupTableWithEnabling_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLookupTableWithEnabling\nC++: vtkLookupTableWithEnabling *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetEnabledArray", PyvtkLookupTableWithEnabling_GetEnabledArray, METH_VARARGS,
   (char*)"V.GetEnabledArray() -> vtkDataArray\nC++: vtkDataArray *GetEnabledArray()\n\nThis must be set before MapScalars() is called. Indices of this\narray must map directly to those in the scalars array passed to\nMapScalars(). Values of 0 in the array indicate the color should\nbe desaturatated.\n"},
  {(char*)"SetEnabledArray", PyvtkLookupTableWithEnabling_SetEnabledArray, METH_VARARGS,
   (char*)"V.SetEnabledArray(vtkDataArray)\nC++: virtual void SetEnabledArray(vtkDataArray *enabledArray)\n\nThis must be set before MapScalars() is called. Indices of this\narray must map directly to those in the scalars array passed to\nMapScalars(). Values of 0 in the array indicate the color should\nbe desaturatated.\n"},
  {(char*)"MapScalarsThroughTable2", PyvtkLookupTableWithEnabling_MapScalarsThroughTable2, METH_VARARGS,
   (char*)"V.MapScalarsThroughTable2(, [int, ...], int, int, int, int)\nC++: void MapScalarsThroughTable2(void *input,\n    unsigned char *output, int inputDataType, int numberOfValues,\n    int inputIncrement, int outputIncrement)\n\nMap a set of scalars through the lookup table.\n"},
  {(char*)"DisableColor", PyvtkLookupTableWithEnabling_DisableColor, METH_VARARGS,
   (char*)"V.DisableColor(int, int, int, [int, ...], [int, ...], [int, ...])\nC++: virtual void DisableColor(unsigned char r, unsigned char g,\n    unsigned char b, unsigned char *rd, unsigned char *gd,\n    unsigned char *bd)\n\nA convenience method for taking a color and desaturating it.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLookupTableWithEnabling_StaticNew()
{
  return vtkLookupTableWithEnabling::New();
}

PyObject *PyVTKClass_vtkLookupTableWithEnablingNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLookupTableWithEnabling_StaticNew,
    PyvtkLookupTableWithEnabling_Methods,
    "vtkLookupTableWithEnabling", modulename,
    NULL, NULL,
    PyvtkLookupTableWithEnabling_Doc(),
    PyVTKClass_vtkLookupTableNew(modulename));
  return cls;
}

const char **PyvtkLookupTableWithEnabling_Doc()
{
  static const char *docstring[] = {
    "vtkLookupTableWithEnabling - A lookup table that allows for an\n\n",
    "Superclass: vtkLookupTable\n\n",
    "vtkLookupTableWithEnabling \"disables\" or \"grays out\" output colors\nbased on whether the given value in EnabledArray is \"0\" or not.\n\nCaveats:\n\nYou must set the EnabledArray before MapScalars() is called. Indices\nof EnabledArray must map directly to those of the array passed to\nMapScalars().\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLookupTableWithEnabling(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLookupTableWithEnablingNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLookupTableWithEnabling", o) != 0)
    {
    Py_DECREF(o);
    }

}

