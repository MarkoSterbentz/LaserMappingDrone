// python wrapper for vtkPVCatalystSessionCore
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVCatalystSessionCore.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVCatalystSessionCore(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVCatalystSessionCoreNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVSessionCoreNew
extern "C" { PyObject *PyVTKClass_vtkPVSessionCoreNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVSessionCoreNew
#endif

static const char **PyvtkPVCatalystSessionCore_Doc();


static PyObject *
PyvtkPVCatalystSessionCore_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCatalystSessionCore *op = static_cast<vtkPVCatalystSessionCore *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVCatalystSessionCore::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCatalystSessionCore_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCatalystSessionCore *op = static_cast<vtkPVCatalystSessionCore *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCatalystSessionCore::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCatalystSessionCore_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCatalystSessionCore *op = static_cast<vtkPVCatalystSessionCore *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVCatalystSessionCore *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCatalystSessionCore::NewInstance());

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
PyvtkPVCatalystSessionCore_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVCatalystSessionCore *tempr = vtkPVCatalystSessionCore::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCatalystSessionCore_GatherInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCatalystSessionCore *op = static_cast<vtkPVCatalystSessionCore *>(vp);

  unsigned int temp0;
  vtkPVInformation *temp1 = NULL;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVInformation") &&
      ap.GetValue(temp2))
    {
    bool tempr = (ap.IsBound() ?
      op->GatherInformation(temp0, temp1, temp2) :
      op->vtkPVCatalystSessionCore::GatherInformation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCatalystSessionCore_RegisterDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCatalystSessionCore *op = static_cast<vtkPVCatalystSessionCore *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  vtkPVInformation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPVInformation"))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->RegisterDataInformation(temp0, temp1, temp2) :
      op->vtkPVCatalystSessionCore::RegisterDataInformation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCatalystSessionCore_UpdateIdMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateIdMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCatalystSessionCore *op = static_cast<vtkPVCatalystSessionCore *>(vp);

  unsigned int *temp0 = NULL;
  unsigned int *save0 = NULL;
  unsigned int small0[8];
  int size0 = 0;
  int temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->UpdateIdMap(temp0, temp1);
      }
    else
      {
      op->vtkPVCatalystSessionCore::UpdateIdMap(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkPVCatalystSessionCore_ResetIdMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetIdMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCatalystSessionCore *op = static_cast<vtkPVCatalystSessionCore *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetIdMap();
      }
    else
      {
      op->vtkPVCatalystSessionCore::ResetIdMap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVCatalystSessionCore_Methods[] = {
  {(char*)"GetClassName", PyvtkPVCatalystSessionCore_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVCatalystSessionCore_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVCatalystSessionCore_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVCatalystSessionCore\nC++: vtkPVCatalystSessionCore *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVCatalystSessionCore_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVCatalystSessionCore\nC++: vtkPVCatalystSessionCore *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GatherInformation", PyvtkPVCatalystSessionCore_GatherInformation, METH_VARARGS,
   (char*)"V.GatherInformation(int, vtkPVInformation, int) -> bool\nC++: virtual bool GatherInformation(vtkTypeUInt32 location,\n    vtkPVInformation *information, vtkTypeUInt32 globalid)\n\nGather information about an object referred by the\nglobalid.location identifies the processes to gather the\ninformation from.\n"},
  {(char*)"RegisterDataInformation", PyvtkPVCatalystSessionCore_RegisterDataInformation, METH_VARARGS,
   (char*)"V.RegisterDataInformation(int, int, vtkPVInformation) -> int\nC++: vtkTypeUInt32 RegisterDataInformation(vtkTypeUInt32 globalid,\n     unsigned int port, vtkPVInformation *information)\n\nUpdate the data information for a given proxy with the given\nglobalid. This will allow the GatherInformation to work with\n\"fake\" VTK pipeline. Return the real corresponding proxy id\n"},
  {(char*)"UpdateIdMap", PyvtkPVCatalystSessionCore_UpdateIdMap, METH_VARARGS,
   (char*)"V.UpdateIdMap([int, ...], int)\nC++: void UpdateIdMap(vtkTypeUInt32 *idMapArray, int size)\n\n"},
  {(char*)"ResetIdMap", PyvtkPVCatalystSessionCore_ResetIdMap, METH_VARARGS,
   (char*)"V.ResetIdMap()\nC++: void ResetIdMap()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVCatalystSessionCore_StaticNew()
{
  return vtkPVCatalystSessionCore::New();
}

PyObject *PyVTKClass_vtkPVCatalystSessionCoreNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVCatalystSessionCore_StaticNew,
    PyvtkPVCatalystSessionCore_Methods,
    "vtkPVCatalystSessionCore", modulename,
    NULL, NULL,
    PyvtkPVCatalystSessionCore_Doc(),
    PyVTKClass_vtkPVSessionCoreNew(modulename));
  return cls;
}

const char **PyvtkPVCatalystSessionCore_Doc()
{
  static const char *docstring[] = {
    "vtkPVCatalystSessionCore\n\n",
    "Superclass: vtkPVSessionCore\n\n",
    "vtkPVCatalystSessionCore is used by vtkSMSession.\nvtkPVCatalystSessionCore handle catalyst based proxy which don't\ncontains any real data and therefore are not allowed to execute the\nVTK pipeline.@ingroup LiveInsitu\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVCatalystSessionCore(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVCatalystSessionCoreNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVCatalystSessionCore", o) != 0)
    {
    Py_DECREF(o);
    }

}

