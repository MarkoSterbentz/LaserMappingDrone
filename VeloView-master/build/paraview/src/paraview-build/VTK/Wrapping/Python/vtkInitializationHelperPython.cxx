// python wrapper for vtkInitializationHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkInitializationHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInitializationHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInitializationHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkInitializationHelper_Doc();


static PyObject *
PyvtkInitializationHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitializationHelper *op = static_cast<vtkInitializationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInitializationHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInitializationHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitializationHelper *op = static_cast<vtkInitializationHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInitializationHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInitializationHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitializationHelper *op = static_cast<vtkInitializationHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInitializationHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInitializationHelper::NewInstance());

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
PyvtkInitializationHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInitializationHelper *tempr = vtkInitializationHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInitializationHelper_Initialize_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Initialize");

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkInitializationHelper::Initialize(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInitializationHelper_Initialize_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Initialize");

  char *temp0 = NULL;
  int temp1;
  vtkPVOptions *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPVOptions"))
    {
    vtkInitializationHelper::Initialize(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkInitializationHelper_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkInitializationHelper_Initialize_s1(self, args);
    case 3:
      return PyvtkInitializationHelper_Initialize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return NULL;
}



static PyObject *
PyvtkInitializationHelper_Finalize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Finalize");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInitializationHelper::Finalize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInitializationHelper_StandaloneInitialize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StandaloneInitialize");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInitializationHelper::StandaloneInitialize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInitializationHelper_StandaloneFinalize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StandaloneFinalize");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInitializationHelper::StandaloneFinalize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInitializationHelper_SetLoadSettingsFilesDuringInitialization(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetLoadSettingsFilesDuringInitialization");

  bool temp0 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkInitializationHelper::SetLoadSettingsFilesDuringInitialization(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInitializationHelper_GetLoadSettingsFilesDuringInitialization(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLoadSettingsFilesDuringInitialization");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    bool tempr = vtkInitializationHelper::GetLoadSettingsFilesDuringInitialization();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInitializationHelper_SetOrganizationName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetOrganizationName");

  std::string temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkInitializationHelper::SetOrganizationName(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInitializationHelper_GetOrganizationName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOrganizationName");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const std::string *tempr = &vtkInitializationHelper::GetOrganizationName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInitializationHelper_SetApplicationName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetApplicationName");

  std::string temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkInitializationHelper::SetApplicationName(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInitializationHelper_GetApplicationName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetApplicationName");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const std::string *tempr = &vtkInitializationHelper::GetApplicationName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInitializationHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkInitializationHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInitializationHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInitializationHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInitializationHelper\nC++: vtkInitializationHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInitializationHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInitializationHelper\nC++: vtkInitializationHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkInitializationHelper_Initialize, METH_VARARGS | METH_STATIC,
   (char*)"V.Initialize(string, int)\nC++: static void Initialize(const char *executable, int type)\nV.Initialize(string, int, vtkPVOptions)\nC++: static void Initialize(const char *executable, int type,\n    vtkPVOptions *options)\n\nInitializes the server manager. Do not use the server manager\nbefore calling this.\n"},
  {(char*)"Finalize", PyvtkInitializationHelper_Finalize, METH_VARARGS | METH_STATIC,
   (char*)"V.Finalize()\nC++: static void Finalize()\n\nFinalizes the server manager. Do not use the server manager after\ncalling this.\n"},
  {(char*)"StandaloneInitialize", PyvtkInitializationHelper_StandaloneInitialize, METH_VARARGS | METH_STATIC,
   (char*)"V.StandaloneInitialize()\nC++: static void StandaloneInitialize()\n\nInitialization for standalone executables linking against a PV\nlibrary. This is needed to insure that linker does not remove\nobject factories' auto init during static linking. It also cleans\nup after protobuf.\n"},
  {(char*)"StandaloneFinalize", PyvtkInitializationHelper_StandaloneFinalize, METH_VARARGS | METH_STATIC,
   (char*)"V.StandaloneFinalize()\nC++: static void StandaloneFinalize()\n\nInitialization for standalone executables linking against a PV\nlibrary. This is needed to insure that linker does not remove\nobject factories' auto init during static linking. It also cleans\nup after protobuf.\n"},
  {(char*)"SetLoadSettingsFilesDuringInitialization", PyvtkInitializationHelper_SetLoadSettingsFilesDuringInitialization, METH_VARARGS | METH_STATIC,
   (char*)"V.SetLoadSettingsFilesDuringInitialization(bool)\nC++: static void SetLoadSettingsFilesDuringInitialization(bool)\n\nDuring initialization, vtkInitializationHelper reads \"settings\"\nfiles for configuring vtkSMSettings. To disable this processing\nof the settings file for an application (e.g. in Catalyst), turn\nthis off. On by default.\n"},
  {(char*)"GetLoadSettingsFilesDuringInitialization", PyvtkInitializationHelper_GetLoadSettingsFilesDuringInitialization, METH_VARARGS | METH_STATIC,
   (char*)"V.GetLoadSettingsFilesDuringInitialization() -> bool\nC++: static bool GetLoadSettingsFilesDuringInitialization()\n\nDuring initialization, vtkInitializationHelper reads \"settings\"\nfiles for configuring vtkSMSettings. To disable this processing\nof the settings file for an application (e.g. in Catalyst), turn\nthis off. On by default.\n"},
  {(char*)"SetOrganizationName", PyvtkInitializationHelper_SetOrganizationName, METH_VARARGS | METH_STATIC,
   (char*)"V.SetOrganizationName(string)\nC++: static void SetOrganizationName(\n    const std::string &organizationName)\n\nSets the organization producing this application. This is\n\"ParaView\" by default, but can be different for branded\napplications.\n"},
  {(char*)"GetOrganizationName", PyvtkInitializationHelper_GetOrganizationName, METH_VARARGS | METH_STATIC,
   (char*)"V.GetOrganizationName() -> string\nC++: static const std::string &GetOrganizationName()\n\nSets the organization producing this application. This is\n\"ParaView\" by default, but can be different for branded\napplications.\n"},
  {(char*)"SetApplicationName", PyvtkInitializationHelper_SetApplicationName, METH_VARARGS | METH_STATIC,
   (char*)"V.SetApplicationName(string)\nC++: static void SetApplicationName(const std::string &appName)\n\nSets the name of the application. This is \"ParaView\" by default,\nbut can be different for branded applications.\n"},
  {(char*)"GetApplicationName", PyvtkInitializationHelper_GetApplicationName, METH_VARARGS | METH_STATIC,
   (char*)"V.GetApplicationName() -> string\nC++: static const std::string &GetApplicationName()\n\nSets the name of the application. This is \"ParaView\" by default,\nbut can be different for branded applications.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInitializationHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInitializationHelper_Methods,
    "vtkInitializationHelper", modulename,
    NULL, NULL,
    PyvtkInitializationHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkInitializationHelper_Doc()
{
  static const char *docstring[] = {
    "vtkInitializationHelper - help class for python modules\n\n",
    "Superclass: vtkObject\n\n",
    "This class is used by the python modules when they are loaded from\npython (as opposed to pvpython). It simply initializes the server\nmanager so that it can be used.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInitializationHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInitializationHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInitializationHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

