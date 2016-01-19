// python wrapper for vtkBiDimensionalWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBiDimensionalWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBiDimensionalWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBiDimensionalWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkBiDimensionalWidget_Doc();


static PyObject *
PyvtkBiDimensionalWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBiDimensionalWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBiDimensionalWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBiDimensionalWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBiDimensionalWidget::NewInstance());

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
PyvtkBiDimensionalWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBiDimensionalWidget *tempr = vtkBiDimensionalWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

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
      op->vtkBiDimensionalWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  vtkBiDimensionalRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBiDimensionalRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkBiDimensionalWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_GetBiDimensionalRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBiDimensionalRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBiDimensionalRepresentation *tempr = (ap.IsBound() ?
      op->GetBiDimensionalRepresentation() :
      op->vtkBiDimensionalWidget::GetBiDimensionalRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkBiDimensionalWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_IsMeasureValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMeasureValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsMeasureValid() :
      op->vtkBiDimensionalWidget::IsMeasureValid());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

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
      op->vtkBiDimensionalWidget::SetProcessEvents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_SetWidgetStateToStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetStateToStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWidgetStateToStart();
      }
    else
      {
      op->vtkBiDimensionalWidget::SetWidgetStateToStart();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_SetWidgetStateToManipulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetStateToManipulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetWidgetStateToManipulate();
      }
    else
      {
      op->vtkBiDimensionalWidget::SetWidgetStateToManipulate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_GetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWidgetState() :
      op->vtkBiDimensionalWidget::GetWidgetState());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBiDimensionalWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkBiDimensionalWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for a VTK class.\n"},
  {(char*)"IsA", PyvtkBiDimensionalWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for a VTK class.\n"},
  {(char*)"NewInstance", PyvtkBiDimensionalWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBiDimensionalWidget\nC++: vtkBiDimensionalWidget *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {(char*)"SafeDownCast", PyvtkBiDimensionalWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBiDimensionalWidget\nC++: vtkBiDimensionalWidget *SafeDownCast(vtkObject* o)\n\nStandard methods for a VTK class.\n"},
  {(char*)"SetEnabled", PyvtkBiDimensionalWidget_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nThe method for activating and deactivating this widget. This\nmethod must be overridden because it is a composite widget and\ndoes more than its superclasses' vtkAbstractWidget::SetEnabled()\nmethod.\n"},
  {(char*)"SetRepresentation", PyvtkBiDimensionalWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkBiDimensionalRepresentation)\nC++: void SetRepresentation(vtkBiDimensionalRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetBiDimensionalRepresentation", PyvtkBiDimensionalWidget_GetBiDimensionalRepresentation, METH_VARARGS,
   (char*)"V.GetBiDimensionalRepresentation()\n    -> vtkBiDimensionalRepresentation\nC++: vtkBiDimensionalRepresentation *GetBiDimensionalRepresentation(\n    )\n\nReturn the representation as a vtkBiDimensionalRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkBiDimensionalWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set.\n"},
  {(char*)"IsMeasureValid", PyvtkBiDimensionalWidget_IsMeasureValid, METH_VARARGS,
   (char*)"V.IsMeasureValid() -> int\nC++: int IsMeasureValid()\n\nA flag indicates whether the bi-dimensional measure is valid. The\nwidget becomes valid after two of the four points are placed.\n"},
  {(char*)"SetProcessEvents", PyvtkBiDimensionalWidget_SetProcessEvents, METH_VARARGS,
   (char*)"V.SetProcessEvents(int)\nC++: virtual void SetProcessEvents(int)\n\nMethods to change the whether the widget responds to interaction.\nOverridden to pass the state to component widgets.\n"},
  {(char*)"SetWidgetStateToStart", PyvtkBiDimensionalWidget_SetWidgetStateToStart, METH_VARARGS,
   (char*)"V.SetWidgetStateToStart()\nC++: virtual void SetWidgetStateToStart()\n\nSet the state of the widget. If the state is set to \"Manipulate\"\nthen it is assumed that the widget and its representation will be\ninitialized programmatically and is not interactively placed.\nInitially the widget state is set to \"Start\" which means nothing\nwill appear and the user must interactively place the widget with\nrepeated mouse selections. Set the state to \"Start\" if you want\ninteractive placement. Generally state changes must be followed\nby a Render() for things to visually take effect.\n"},
  {(char*)"SetWidgetStateToManipulate", PyvtkBiDimensionalWidget_SetWidgetStateToManipulate, METH_VARARGS,
   (char*)"V.SetWidgetStateToManipulate()\nC++: virtual void SetWidgetStateToManipulate()\n\nSet the state of the widget. If the state is set to \"Manipulate\"\nthen it is assumed that the widget and its representation will be\ninitialized programmatically and is not interactively placed.\nInitially the widget state is set to \"Start\" which means nothing\nwill appear and the user must interactively place the widget with\nrepeated mouse selections. Set the state to \"Start\" if you want\ninteractive placement. Generally state changes must be followed\nby a Render() for things to visually take effect.\n"},
  {(char*)"GetWidgetState", PyvtkBiDimensionalWidget_GetWidgetState, METH_VARARGS,
   (char*)"V.GetWidgetState() -> int\nC++: virtual int GetWidgetState()\n\nReturn the current widget state.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBiDimensionalWidget_StaticNew()
{
  return vtkBiDimensionalWidget::New();
}

PyObject *PyVTKClass_vtkBiDimensionalWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBiDimensionalWidget_StaticNew,
    PyvtkBiDimensionalWidget_Methods,
    "vtkBiDimensionalWidget", modulename,
    NULL, NULL,
    PyvtkBiDimensionalWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "EndWidgetSelectEvent", vtkBiDimensionalWidget::EndWidgetSelectEvent },
          { "Start", vtkBiDimensionalWidget::Start },
          { "Define", vtkBiDimensionalWidget::Define },
          { "Manipulate", vtkBiDimensionalWidget::Manipulate },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkBiDimensionalWidget_Doc()
{
  static const char *docstring[] = {
    "vtkBiDimensionalWidget - measure the bi-dimensional lengths of an\nobject\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The vtkBiDimensionalWidget is used to measure the bi-dimensional\nlength of an object. The bi-dimensional measure is defined by two\nfinite, orthogonal lines that intersect within the finite extent of\nboth lines. The lengths of these two lines gives the bi-dimensional\nmeasure. Each line is defined by two handle widgets at the end points\nof each line.\n\nThe orthogonal constraint on the two lines limit",
    "s how the four end\npoints can be positioned. The first two points can be placed\narbitrarily to define the first line (similar to vtkDistanceWidget).\nThe placement of the third point is limited by the finite extent of\nthe first line. As the third point is placed, the fourth point is\nplaced on the opposite side of the first line. Once the third point\nis placed, the second line is defined since the f",
    "ourth point is\ndefined at the same time, but the fourth point can be moved along the\nsecond line (i.e., maintaining the orthogonal relationship between\nthe two lines). Once defined, any of the four points can be moved\nalong their constraint lines. Also, each line can be translated along\nthe other line (in an orthogonal direction), and the whole\nbi-dimensional widget can be rotated about its center",
    " point (see the\ndescription of the event bindings). Finally, selecting the point\nwhere the two orthogonal axes intersect, the entire widget can be\ntranslated in any direction.\n\nPlacement of any point results in a special PlacePointEvent\ninvocation so that special operations may be performed to reposition\nthe point. Motion of any point, moving the lines, or rotating the\nwidget cause InteractionEven",
    "ts to be invoked. Note that the widget\nhas two fundamental modes: a define mode (when initially placing the\npoints) and a manipulate mode (after the points are placed). Line\ntranslation and rotation are only possible in manipulate mode.\n\nTo use this widget, specify an instance of vtkBiDimensionalWidget and\na representation (e.g., vtkBiDimensionalRepresentation2D). The widget\nis implemented using f",
    "our instances of vtkHandleWidget which are used\nto position the end points of the two intersecting lines. The\nrepresentations for these handle widgets are provided by the\nvtkBiDimensionalRepresentation class.\n\nEvent Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\n\n  LeftButtonPressEvent - define a point or m",
    "anipulate a handle, line,\n                         perform rotation or translate the widget.\n  MouseMoveEvent - position the points, move a line, rotate or\ntranslate the widget\n  LeftButtonReleaseEvent - release the selected handle and end\ninteraction \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the",
    " vtkBiDimensionalWidget's widget events:\n\n\n  vtkWidgetEvent::AddPoint -- (In Define mode:) Add one point;\ndepending on the\n                              state it may the first, second, third\nor fourth\n                              point added. (In Manipulate mode:) If\nnear a handle,\n                              select the handle. Or if near a line,\nselect the line.\n  vtkWidgetEvent::Move -- (In D",
    "efine mode:) Position the second,\nthird or fourth\n                          point. (In Manipulate mode:) Move the\nhandle, line or widget.\n  vtkWidgetEvent::EndSelect -- the manipulation process has\ncompleted. \n\nThis widget invokes the following VTK events on itself (which\nobservers can listen for):\n\n\n  vtkCommand::StartInteractionEvent (beginning to interact)\n  vtkCommand::EndInteractionEvent (com",
    "pleting interaction)\n  vtkCommand::InteractionEvent (moving a handle, line or performing\nrotation)\n  vtkCommand::PlacePointEvent (after a point is positioned;\n                               call data includes handle id\n(0,1,2,4)) \n\nSee Also:\n\nvtkHandleWidget vtkDistanceWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBiDimensionalWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBiDimensionalWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBiDimensionalWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

