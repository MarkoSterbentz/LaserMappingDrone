// python wrapper for vtkTimeToTextConvertor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTimeToTextConvertor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTimeToTextConvertor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTimeToTextConvertorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkTimeToTextConvertor_Doc();


static PyObject *
PyvtkTimeToTextConvertor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTimeToTextConvertor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTimeToTextConvertor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTimeToTextConvertor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTimeToTextConvertor::NewInstance());

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
PyvtkTimeToTextConvertor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTimeToTextConvertor *tempr = vtkTimeToTextConvertor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_SetFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFormat(temp0);
      }
    else
      {
      op->vtkTimeToTextConvertor::SetFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_GetFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFormat() :
      op->vtkTimeToTextConvertor::GetFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_SetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShift(temp0);
      }
    else
      {
      op->vtkTimeToTextConvertor::SetShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_GetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetShift() :
      op->vtkTimeToTextConvertor::GetShift());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0);
      }
    else
      {
      op->vtkTimeToTextConvertor::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimeToTextConvertor_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeToTextConvertor *op = static_cast<vtkTimeToTextConvertor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkTimeToTextConvertor::GetScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTimeToTextConvertor_Methods[] = {
  {(char*)"GetClassName", PyvtkTimeToTextConvertor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTimeToTextConvertor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTimeToTextConvertor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTimeToTextConvertor\nC++: vtkTimeToTextConvertor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTimeToTextConvertor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTimeToTextConvertor\nC++: vtkTimeToTextConvertor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFormat", PyvtkTimeToTextConvertor_SetFormat, METH_VARARGS,
   (char*)"V.SetFormat(string)\nC++: void SetFormat(char *)\n\nGet/Set the format in which the to display the input update time.\nUse printf formatting. Default is \"Time: %f\".\n"},
  {(char*)"GetFormat", PyvtkTimeToTextConvertor_GetFormat, METH_VARARGS,
   (char*)"V.GetFormat() -> string\nC++: char *GetFormat()\n\nGet/Set the format in which the to display the input update time.\nUse printf formatting. Default is \"Time: %f\".\n"},
  {(char*)"SetShift", PyvtkTimeToTextConvertor_SetShift, METH_VARARGS,
   (char*)"V.SetShift(float)\nC++: void SetShift(double a)\n\nApply a translation to the time\n"},
  {(char*)"GetShift", PyvtkTimeToTextConvertor_GetShift, METH_VARARGS,
   (char*)"V.GetShift() -> float\nC++: double GetShift()\n\nApply a translation to the time\n"},
  {(char*)"SetScale", PyvtkTimeToTextConvertor_SetScale, METH_VARARGS,
   (char*)"V.SetScale(float)\nC++: void SetScale(double a)\n\nApply a scale to the time.\n"},
  {(char*)"GetScale", PyvtkTimeToTextConvertor_GetScale, METH_VARARGS,
   (char*)"V.GetScale() -> float\nC++: double GetScale()\n\nApply a scale to the time.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTimeToTextConvertor_StaticNew()
{
  return vtkTimeToTextConvertor::New();
}

PyObject *PyVTKClass_vtkTimeToTextConvertorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTimeToTextConvertor_StaticNew,
    PyvtkTimeToTextConvertor_Methods,
    "vtkTimeToTextConvertor", modulename,
    NULL, NULL,
    PyvtkTimeToTextConvertor_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTimeToTextConvertor_Doc()
{
  static const char *docstring[] = {
    "vtkTimeToTextConvertor\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "This filter can be attached to any filter/source/reader that supports\ntime. vtkTimeToTextConvertor will generate a 1x1 vtkTable with the\nstring for the data time using the format specified. The input to\nthis filter is optional. If no input is specified, it will show\nproduce request time in the output.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTimeToTextConvertor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTimeToTextConvertorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTimeToTextConvertor", o) != 0)
    {
    Py_DECREF(o);
    }

}

