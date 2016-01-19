// python wrapper for vtkTileDisplayHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSynchronizedRenderers.h"
#include "vtkTileDisplayHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTileDisplayHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTileDisplayHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTileDisplayHelper_Doc();


static PyObject *
PyvtkTileDisplayHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTileDisplayHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTileDisplayHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTileDisplayHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTileDisplayHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTileDisplayHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTileDisplayHelper::NewInstance());

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
PyvtkTileDisplayHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTileDisplayHelper *tempr = vtkTileDisplayHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTileDisplayHelper_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkTileDisplayHelper *tempr = vtkTileDisplayHelper::GetInstance();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTileDisplayHelper_EraseTile_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EraseTile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->EraseTile(temp0);
      }
    else
      {
      op->vtkTileDisplayHelper::EraseTile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTileDisplayHelper_EraseTile_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EraseTile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->EraseTile(temp0, temp1);
      }
    else
      {
      op->vtkTileDisplayHelper::EraseTile(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTileDisplayHelper_EraseTile(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkTileDisplayHelper_EraseTile_s1(self, args);
    case 2:
      return PyvtkTileDisplayHelper_EraseTile_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EraseTile");
  return NULL;
}



static PyObject *
PyvtkTileDisplayHelper_FlushTiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlushTiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->FlushTiles(temp0, temp1);
      }
    else
      {
      op->vtkTileDisplayHelper::FlushTiles(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTileDisplayHelper_ResetEnabledKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetEnabledKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetEnabledKeys();
      }
    else
      {
      op->vtkTileDisplayHelper::ResetEnabledKeys();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTileDisplayHelper_EnableKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->EnableKey(temp0);
      }
    else
      {
      op->vtkTileDisplayHelper::EnableKey(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTileDisplayHelper_SetDumpImagePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDumpImagePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTileDisplayHelper *op = static_cast<vtkTileDisplayHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDumpImagePath(temp0);
      }
    else
      {
      op->vtkTileDisplayHelper::SetDumpImagePath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTileDisplayHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkTileDisplayHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nOnly one instance by process should be used, that's why everyone\nshould use the instance returned by the GetInstance() methods.\nBut to allow that class to be used by a proxy, we need to expose\nthe new. Beaware that a subset of methods will be available to\nthe proxy.\n"},
  {(char*)"IsA", PyvtkTileDisplayHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nOnly one instance by process should be used, that's why everyone\nshould use the instance returned by the GetInstance() methods.\nBut to allow that class to be used by a proxy, we need to expose\nthe new. Beaware that a subset of methods will be available to\nthe proxy.\n"},
  {(char*)"NewInstance", PyvtkTileDisplayHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTileDisplayHelper\nC++: vtkTileDisplayHelper *NewInstance()\n\nOnly one instance by process should be used, that's why everyone\nshould use the instance returned by the GetInstance() methods.\nBut to allow that class to be used by a proxy, we need to expose\nthe new. Beaware that a subset of methods will be available to\nthe proxy.\n"},
  {(char*)"SafeDownCast", PyvtkTileDisplayHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTileDisplayHelper\nC++: vtkTileDisplayHelper *SafeDownCast(vtkObject* o)\n\nOnly one instance by process should be used, that's why everyone\nshould use the instance returned by the GetInstance() methods.\nBut to allow that class to be used by a proxy, we need to expose\nthe new. Beaware that a subset of methods will be available to\nthe proxy.\n"},
  {(char*)"GetInstance", PyvtkTileDisplayHelper_GetInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.GetInstance() -> vtkTileDisplayHelper\nC++: static vtkTileDisplayHelper *GetInstance()\n\nReturns the singleton.\n"},
  {(char*)"EraseTile", PyvtkTileDisplayHelper_EraseTile, METH_VARARGS,
   (char*)"V.EraseTile(int)\nC++: void EraseTile(unsigned int key)\nV.EraseTile(int, int)\nC++: void EraseTile(unsigned int key, int leftEye)\n\nErase a tile.\n"},
  {(char*)"FlushTiles", PyvtkTileDisplayHelper_FlushTiles, METH_VARARGS,
   (char*)"V.FlushTiles(int, int)\nC++: void FlushTiles(unsigned int key, int leftEye)\n\nFlush the tiles.\n"},
  {(char*)"ResetEnabledKeys", PyvtkTileDisplayHelper_ResetEnabledKeys, METH_VARARGS,
   (char*)"V.ResetEnabledKeys()\nC++: void ResetEnabledKeys()\n\nSet the enabled tiles-set. Only enabled keys are \"flushed\".\n"},
  {(char*)"EnableKey", PyvtkTileDisplayHelper_EnableKey, METH_VARARGS,
   (char*)"V.EnableKey(int)\nC++: void EnableKey(unsigned int)\n\nSet the enabled tiles-set. Only enabled keys are \"flushed\".\n"},
  {(char*)"SetDumpImagePath", PyvtkTileDisplayHelper_SetDumpImagePath, METH_VARARGS,
   (char*)"V.SetDumpImagePath(string)\nC++: void SetDumpImagePath(const char *newPath)\n\n- Method that can be used by the proxy.\n- The Path will be used to save the latest flush of the tiles.\n- Basically for a 2 processes tile display setting you will have\n  two images dumped following the given pattern:\n  ${DumpImagePath}_${processId}.png\n- If the DumpImagePath is set to NULL, then no image dump will\n  occurs.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTileDisplayHelper_StaticNew()
{
  return vtkTileDisplayHelper::New();
}

PyObject *PyVTKClass_vtkTileDisplayHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTileDisplayHelper_StaticNew,
    PyvtkTileDisplayHelper_Methods,
    "vtkTileDisplayHelper", modulename,
    NULL, NULL,
    PyvtkTileDisplayHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkTileDisplayHelper_Doc()
{
  static const char *docstring[] = {
    "vtkTileDisplayHelper - used on server side in tile display mode, to\n\n",
    "Superclass: vtkObject\n\n",
    "vtkTileDisplayHelper is used on server side in tile display mode, to\nensure that the tiles from multiple views are rendered correctly.\nThis is required since in multi-view configurations, only 1 view is\nrendered at a time, and when a view is being rendered, it may affect\nthe renderings from other view which it must restore for the tile\ndisplay to show the results correctly. We use this helper to k",
    "eep\nbuffered images from all views so that they can be restored.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTileDisplayHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTileDisplayHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTileDisplayHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

