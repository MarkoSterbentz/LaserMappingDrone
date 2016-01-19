// python wrapper for vtkOutputWindow
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOutputWindow.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOutputWindow(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOutputWindowNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkOutputWindow_Doc();


static PyObject *
PyvtkOutputWindow_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOutputWindow::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOutputWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOutputWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOutputWindow::NewInstance());

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
PyvtkOutputWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOutputWindow *tempr = vtkOutputWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkOutputWindow *tempr = vtkOutputWindow::GetInstance();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_SetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetInstance");

  vtkOutputWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOutputWindow"))
    {
    vtkOutputWindow::SetInstance(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayText(temp0);
      }
    else
      {
      op->vtkOutputWindow::DisplayText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayErrorText(temp0);
      }
    else
      {
      op->vtkOutputWindow::DisplayErrorText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayWarningText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayWarningText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayWarningText(temp0);
      }
    else
      {
      op->vtkOutputWindow::DisplayWarningText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayGenericWarningText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayGenericWarningText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayGenericWarningText(temp0);
      }
    else
      {
      op->vtkOutputWindow::DisplayGenericWarningText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayDebugText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayDebugText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DisplayDebugText(temp0);
      }
    else
      {
      op->vtkOutputWindow::DisplayDebugText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_PromptUserOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PromptUserOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PromptUserOn();
      }
    else
      {
      op->vtkOutputWindow::PromptUserOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_PromptUserOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PromptUserOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PromptUserOff();
      }
    else
      {
      op->vtkOutputWindow::PromptUserOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutputWindow_SetPromptUser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPromptUser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPromptUser(temp0);
      }
    else
      {
      op->vtkOutputWindow::SetPromptUser(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOutputWindow_Methods[] = {
  {(char*)"GetClassName", PyvtkOutputWindow_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOutputWindow_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOutputWindow_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOutputWindow\nC++: vtkOutputWindow *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOutputWindow_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOutputWindow\nC++: vtkOutputWindow *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInstance", PyvtkOutputWindow_GetInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.GetInstance() -> vtkOutputWindow\nC++: static vtkOutputWindow *GetInstance()\n\nReturn the singleton instance with no reference counting.\n"},
  {(char*)"SetInstance", PyvtkOutputWindow_SetInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.SetInstance(vtkOutputWindow)\nC++: static void SetInstance(vtkOutputWindow *instance)\n\nSupply a user defined output window. Call ->Delete() on the\nsupplied instance after setting it.\n"},
  {(char*)"DisplayText", PyvtkOutputWindow_DisplayText, METH_VARARGS,
   (char*)"V.DisplayText(string)\nC++: virtual void DisplayText(const char *)\n\nDisplay the text. Four virtual methods exist, depending on the\ntype of message to display. This allows redirection or\nreformatting of the messages. The default implementation uses\nDisplayText for all.\n"},
  {(char*)"DisplayErrorText", PyvtkOutputWindow_DisplayErrorText, METH_VARARGS,
   (char*)"V.DisplayErrorText(string)\nC++: virtual void DisplayErrorText(const char *)\n\nDisplay the text. Four virtual methods exist, depending on the\ntype of message to display. This allows redirection or\nreformatting of the messages. The default implementation uses\nDisplayText for all.\n"},
  {(char*)"DisplayWarningText", PyvtkOutputWindow_DisplayWarningText, METH_VARARGS,
   (char*)"V.DisplayWarningText(string)\nC++: virtual void DisplayWarningText(const char *)\n\nDisplay the text. Four virtual methods exist, depending on the\ntype of message to display. This allows redirection or\nreformatting of the messages. The default implementation uses\nDisplayText for all.\n"},
  {(char*)"DisplayGenericWarningText", PyvtkOutputWindow_DisplayGenericWarningText, METH_VARARGS,
   (char*)"V.DisplayGenericWarningText(string)\nC++: virtual void DisplayGenericWarningText(const char *)\n\nDisplay the text. Four virtual methods exist, depending on the\ntype of message to display. This allows redirection or\nreformatting of the messages. The default implementation uses\nDisplayText for all.\n"},
  {(char*)"DisplayDebugText", PyvtkOutputWindow_DisplayDebugText, METH_VARARGS,
   (char*)"V.DisplayDebugText(string)\nC++: virtual void DisplayDebugText(const char *)\n\n"},
  {(char*)"PromptUserOn", PyvtkOutputWindow_PromptUserOn, METH_VARARGS,
   (char*)"V.PromptUserOn()\nC++: void PromptUserOn()\n\nIf PromptUser is set to true then each time a line of text is\ndisplayed, the user is asked if they want to keep getting\nmessages.\n"},
  {(char*)"PromptUserOff", PyvtkOutputWindow_PromptUserOff, METH_VARARGS,
   (char*)"V.PromptUserOff()\nC++: void PromptUserOff()\n\nIf PromptUser is set to true then each time a line of text is\ndisplayed, the user is asked if they want to keep getting\nmessages.\n"},
  {(char*)"SetPromptUser", PyvtkOutputWindow_SetPromptUser, METH_VARARGS,
   (char*)"V.SetPromptUser(int)\nC++: void SetPromptUser(int a)\n\nIf PromptUser is set to true then each time a line of text is\ndisplayed, the user is asked if they want to keep getting\nmessages.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOutputWindow_StaticNew()
{
  return vtkOutputWindow::New();
}

PyObject *PyVTKClass_vtkOutputWindowNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOutputWindow_StaticNew,
    PyvtkOutputWindow_Methods,
    "vtkOutputWindow", modulename,
    NULL, NULL,
    PyvtkOutputWindow_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkOutputWindow_Doc()
{
  static const char *docstring[] = {
    "vtkOutputWindow - base class for writing debug output to a console\n\n",
    "Superclass: vtkObject\n\n",
    "This class is used to encapsulate all text output, so that it will\nwork with operating systems that have a stdout and stderr, and ones\nthat do not.  (i.e windows does not).  Sub-classes can be provided\nwhich can redirect the output to a window.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOutputWindow(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOutputWindowNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOutputWindow", o) != 0)
    {
    Py_DECREF(o);
    }

}

