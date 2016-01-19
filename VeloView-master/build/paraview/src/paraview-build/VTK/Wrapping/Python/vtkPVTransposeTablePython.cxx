// python wrapper for vtkPVTransposeTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVTransposeTable.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVTransposeTable(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVTransposeTableNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTransposeTableNew
extern "C" { PyObject *PyVTKClass_vtkTransposeTableNew(const char *); }
#define DECLARED_PyVTKClass_vtkTransposeTableNew
#endif

static const char **PyvtkPVTransposeTable_Doc();


static PyObject *
PyvtkPVTransposeTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVTransposeTable::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTransposeTable::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVTransposeTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTransposeTable::NewInstance());

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
PyvtkPVTransposeTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVTransposeTable *tempr = vtkPVTransposeTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_EnableAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

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
      op->vtkPVTransposeTable::EnableAttributeArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_ClearAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearAttributeArrays();
      }
    else
      {
      op->vtkPVTransposeTable::ClearAttributeArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_GetDoNotTranspose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoNotTranspose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDoNotTranspose() :
      op->vtkPVTransposeTable::GetDoNotTranspose());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_SetDoNotTranspose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoNotTranspose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDoNotTranspose(temp0);
      }
    else
      {
      op->vtkPVTransposeTable::SetDoNotTranspose(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_DoNotTransposeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoNotTransposeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DoNotTransposeOn();
      }
    else
      {
      op->vtkPVTransposeTable::DoNotTransposeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTransposeTable_DoNotTransposeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoNotTransposeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransposeTable *op = static_cast<vtkPVTransposeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DoNotTransposeOff();
      }
    else
      {
      op->vtkPVTransposeTable::DoNotTransposeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVTransposeTable_Methods[] = {
  {(char*)"GetClassName", PyvtkPVTransposeTable_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVTransposeTable_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVTransposeTable_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVTransposeTable\nC++: vtkPVTransposeTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVTransposeTable_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVTransposeTable\nC++: vtkPVTransposeTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EnableAttributeArray", PyvtkPVTransposeTable_EnableAttributeArray, METH_VARARGS,
   (char*)"V.EnableAttributeArray(string)\nC++: void EnableAttributeArray(const char *)\n\nInterface for preparing selection of arrays in ParaView.\n"},
  {(char*)"ClearAttributeArrays", PyvtkPVTransposeTable_ClearAttributeArrays, METH_VARARGS,
   (char*)"V.ClearAttributeArrays()\nC++: void ClearAttributeArrays()\n\nInterface for preparing selection of arrays in ParaView.\n"},
  {(char*)"GetDoNotTranspose", PyvtkPVTransposeTable_GetDoNotTranspose, METH_VARARGS,
   (char*)"V.GetDoNotTranspose() -> bool\nC++: bool GetDoNotTranspose()\n\nCan be used to bypass the transposition code. The output is then\nthe table made with the selected columns.\n"},
  {(char*)"SetDoNotTranspose", PyvtkPVTransposeTable_SetDoNotTranspose, METH_VARARGS,
   (char*)"V.SetDoNotTranspose(bool)\nC++: void SetDoNotTranspose(bool a)\n\nCan be used to bypass the transposition code. The output is then\nthe table made with the selected columns.\n"},
  {(char*)"DoNotTransposeOn", PyvtkPVTransposeTable_DoNotTransposeOn, METH_VARARGS,
   (char*)"V.DoNotTransposeOn()\nC++: void DoNotTransposeOn()\n\nCan be used to bypass the transposition code. The output is then\nthe table made with the selected columns.\n"},
  {(char*)"DoNotTransposeOff", PyvtkPVTransposeTable_DoNotTransposeOff, METH_VARARGS,
   (char*)"V.DoNotTransposeOff()\nC++: void DoNotTransposeOff()\n\nCan be used to bypass the transposition code. The output is then\nthe table made with the selected columns.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVTransposeTable_StaticNew()
{
  return vtkPVTransposeTable::New();
}

PyObject *PyVTKClass_vtkPVTransposeTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVTransposeTable_StaticNew,
    PyvtkPVTransposeTable_Methods,
    "vtkPVTransposeTable", modulename,
    NULL, NULL,
    PyvtkPVTransposeTable_Doc(),
    PyVTKClass_vtkTransposeTableNew(modulename));
  return cls;
}

const char **PyvtkPVTransposeTable_Doc()
{
  static const char *docstring[] = {
    "vtkPVTransposeTable - create a subtable made with selected\n\n",
    "Superclass: vtkTransposeTable\n\n",
    "This ParaView filter allows to select the columns of the input table\nthat must be included in the transposed table. This filter can also\nbe use to extract a non transposed table made by the selected\ncolumns.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVTransposeTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVTransposeTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVTransposeTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

