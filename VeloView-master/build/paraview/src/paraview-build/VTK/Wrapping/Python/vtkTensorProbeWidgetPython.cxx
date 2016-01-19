// python wrapper for vtkTensorProbeWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTensorProbeWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTensorProbeWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTensorProbeWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkTensorProbeWidget_Doc();


static PyObject *
PyvtkTensorProbeWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTensorProbeWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTensorProbeWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTensorProbeWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTensorProbeWidget::NewInstance());

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
PyvtkTensorProbeWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTensorProbeWidget *tempr = vtkTensorProbeWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

  vtkTensorProbeRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTensorProbeRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkTensorProbeWidget::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeWidget_GetTensorProbeRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorProbeRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTensorProbeRepresentation *tempr = (ap.IsBound() ?
      op->GetTensorProbeRepresentation() :
      op->vtkTensorProbeWidget::GetTensorProbeRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorProbeWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkTensorProbeWidget::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTensorProbeWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkTensorProbeWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK class macros.\n"},
  {(char*)"IsA", PyvtkTensorProbeWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK class macros.\n"},
  {(char*)"NewInstance", PyvtkTensorProbeWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTensorProbeWidget\nC++: vtkTensorProbeWidget *NewInstance()\n\nStandard VTK class macros.\n"},
  {(char*)"SafeDownCast", PyvtkTensorProbeWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTensorProbeWidget\nC++: vtkTensorProbeWidget *SafeDownCast(vtkObject* o)\n\nStandard VTK class macros.\n"},
  {(char*)"SetRepresentation", PyvtkTensorProbeWidget_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkTensorProbeRepresentation)\nC++: void SetRepresentation(vtkTensorProbeRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"GetTensorProbeRepresentation", PyvtkTensorProbeWidget_GetTensorProbeRepresentation, METH_VARARGS,
   (char*)"V.GetTensorProbeRepresentation() -> vtkTensorProbeRepresentation\nC++: vtkTensorProbeRepresentation *GetTensorProbeRepresentation()\n\nReturn the representation as a vtkTensorProbeRepresentation.\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkTensorProbeWidget_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: virtual void CreateDefaultRepresentation()\n\nSee vtkWidgetRepresentation for details.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTensorProbeWidget_StaticNew()
{
  return vtkTensorProbeWidget::New();
}

PyObject *PyVTKClass_vtkTensorProbeWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTensorProbeWidget_StaticNew,
    PyvtkTensorProbeWidget_Methods,
    "vtkTensorProbeWidget", modulename,
    NULL, NULL,
    PyvtkTensorProbeWidget_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkTensorProbeWidget_Doc()
{
  static const char *docstring[] = {
    "vtkTensorProbeWidget - a widget to probe tensors on a polyline\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "The class is used to probe tensors on a trajectory. The\nrepresentation (vtkTensorProbeRepresentation) is free to choose its\nown method of rendering the tensors. For instance\nvtkEllipsoidTensorProbeRepresentation renders the tensors as\nellipsoids. The interactions of the widget are controlled by the left\nmouse button. A left click on the tensor selects it. It can dragged\naround the trajectory to pr",
    "obe the tensors on it.\n\nFor instance dragging the ellipsoid around with\nvtkEllipsoidTensorProbeRepresentation will manifest itself with the\nellipsoid shape changing as needed along the trajectory.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTensorProbeWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTensorProbeWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTensorProbeWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

