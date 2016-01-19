// python wrapper for vtkImageOpenClose3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkImageOpenClose3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageOpenClose3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageOpenClose3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageOpenClose3D_Doc();


static PyObject *
PyvtkImageOpenClose3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageOpenClose3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageOpenClose3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageOpenClose3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageOpenClose3D::NewInstance());

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
PyvtkImageOpenClose3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageOpenClose3D *tempr = vtkImageOpenClose3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageOpenClose3D::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_DebugOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DebugOn();
      }
    else
      {
      op->vtkImageOpenClose3D::DebugOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_DebugOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DebugOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DebugOff();
      }
    else
      {
      op->vtkImageOpenClose3D::DebugOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Modified();
      }
    else
      {
      op->vtkImageOpenClose3D::Modified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_SetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetKernelSize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageOpenClose3D::SetKernelSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_SetOpenValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpenValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpenValue(temp0);
      }
    else
      {
      op->vtkImageOpenClose3D::SetOpenValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetOpenValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpenValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetOpenValue() :
      op->vtkImageOpenClose3D::GetOpenValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_SetCloseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCloseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCloseValue(temp0);
      }
    else
      {
      op->vtkImageOpenClose3D::SetCloseValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetCloseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCloseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCloseValue() :
      op->vtkImageOpenClose3D::GetCloseValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetFilter0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilter0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageDilateErode3D *tempr = (ap.IsBound() ?
      op->GetFilter0() :
      op->vtkImageOpenClose3D::GetFilter0());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageOpenClose3D_GetFilter1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilter1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageOpenClose3D *op = static_cast<vtkImageOpenClose3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageDilateErode3D *tempr = (ap.IsBound() ?
      op->GetFilter1() :
      op->vtkImageOpenClose3D::GetFilter1());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageOpenClose3D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageOpenClose3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nDefault open value is 0, and default close value is 255.\n"},
  {(char*)"IsA", PyvtkImageOpenClose3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nDefault open value is 0, and default close value is 255.\n"},
  {(char*)"NewInstance", PyvtkImageOpenClose3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageOpenClose3D\nC++: vtkImageOpenClose3D *NewInstance()\n\nDefault open value is 0, and default close value is 255.\n"},
  {(char*)"SafeDownCast", PyvtkImageOpenClose3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageOpenClose3D\nC++: vtkImageOpenClose3D *SafeDownCast(vtkObject* o)\n\nDefault open value is 0, and default close value is 255.\n"},
  {(char*)"GetMTime", PyvtkImageOpenClose3D_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nThis method considers the sub filters MTimes when computing this\nobjects modified time.\n"},
  {(char*)"DebugOn", PyvtkImageOpenClose3D_DebugOn, METH_VARARGS,
   (char*)"V.DebugOn()\nC++: void DebugOn()\n\nTurn debugging output on. (in sub filters also)\n"},
  {(char*)"DebugOff", PyvtkImageOpenClose3D_DebugOff, METH_VARARGS,
   (char*)"V.DebugOff()\nC++: void DebugOff()\n\nTurn debugging output on. (in sub filters also)\n"},
  {(char*)"Modified", PyvtkImageOpenClose3D_Modified, METH_VARARGS,
   (char*)"V.Modified()\nC++: void Modified()\n\nPass modified message to sub filters.\n"},
  {(char*)"SetKernelSize", PyvtkImageOpenClose3D_SetKernelSize, METH_VARARGS,
   (char*)"V.SetKernelSize(int, int, int)\nC++: void SetKernelSize(int size0, int size1, int size2)\n\nSelects the size of gaps or objects removed.\n"},
  {(char*)"SetOpenValue", PyvtkImageOpenClose3D_SetOpenValue, METH_VARARGS,
   (char*)"V.SetOpenValue(float)\nC++: void SetOpenValue(double value)\n\nDetermines the value that will opened. Open value is first\neroded, and then dilated.\n"},
  {(char*)"GetOpenValue", PyvtkImageOpenClose3D_GetOpenValue, METH_VARARGS,
   (char*)"V.GetOpenValue() -> float\nC++: double GetOpenValue()\n\nDetermines the value that will opened. Open value is first\neroded, and then dilated.\n"},
  {(char*)"SetCloseValue", PyvtkImageOpenClose3D_SetCloseValue, METH_VARARGS,
   (char*)"V.SetCloseValue(float)\nC++: void SetCloseValue(double value)\n\nDetermines the value that will closed. Close value is first\ndilated, and then eroded\n"},
  {(char*)"GetCloseValue", PyvtkImageOpenClose3D_GetCloseValue, METH_VARARGS,
   (char*)"V.GetCloseValue() -> float\nC++: double GetCloseValue()\n\nDetermines the value that will closed. Close value is first\ndilated, and then eroded\n"},
  {(char*)"GetFilter0", PyvtkImageOpenClose3D_GetFilter0, METH_VARARGS,
   (char*)"V.GetFilter0() -> vtkImageDilateErode3D\nC++: vtkImageDilateErode3D *GetFilter0()\n\nNeeded for Progress functions\n"},
  {(char*)"GetFilter1", PyvtkImageOpenClose3D_GetFilter1, METH_VARARGS,
   (char*)"V.GetFilter1() -> vtkImageDilateErode3D\nC++: vtkImageDilateErode3D *GetFilter1()\n\nNeeded for Progress functions\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageOpenClose3D_StaticNew()
{
  return vtkImageOpenClose3D::New();
}

PyObject *PyVTKClass_vtkImageOpenClose3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageOpenClose3D_StaticNew,
    PyvtkImageOpenClose3D_Methods,
    "vtkImageOpenClose3D", modulename,
    NULL, NULL,
    PyvtkImageOpenClose3D_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageOpenClose3D_Doc()
{
  static const char *docstring[] = {
    "vtkImageOpenClose3D - Will perform opening or closing.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageOpenClose3D performs opening or closing by having two\nvtkImageErodeDilates in series.  The size of operation is determined\nby the method SetKernelSize, and the operator is an ellipse.\nOpenValue and CloseValue determine how the filter behaves.  For\nbinary images Opening and closing behaves as expected. Close value is\nfirst dilated, and then eroded. Open value is first eroded, and then\ndilat",
    "ed. Degenerate two dimensional opening/closing can be achieved\nby setting the one axis the 3D KernelSize to 1. Values other than\nopen value and close value are not touched. This enables the filter\nto processes segmented images containing more than two tags.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageOpenClose3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageOpenClose3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageOpenClose3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

