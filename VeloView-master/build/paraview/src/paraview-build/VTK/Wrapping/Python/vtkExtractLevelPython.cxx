// python wrapper for vtkExtractLevel
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractLevel.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractLevel(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractLevelNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkExtractLevel_Doc();


static PyObject *
PyvtkExtractLevel_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractLevel::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractLevel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractLevel::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractLevel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractLevel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractLevel::NewInstance());

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
PyvtkExtractLevel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractLevel *tempr = vtkExtractLevel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractLevel_AddLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddLevel(temp0);
      }
    else
      {
      op->vtkExtractLevel::AddLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractLevel_RemoveLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveLevel(temp0);
      }
    else
      {
      op->vtkExtractLevel::RemoveLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractLevel_RemoveAllLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllLevels();
      }
    else
      {
      op->vtkExtractLevel::RemoveAllLevels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractLevel_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractLevel_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractLevel_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractLevel_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractLevel\nC++: vtkExtractLevel *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractLevel_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractLevel\nC++: vtkExtractLevel *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddLevel", PyvtkExtractLevel_AddLevel, METH_VARARGS,
   (char*)"V.AddLevel(int)\nC++: void AddLevel(unsigned int level)\n\nSelect the levels that should be extracted. All other levels will\nhave no datasets in them.\n"},
  {(char*)"RemoveLevel", PyvtkExtractLevel_RemoveLevel, METH_VARARGS,
   (char*)"V.RemoveLevel(int)\nC++: void RemoveLevel(unsigned int level)\n\nSelect the levels that should be extracted. All other levels will\nhave no datasets in them.\n"},
  {(char*)"RemoveAllLevels", PyvtkExtractLevel_RemoveAllLevels, METH_VARARGS,
   (char*)"V.RemoveAllLevels()\nC++: void RemoveAllLevels()\n\nSelect the levels that should be extracted. All other levels will\nhave no datasets in them.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractLevel_StaticNew()
{
  return vtkExtractLevel::New();
}

PyObject *PyVTKClass_vtkExtractLevelNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractLevel_StaticNew,
    PyvtkExtractLevel_Methods,
    "vtkExtractLevel", modulename,
    NULL, NULL,
    PyvtkExtractLevel_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractLevel_Doc()
{
  static const char *docstring[] = {
    "vtkExtractLevel - extract levels between min and max from a\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkExtractLevel filter extracts the levels between (and including)\nthe user specified min and max levels.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractLevel(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractLevelNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractLevel", o) != 0)
    {
    Py_DECREF(o);
    }

}

