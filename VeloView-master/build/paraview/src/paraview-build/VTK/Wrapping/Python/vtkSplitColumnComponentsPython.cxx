// python wrapper for vtkSplitColumnComponents
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSplitColumnComponents.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSplitColumnComponents(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSplitColumnComponentsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkSplitColumnComponents_Doc();


static PyObject *
PyvtkSplitColumnComponents_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSplitColumnComponents::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSplitColumnComponents::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSplitColumnComponents *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSplitColumnComponents::NewInstance());

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
PyvtkSplitColumnComponents_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSplitColumnComponents *tempr = vtkSplitColumnComponents::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetCalculateMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCalculateMagnitudes(temp0);
      }
    else
      {
      op->vtkSplitColumnComponents::SetCalculateMagnitudes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_GetCalculateMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCalculateMagnitudes() :
      op->vtkSplitColumnComponents::GetCalculateMagnitudes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetNamingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNamingMode(temp0);
      }
    else
      {
      op->vtkSplitColumnComponents::SetNamingMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_GetNamingModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNamingModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNamingModeMinValue() :
      op->vtkSplitColumnComponents::GetNamingModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_GetNamingModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNamingModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNamingModeMaxValue() :
      op->vtkSplitColumnComponents::GetNamingModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetNamingModeToNumberWithParens(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamingModeToNumberWithParens");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetNamingModeToNumberWithParens();
      }
    else
      {
      op->vtkSplitColumnComponents::SetNamingModeToNumberWithParens();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetNamingModeToNumberWithUnderscores(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamingModeToNumberWithUnderscores");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetNamingModeToNumberWithUnderscores();
      }
    else
      {
      op->vtkSplitColumnComponents::SetNamingModeToNumberWithUnderscores();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetNamingModeToNamesWithParens(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamingModeToNamesWithParens");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetNamingModeToNamesWithParens();
      }
    else
      {
      op->vtkSplitColumnComponents::SetNamingModeToNamesWithParens();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetNamingModeToNamesWithUnderscores(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamingModeToNamesWithUnderscores");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetNamingModeToNamesWithUnderscores();
      }
    else
      {
      op->vtkSplitColumnComponents::SetNamingModeToNamesWithUnderscores();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_GetNamingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNamingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNamingMode() :
      op->vtkSplitColumnComponents::GetNamingMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSplitColumnComponents_Methods[] = {
  {(char*)"GetClassName", PyvtkSplitColumnComponents_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSplitColumnComponents_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSplitColumnComponents_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSplitColumnComponents\nC++: vtkSplitColumnComponents *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSplitColumnComponents_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSplitColumnComponents\nC++: vtkSplitColumnComponents *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCalculateMagnitudes", PyvtkSplitColumnComponents_SetCalculateMagnitudes, METH_VARARGS,
   (char*)"V.SetCalculateMagnitudes(bool)\nC++: void SetCalculateMagnitudes(bool a)\n\nIf on this filter will calculate an additional magnitude column\nfor all columns it splits with two or more components. Default is\non.\n"},
  {(char*)"GetCalculateMagnitudes", PyvtkSplitColumnComponents_GetCalculateMagnitudes, METH_VARARGS,
   (char*)"V.GetCalculateMagnitudes() -> bool\nC++: bool GetCalculateMagnitudes()\n\nIf on this filter will calculate an additional magnitude column\nfor all columns it splits with two or more components. Default is\non.\n"},
  {(char*)"SetNamingMode", PyvtkSplitColumnComponents_SetNamingMode, METH_VARARGS,
   (char*)"V.SetNamingMode(int)\nC++: void SetNamingMode(int)\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {(char*)"GetNamingModeMinValue", PyvtkSplitColumnComponents_GetNamingModeMinValue, METH_VARARGS,
   (char*)"V.GetNamingModeMinValue() -> int\nC++: int GetNamingModeMinValue()\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {(char*)"GetNamingModeMaxValue", PyvtkSplitColumnComponents_GetNamingModeMaxValue, METH_VARARGS,
   (char*)"V.GetNamingModeMaxValue() -> int\nC++: int GetNamingModeMaxValue()\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {(char*)"SetNamingModeToNumberWithParens", PyvtkSplitColumnComponents_SetNamingModeToNumberWithParens, METH_VARARGS,
   (char*)"V.SetNamingModeToNumberWithParens()\nC++: void SetNamingModeToNumberWithParens()\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {(char*)"SetNamingModeToNumberWithUnderscores", PyvtkSplitColumnComponents_SetNamingModeToNumberWithUnderscores, METH_VARARGS,
   (char*)"V.SetNamingModeToNumberWithUnderscores()\nC++: void SetNamingModeToNumberWithUnderscores()\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {(char*)"SetNamingModeToNamesWithParens", PyvtkSplitColumnComponents_SetNamingModeToNamesWithParens, METH_VARARGS,
   (char*)"V.SetNamingModeToNamesWithParens()\nC++: void SetNamingModeToNamesWithParens()\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {(char*)"SetNamingModeToNamesWithUnderscores", PyvtkSplitColumnComponents_SetNamingModeToNamesWithUnderscores, METH_VARARGS,
   (char*)"V.SetNamingModeToNamesWithUnderscores()\nC++: void SetNamingModeToNamesWithUnderscores()\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {(char*)"GetNamingMode", PyvtkSplitColumnComponents_GetNamingMode, METH_VARARGS,
   (char*)"V.GetNamingMode() -> int\nC++: int GetNamingMode()\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSplitColumnComponents_StaticNew()
{
  return vtkSplitColumnComponents::New();
}

PyObject *PyVTKClass_vtkSplitColumnComponentsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSplitColumnComponents_StaticNew,
    PyvtkSplitColumnComponents_Methods,
    "vtkSplitColumnComponents", modulename,
    NULL, NULL,
    PyvtkSplitColumnComponents_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "NUMBERS_WITH_PARENS", vtkSplitColumnComponents::NUMBERS_WITH_PARENS },
          { "NAMES_WITH_PARENS", vtkSplitColumnComponents::NAMES_WITH_PARENS },
          { "NUMBERS_WITH_UNDERSCORES", vtkSplitColumnComponents::NUMBERS_WITH_UNDERSCORES },
          { "NAMES_WITH_UNDERSCORES", vtkSplitColumnComponents::NAMES_WITH_UNDERSCORES },
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

const char **PyvtkSplitColumnComponents_Doc()
{
  static const char *docstring[] = {
    "vtkSplitColumnComponents - split multicomponent table columns\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "Splits any columns in a table that have more than one component into\nindividual columns. Single component columns are passed through\nwithout any data duplication. NamingMode can be used to control how\ncolumns with multiple components are labelled in the output, e.g., if\ncolumn names \"Points\" had three components this column would be split\ninto \"Points (0)\", \"Points (1)\", and Points (2)\" when Namin",
    "gMode is\nNUMBERS_WITH_PARENS, into Points_0, Points_1, and Points_2 when\nNamingMode is NUMBERS_WITH_UNDERSCORES, into \"Points (X)\", \"Points\n(Y)\", and \"Points (Z)\" when NamingMode is NAMES_WITH_PARENS, and into\nPoints_X, Points_Y, and Points_Z when NamingMode is\nNAMES_WITH_UNDERSCORES.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSplitColumnComponents(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSplitColumnComponentsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSplitColumnComponents", o) != 0)
    {
    Py_DECREF(o);
    }

}

