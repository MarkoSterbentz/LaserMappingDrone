// python wrapper for vtkImageDataToUniformGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageDataToUniformGrid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageDataToUniformGrid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageDataToUniformGridNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkImageDataToUniformGrid_Doc();


static PyObject *
PyvtkImageDataToUniformGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageDataToUniformGrid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDataToUniformGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageDataToUniformGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDataToUniformGrid::NewInstance());

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
PyvtkImageDataToUniformGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageDataToUniformGrid *tempr = vtkImageDataToUniformGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_SetReverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReverse(temp0);
      }
    else
      {
      op->vtkImageDataToUniformGrid::SetReverse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_GetReverseMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReverseMinValue() :
      op->vtkImageDataToUniformGrid::GetReverseMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_GetReverseMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReverseMaxValue() :
      op->vtkImageDataToUniformGrid::GetReverseMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_GetReverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReverse() :
      op->vtkImageDataToUniformGrid::GetReverse());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_ReverseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseOn();
      }
    else
      {
      op->vtkImageDataToUniformGrid::ReverseOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataToUniformGrid_ReverseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToUniformGrid *op = static_cast<vtkImageDataToUniformGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseOff();
      }
    else
      {
      op->vtkImageDataToUniformGrid::ReverseOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageDataToUniformGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkImageDataToUniformGrid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageDataToUniformGrid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageDataToUniformGrid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageDataToUniformGrid\nC++: vtkImageDataToUniformGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageDataToUniformGrid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageDataToUniformGrid\nC++: vtkImageDataToUniformGrid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetReverse", PyvtkImageDataToUniformGrid_SetReverse, METH_VARARGS,
   (char*)"V.SetReverse(int)\nC++: void SetReverse(int)\n\nBy default, values of 0 (i.e. Reverse = 0) in the array will\nresult in that point or cell to be blanked. Set Reverse to 1 to\nmake points or cells to not be blanked for array values of 0.\n"},
  {(char*)"GetReverseMinValue", PyvtkImageDataToUniformGrid_GetReverseMinValue, METH_VARARGS,
   (char*)"V.GetReverseMinValue() -> int\nC++: int GetReverseMinValue()\n\nBy default, values of 0 (i.e. Reverse = 0) in the array will\nresult in that point or cell to be blanked. Set Reverse to 1 to\nmake points or cells to not be blanked for array values of 0.\n"},
  {(char*)"GetReverseMaxValue", PyvtkImageDataToUniformGrid_GetReverseMaxValue, METH_VARARGS,
   (char*)"V.GetReverseMaxValue() -> int\nC++: int GetReverseMaxValue()\n\nBy default, values of 0 (i.e. Reverse = 0) in the array will\nresult in that point or cell to be blanked. Set Reverse to 1 to\nmake points or cells to not be blanked for array values of 0.\n"},
  {(char*)"GetReverse", PyvtkImageDataToUniformGrid_GetReverse, METH_VARARGS,
   (char*)"V.GetReverse() -> int\nC++: int GetReverse()\n\nBy default, values of 0 (i.e. Reverse = 0) in the array will\nresult in that point or cell to be blanked. Set Reverse to 1 to\nmake points or cells to not be blanked for array values of 0.\n"},
  {(char*)"ReverseOn", PyvtkImageDataToUniformGrid_ReverseOn, METH_VARARGS,
   (char*)"V.ReverseOn()\nC++: void ReverseOn()\n\nBy default, values of 0 (i.e. Reverse = 0) in the array will\nresult in that point or cell to be blanked. Set Reverse to 1 to\nmake points or cells to not be blanked for array values of 0.\n"},
  {(char*)"ReverseOff", PyvtkImageDataToUniformGrid_ReverseOff, METH_VARARGS,
   (char*)"V.ReverseOff()\nC++: void ReverseOff()\n\nBy default, values of 0 (i.e. Reverse = 0) in the array will\nresult in that point or cell to be blanked. Set Reverse to 1 to\nmake points or cells to not be blanked for array values of 0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageDataToUniformGrid_StaticNew()
{
  return vtkImageDataToUniformGrid::New();
}

PyObject *PyVTKClass_vtkImageDataToUniformGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageDataToUniformGrid_StaticNew,
    PyvtkImageDataToUniformGrid_Methods,
    "vtkImageDataToUniformGrid", modulename,
    NULL, NULL,
    PyvtkImageDataToUniformGrid_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageDataToUniformGrid_Doc()
{
  static const char *docstring[] = {
    "vtkImageDataToUniformGrid - convert vtkImageData to vtkUniformGrid\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "Convert a vtkImageData to vtkUniformGrid and set blanking based on\nspecified by named arrays. By default, values of 0 in the named array\nwill result in the point or cell being blanked. Set Reverse to 1 to\nindicate that values of 0 will result in the point or cell to not be\nblanked.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageDataToUniformGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDataToUniformGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageDataToUniformGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

