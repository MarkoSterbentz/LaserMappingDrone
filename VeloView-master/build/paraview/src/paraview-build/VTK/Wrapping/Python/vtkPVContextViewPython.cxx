// python wrapper for vtkPVContextView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVContextView.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVContextView(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVContextViewNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVViewNew
extern "C" { PyObject *PyVTKClass_vtkPVViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVViewNew
#endif

static const char **PyvtkPVContextView_Doc();


static PyObject *
PyvtkPVContextView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVContextView::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVContextView::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVContextView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVContextView::NewInstance());

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
PyvtkPVContextView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVContextView *tempr = vtkPVContextView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StillRender();
      }
    else
      {
      op->vtkPVContextView::StillRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractiveRender();
      }
    else
      {
      op->vtkPVContextView::InteractiveRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_GetContextView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContextView *tempr = (ap.IsBound() ?
      op->GetContextView() :
      op->vtkPVContextView::GetContextView());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_GetContextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkAbstractContextItem *tempr = op->GetContextItem();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkPVContextView::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkPVContextView::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPVContextView::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_SetUseOffscreenRenderingForScreenshots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOffscreenRenderingForScreenshots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOffscreenRenderingForScreenshots(temp0);
      }
    else
      {
      op->vtkPVContextView::SetUseOffscreenRenderingForScreenshots(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_UseOffscreenRenderingForScreenshotsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOffscreenRenderingForScreenshotsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOffscreenRenderingForScreenshotsOn();
      }
    else
      {
      op->vtkPVContextView::UseOffscreenRenderingForScreenshotsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_UseOffscreenRenderingForScreenshotsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOffscreenRenderingForScreenshotsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOffscreenRenderingForScreenshotsOff();
      }
    else
      {
      op->vtkPVContextView::UseOffscreenRenderingForScreenshotsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_GetUseOffscreenRenderingForScreenshots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOffscreenRenderingForScreenshots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseOffscreenRenderingForScreenshots() :
      op->vtkPVContextView::GetUseOffscreenRenderingForScreenshots());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_SetUseOffscreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOffscreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseOffscreenRendering(temp0);
      }
    else
      {
      op->vtkPVContextView::SetUseOffscreenRendering(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_UseOffscreenRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOffscreenRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOffscreenRenderingOn();
      }
    else
      {
      op->vtkPVContextView::UseOffscreenRenderingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_UseOffscreenRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOffscreenRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseOffscreenRenderingOff();
      }
    else
      {
      op->vtkPVContextView::UseOffscreenRenderingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_GetUseOffscreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOffscreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseOffscreenRendering() :
      op->vtkPVContextView::GetUseOffscreenRendering());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  vtkChartRepresentation *temp0 = NULL;
  vtkSelection *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkChartRepresentation") &&
      ap.GetVTKObject(temp1, "vtkSelection"))
    {
    op->SetSelection(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVContextView_GetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVContextView *op = static_cast<vtkPVContextView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetSelection() :
      op->vtkPVContextView::GetSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVContextView_Methods[] = {
  {(char*)"GetClassName", PyvtkPVContextView_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVContextView_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVContextView_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVContextView\nC++: vtkPVContextView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVContextView_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVContextView\nC++: vtkPVContextView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"StillRender", PyvtkPVContextView_StillRender, METH_VARARGS,
   (char*)"V.StillRender()\nC++: virtual void StillRender()\n\nTriggers a high-resolution render.@CallOnAllProcessess\n"},
  {(char*)"InteractiveRender", PyvtkPVContextView_InteractiveRender, METH_VARARGS,
   (char*)"V.InteractiveRender()\nC++: virtual void InteractiveRender()\n\nTriggers a interactive render. Based on the settings on the view,\nthis may result in a low-resolution rendering or a simplified\ngeometry rendering.@CallOnAllProcessess\n"},
  {(char*)"GetContextView", PyvtkPVContextView_GetContextView, METH_VARARGS,
   (char*)"V.GetContextView() -> vtkContextView\nC++: vtkContextView *GetContextView()\n\nGet the context view.\n"},
  {(char*)"GetContextItem", PyvtkPVContextView_GetContextItem, METH_VARARGS,
   (char*)"V.GetContextItem() -> vtkAbstractContextItem\nC++: virtual vtkAbstractContextItem *GetContextItem()\n\nGet the context item.\n"},
  {(char*)"GetRenderWindow", PyvtkPVContextView_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\n\n"},
  {(char*)"Initialize", PyvtkPVContextView_Initialize, METH_VARARGS,
   (char*)"V.Initialize(int)\nC++: virtual void Initialize(unsigned int id)\n\nInitialize the view with an identifier. Unless noted otherwise,\nthis method must be called before calling any other methods on\nthis class.@CallOnAllProcessess\n"},
  {(char*)"Update", PyvtkPVContextView_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nOverridden to ensure that in multi-client configurations, same\nset of representations are \"dirty\" on all processes to avoid race\nconditions.\n"},
  {(char*)"SetUseOffscreenRenderingForScreenshots", PyvtkPVContextView_SetUseOffscreenRenderingForScreenshots, METH_VARARGS,
   (char*)"V.SetUseOffscreenRenderingForScreenshots(bool)\nC++: void SetUseOffscreenRenderingForScreenshots(bool a)\n\nSet or get whether offscreen rendering should be used during\nCaptureWindow calls. On Apple machines, this flag has no effect.\n"},
  {(char*)"UseOffscreenRenderingForScreenshotsOn", PyvtkPVContextView_UseOffscreenRenderingForScreenshotsOn, METH_VARARGS,
   (char*)"V.UseOffscreenRenderingForScreenshotsOn()\nC++: void UseOffscreenRenderingForScreenshotsOn()\n\nSet or get whether offscreen rendering should be used during\nCaptureWindow calls. On Apple machines, this flag has no effect.\n"},
  {(char*)"UseOffscreenRenderingForScreenshotsOff", PyvtkPVContextView_UseOffscreenRenderingForScreenshotsOff, METH_VARARGS,
   (char*)"V.UseOffscreenRenderingForScreenshotsOff()\nC++: void UseOffscreenRenderingForScreenshotsOff()\n\nSet or get whether offscreen rendering should be used during\nCaptureWindow calls. On Apple machines, this flag has no effect.\n"},
  {(char*)"GetUseOffscreenRenderingForScreenshots", PyvtkPVContextView_GetUseOffscreenRenderingForScreenshots, METH_VARARGS,
   (char*)"V.GetUseOffscreenRenderingForScreenshots() -> bool\nC++: bool GetUseOffscreenRenderingForScreenshots()\n\nSet or get whether offscreen rendering should be used during\nCaptureWindow calls. On Apple machines, this flag has no effect.\n"},
  {(char*)"SetUseOffscreenRendering", PyvtkPVContextView_SetUseOffscreenRendering, METH_VARARGS,
   (char*)"V.SetUseOffscreenRendering(bool)\nC++: virtual void SetUseOffscreenRendering(bool)\n\nGet/Set whether to use offscreen rendering for all rendering.\nThis is merely a suggestion. If --use-offscreen-rendering command\nline option is specified, then setting this flag to 0 on that\nprocess has no effect. Setting it to true, however, will ensure\nthat even is\n--use-offscreen-rendering is not specified, it will use offscreen\n    rendering.\n"},
  {(char*)"UseOffscreenRenderingOn", PyvtkPVContextView_UseOffscreenRenderingOn, METH_VARARGS,
   (char*)"V.UseOffscreenRenderingOn()\nC++: void UseOffscreenRenderingOn()\n\nGet/Set whether to use offscreen rendering for all rendering.\nThis is merely a suggestion. If --use-offscreen-rendering command\nline option is specified, then setting this flag to 0 on that\nprocess has no effect. Setting it to true, however, will ensure\nthat even is\n--use-offscreen-rendering is not specified, it will use offscreen\n    rendering.\n"},
  {(char*)"UseOffscreenRenderingOff", PyvtkPVContextView_UseOffscreenRenderingOff, METH_VARARGS,
   (char*)"V.UseOffscreenRenderingOff()\nC++: void UseOffscreenRenderingOff()\n\nGet/Set whether to use offscreen rendering for all rendering.\nThis is merely a suggestion. If --use-offscreen-rendering command\nline option is specified, then setting this flag to 0 on that\nprocess has no effect. Setting it to true, however, will ensure\nthat even is\n--use-offscreen-rendering is not specified, it will use offscreen\n    rendering.\n"},
  {(char*)"GetUseOffscreenRendering", PyvtkPVContextView_GetUseOffscreenRendering, METH_VARARGS,
   (char*)"V.GetUseOffscreenRendering() -> bool\nC++: bool GetUseOffscreenRendering()\n\nGet/Set whether to use offscreen rendering for all rendering.\nThis is merely a suggestion. If --use-offscreen-rendering command\nline option is specified, then setting this flag to 0 on that\nprocess has no effect. Setting it to true, however, will ensure\nthat even is\n--use-offscreen-rendering is not specified, it will use offscreen\n    rendering.\n"},
  {(char*)"SetSelection", PyvtkPVContextView_SetSelection, METH_VARARGS,
   (char*)"V.SetSelection(vtkChartRepresentation, vtkSelection)\nC++: virtual void SetSelection(vtkChartRepresentation *repr,\n    vtkSelection *selection)\n\nRepresentations can use this method to set the selection for a\nparticular representation. Subclasses override this method to\npass on the selection to the chart using annotation link. Note\nthis is meant to pass selection for the local process alone. The\nview does not manage data movement for the selection.\n"},
  {(char*)"GetSelection", PyvtkPVContextView_GetSelection, METH_VARARGS,
   (char*)"V.GetSelection() -> vtkSelection\nC++: vtkSelection *GetSelection()\n\nGet the current selection created in the view. This will call\nthis->MapSelectionToInput() to transform the selection every time\na new selection is available. Subclasses should override\nMapSelectionToInput() to convert the selection, as appropriate.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPVContextViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPVContextView_Methods,
    "vtkPVContextView", modulename,
    NULL, NULL,
    PyvtkPVContextView_Doc(),
    PyVTKClass_vtkPVViewNew(modulename));
  return cls;
}

const char **PyvtkPVContextView_Doc()
{
  static const char *docstring[] = {
    "vtkPVContextView\n\n",
    "Superclass: vtkPVView\n\n",
    "vtkPVContextView adopts vtkContextView so that it can be used in\nParaView configurations.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVContextView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVContextViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVContextView", o) != 0)
    {
    Py_DECREF(o);
    }

}

