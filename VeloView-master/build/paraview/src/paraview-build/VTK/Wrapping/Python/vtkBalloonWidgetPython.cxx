// python wrapper for vtkBalloonWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBalloonWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBalloonWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBalloonWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkHoverWidgetNew
extern "C" { PyObject *PyVTKClass_vtkHoverWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkHoverWidgetNew
#endif

static const char **PyvtkBalloonWidget_Doc();


static PyObject *
PyvtkBalloonWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBalloonWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBalloonWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBalloonWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBalloonWidget::NewInstance());

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
PyvtkBalloonWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBalloonWidget *tempr = vtkBalloonWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  int temp0;
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
      op->vtkBalloonWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkBalloonRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBalloonRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkBalloonWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonWidget_GetBalloonRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloonRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBalloonRepresentation *tempr = (ap.IsBound() ?
      op->GetBalloonRepresentation() :
      op->vtkBalloonWidget::GetBalloonRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkBalloonWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonWidget_AddBalloon_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBalloon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkProp *temp0 = NULL;
  char *temp1 = NULL;
  vtkImageData *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkProp") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->AddBalloon(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBalloonWidget::AddBalloon(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBalloonWidget_AddBalloon_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBalloon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkProp *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkProp") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddBalloon(temp0, temp1);
      }
    else
      {
      op->vtkBalloonWidget::AddBalloon(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBalloonWidget_AddBalloon(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkBalloonWidget_AddBalloon_s1(self, args);
    case 2:
      return PyvtkBalloonWidget_AddBalloon_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddBalloon");
  return NULL;
}



static PyObject *
PyvtkBalloonWidget_RemoveBalloon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBalloon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->RemoveBalloon(temp0);
      }
    else
      {
      op->vtkBalloonWidget::RemoveBalloon(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonWidget_GetBalloonString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloonString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetBalloonString(temp0) :
      op->vtkBalloonWidget::GetBalloonString(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonWidget_GetBalloonImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloonImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetBalloonImage(temp0) :
      op->vtkBalloonWidget::GetBalloonImage(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonWidget_UpdateBalloonString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateBalloonString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkProp *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkProp") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->UpdateBalloonString(temp0, temp1);
      }
    else
      {
      op->vtkBalloonWidget::UpdateBalloonString(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonWidget_UpdateBalloonImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateBalloonImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkProp *temp0 = NULL;
  vtkImageData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkProp") &&
      ap.GetVTKObject(temp1, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->UpdateBalloonImage(temp0, temp1);
      }
    else
      {
      op->vtkBalloonWidget::UpdateBalloonImage(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonWidget_GetCurrentProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp *tempr = (ap.IsBound() ?
      op->GetCurrentProp() :
      op->vtkBalloonWidget::GetCurrentProp());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonWidget_SetPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  vtkAbstractPropPicker *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPropPicker"))
    {
    if (ap.IsBound())
      {
      op->SetPicker(temp0);
      }
    else
      {
      op->vtkBalloonWidget::SetPicker(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonWidget_GetPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonWidget *op = static_cast<vtkBalloonWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractPropPicker *tempr = (ap.IsBound() ?
      op->GetPicker() :
      op->vtkBalloonWidget::GetPicker());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBalloonWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkBalloonWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for a VTK class.\n"},
  {(char*)"IsA", PyvtkBalloonWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for a VTK class.\n"},
  {(char*)"NewInstance", PyvtkBalloonWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBalloonWidget\nC++: vtkBalloonWidget *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {(char*)"SafeDownCast", PyvtkBalloonWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBalloonWidget\nC++: vtkBalloonWidget *SafeDownCast(vtkObject* o)\n\nStandard methods for a VTK class.\n"},
  {(char*)"SetEnabled", PyvtkBalloonWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nThe method for activating and deactivating this widget. This\nmethod must be overridden because it performs special\ntimer-related operations.\n"},
  {(char*)"SetRepresentation", PyvtkBalloonWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkBalloonRepresentation)\nC++: void SetRepresentation(vtkBalloonRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetBalloonRepresentation", PyvtkBalloonWidget_GetBalloonRepresentation, METH_VARARGS,
   (char*)"V.GetBalloonRepresentation() -> vtkBalloonRepresentation\nC++: vtkBalloonRepresentation *GetBalloonRepresentation()\n\nReturn the representation as a vtkBalloonRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkBalloonWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {(char*)"AddBalloon", PyvtkBalloonWidget_AddBalloon, METH_VARARGS,
   (char*)"V.AddBalloon(vtkProp, string, vtkImageData)\nC++: void AddBalloon(vtkProp *prop, const char *str,\n    vtkImageData *img)\nV.AddBalloon(vtkProp, string)\nC++: void AddBalloon(vtkProp *prop, const char *str)\n\nAdd and remove text and/or an image to be associated with a\nvtkProp. You may add one or both of them.\n"},
  {(char*)"RemoveBalloon", PyvtkBalloonWidget_RemoveBalloon, METH_VARARGS,
   (char*)"V.RemoveBalloon(vtkProp)\nC++: void RemoveBalloon(vtkProp *prop)\n\nAdd and remove text and/or an image to be associated with a\nvtkProp. You may add one or both of them.\n"},
  {(char*)"GetBalloonString", PyvtkBalloonWidget_GetBalloonString, METH_VARARGS,
   (char*)"V.GetBalloonString(vtkProp) -> string\nC++: const char *GetBalloonString(vtkProp *prop)\n\nMethods to retrieve the information associated with each vtkProp\n(i.e., the information that makes up each balloon). A NULL will\nbe returned if the vtkProp does not exist, or if a string or\nimage have not been associated with the specified vtkProp.\n"},
  {(char*)"GetBalloonImage", PyvtkBalloonWidget_GetBalloonImage, METH_VARARGS,
   (char*)"V.GetBalloonImage(vtkProp) -> vtkImageData\nC++: vtkImageData *GetBalloonImage(vtkProp *prop)\n\nMethods to retrieve the information associated with each vtkProp\n(i.e., the information that makes up each balloon). A NULL will\nbe returned if the vtkProp does not exist, or if a string or\nimage have not been associated with the specified vtkProp.\n"},
  {(char*)"UpdateBalloonString", PyvtkBalloonWidget_UpdateBalloonString, METH_VARARGS,
   (char*)"V.UpdateBalloonString(vtkProp, string)\nC++: void UpdateBalloonString(vtkProp *prop, const char *str)\n\nUpdate the balloon string or image. If the specified prop does\nnot exist, then nothing is added not changed.\n"},
  {(char*)"UpdateBalloonImage", PyvtkBalloonWidget_UpdateBalloonImage, METH_VARARGS,
   (char*)"V.UpdateBalloonImage(vtkProp, vtkImageData)\nC++: void UpdateBalloonImage(vtkProp *prop, vtkImageData *image)\n\nUpdate the balloon string or image. If the specified prop does\nnot exist, then nothing is added not changed.\n"},
  {(char*)"GetCurrentProp", PyvtkBalloonWidget_GetCurrentProp, METH_VARARGS,
   (char*)"V.GetCurrentProp() -> vtkProp\nC++: virtual vtkProp *GetCurrentProp()\n\nReturn the current vtkProp that is being hovered over. Note that\nthe value may be NULL (if hovering over nothing or the mouse is\nmoving).\n"},
  {(char*)"SetPicker", PyvtkBalloonWidget_SetPicker, METH_VARARGS,
   (char*)"V.SetPicker(vtkAbstractPropPicker)\nC++: void SetPicker(vtkAbstractPropPicker *)\n\nSet/Get the object used to perform pick operations. Since the\nvtkBalloonWidget operates on vtkProps, the picker must be a\nsubclass of vtkAbstractPropPicker. (Note: if not specified, an\ninstance of vtkPropPicker is used.)\n"},
  {(char*)"GetPicker", PyvtkBalloonWidget_GetPicker, METH_VARARGS,
   (char*)"V.GetPicker() -> vtkAbstractPropPicker\nC++: vtkAbstractPropPicker *GetPicker()\n\nSet/Get the object used to perform pick operations. Since the\nvtkBalloonWidget operates on vtkProps, the picker must be a\nsubclass of vtkAbstractPropPicker. (Note: if not specified, an\ninstance of vtkPropPicker is used.)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBalloonWidget_StaticNew()
{
  return vtkBalloonWidget::New();
}

PyObject *PyVTKClass_vtkBalloonWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBalloonWidget_StaticNew,
    PyvtkBalloonWidget_Methods,
    "vtkBalloonWidget", modulename,
    NULL, NULL,
    PyvtkBalloonWidget_Doc(),
    PyVTKClass_vtkHoverWidgetNew(modulename));
  return cls;
}

const char **PyvtkBalloonWidget_Doc()
{
  static const char *docstring[] = {
    "vtkBalloonWidget - popup text balloons above instance of vtkProp when\nhovering occurs\n\n",
    "Superclass: vtkHoverWidget\n\n",
    "The vtkBalloonWidget is used to popup text and/or an image when the\nmouse hovers over an instance of vtkProp. The widget keeps track of\n(vtkProp,vtkBalloon) pairs (where the internal vtkBalloon class is\ndefined by a pair of vtkStdString and vtkImageData), and when the\nmouse stops moving for a user-specified period of time over the\nvtkProp, then the vtkBalloon is drawn nearby the vtkProp. Note that",
    "\nan instance of vtkBalloonRepresentation is used to draw the balloon.\n\nTo use this widget, specify an instance of vtkBalloonWidget and a\nrepresentation (e.g., vtkBalloonRepresentation). Then list all\ninstances of vtkProp, a text string, and/or an instance of\nvtkImageData to be associated with each vtkProp. (Note that you can\nspecify both text and an image, or just one or the other.) You may\nalso w",
    "ish to specify the hover delay (i.e., set in the superclass\nvtkHoverWidget).\n\nEvent Bindings:\n\nBy default, the widget observes the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\n\n  MouseMoveEvent - occurs when mouse is moved in render window.\n  TimerEvent - occurs when the time between events (e.g., mouse move)\n               is greater than TimerDuration.",
    "\n  KeyPressEvent - when the \"Enter\" key is pressed after the balloon\nappears,\n                  a callback is activated (e.g.,\nWidgetActivateEvent). \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkBalloonWidget's widget events:\n\n\n  vtkWidgetEvent::Move -- start the timer\n  vtkWidgetEvent::TimedO",
    "ut -- when hovering occurs,\n  vtkWidgetEvent::SelectAction -- activate any callbacks associated\n                                  with the balloon. \n\nThis widget invokes the following VTK events on itself (which\nobservers can listen for):\n\n\n  vtkCommand::TimerEvent (when hovering is determined to occur)\n  vtkCommand::EndInteractionEvent (after a hover has occurred and the\n                         ",
    "          mouse begins moving again).\n  vtkCommand::WidgetActivateEvent (when the balloon is selected with\na\n                                   keypress). \n\nSee Also:\n\nvtkAbstractWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBalloonWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBalloonWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBalloonWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

