// python wrapper for vtkPickingManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPickingManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPickingManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPickingManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPickingManager_Doc();


static PyObject *
PyvtkPickingManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPickingManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPickingManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPickingManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPickingManager::NewInstance());

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
PyvtkPickingManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPickingManager *tempr = vtkPickingManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOn();
      }
    else
      {
      op->vtkPickingManager::EnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOff();
      }
    else
      {
      op->vtkPickingManager::EnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkPickingManager::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkPickingManager::GetEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_SetOptimizeOnInteractorEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOptimizeOnInteractorEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOptimizeOnInteractorEvents(temp0);
      }
    else
      {
      op->vtkPickingManager::SetOptimizeOnInteractorEvents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_GetOptimizeOnInteractorEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOptimizeOnInteractorEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetOptimizeOnInteractorEvents() :
      op->vtkPickingManager::GetOptimizeOnInteractorEvents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkRenderWindowInteractor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->SetInteractor(temp0);
      }
    else
      {
      op->vtkPickingManager::SetInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkPickingManager::GetInteractor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_AddPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkAbstractPicker *temp0 = NULL;
  vtkObject *temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkAbstractPicker") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkObject")))
    {
    if (ap.IsBound())
      {
      op->AddPicker(temp0, temp1);
      }
    else
      {
      op->vtkPickingManager::AddPicker(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_RemovePicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkAbstractPicker *temp0 = NULL;
  vtkObject *temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkAbstractPicker") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkObject")))
    {
    if (ap.IsBound())
      {
      op->RemovePicker(temp0, temp1);
      }
    else
      {
      op->vtkPickingManager::RemovePicker(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_RemoveObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->RemoveObject(temp0);
      }
    else
      {
      op->vtkPickingManager::RemoveObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_Pick_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkAbstractPicker *temp0 = NULL;
  vtkObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractPicker") &&
      ap.GetVTKObject(temp1, "vtkObject"))
    {
    bool tempr = (ap.IsBound() ?
      op->Pick(temp0, temp1) :
      op->vtkPickingManager::Pick(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPickingManager_Pick_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    bool tempr = (ap.IsBound() ?
      op->Pick(temp0) :
      op->vtkPickingManager::Pick(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPickingManager_Pick_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkAbstractPicker *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPicker"))
    {
    bool tempr = (ap.IsBound() ?
      op->Pick(temp0) :
      op->vtkPickingManager::Pick(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPickingManager_Pick_Methods[] = {
  {NULL, PyvtkPickingManager_Pick_s2, METH_VARARGS,
   (char*)"@O *vtkObject"},
  {NULL, PyvtkPickingManager_Pick_s3, METH_VARARGS,
   (char*)"@O *vtkAbstractPicker"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPickingManager_Pick(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPickingManager_Pick_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPickingManager_Pick_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Pick");
  return NULL;
}



static PyObject *
PyvtkPickingManager_GetAssemblyPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkAbstractPropPicker *temp3 = NULL;
  vtkRenderer *temp4 = NULL;
  vtkObject *temp5 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractPropPicker") &&
      ap.GetVTKObject(temp4, "vtkRenderer") &&
      ap.GetVTKObject(temp5, "vtkObject"))
    {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->GetAssemblyPath(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkPickingManager::GetAssemblyPath(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_GetNumberOfPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPickers() :
      op->vtkPickingManager::GetNumberOfPickers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPickingManager_GetNumberOfObjectsLinked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObjectsLinked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPickingManager *op = static_cast<vtkPickingManager *>(vp);

  vtkAbstractPicker *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPicker"))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfObjectsLinked(temp0) :
      op->vtkPickingManager::GetNumberOfObjectsLinked(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPickingManager_Methods[] = {
  {(char*)"GetClassName", PyvtkPickingManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPickingManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPickingManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPickingManager\nC++: vtkPickingManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPickingManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPickingManager\nC++: vtkPickingManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EnabledOn", PyvtkPickingManager_EnabledOn, METH_VARARGS,
   (char*)"V.EnabledOn()\nC++: void EnabledOn()\n\nEnable/Disable management. When disabled, it redirects every pick\non the picker. By default the picking manager is disabled when\ninitialized.\n"},
  {(char*)"EnabledOff", PyvtkPickingManager_EnabledOff, METH_VARARGS,
   (char*)"V.EnabledOff()\nC++: void EnabledOff()\n\nEnable/Disable management. When disabled, it redirects every pick\non the picker. By default the picking manager is disabled when\ninitialized.\n"},
  {(char*)"SetEnabled", PyvtkPickingManager_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(bool)\nC++: void SetEnabled(bool a)\n\nEnable/Disable management. When disabled, it redirects every pick\non the picker. By default the picking manager is disabled when\ninitialized.\n"},
  {(char*)"GetEnabled", PyvtkPickingManager_GetEnabled, METH_VARARGS,
   (char*)"V.GetEnabled() -> bool\nC++: bool GetEnabled()\n\nEnable/Disable management. When disabled, it redirects every pick\non the picker. By default the picking manager is disabled when\ninitialized.\n"},
  {(char*)"SetOptimizeOnInteractorEvents", PyvtkPickingManager_SetOptimizeOnInteractorEvents, METH_VARARGS,
   (char*)"V.SetOptimizeOnInteractorEvents(bool)\nC++: void SetOptimizeOnInteractorEvents(bool optimize)\n\nEnable/Disable optimization depending on the\nrenderWindowInteractor events. The mechanism keeps in cache the\nlast selected picker as well as the last render time to recompute\nthe selection only if a new render event occurred after the last\nselection; otherwise, it simply returns the last picker selected.\nBy default pickingManagers does use the optimization. Warning:\nTurning off the caching significantly decreases performance.\n"},
  {(char*)"GetOptimizeOnInteractorEvents", PyvtkPickingManager_GetOptimizeOnInteractorEvents, METH_VARARGS,
   (char*)"V.GetOptimizeOnInteractorEvents() -> bool\nC++: bool GetOptimizeOnInteractorEvents()\n\nEnable/Disable optimization depending on the\nrenderWindowInteractor events. The mechanism keeps in cache the\nlast selected picker as well as the last render time to recompute\nthe selection only if a new render event occurred after the last\nselection; otherwise, it simply returns the last picker selected.\nBy default pickingManagers does use the optimization. Warning:\nTurning off the caching significantly decreases performance.\n"},
  {(char*)"SetInteractor", PyvtkPickingManager_SetInteractor, METH_VARARGS,
   (char*)"V.SetInteractor(vtkRenderWindowInteractor)\nC++: void SetInteractor(vtkRenderWindowInteractor *iren)\n\nSet the window interactor associated with the manager.\n"},
  {(char*)"GetInteractor", PyvtkPickingManager_GetInteractor, METH_VARARGS,
   (char*)"V.GetInteractor() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor()\n\nSet the window interactor associated with the manager.\n"},
  {(char*)"AddPicker", PyvtkPickingManager_AddPicker, METH_VARARGS,
   (char*)"V.AddPicker(vtkAbstractPicker, vtkObject)\nC++: void AddPicker(vtkAbstractPicker *picker,\n    vtkObject *object=0)\n\nRegister a picker into the picking manager. It can be internally\nassociated (optional) with an object. This allows the removal of\nall the pickers of the given object. Note that a picker can be\nregistered multiple times with different objects.\\sa\nRemovePicker(), RemoveObject().\n"},
  {(char*)"RemovePicker", PyvtkPickingManager_RemovePicker, METH_VARARGS,
   (char*)"V.RemovePicker(vtkAbstractPicker, vtkObject)\nC++: void RemovePicker(vtkAbstractPicker *picker,\n    vtkObject *object=0)\n\nUnregister the picker from the picking manager. If object is non\nnull, only the pair ( picker, object) is removed.\n"},
  {(char*)"RemoveObject", PyvtkPickingManager_RemoveObject, METH_VARARGS,
   (char*)"V.RemoveObject(vtkObject)\nC++: void RemoveObject(vtkObject *object)\n\nRemove all occurences of the object from the registered list. If\na picker associated with the object is not also associated with\nany other object, it is removed from the list as well.\n"},
  {(char*)"Pick", PyvtkPickingManager_Pick, METH_VARARGS,
   (char*)"V.Pick(vtkAbstractPicker, vtkObject) -> bool\nC++: bool Pick(vtkAbstractPicker *picker, vtkObject *object)\nV.Pick(vtkObject) -> bool\nC++: bool Pick(vtkObject *object)\nV.Pick(vtkAbstractPicker) -> bool\nC++: bool Pick(vtkAbstractPicker *picker)\n\nRun the picking selection process and return true if the object\nis associated with the given picker if it is the best one, false\notherwise. If OptimizeOnInteractorEvents is true, the pick can\nreuse cached information.\n"},
  {(char*)"GetAssemblyPath", PyvtkPickingManager_GetAssemblyPath, METH_VARARGS,
   (char*)"V.GetAssemblyPath(float, float, float, vtkAbstractPropPicker,\n    vtkRenderer, vtkObject) -> vtkAssemblyPath\nC++: vtkAssemblyPath *GetAssemblyPath(double X, double Y,\n    double Z, vtkAbstractPropPicker *picker,\n    vtkRenderer *renderer, vtkObject *obj)\n\nIf the picking manager is enabled, it runs the picking selection\nprocess and return the assembly path associated to the picker\npassed as argument if it is the one mediated. Otherwise it simply\nproceeds to a pick using the given renderer and returns the\ncorresponding assembly path.\n"},
  {(char*)"GetNumberOfPickers", PyvtkPickingManager_GetNumberOfPickers, METH_VARARGS,
   (char*)"V.GetNumberOfPickers() -> int\nC++: int GetNumberOfPickers()\n\nReturn the number of pickers registered. If the same picker is\nadded multiple times with different objects, it is counted once.\n"},
  {(char*)"GetNumberOfObjectsLinked", PyvtkPickingManager_GetNumberOfObjectsLinked, METH_VARARGS,
   (char*)"V.GetNumberOfObjectsLinked(vtkAbstractPicker) -> int\nC++: int GetNumberOfObjectsLinked(vtkAbstractPicker *picker)\n\nReturn the number of objects linked with a given picker. Note: a\nnull object is counted as an associated object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPickingManager_StaticNew()
{
  return vtkPickingManager::New();
}

PyObject *PyVTKClass_vtkPickingManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPickingManager_StaticNew,
    PyvtkPickingManager_Methods,
    "vtkPickingManager", modulename,
    NULL, NULL,
    PyvtkPickingManager_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPickingManager_Doc()
{
  static const char *docstring[] = {
    "vtkPickingManager -\n\n",
    "Superclass: vtkObject\n\n",
    "The Picking Manager (PM) coordinates picking across widgets\nsimultaneously. It maintains a collection of registered pickers; when\nthe manager is picked (e.g. vtkPickingManager::Pick()), a pick is run\non each picker but only the best picker (e.g. closest to camera\npoint) is selected. It finally returns the widget/representation or\npicker that was selected.\n\nCaveats:\n\nEvery time a vtkWidget and/or a",
    " vtkWidgetRepresentation is\ninstantiated, it automatically registers its picker(s) and start\nbeing managed by delegating all its pick calls to the picking\nmanager. It is possible to customize with the management in two ways:\n* at the widget level, the “ManagesPicking” variable can be\n  changed from the widget/representation class to tell whether to use\nthe manager or not.\n* Directly disable th",
    "e picking manager itself  with the boolean\n  variable\\sa Enabled using vtkPickingManager::EnabledOn(),\n  EnabledOff(), SetEnabled(bool).\n\nImportant:\n\nThe picking manager is not active by default as it slightly reduces\nthe performances when interacting with the scene.\n\nImportant:\n\nWhen registering pickers, a null object is considered valid because\nwe can managed picker without any associated object",
    ". It is really\nimportant to note that a null object is different from one to an\nother !! This has been done to allow adding multiple times the same\npicker to the manager by not passing the referenced object to not\nforce the supression of all pickers\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPickingManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPickingManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPickingManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

