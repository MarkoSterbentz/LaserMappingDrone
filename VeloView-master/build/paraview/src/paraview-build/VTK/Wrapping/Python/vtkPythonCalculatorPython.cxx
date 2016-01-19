// python wrapper for vtkPythonCalculator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPythonCalculator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPythonCalculator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPythonCalculatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkProgrammableFilterNew
extern "C" { PyObject *PyVTKClass_vtkProgrammableFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkProgrammableFilterNew
#endif

static const char **PyvtkPythonCalculator_Doc();


static PyObject *
PyvtkPythonCalculator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPythonCalculator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonCalculator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonCalculator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonCalculator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPythonCalculator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonCalculator::NewInstance());

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
PyvtkPythonCalculator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPythonCalculator *tempr = vtkPythonCalculator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonCalculator_SetArrayAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayAssociation(temp0);
      }
    else
      {
      op->vtkPythonCalculator::SetArrayAssociation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonCalculator_GetArrayAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrayAssociation() :
      op->vtkPythonCalculator::GetArrayAssociation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonCalculator_SetCopyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCopyArrays(temp0);
      }
    else
      {
      op->vtkPythonCalculator::SetCopyArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonCalculator_GetCopyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCopyArrays() :
      op->vtkPythonCalculator::GetCopyArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonCalculator_CopyArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyArraysOn();
      }
    else
      {
      op->vtkPythonCalculator::CopyArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonCalculator_CopyArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyArraysOff();
      }
    else
      {
      op->vtkPythonCalculator::CopyArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonCalculator_SetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExpression(temp0);
      }
    else
      {
      op->vtkPythonCalculator::SetExpression(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonCalculator_GetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetExpression() :
      op->vtkPythonCalculator::GetExpression());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonCalculator_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayName(temp0);
      }
    else
      {
      op->vtkPythonCalculator::SetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonCalculator_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonCalculator *op = static_cast<vtkPythonCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkPythonCalculator::GetArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonCalculator_ExecuteScript(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ExecuteScript");

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPythonCalculator::ExecuteScript(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPythonCalculator_Methods[] = {
  {(char*)"GetClassName", PyvtkPythonCalculator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPythonCalculator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPythonCalculator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPythonCalculator\nC++: vtkPythonCalculator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPythonCalculator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPythonCalculator\nC++: vtkPythonCalculator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetArrayAssociation", PyvtkPythonCalculator_SetArrayAssociation, METH_VARARGS,
   (char*)"V.SetArrayAssociation(int)\nC++: void SetArrayAssociation(int a)\n\nWhich field data to get the arrays from. See\nvtkDataObject::FieldAssociations for choices. The default is\nFIELD_ASSOCIATION_POINTS.\n"},
  {(char*)"GetArrayAssociation", PyvtkPythonCalculator_GetArrayAssociation, METH_VARARGS,
   (char*)"V.GetArrayAssociation() -> int\nC++: int GetArrayAssociation()\n\nWhich field data to get the arrays from. See\nvtkDataObject::FieldAssociations for choices. The default is\nFIELD_ASSOCIATION_POINTS.\n"},
  {(char*)"SetCopyArrays", PyvtkPythonCalculator_SetCopyArrays, METH_VARARGS,
   (char*)"V.SetCopyArrays(bool)\nC++: void SetCopyArrays(bool a)\n\nControls whether the input arrays are copied to the output. True\nby default.\n"},
  {(char*)"GetCopyArrays", PyvtkPythonCalculator_GetCopyArrays, METH_VARARGS,
   (char*)"V.GetCopyArrays() -> bool\nC++: bool GetCopyArrays()\n\nControls whether the input arrays are copied to the output. True\nby default.\n"},
  {(char*)"CopyArraysOn", PyvtkPythonCalculator_CopyArraysOn, METH_VARARGS,
   (char*)"V.CopyArraysOn()\nC++: void CopyArraysOn()\n\nControls whether the input arrays are copied to the output. True\nby default.\n"},
  {(char*)"CopyArraysOff", PyvtkPythonCalculator_CopyArraysOff, METH_VARARGS,
   (char*)"V.CopyArraysOff()\nC++: void CopyArraysOff()\n\nControls whether the input arrays are copied to the output. True\nby default.\n"},
  {(char*)"SetExpression", PyvtkPythonCalculator_SetExpression, METH_VARARGS,
   (char*)"V.SetExpression(string)\nC++: void SetExpression(char *)\n\nSet the text of the python expression to execute. This expression\nmust return a scalar value (which is converted to an array) or a\nnumpy array.\n"},
  {(char*)"GetExpression", PyvtkPythonCalculator_GetExpression, METH_VARARGS,
   (char*)"V.GetExpression() -> string\nC++: char *GetExpression()\n\nSet the text of the python expression to execute. This expression\nmust return a scalar value (which is converted to an array) or a\nnumpy array.\n"},
  {(char*)"SetArrayName", PyvtkPythonCalculator_SetArrayName, METH_VARARGS,
   (char*)"V.SetArrayName(string)\nC++: void SetArrayName(char *)\n\nSet the name of the output array.\n"},
  {(char*)"GetArrayName", PyvtkPythonCalculator_GetArrayName, METH_VARARGS,
   (char*)"V.GetArrayName() -> string\nC++: char *GetArrayName()\n\nSet the name of the output array.\n"},
  {(char*)"ExecuteScript", PyvtkPythonCalculator_ExecuteScript, METH_VARARGS | METH_STATIC,
   (char*)"V.ExecuteScript()\nC++: static void ExecuteScript(void *)\n\nFor internal use only.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPythonCalculator_StaticNew()
{
  return vtkPythonCalculator::New();
}

PyObject *PyVTKClass_vtkPythonCalculatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPythonCalculator_StaticNew,
    PyvtkPythonCalculator_Methods,
    "vtkPythonCalculator", modulename,
    NULL, NULL,
    PyvtkPythonCalculator_Doc(),
    PyVTKClass_vtkProgrammableFilterNew(modulename));
  return cls;
}

const char **PyvtkPythonCalculator_Doc()
{
  static const char *docstring[] = {
    "vtkPythonCalculator - Evaluates a Python expression\n\n",
    "Superclass: vtkProgrammableFilter\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPythonCalculator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPythonCalculatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPythonCalculator", o) != 0)
    {
    Py_DECREF(o);
    }

}

