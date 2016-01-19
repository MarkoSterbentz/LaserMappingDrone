// python wrapper for vtkInteractorStyleDrawPolygon
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInteractorStyleDrawPolygon.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInteractorStyleDrawPolygon(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInteractorStyleDrawPolygonNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleNew
#endif

static const char **PyvtkInteractorStyleDrawPolygon_Doc();


static PyObject *
PyvtkInteractorStyleDrawPolygon_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInteractorStyleDrawPolygon::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleDrawPolygon::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInteractorStyleDrawPolygon *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleDrawPolygon::NewInstance());

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
PyvtkInteractorStyleDrawPolygon_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInteractorStyleDrawPolygon *tempr = vtkInteractorStyleDrawPolygon::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleDrawPolygon::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleDrawPolygon::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleDrawPolygon::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_SetDrawPolygonPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawPolygonPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawPolygonPixels(temp0);
      }
    else
      {
      op->vtkInteractorStyleDrawPolygon::SetDrawPolygonPixels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_GetDrawPolygonPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawPolygonPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDrawPolygonPixels() :
      op->vtkInteractorStyleDrawPolygon::GetDrawPolygonPixels());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_DrawPolygonPixelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygonPixelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawPolygonPixelsOn();
      }
    else
      {
      op->vtkInteractorStyleDrawPolygon::DrawPolygonPixelsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_DrawPolygonPixelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygonPixelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawPolygonPixelsOff();
      }
    else
      {
      op->vtkInteractorStyleDrawPolygon::DrawPolygonPixelsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleDrawPolygon_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleDrawPolygon_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleDrawPolygon_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleDrawPolygon_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInteractorStyleDrawPolygon\nC++: vtkInteractorStyleDrawPolygon *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleDrawPolygon_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleDrawPolygon\nC++: vtkInteractorStyleDrawPolygon *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleDrawPolygon_OnMouseMove, METH_VARARGS,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nEvent bindings\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleDrawPolygon_OnLeftButtonDown, METH_VARARGS,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nEvent bindings\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleDrawPolygon_OnLeftButtonUp, METH_VARARGS,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nEvent bindings\n"},
  {(char*)"SetDrawPolygonPixels", PyvtkInteractorStyleDrawPolygon_SetDrawPolygonPixels, METH_VARARGS,
   (char*)"V.SetDrawPolygonPixels(bool)\nC++: void SetDrawPolygonPixels(bool a)\n\nWhether to draw polygon in screen pixels. Default is ON\n"},
  {(char*)"GetDrawPolygonPixels", PyvtkInteractorStyleDrawPolygon_GetDrawPolygonPixels, METH_VARARGS,
   (char*)"V.GetDrawPolygonPixels() -> bool\nC++: bool GetDrawPolygonPixels()\n\nWhether to draw polygon in screen pixels. Default is ON\n"},
  {(char*)"DrawPolygonPixelsOn", PyvtkInteractorStyleDrawPolygon_DrawPolygonPixelsOn, METH_VARARGS,
   (char*)"V.DrawPolygonPixelsOn()\nC++: void DrawPolygonPixelsOn()\n\nWhether to draw polygon in screen pixels. Default is ON\n"},
  {(char*)"DrawPolygonPixelsOff", PyvtkInteractorStyleDrawPolygon_DrawPolygonPixelsOff, METH_VARARGS,
   (char*)"V.DrawPolygonPixelsOff()\nC++: void DrawPolygonPixelsOff()\n\nWhether to draw polygon in screen pixels. Default is ON\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleDrawPolygon_StaticNew()
{
  return vtkInteractorStyleDrawPolygon::New();
}

PyObject *PyVTKClass_vtkInteractorStyleDrawPolygonNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleDrawPolygon_StaticNew,
    PyvtkInteractorStyleDrawPolygon_Methods,
    "vtkInteractorStyleDrawPolygon", modulename,
    NULL, NULL,
    PyvtkInteractorStyleDrawPolygon_Doc(),
    PyVTKClass_vtkInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleDrawPolygon_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleDrawPolygon - draw polygon during mouse move\n\n",
    "Superclass: vtkInteractorStyle\n\n",
    "This interactor style allows the user to draw a polygon in the render\nwindow using the left mouse button while mouse is moving. When the\nmouse button is released, a SelectionChangedEvent will be fired.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleDrawPolygon(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleDrawPolygonNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleDrawPolygon", o) != 0)
    {
    Py_DECREF(o);
    }

}

