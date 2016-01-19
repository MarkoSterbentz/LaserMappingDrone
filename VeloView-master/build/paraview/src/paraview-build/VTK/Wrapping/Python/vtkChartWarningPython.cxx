// python wrapper for vtkChartWarning
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkContextMouseEvent.h"
#include "vtkChartWarning.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkChartWarning(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkChartWarningNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkBlockItemNew
extern "C" { PyObject *PyVTKClass_vtkBlockItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkBlockItemNew
#endif

static const char **PyvtkChartWarning_Doc();


static PyObject *
PyvtkChartWarning_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartWarning *op = static_cast<vtkChartWarning *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkChartWarning::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartWarning_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartWarning *op = static_cast<vtkChartWarning *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartWarning::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartWarning_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartWarning *op = static_cast<vtkChartWarning *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartWarning *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartWarning::NewInstance());

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
PyvtkChartWarning_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkChartWarning *tempr = vtkChartWarning::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartWarning_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartWarning *op = static_cast<vtkChartWarning *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartWarning::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartWarning_SetTextPad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartWarning *op = static_cast<vtkChartWarning *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextPad(temp0);
      }
    else
      {
      op->vtkChartWarning::SetTextPad(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartWarning_GetTextPad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartWarning *op = static_cast<vtkChartWarning *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTextPad() :
      op->vtkChartWarning::GetTextPad());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkChartWarning_Methods[] = {
  {(char*)"GetClassName", PyvtkChartWarning_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChartWarning_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChartWarning_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkChartWarning\nC++: vtkChartWarning *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChartWarning_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChartWarning\nC++: vtkChartWarning *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Paint", PyvtkChartWarning_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the item.\n"},
  {(char*)"SetTextPad", PyvtkChartWarning_SetTextPad, METH_VARARGS,
   (char*)"V.SetTextPad(float)\nC++: void SetTextPad(double a)\n\n"},
  {(char*)"GetTextPad", PyvtkChartWarning_GetTextPad, METH_VARARGS,
   (char*)"V.GetTextPad() -> float\nC++: double GetTextPad()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChartWarning_StaticNew()
{
  return vtkChartWarning::New();
}

PyObject *PyVTKClass_vtkChartWarningNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChartWarning_StaticNew,
    PyvtkChartWarning_Methods,
    "vtkChartWarning", modulename,
    NULL, NULL,
    PyvtkChartWarning_Doc(),
    PyVTKClass_vtkBlockItemNew(modulename));
  return cls;
}

const char **PyvtkChartWarning_Doc()
{
  static const char *docstring[] = {
    "vtkChartWarning - a vtkContextItem that draws a block (optional\nlabel).\n\n",
    "Superclass: vtkBlockItem\n\n",
    "This is a vtkContextItem that can be placed into a vtkContextScene.\nIt draws a block of the given dimensions, and reacts to mouse events.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChartWarning(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChartWarningNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChartWarning", o) != 0)
    {
    Py_DECREF(o);
    }

}

