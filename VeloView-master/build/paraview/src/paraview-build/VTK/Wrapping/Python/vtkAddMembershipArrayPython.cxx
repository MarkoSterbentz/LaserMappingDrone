// python wrapper for vtkAddMembershipArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAddMembershipArray.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAddMembershipArray(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAddMembershipArrayNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkAddMembershipArray_Doc();


static PyObject *
PyvtkAddMembershipArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAddMembershipArray::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAddMembershipArray::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAddMembershipArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAddMembershipArray::NewInstance());

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
PyvtkAddMembershipArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAddMembershipArray *tempr = vtkAddMembershipArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkAddMembershipArray::GetFieldType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldType(temp0);
      }
    else
      {
      op->vtkAddMembershipArray::SetFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetFieldTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldTypeMinValue() :
      op->vtkAddMembershipArray::GetFieldTypeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetFieldTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldTypeMaxValue() :
      op->vtkAddMembershipArray::GetFieldTypeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_SetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputArrayName(temp0);
      }
    else
      {
      op->vtkAddMembershipArray::SetOutputArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetOutputArrayName() :
      op->vtkAddMembershipArray::GetOutputArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_SetInputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayName(temp0);
      }
    else
      {
      op->vtkAddMembershipArray::SetInputArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetInputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetInputArrayName() :
      op->vtkAddMembershipArray::GetInputArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_SetInputValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->SetInputValues(temp0);
      }
    else
      {
      op->vtkAddMembershipArray::SetInputValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetInputValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetInputValues() :
      op->vtkAddMembershipArray::GetInputValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAddMembershipArray_Methods[] = {
  {(char*)"GetClassName", PyvtkAddMembershipArray_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAddMembershipArray_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAddMembershipArray_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAddMembershipArray\nC++: vtkAddMembershipArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAddMembershipArray_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAddMembershipArray\nC++: vtkAddMembershipArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFieldType", PyvtkAddMembershipArray_GetFieldType, METH_VARARGS,
   (char*)"V.GetFieldType() -> int\nC++: int GetFieldType()\n\nThe field type to add the membership array to.\n"},
  {(char*)"SetFieldType", PyvtkAddMembershipArray_SetFieldType, METH_VARARGS,
   (char*)"V.SetFieldType(int)\nC++: void SetFieldType(int)\n\nThe field type to add the membership array to.\n"},
  {(char*)"GetFieldTypeMinValue", PyvtkAddMembershipArray_GetFieldTypeMinValue, METH_VARARGS,
   (char*)"V.GetFieldTypeMinValue() -> int\nC++: int GetFieldTypeMinValue()\n\nThe field type to add the membership array to.\n"},
  {(char*)"GetFieldTypeMaxValue", PyvtkAddMembershipArray_GetFieldTypeMaxValue, METH_VARARGS,
   (char*)"V.GetFieldTypeMaxValue() -> int\nC++: int GetFieldTypeMaxValue()\n\nThe field type to add the membership array to.\n"},
  {(char*)"SetOutputArrayName", PyvtkAddMembershipArray_SetOutputArrayName, METH_VARARGS,
   (char*)"V.SetOutputArrayName(string)\nC++: void SetOutputArrayName(char *)\n\nThe name of the array added to the output vtkDataSetAttributes\nindicating membership. Defaults to \"membership\".\n"},
  {(char*)"GetOutputArrayName", PyvtkAddMembershipArray_GetOutputArrayName, METH_VARARGS,
   (char*)"V.GetOutputArrayName() -> string\nC++: char *GetOutputArrayName()\n\nThe name of the array added to the output vtkDataSetAttributes\nindicating membership. Defaults to \"membership\".\n"},
  {(char*)"SetInputArrayName", PyvtkAddMembershipArray_SetInputArrayName, METH_VARARGS,
   (char*)"V.SetInputArrayName(string)\nC++: void SetInputArrayName(char *)\n\n"},
  {(char*)"GetInputArrayName", PyvtkAddMembershipArray_GetInputArrayName, METH_VARARGS,
   (char*)"V.GetInputArrayName() -> string\nC++: char *GetInputArrayName()\n\n"},
  {(char*)"SetInputValues", PyvtkAddMembershipArray_SetInputValues, METH_VARARGS,
   (char*)"V.SetInputValues(vtkAbstractArray)\nC++: void SetInputValues(vtkAbstractArray *)\n\n"},
  {(char*)"GetInputValues", PyvtkAddMembershipArray_GetInputValues, METH_VARARGS,
   (char*)"V.GetInputValues() -> vtkAbstractArray\nC++: vtkAbstractArray *GetInputValues()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAddMembershipArray_StaticNew()
{
  return vtkAddMembershipArray::New();
}

PyObject *PyVTKClass_vtkAddMembershipArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAddMembershipArray_StaticNew,
    PyvtkAddMembershipArray_Methods,
    "vtkAddMembershipArray", modulename,
    NULL, NULL,
    PyvtkAddMembershipArray_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 6; c++)
      {
      static const struct { const char *name; int value; }
        constants[6] = {
          { "FIELD_DATA", vtkAddMembershipArray::FIELD_DATA },
          { "POINT_DATA", vtkAddMembershipArray::POINT_DATA },
          { "CELL_DATA", vtkAddMembershipArray::CELL_DATA },
          { "VERTEX_DATA", vtkAddMembershipArray::VERTEX_DATA },
          { "EDGE_DATA", vtkAddMembershipArray::EDGE_DATA },
          { "ROW_DATA", vtkAddMembershipArray::ROW_DATA },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkAddMembershipArray_Doc()
{
  static const char *docstring[] = {
    "vtkAddMembershipArray - Add an array to the output indicating\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "This filter takes an input selection, vtkDataSetAttribute\ninformation, and data object and adds a bit array to the output\nvtkDataSetAttributes indicating whether each index was selected or\nnot.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAddMembershipArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAddMembershipArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAddMembershipArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

