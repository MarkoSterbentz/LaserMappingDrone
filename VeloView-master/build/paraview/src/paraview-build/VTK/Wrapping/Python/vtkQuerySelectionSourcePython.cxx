// python wrapper for vtkQuerySelectionSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkQuerySelectionSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkQuerySelectionSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkQuerySelectionSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkSelectionAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
#endif

static const char **PyvtkQuerySelectionSource_Doc();


static PyObject *
PyvtkQuerySelectionSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkQuerySelectionSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuerySelectionSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkQuerySelectionSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuerySelectionSource::NewInstance());

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
PyvtkQuerySelectionSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkQuerySelectionSource *tempr = vtkQuerySelectionSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_SetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQueryString(temp0);
      }
    else
      {
      op->vtkQuerySelectionSource::SetQueryString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetQueryString() :
      op->vtkQuerySelectionSource::GetQueryString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_SetCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompositeIndex(temp0);
      }
    else
      {
      op->vtkQuerySelectionSource::SetCompositeIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompositeIndex() :
      op->vtkQuerySelectionSource::GetCompositeIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_SetHierarchicalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHierarchicalLevel(temp0);
      }
    else
      {
      op->vtkQuerySelectionSource::SetHierarchicalLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetHierarchicalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHierarchicalLevel() :
      op->vtkQuerySelectionSource::GetHierarchicalLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_SetHierarchicalIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHierarchicalIndex(temp0);
      }
    else
      {
      op->vtkQuerySelectionSource::SetHierarchicalIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetHierarchicalIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHierarchicalIndex() :
      op->vtkQuerySelectionSource::GetHierarchicalIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_SetProcessID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessID(temp0);
      }
    else
      {
      op->vtkQuerySelectionSource::SetProcessID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetProcessID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessID() :
      op->vtkQuerySelectionSource::GetProcessID());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

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
      op->vtkQuerySelectionSource::SetFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkQuerySelectionSource::GetFieldType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetUserFriendlyText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserFriendlyText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetUserFriendlyText() :
      op->vtkQuerySelectionSource::GetUserFriendlyText());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_SetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInverse(temp0);
      }
    else
      {
      op->vtkQuerySelectionSource::SetInverse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuerySelectionSource_GetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuerySelectionSource *op = static_cast<vtkQuerySelectionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInverse() :
      op->vtkQuerySelectionSource::GetInverse());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkQuerySelectionSource_Methods[] = {
  {(char*)"GetClassName", PyvtkQuerySelectionSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkQuerySelectionSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkQuerySelectionSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkQuerySelectionSource\nC++: vtkQuerySelectionSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkQuerySelectionSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkQuerySelectionSource\nC++: vtkQuerySelectionSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetQueryString", PyvtkQuerySelectionSource_SetQueryString, METH_VARARGS,
   (char*)"V.SetQueryString(string)\nC++: void SetQueryString(char *)\n\nSet/get the query expression string.\n"},
  {(char*)"GetQueryString", PyvtkQuerySelectionSource_GetQueryString, METH_VARARGS,
   (char*)"V.GetQueryString() -> string\nC++: char *GetQueryString()\n\nSet/get the query expression string.\n"},
  {(char*)"SetCompositeIndex", PyvtkQuerySelectionSource_SetCompositeIndex, METH_VARARGS,
   (char*)"V.SetCompositeIndex(int)\nC++: void SetCompositeIndex(int a)\n\n\n"},
  {(char*)"GetCompositeIndex", PyvtkQuerySelectionSource_GetCompositeIndex, METH_VARARGS,
   (char*)"V.GetCompositeIndex() -> int\nC++: int GetCompositeIndex()\n\n\n"},
  {(char*)"SetHierarchicalLevel", PyvtkQuerySelectionSource_SetHierarchicalLevel, METH_VARARGS,
   (char*)"V.SetHierarchicalLevel(int)\nC++: void SetHierarchicalLevel(int a)\n\n"},
  {(char*)"GetHierarchicalLevel", PyvtkQuerySelectionSource_GetHierarchicalLevel, METH_VARARGS,
   (char*)"V.GetHierarchicalLevel() -> int\nC++: int GetHierarchicalLevel()\n\n"},
  {(char*)"SetHierarchicalIndex", PyvtkQuerySelectionSource_SetHierarchicalIndex, METH_VARARGS,
   (char*)"V.SetHierarchicalIndex(int)\nC++: void SetHierarchicalIndex(int a)\n\n"},
  {(char*)"GetHierarchicalIndex", PyvtkQuerySelectionSource_GetHierarchicalIndex, METH_VARARGS,
   (char*)"V.GetHierarchicalIndex() -> int\nC++: int GetHierarchicalIndex()\n\n"},
  {(char*)"SetProcessID", PyvtkQuerySelectionSource_SetProcessID, METH_VARARGS,
   (char*)"V.SetProcessID(int)\nC++: void SetProcessID(int a)\n\n"},
  {(char*)"GetProcessID", PyvtkQuerySelectionSource_GetProcessID, METH_VARARGS,
   (char*)"V.GetProcessID() -> int\nC++: int GetProcessID()\n\n"},
  {(char*)"SetFieldType", PyvtkQuerySelectionSource_SetFieldType, METH_VARARGS,
   (char*)"V.SetFieldType(int)\nC++: void SetFieldType(int a)\n\n"},
  {(char*)"GetFieldType", PyvtkQuerySelectionSource_GetFieldType, METH_VARARGS,
   (char*)"V.GetFieldType() -> int\nC++: int GetFieldType()\n\n"},
  {(char*)"GetUserFriendlyText", PyvtkQuerySelectionSource_GetUserFriendlyText, METH_VARARGS,
   (char*)"V.GetUserFriendlyText() -> string\nC++: const char *GetUserFriendlyText()\n\nThis merely reconstructs the query as a user friendly text eg. \"IDs >=\n12\". ( Makes you want to wonder if we should support parsing\ninput query text as well ;) )\n"},
  {(char*)"SetInverse", PyvtkQuerySelectionSource_SetInverse, METH_VARARGS,
   (char*)"V.SetInverse(int)\nC++: void SetInverse(int a)\n\nSet/get the invert selection flag.\n"},
  {(char*)"GetInverse", PyvtkQuerySelectionSource_GetInverse, METH_VARARGS,
   (char*)"V.GetInverse() -> int\nC++: int GetInverse()\n\nSet/get the invert selection flag.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuerySelectionSource_StaticNew()
{
  return vtkQuerySelectionSource::New();
}

PyObject *PyVTKClass_vtkQuerySelectionSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuerySelectionSource_StaticNew,
    PyvtkQuerySelectionSource_Methods,
    "vtkQuerySelectionSource", modulename,
    NULL, NULL,
    PyvtkQuerySelectionSource_Doc(),
    PyVTKClass_vtkSelectionAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkQuerySelectionSource_Doc()
{
  static const char *docstring[] = {
    "vtkQuerySelectionSource - a selection source that uses a \"query\" to\n\n",
    "Superclass: vtkSelectionAlgorithm\n\n",
    "vtkQuerySelectionSource is a selection source that uses a \"query\" to\ngenerate the vtkSelection object. A query has the following form: \"TERM OPERATOR\nVALUE(s)\" eg. \"GLOBALID is_in_range (0, 10)\" here GLOBALID is the\nTERM, is_in_range is the operator and (0,10) are the values. A query\ncan have additional qualifiers such as the process id, block id, amr\nlevel, amr block.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuerySelectionSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuerySelectionSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuerySelectionSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

