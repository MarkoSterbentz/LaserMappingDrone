// python wrapper for vtkTDxInteractorStyle
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTDxInteractorStyle.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTDxInteractorStyle(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTDxInteractorStyleNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTDxInteractorStyle_Doc();


static PyObject *
PyvtkTDxInteractorStyle_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTDxInteractorStyle::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTDxInteractorStyle::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTDxInteractorStyle *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTDxInteractorStyle::NewInstance());

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
PyvtkTDxInteractorStyle_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTDxInteractorStyle *tempr = vtkTDxInteractorStyle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_OnMotionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMotionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  vtkTDxMotionEventInfo *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTDxMotionEventInfo"))
    {
    if (ap.IsBound())
      {
      op->OnMotionEvent(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyle::OnMotionEvent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_OnButtonPressedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonPressedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->OnButtonPressedEvent(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyle::OnButtonPressedEvent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_OnButtonReleasedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonReleasedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->OnButtonReleasedEvent(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyle::OnButtonReleasedEvent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_ProcessEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  vtkRenderer *temp0 = NULL;
  unsigned long temp1;
  void  *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ProcessEvent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTDxInteractorStyle::ProcessEvent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_GetSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTDxInteractorStyleSettings *tempr = (ap.IsBound() ?
      op->GetSettings() :
      op->vtkTDxInteractorStyle::GetSettings());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_SetSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  vtkTDxInteractorStyleSettings *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTDxInteractorStyleSettings"))
    {
    if (ap.IsBound())
      {
      op->SetSettings(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyle::SetSettings(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTDxInteractorStyle_Methods[] = {
  {(char*)"GetClassName", PyvtkTDxInteractorStyle_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTDxInteractorStyle_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTDxInteractorStyle_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTDxInteractorStyle\nC++: vtkTDxInteractorStyle *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTDxInteractorStyle_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTDxInteractorStyle\nC++: vtkTDxInteractorStyle *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnMotionEvent", PyvtkTDxInteractorStyle_OnMotionEvent, METH_VARARGS,
   (char*)"V.OnMotionEvent(vtkTDxMotionEventInfo)\nC++: virtual void OnMotionEvent(vtkTDxMotionEventInfo *motionInfo)\n\nAction on motion event. Default implementation is empty.\n\\pre: motionInfo_exist: motionInfo!=0\n"},
  {(char*)"OnButtonPressedEvent", PyvtkTDxInteractorStyle_OnButtonPressedEvent, METH_VARARGS,
   (char*)"V.OnButtonPressedEvent(int)\nC++: virtual void OnButtonPressedEvent(int button)\n\nAction on button pressed event. Default implementation is empty.\n"},
  {(char*)"OnButtonReleasedEvent", PyvtkTDxInteractorStyle_OnButtonReleasedEvent, METH_VARARGS,
   (char*)"V.OnButtonReleasedEvent(int)\nC++: virtual void OnButtonReleasedEvent(int button)\n\nAction on button released event. Default implementation is empty.\n"},
  {(char*)"ProcessEvent", PyvtkTDxInteractorStyle_ProcessEvent, METH_VARARGS,
   (char*)"V.ProcessEvent(vtkRenderer, int, )\nC++: virtual void ProcessEvent(vtkRenderer *renderer,\n    unsigned long event, void *calldata)\n\nDispatch the events TDxMotionEvent, TDxButtonPressEvent and\nTDxButtonReleaseEvent to OnMotionEvent(), OnButtonPressedEvent()\nand OnButtonReleasedEvent() respectively. It is called by the\nvtkInteractorStyle. This method is virtual for convenient but you\nshould really override the On*Event() methods only.\n\\pre renderer can be null.\n"},
  {(char*)"GetSettings", PyvtkTDxInteractorStyle_GetSettings, METH_VARARGS,
   (char*)"V.GetSettings() -> vtkTDxInteractorStyleSettings\nC++: vtkTDxInteractorStyleSettings *GetSettings()\n\n3Dconnexion device settings. (sensitivity, individual axis\nfilters). Initial object is not null.\n"},
  {(char*)"SetSettings", PyvtkTDxInteractorStyle_SetSettings, METH_VARARGS,
   (char*)"V.SetSettings(vtkTDxInteractorStyleSettings)\nC++: virtual void SetSettings(\n    vtkTDxInteractorStyleSettings *settings)\n\n3Dconnexion device settings. (sensitivity, individual axis\nfilters). Initial object is not null.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTDxInteractorStyleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTDxInteractorStyle_Methods,
    "vtkTDxInteractorStyle", modulename,
    NULL, NULL,
    PyvtkTDxInteractorStyle_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkTDxInteractorStyle_Doc()
{
  static const char *docstring[] = {
    "vtkTDxInteractorStyle - provide 3DConnexion device event-driven\ninterface to the rendering window\n\n",
    "Superclass: vtkObject\n\n",
    "vtkTDxInteractorStyle is an abstract class defining an event-driven\ninterface to support 3DConnexion device events send by\nvtkRenderWindowInteractor. vtkRenderWindowInteractor forwards events\nin a platform independent form to vtkInteractorStyle which can then\ndelegate some processing to vtkTDxInteractorStyle.\n\nSee Also:\n\nvtkInteractorStyle vtkRenderWindowInteractor\nvtkTDxInteractorStyleCamera\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTDxInteractorStyle(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTDxInteractorStyleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTDxInteractorStyle", o) != 0)
    {
    Py_DECREF(o);
    }

}

