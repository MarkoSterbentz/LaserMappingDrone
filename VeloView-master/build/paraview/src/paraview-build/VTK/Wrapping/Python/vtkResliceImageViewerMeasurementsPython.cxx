// python wrapper for vtkResliceImageViewerMeasurements
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkResliceImageViewerMeasurements.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkResliceImageViewerMeasurements(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkResliceImageViewerMeasurementsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkResliceImageViewerMeasurements_Doc();


static PyObject *
PyvtkResliceImageViewerMeasurements_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkResliceImageViewerMeasurements::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceImageViewerMeasurements::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceImageViewerMeasurements *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceImageViewerMeasurements::NewInstance());

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
PyvtkResliceImageViewerMeasurements_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkResliceImageViewerMeasurements *tempr = vtkResliceImageViewerMeasurements::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkResliceImageViewerMeasurements::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  vtkAbstractWidget *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkResliceImageViewerMeasurements::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_RemoveItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  vtkAbstractWidget *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget"))
    {
    if (ap.IsBound())
      {
      op->RemoveItem(temp0);
      }
    else
      {
      op->vtkResliceImageViewerMeasurements::RemoveItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_RemoveAllItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllItems();
      }
    else
      {
      op->vtkResliceImageViewerMeasurements::RemoveAllItems();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessEvents(temp0);
      }
    else
      {
      op->vtkResliceImageViewerMeasurements::SetProcessEvents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_GetProcessEventsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEventsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessEventsMinValue() :
      op->vtkResliceImageViewerMeasurements::GetProcessEventsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_GetProcessEventsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEventsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessEventsMaxValue() :
      op->vtkResliceImageViewerMeasurements::GetProcessEventsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_GetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessEvents() :
      op->vtkResliceImageViewerMeasurements::GetProcessEvents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_ProcessEventsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEventsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProcessEventsOn();
      }
    else
      {
      op->vtkResliceImageViewerMeasurements::ProcessEventsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_ProcessEventsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEventsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProcessEventsOff();
      }
    else
      {
      op->vtkResliceImageViewerMeasurements::ProcessEventsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkResliceImageViewerMeasurements::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkResliceImageViewerMeasurements::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_SetResliceImageViewer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceImageViewer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  vtkResliceImageViewer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkResliceImageViewer"))
    {
    if (ap.IsBound())
      {
      op->SetResliceImageViewer(temp0);
      }
    else
      {
      op->vtkResliceImageViewerMeasurements::SetResliceImageViewer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_GetResliceImageViewer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceImageViewer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceImageViewer *tempr = (ap.IsBound() ?
      op->GetResliceImageViewer() :
      op->vtkResliceImageViewerMeasurements::GetResliceImageViewer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceImageViewerMeasurements_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewerMeasurements *op = static_cast<vtkResliceImageViewerMeasurements *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkResliceImageViewerMeasurements::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkResliceImageViewerMeasurements_Methods[] = {
  {(char*)"GetClassName", PyvtkResliceImageViewerMeasurements_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkResliceImageViewerMeasurements_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkResliceImageViewerMeasurements_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkResliceImageViewerMeasurements\nC++: vtkResliceImageViewerMeasurements *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkResliceImageViewerMeasurements_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkResliceImageViewerMeasurements\nC++: vtkResliceImageViewerMeasurements *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"Render", PyvtkResliceImageViewerMeasurements_Render, METH_VARARGS,
   (char*)"V.Render()\nC++: virtual void Render()\n\nRender the measurements.\n"},
  {(char*)"AddItem", PyvtkResliceImageViewerMeasurements_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkAbstractWidget)\nC++: virtual void AddItem(vtkAbstractWidget *)\n\nAdd / remove a measurement widget\n"},
  {(char*)"RemoveItem", PyvtkResliceImageViewerMeasurements_RemoveItem, METH_VARARGS,
   (char*)"V.RemoveItem(vtkAbstractWidget)\nC++: virtual void RemoveItem(vtkAbstractWidget *)\n\nAdd / remove a measurement widget\n"},
  {(char*)"RemoveAllItems", PyvtkResliceImageViewerMeasurements_RemoveAllItems, METH_VARARGS,
   (char*)"V.RemoveAllItems()\nC++: virtual void RemoveAllItems()\n\nAdd / remove a measurement widget\n"},
  {(char*)"SetProcessEvents", PyvtkResliceImageViewerMeasurements_SetProcessEvents, METH_VARARGS,
   (char*)"V.SetProcessEvents(int)\nC++: void SetProcessEvents(int)\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust overide SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {(char*)"GetProcessEventsMinValue", PyvtkResliceImageViewerMeasurements_GetProcessEventsMinValue, METH_VARARGS,
   (char*)"V.GetProcessEventsMinValue() -> int\nC++: int GetProcessEventsMinValue()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust overide SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {(char*)"GetProcessEventsMaxValue", PyvtkResliceImageViewerMeasurements_GetProcessEventsMaxValue, METH_VARARGS,
   (char*)"V.GetProcessEventsMaxValue() -> int\nC++: int GetProcessEventsMaxValue()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust overide SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {(char*)"GetProcessEvents", PyvtkResliceImageViewerMeasurements_GetProcessEvents, METH_VARARGS,
   (char*)"V.GetProcessEvents() -> int\nC++: int GetProcessEvents()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust overide SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {(char*)"ProcessEventsOn", PyvtkResliceImageViewerMeasurements_ProcessEventsOn, METH_VARARGS,
   (char*)"V.ProcessEventsOn()\nC++: void ProcessEventsOn()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust overide SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {(char*)"ProcessEventsOff", PyvtkResliceImageViewerMeasurements_ProcessEventsOff, METH_VARARGS,
   (char*)"V.ProcessEventsOff()\nC++: void ProcessEventsOff()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust overide SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {(char*)"SetTolerance", PyvtkResliceImageViewerMeasurements_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double a)\n\nTolerance for Point-in-Plane check\n"},
  {(char*)"GetTolerance", PyvtkResliceImageViewerMeasurements_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nTolerance for Point-in-Plane check\n"},
  {(char*)"SetResliceImageViewer", PyvtkResliceImageViewerMeasurements_SetResliceImageViewer, METH_VARARGS,
   (char*)"V.SetResliceImageViewer(vtkResliceImageViewer)\nC++: virtual void SetResliceImageViewer(vtkResliceImageViewer *)\n\nSet the reslice image viewer. This is automatically done in the\nclass vtkResliceImageViewer\n"},
  {(char*)"GetResliceImageViewer", PyvtkResliceImageViewerMeasurements_GetResliceImageViewer, METH_VARARGS,
   (char*)"V.GetResliceImageViewer() -> vtkResliceImageViewer\nC++: vtkResliceImageViewer *GetResliceImageViewer()\n\nSet the reslice image viewer. This is automatically done in the\nclass vtkResliceImageViewer\n"},
  {(char*)"Update", PyvtkResliceImageViewerMeasurements_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nUpdate the measurements. This is automatically called when the\nreslice cursor's axes are change.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkResliceImageViewerMeasurements_StaticNew()
{
  return vtkResliceImageViewerMeasurements::New();
}

PyObject *PyVTKClass_vtkResliceImageViewerMeasurementsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkResliceImageViewerMeasurements_StaticNew,
    PyvtkResliceImageViewerMeasurements_Methods,
    "vtkResliceImageViewerMeasurements", modulename,
    NULL, NULL,
    PyvtkResliceImageViewerMeasurements_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkResliceImageViewerMeasurements_Doc()
{
  static const char *docstring[] = {
    "vtkResliceImageViewerMeasurements - Manage measurements on a resliced\nimage\n\n",
    "Superclass: vtkObject\n\n",
    "This class manages measurements on the resliced image. It toggles the\nthe visibility of the measurements based on whether the resliced\nimage is the same orientation as when the measurement was initially\nplaced.\n\nSee Also:\n\nvtkResliceCursor vtkResliceCursorWidget\nvtkResliceCursorRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkResliceImageViewerMeasurements(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkResliceImageViewerMeasurementsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkResliceImageViewerMeasurements", o) != 0)
    {
    Py_DECREF(o);
    }

}

