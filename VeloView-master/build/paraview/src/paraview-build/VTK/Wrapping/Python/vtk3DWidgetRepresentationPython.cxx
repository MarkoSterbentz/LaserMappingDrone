// python wrapper for vtk3DWidgetRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtk3DWidgetRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtk3DWidgetRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtk3DWidgetRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataRepresentationNew
#endif

static const char **Pyvtk3DWidgetRepresentation_Doc();


static PyObject *
Pyvtk3DWidgetRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtk3DWidgetRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtk3DWidgetRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtk3DWidgetRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtk3DWidgetRepresentation::NewInstance());

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
Pyvtk3DWidgetRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtk3DWidgetRepresentation *tempr = vtk3DWidgetRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_SetWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  vtkAbstractWidget *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget"))
    {
    if (ap.IsBound())
      {
      op->SetWidget(temp0);
      }
    else
      {
      op->vtk3DWidgetRepresentation::SetWidget(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_GetWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractWidget *tempr = (ap.IsBound() ?
      op->GetWidget() :
      op->vtk3DWidgetRepresentation::GetWidget());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  vtkWidgetRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWidgetRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtk3DWidgetRepresentation::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWidgetRepresentation *tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtk3DWidgetRepresentation::GetRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_SetUseNonCompositedRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNonCompositedRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseNonCompositedRenderer(temp0);
      }
    else
      {
      op->vtk3DWidgetRepresentation::SetUseNonCompositedRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_GetUseNonCompositedRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNonCompositedRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseNonCompositedRenderer() :
      op->vtk3DWidgetRepresentation::GetUseNonCompositedRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_UseNonCompositedRendererOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNonCompositedRendererOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseNonCompositedRendererOn();
      }
    else
      {
      op->vtk3DWidgetRepresentation::UseNonCompositedRendererOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_UseNonCompositedRendererOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNonCompositedRendererOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseNonCompositedRendererOff();
      }
    else
      {
      op->vtk3DWidgetRepresentation::UseNonCompositedRendererOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

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
      op->vtk3DWidgetRepresentation::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtk3DWidgetRepresentation::GetEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOn();
      }
    else
      {
      op->vtk3DWidgetRepresentation::EnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnabledOff();
      }
    else
      {
      op->vtk3DWidgetRepresentation::EnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DWidgetRepresentation_SetCustomWidgetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomWidgetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidgetRepresentation *op = static_cast<vtk3DWidgetRepresentation *>(vp);

  vtkTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->SetCustomWidgetTransform(temp0);
      }
    else
      {
      op->vtk3DWidgetRepresentation::SetCustomWidgetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef Pyvtk3DWidgetRepresentation_Methods[] = {
  {(char*)"GetClassName", Pyvtk3DWidgetRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", Pyvtk3DWidgetRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", Pyvtk3DWidgetRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtk3DWidgetRepresentation\nC++: vtk3DWidgetRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", Pyvtk3DWidgetRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtk3DWidgetRepresentation\nC++: vtk3DWidgetRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWidget", Pyvtk3DWidgetRepresentation_SetWidget, METH_VARARGS,
   (char*)"V.SetWidget(vtkAbstractWidget)\nC++: void SetWidget(vtkAbstractWidget *)\n\nGet/Set the widget.\n"},
  {(char*)"GetWidget", Pyvtk3DWidgetRepresentation_GetWidget, METH_VARARGS,
   (char*)"V.GetWidget() -> vtkAbstractWidget\nC++: vtkAbstractWidget *GetWidget()\n\nGet/Set the widget.\n"},
  {(char*)"SetRepresentation", Pyvtk3DWidgetRepresentation_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkWidgetRepresentation)\nC++: void SetRepresentation(vtkWidgetRepresentation *)\n\nGet/Set the representation.\n"},
  {(char*)"GetRepresentation", Pyvtk3DWidgetRepresentation_GetRepresentation, METH_VARARGS,
   (char*)"V.GetRepresentation() -> vtkWidgetRepresentation\nC++: vtkWidgetRepresentation *GetRepresentation()\n\nGet/Set the representation.\n"},
  {(char*)"SetUseNonCompositedRenderer", Pyvtk3DWidgetRepresentation_SetUseNonCompositedRenderer, METH_VARARGS,
   (char*)"V.SetUseNonCompositedRenderer(bool)\nC++: void SetUseNonCompositedRenderer(bool a)\n\nSet to true to add the vtkWidgetRepresentation to the\nnon-composited renderer. false by default.\n"},
  {(char*)"GetUseNonCompositedRenderer", Pyvtk3DWidgetRepresentation_GetUseNonCompositedRenderer, METH_VARARGS,
   (char*)"V.GetUseNonCompositedRenderer() -> bool\nC++: bool GetUseNonCompositedRenderer()\n\nSet to true to add the vtkWidgetRepresentation to the\nnon-composited renderer. false by default.\n"},
  {(char*)"UseNonCompositedRendererOn", Pyvtk3DWidgetRepresentation_UseNonCompositedRendererOn, METH_VARARGS,
   (char*)"V.UseNonCompositedRendererOn()\nC++: void UseNonCompositedRendererOn()\n\nSet to true to add the vtkWidgetRepresentation to the\nnon-composited renderer. false by default.\n"},
  {(char*)"UseNonCompositedRendererOff", Pyvtk3DWidgetRepresentation_UseNonCompositedRendererOff, METH_VARARGS,
   (char*)"V.UseNonCompositedRendererOff()\nC++: void UseNonCompositedRendererOff()\n\nSet to true to add the vtkWidgetRepresentation to the\nnon-composited renderer. false by default.\n"},
  {(char*)"SetEnabled", Pyvtk3DWidgetRepresentation_SetEnabled, METH_VARARGS,
   (char*)"V.SetEnabled(bool)\nC++: void SetEnabled(bool)\n\nGet/Set whether the widget is enabled.\n"},
  {(char*)"GetEnabled", Pyvtk3DWidgetRepresentation_GetEnabled, METH_VARARGS,
   (char*)"V.GetEnabled() -> bool\nC++: bool GetEnabled()\n\nGet/Set whether the widget is enabled.\n"},
  {(char*)"EnabledOn", Pyvtk3DWidgetRepresentation_EnabledOn, METH_VARARGS,
   (char*)"V.EnabledOn()\nC++: void EnabledOn()\n\nGet/Set whether the widget is enabled.\n"},
  {(char*)"EnabledOff", Pyvtk3DWidgetRepresentation_EnabledOff, METH_VARARGS,
   (char*)"V.EnabledOff()\nC++: void EnabledOff()\n\nGet/Set whether the widget is enabled.\n"},
  {(char*)"SetCustomWidgetTransform", Pyvtk3DWidgetRepresentation_SetCustomWidgetTransform, METH_VARARGS,
   (char*)"V.SetCustomWidgetTransform(vtkTransform)\nC++: void SetCustomWidgetTransform(vtkTransform *transform)\n\nSet a custom transform on the widget. Currently only the implicit\nplane widget handles this ability\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *Pyvtk3DWidgetRepresentation_StaticNew()
{
  return vtk3DWidgetRepresentation::New();
}

PyObject *PyVTKClass_vtk3DWidgetRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&Pyvtk3DWidgetRepresentation_StaticNew,
    Pyvtk3DWidgetRepresentation_Methods,
    "vtk3DWidgetRepresentation", modulename,
    NULL, NULL,
    Pyvtk3DWidgetRepresentation_Doc(),
    PyVTKClass_vtkDataRepresentationNew(modulename));
  return cls;
}

const char **Pyvtk3DWidgetRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtk3DWidgetRepresentation\n\n",
    "Superclass: vtkDataRepresentation\n\n",
    "vtk3DWidgetRepresentation is a vtkDataRepresentation subclass for 3D\nwidgets and their representations. It makes it possible to add 3D\nwidgets to vtkPVRenderView.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtk3DWidgetRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtk3DWidgetRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtk3DWidgetRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

