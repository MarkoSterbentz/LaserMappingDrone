// python wrapper for vtkWidgetEventTranslator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkWidgetEventTranslator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWidgetEventTranslator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWidgetEventTranslatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkWidgetEventTranslator_Doc();


static PyObject *
PyvtkWidgetEventTranslator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWidgetEventTranslator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWidgetEventTranslator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWidgetEventTranslator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWidgetEventTranslator::NewInstance());

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
PyvtkWidgetEventTranslator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWidgetEventTranslator *tempr = vtkWidgetEventTranslator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_SetTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  unsigned long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTranslation(temp0, temp1);
      }
    else
      {
      op->vtkWidgetEventTranslator::SetTranslation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_SetTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTranslation(temp0, temp1);
      }
    else
      {
      op->vtkWidgetEventTranslator::SetTranslation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_SetTranslation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  int temp1;
  char temp2;
  int temp3;
  char *temp4 = NULL;
  unsigned long temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetTranslation(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkWidgetEventTranslator::SetTranslation(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_SetTranslation_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkEvent *temp0 = NULL;
  unsigned long temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkEvent") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTranslation(temp0, temp1);
      }
    else
      {
      op->vtkWidgetEventTranslator::SetTranslation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkWidgetEventTranslator_SetTranslation_Methods[] = {
  {NULL, PyvtkWidgetEventTranslator_SetTranslation_s1, METH_VARARGS,
   (char*)"@kk"},
  {NULL, PyvtkWidgetEventTranslator_SetTranslation_s2, METH_VARARGS,
   (char*)"@zz"},
  {NULL, PyvtkWidgetEventTranslator_SetTranslation_s4, METH_VARARGS,
   (char*)"@Ok *vtkEvent"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkWidgetEventTranslator_SetTranslation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWidgetEventTranslator_SetTranslation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkWidgetEventTranslator_SetTranslation_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTranslation");
  return NULL;
}



static PyObject *
PyvtkWidgetEventTranslator_GetTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTranslation(temp0) :
      op->vtkWidgetEventTranslator::GetTranslation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_GetTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetTranslation(temp0) :
      op->vtkWidgetEventTranslator::GetTranslation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_GetTranslation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  int temp1;
  char temp2;
  int temp3;
  char *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTranslation(temp0, temp1, temp2, temp3, temp4) :
      op->vtkWidgetEventTranslator::GetTranslation(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_GetTranslation_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkEvent *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEvent"))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTranslation(temp0) :
      op->vtkWidgetEventTranslator::GetTranslation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkWidgetEventTranslator_GetTranslation_Methods[] = {
  {NULL, PyvtkWidgetEventTranslator_GetTranslation_s1, METH_VARARGS,
   (char*)"@k"},
  {NULL, PyvtkWidgetEventTranslator_GetTranslation_s2, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkWidgetEventTranslator_GetTranslation_s4, METH_VARARGS,
   (char*)"@O *vtkEvent"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkWidgetEventTranslator_GetTranslation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWidgetEventTranslator_GetTranslation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkWidgetEventTranslator_GetTranslation_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTranslation");
  return NULL;
}



static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  int temp1;
  char temp2;
  int temp3;
  char *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    int tempr = (ap.IsBound() ?
      op->RemoveTranslation(temp0, temp1, temp2, temp3, temp4) :
      op->vtkWidgetEventTranslator::RemoveTranslation(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkEvent *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEvent"))
    {
    int tempr = (ap.IsBound() ?
      op->RemoveTranslation(temp0) :
      op->vtkWidgetEventTranslator::RemoveTranslation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->RemoveTranslation(temp0) :
      op->vtkWidgetEventTranslator::RemoveTranslation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->RemoveTranslation(temp0) :
      op->vtkWidgetEventTranslator::RemoveTranslation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkWidgetEventTranslator_RemoveTranslation_Methods[] = {
  {NULL, PyvtkWidgetEventTranslator_RemoveTranslation_s2, METH_VARARGS,
   (char*)"@O *vtkEvent"},
  {NULL, PyvtkWidgetEventTranslator_RemoveTranslation_s3, METH_VARARGS,
   (char*)"@k"},
  {NULL, PyvtkWidgetEventTranslator_RemoveTranslation_s4, METH_VARARGS,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWidgetEventTranslator_RemoveTranslation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkWidgetEventTranslator_RemoveTranslation_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveTranslation");
  return NULL;
}



static PyObject *
PyvtkWidgetEventTranslator_ClearEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearEvents();
      }
    else
      {
      op->vtkWidgetEventTranslator::ClearEvents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_AddEventsToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEventsToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkAbstractWidget *temp0 = NULL;
  vtkCallbackCommand *temp1 = NULL;
  float temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget") &&
      ap.GetVTKObject(temp1, "vtkCallbackCommand") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddEventsToParent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWidgetEventTranslator::AddEventsToParent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_AddEventsToInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEventsToInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkRenderWindowInteractor *temp0 = NULL;
  vtkCallbackCommand *temp1 = NULL;
  float temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkCallbackCommand") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddEventsToInteractor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkWidgetEventTranslator::AddEventsToInteractor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkWidgetEventTranslator_Methods[] = {
  {(char*)"GetClassName", PyvtkWidgetEventTranslator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros.\n"},
  {(char*)"IsA", PyvtkWidgetEventTranslator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros.\n"},
  {(char*)"NewInstance", PyvtkWidgetEventTranslator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWidgetEventTranslator\nC++: vtkWidgetEventTranslator *NewInstance()\n\nStandard macros.\n"},
  {(char*)"SafeDownCast", PyvtkWidgetEventTranslator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWidgetEventTranslator\nC++: vtkWidgetEventTranslator *SafeDownCast(vtkObject* o)\n\nStandard macros.\n"},
  {(char*)"SetTranslation", PyvtkWidgetEventTranslator_SetTranslation, METH_VARARGS,
   (char*)"V.SetTranslation(int, int)\nC++: void SetTranslation(unsigned long VTKEvent,\n    unsigned long widgetEvent)\nV.SetTranslation(string, string)\nC++: void SetTranslation(const char *VTKEvent,\n    const char *widgetEvent)\nV.SetTranslation(int, int, char, int, string, int)\nC++: void SetTranslation(unsigned long VTKEvent, int modifier,\n    char keyCode, int repeatCount, const char *keySym,\n    unsigned long widgetEvent)\nV.SetTranslation(vtkEvent, int)\nC++: void SetTranslation(vtkEvent *VTKevent,\n    unsigned long widgetEvent)\n\nUse these methods to create the translation from a VTK event to a\nwidget event. Specifying vtkWidgetEvent::NoEvent or an empty\nstring for the (toEvent) erases the mapping for the event.\n"},
  {(char*)"GetTranslation", PyvtkWidgetEventTranslator_GetTranslation, METH_VARARGS,
   (char*)"V.GetTranslation(int) -> int\nC++: unsigned long GetTranslation(unsigned long VTKEvent)\nV.GetTranslation(string) -> string\nC++: const char *GetTranslation(const char *VTKEvent)\nV.GetTranslation(int, int, char, int, string) -> int\nC++: unsigned long GetTranslation(unsigned long VTKEvent,\n    int modifier, char keyCode, int repeatCount, char *keySym)\nV.GetTranslation(vtkEvent) -> int\nC++: unsigned long GetTranslation(vtkEvent *VTKEvent)\n\nTranslate a VTK event into a widget event. If no event mapping is\nfound, then the methods return vtkWidgetEvent::NoEvent or a NULL\nstring.\n"},
  {(char*)"RemoveTranslation", PyvtkWidgetEventTranslator_RemoveTranslation, METH_VARARGS,
   (char*)"V.RemoveTranslation(int, int, char, int, string) -> int\nC++: int RemoveTranslation(unsigned long VTKEvent, int modifier,\n    char keyCode, int repeatCount, char *keySym)\nV.RemoveTranslation(vtkEvent) -> int\nC++: int RemoveTranslation(vtkEvent *e)\nV.RemoveTranslation(int) -> int\nC++: int RemoveTranslation(unsigned long VTKEvent)\nV.RemoveTranslation(string) -> int\nC++: int RemoveTranslation(const char *VTKEvent)\n\nRemove translations for a binding. Returns the number of\ntranslations removed.\n"},
  {(char*)"ClearEvents", PyvtkWidgetEventTranslator_ClearEvents, METH_VARARGS,
   (char*)"V.ClearEvents()\nC++: void ClearEvents()\n\nClear all events from the translator (i.e., no events will be\ntranslated).\n"},
  {(char*)"AddEventsToParent", PyvtkWidgetEventTranslator_AddEventsToParent, METH_VARARGS,
   (char*)"V.AddEventsToParent(vtkAbstractWidget, vtkCallbackCommand, float)\nC++: void AddEventsToParent(vtkAbstractWidget *,\n    vtkCallbackCommand *, float priority)\n\nAdd the events in the current translation table to the\ninteractor.\n"},
  {(char*)"AddEventsToInteractor", PyvtkWidgetEventTranslator_AddEventsToInteractor, METH_VARARGS,
   (char*)"V.AddEventsToInteractor(vtkRenderWindowInteractor,\n    vtkCallbackCommand, float)\nC++: void AddEventsToInteractor(vtkRenderWindowInteractor *,\n    vtkCallbackCommand *, float priority)\n\nAdd the events in the current translation table to the\ninteractor.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWidgetEventTranslator_StaticNew()
{
  return vtkWidgetEventTranslator::New();
}

PyObject *PyVTKClass_vtkWidgetEventTranslatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWidgetEventTranslator_StaticNew,
    PyvtkWidgetEventTranslator_Methods,
    "vtkWidgetEventTranslator", modulename,
    NULL, NULL,
    PyvtkWidgetEventTranslator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkWidgetEventTranslator_Doc()
{
  static const char *docstring[] = {
    "vtkWidgetEventTranslator - map VTK events into widget events\n\n",
    "Superclass: vtkObject\n\n",
    "vtkWidgetEventTranslator maps VTK events (defined on vtkCommand) into\nwidget events (defined in vtkWidgetEvent.h). This class is typically\nused in combination with vtkWidgetCallbackMapper, which is\nresponsible for translating widget events into method callbacks, and\nthen invoking the callbacks.\n\nThis class can be used to define different mappings of VTK events\ninto the widget events. Thus widgets ",
    "can be reconfigured to use\ndifferent event bindings.\n\nSee Also:\n\nvtkWidgetEvent vtkCommand vtkInteractorObserver\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWidgetEventTranslator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWidgetEventTranslatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWidgetEventTranslator", o) != 0)
    {
    Py_DECREF(o);
    }

}

