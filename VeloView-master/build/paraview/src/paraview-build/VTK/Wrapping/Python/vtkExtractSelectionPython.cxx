// python wrapper for vtkExtractSelection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractSelection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractSelection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractSelectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
extern "C" { PyObject *PyVTKClass_vtkExtractSelectionBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
#endif

static const char **PyvtkExtractSelection_Doc();


static PyObject *
PyvtkExtractSelection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractSelection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelection::NewInstance());

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
PyvtkExtractSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractSelection *tempr = vtkExtractSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_SetShowBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowBounds(temp0);
      }
    else
      {
      op->vtkExtractSelection::SetShowBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_GetShowBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShowBounds() :
      op->vtkExtractSelection::GetShowBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_ShowBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowBoundsOn();
      }
    else
      {
      op->vtkExtractSelection::ShowBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_ShowBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowBoundsOff();
      }
    else
      {
      op->vtkExtractSelection::ShowBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_SetUseProbeForLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseProbeForLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseProbeForLocations(temp0);
      }
    else
      {
      op->vtkExtractSelection::SetUseProbeForLocations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_GetUseProbeForLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseProbeForLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetUseProbeForLocations() :
      op->vtkExtractSelection::GetUseProbeForLocations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_UseProbeForLocationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseProbeForLocationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseProbeForLocationsOn();
      }
    else
      {
      op->vtkExtractSelection::UseProbeForLocationsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelection_UseProbeForLocationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseProbeForLocationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelection *op = static_cast<vtkExtractSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseProbeForLocationsOff();
      }
    else
      {
      op->vtkExtractSelection::UseProbeForLocationsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractSelection_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractSelection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractSelection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractSelection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractSelection\nC++: vtkExtractSelection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractSelection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractSelection\nC++: vtkExtractSelection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetShowBounds", PyvtkExtractSelection_SetShowBounds, METH_VARARGS,
   (char*)"V.SetShowBounds(int)\nC++: void SetShowBounds(int a)\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default. Applicable only to Frustum\nselection extraction.\n"},
  {(char*)"GetShowBounds", PyvtkExtractSelection_GetShowBounds, METH_VARARGS,
   (char*)"V.GetShowBounds() -> int\nC++: int GetShowBounds()\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default. Applicable only to Frustum\nselection extraction.\n"},
  {(char*)"ShowBoundsOn", PyvtkExtractSelection_ShowBoundsOn, METH_VARARGS,
   (char*)"V.ShowBoundsOn()\nC++: void ShowBoundsOn()\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default. Applicable only to Frustum\nselection extraction.\n"},
  {(char*)"ShowBoundsOff", PyvtkExtractSelection_ShowBoundsOff, METH_VARARGS,
   (char*)"V.ShowBoundsOff()\nC++: void ShowBoundsOff()\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default. Applicable only to Frustum\nselection extraction.\n"},
  {(char*)"SetUseProbeForLocations", PyvtkExtractSelection_SetUseProbeForLocations, METH_VARARGS,
   (char*)"V.SetUseProbeForLocations(int)\nC++: void SetUseProbeForLocations(int a)\n\nWhen On, vtkProbeSelectedLocations is used for extracting\nselections of content type vtkSelection::LOCATIONS. Default is\noff and then vtkExtractSelectedLocations is used.\n"},
  {(char*)"GetUseProbeForLocations", PyvtkExtractSelection_GetUseProbeForLocations, METH_VARARGS,
   (char*)"V.GetUseProbeForLocations() -> int\nC++: int GetUseProbeForLocations()\n\nWhen On, vtkProbeSelectedLocations is used for extracting\nselections of content type vtkSelection::LOCATIONS. Default is\noff and then vtkExtractSelectedLocations is used.\n"},
  {(char*)"UseProbeForLocationsOn", PyvtkExtractSelection_UseProbeForLocationsOn, METH_VARARGS,
   (char*)"V.UseProbeForLocationsOn()\nC++: void UseProbeForLocationsOn()\n\nWhen On, vtkProbeSelectedLocations is used for extracting\nselections of content type vtkSelection::LOCATIONS. Default is\noff and then vtkExtractSelectedLocations is used.\n"},
  {(char*)"UseProbeForLocationsOff", PyvtkExtractSelection_UseProbeForLocationsOff, METH_VARARGS,
   (char*)"V.UseProbeForLocationsOff()\nC++: void UseProbeForLocationsOff()\n\nWhen On, vtkProbeSelectedLocations is used for extracting\nselections of content type vtkSelection::LOCATIONS. Default is\noff and then vtkExtractSelectedLocations is used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractSelection_StaticNew()
{
  return vtkExtractSelection::New();
}

PyObject *PyVTKClass_vtkExtractSelectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractSelection_StaticNew,
    PyvtkExtractSelection_Methods,
    "vtkExtractSelection", modulename,
    NULL, NULL,
    PyvtkExtractSelection_Doc(),
    PyVTKClass_vtkExtractSelectionBaseNew(modulename));
  return cls;
}

const char **PyvtkExtractSelection_Doc()
{
  static const char *docstring[] = {
    "vtkExtractSelection - extract a subset from a vtkDataSet.\n\n",
    "Superclass: vtkExtractSelectionBase\n\n",
    "vtkExtractSelection extracts some subset of cells and points from its\ninput dataset. The dataset is given on its first input port. The\nsubset is described by the contents of the vtkSelection on its second\ninput port. Depending on the content of the vtkSelection, this will\nuse either a vtkExtractSelectedIds, vtkExtractSelectedFrustum\nvtkExtractSelectedLocations or a vtkExtractSelectedThreshold to\np",
    "erform the extraction.\n\nSee Also:\n\nvtkSelection vtkExtractSelectedIds vtkExtractSelectedFrustum\nvtkExtractSelectedLocations vtkExtractSelectedThresholds\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractSelection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractSelectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractSelection", o) != 0)
    {
    Py_DECREF(o);
    }

}

