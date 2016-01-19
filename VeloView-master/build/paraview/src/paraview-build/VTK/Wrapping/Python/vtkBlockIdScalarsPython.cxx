// python wrapper for vtkBlockIdScalars
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBlockIdScalars.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBlockIdScalars(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBlockIdScalarsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkBlockIdScalars_Doc();


static PyObject *
PyvtkBlockIdScalars_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockIdScalars *op = static_cast<vtkBlockIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBlockIdScalars::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockIdScalars_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockIdScalars *op = static_cast<vtkBlockIdScalars *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBlockIdScalars::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockIdScalars_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockIdScalars *op = static_cast<vtkBlockIdScalars *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBlockIdScalars *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBlockIdScalars::NewInstance());

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
PyvtkBlockIdScalars_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBlockIdScalars *tempr = vtkBlockIdScalars::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBlockIdScalars_Methods[] = {
  {(char*)"GetClassName", PyvtkBlockIdScalars_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBlockIdScalars_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBlockIdScalars_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBlockIdScalars\nC++: vtkBlockIdScalars *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBlockIdScalars_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBlockIdScalars\nC++: vtkBlockIdScalars *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBlockIdScalars_StaticNew()
{
  return vtkBlockIdScalars::New();
}

PyObject *PyVTKClass_vtkBlockIdScalarsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBlockIdScalars_StaticNew,
    PyvtkBlockIdScalars_Methods,
    "vtkBlockIdScalars", modulename,
    NULL, NULL,
    PyvtkBlockIdScalars_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkBlockIdScalars_Doc()
{
  static const char *docstring[] = {
    "vtkBlockIdScalars - generates scalars from blocks.\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkBlockIdScalars is a filter that generates scalars using the block\nindex for each block. Note that all sub-blocks within a block get the\nsame scalar. The new scalars array is named BlockIdScalars.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBlockIdScalars(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBlockIdScalarsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBlockIdScalars", o) != 0)
    {
    Py_DECREF(o);
    }

}

