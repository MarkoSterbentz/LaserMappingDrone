// python wrapper for vtkBoxWidget2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBoxWidget2.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBoxWidget2(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBoxWidget2New(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractWidgetNew
extern "C" { PyObject *PyVTKClass_vtkAbstractWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractWidgetNew
#endif

static const char **PyvtkBoxWidget2_Doc();


static PyObject *
PyvtkBoxWidget2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBoxWidget2::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoxWidget2::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBoxWidget2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoxWidget2::NewInstance());

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
PyvtkBoxWidget2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBoxWidget2 *tempr = vtkBoxWidget2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  vtkBoxRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBoxRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentation(temp0);
      }
    else
      {
      op->vtkBoxWidget2::SetRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_SetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTranslationEnabled(temp0);
      }
    else
      {
      op->vtkBoxWidget2::SetTranslationEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_GetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTranslationEnabled() :
      op->vtkBoxWidget2::GetTranslationEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_TranslationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslationEnabledOn();
      }
    else
      {
      op->vtkBoxWidget2::TranslationEnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_TranslationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TranslationEnabledOff();
      }
    else
      {
      op->vtkBoxWidget2::TranslationEnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_SetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalingEnabled(temp0);
      }
    else
      {
      op->vtkBoxWidget2::SetScalingEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_GetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetScalingEnabled() :
      op->vtkBoxWidget2::GetScalingEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_ScalingEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingEnabledOn();
      }
    else
      {
      op->vtkBoxWidget2::ScalingEnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_ScalingEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingEnabledOff();
      }
    else
      {
      op->vtkBoxWidget2::ScalingEnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_SetRotationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRotationEnabled(temp0);
      }
    else
      {
      op->vtkBoxWidget2::SetRotationEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_GetRotationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRotationEnabled() :
      op->vtkBoxWidget2::GetRotationEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_RotationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RotationEnabledOn();
      }
    else
      {
      op->vtkBoxWidget2::RotationEnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_RotationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RotationEnabledOff();
      }
    else
      {
      op->vtkBoxWidget2::RotationEnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_SetMoveFacesEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMoveFacesEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMoveFacesEnabled(temp0);
      }
    else
      {
      op->vtkBoxWidget2::SetMoveFacesEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_GetMoveFacesEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoveFacesEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMoveFacesEnabled() :
      op->vtkBoxWidget2::GetMoveFacesEnabled());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_MoveFacesEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveFacesEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MoveFacesEnabledOn();
      }
    else
      {
      op->vtkBoxWidget2::MoveFacesEnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_MoveFacesEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveFacesEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MoveFacesEnabledOff();
      }
    else
      {
      op->vtkBoxWidget2::MoveFacesEnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoxWidget2_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultRepresentation();
      }
    else
      {
      op->vtkBoxWidget2::CreateDefaultRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBoxWidget2_Methods[] = {
  {(char*)"GetClassName", PyvtkBoxWidget2_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard class methods for type information and printing.\n"},
  {(char*)"IsA", PyvtkBoxWidget2_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard class methods for type information and printing.\n"},
  {(char*)"NewInstance", PyvtkBoxWidget2_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBoxWidget2\nC++: vtkBoxWidget2 *NewInstance()\n\nStandard class methods for type information and printing.\n"},
  {(char*)"SafeDownCast", PyvtkBoxWidget2_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBoxWidget2\nC++: vtkBoxWidget2 *SafeDownCast(vtkObject* o)\n\nStandard class methods for type information and printing.\n"},
  {(char*)"SetRepresentation", PyvtkBoxWidget2_SetRepresentation, METH_VARARGS,
   (char*)"V.SetRepresentation(vtkBoxRepresentation)\nC++: void SetRepresentation(vtkBoxRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {(char*)"SetTranslationEnabled", PyvtkBoxWidget2_SetTranslationEnabled, METH_VARARGS,
   (char*)"V.SetTranslationEnabled(int)\nC++: void SetTranslationEnabled(int a)\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"GetTranslationEnabled", PyvtkBoxWidget2_GetTranslationEnabled, METH_VARARGS,
   (char*)"V.GetTranslationEnabled() -> int\nC++: int GetTranslationEnabled()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"TranslationEnabledOn", PyvtkBoxWidget2_TranslationEnabledOn, METH_VARARGS,
   (char*)"V.TranslationEnabledOn()\nC++: void TranslationEnabledOn()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"TranslationEnabledOff", PyvtkBoxWidget2_TranslationEnabledOff, METH_VARARGS,
   (char*)"V.TranslationEnabledOff()\nC++: void TranslationEnabledOff()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"SetScalingEnabled", PyvtkBoxWidget2_SetScalingEnabled, METH_VARARGS,
   (char*)"V.SetScalingEnabled(int)\nC++: void SetScalingEnabled(int a)\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"GetScalingEnabled", PyvtkBoxWidget2_GetScalingEnabled, METH_VARARGS,
   (char*)"V.GetScalingEnabled() -> int\nC++: int GetScalingEnabled()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"ScalingEnabledOn", PyvtkBoxWidget2_ScalingEnabledOn, METH_VARARGS,
   (char*)"V.ScalingEnabledOn()\nC++: void ScalingEnabledOn()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"ScalingEnabledOff", PyvtkBoxWidget2_ScalingEnabledOff, METH_VARARGS,
   (char*)"V.ScalingEnabledOff()\nC++: void ScalingEnabledOff()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"SetRotationEnabled", PyvtkBoxWidget2_SetRotationEnabled, METH_VARARGS,
   (char*)"V.SetRotationEnabled(int)\nC++: void SetRotationEnabled(int a)\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"GetRotationEnabled", PyvtkBoxWidget2_GetRotationEnabled, METH_VARARGS,
   (char*)"V.GetRotationEnabled() -> int\nC++: int GetRotationEnabled()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"RotationEnabledOn", PyvtkBoxWidget2_RotationEnabledOn, METH_VARARGS,
   (char*)"V.RotationEnabledOn()\nC++: void RotationEnabledOn()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"RotationEnabledOff", PyvtkBoxWidget2_RotationEnabledOff, METH_VARARGS,
   (char*)"V.RotationEnabledOff()\nC++: void RotationEnabledOff()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"SetMoveFacesEnabled", PyvtkBoxWidget2_SetMoveFacesEnabled, METH_VARARGS,
   (char*)"V.SetMoveFacesEnabled(int)\nC++: void SetMoveFacesEnabled(int a)\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"GetMoveFacesEnabled", PyvtkBoxWidget2_GetMoveFacesEnabled, METH_VARARGS,
   (char*)"V.GetMoveFacesEnabled() -> int\nC++: int GetMoveFacesEnabled()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"MoveFacesEnabledOn", PyvtkBoxWidget2_MoveFacesEnabledOn, METH_VARARGS,
   (char*)"V.MoveFacesEnabledOn()\nC++: void MoveFacesEnabledOn()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"MoveFacesEnabledOff", PyvtkBoxWidget2_MoveFacesEnabledOff, METH_VARARGS,
   (char*)"V.MoveFacesEnabledOff()\nC++: void MoveFacesEnabledOff()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {(char*)"CreateDefaultRepresentation", PyvtkBoxWidget2_CreateDefaultRepresentation, METH_VARARGS,
   (char*)"V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set. By\ndefault, this is an instance of the vtkBoxRepresentation class.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBoxWidget2_StaticNew()
{
  return vtkBoxWidget2::New();
}

PyObject *PyVTKClass_vtkBoxWidget2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBoxWidget2_StaticNew,
    PyvtkBoxWidget2_Methods,
    "vtkBoxWidget2", modulename,
    NULL, NULL,
    PyvtkBoxWidget2_Doc(),
    PyVTKClass_vtkAbstractWidgetNew(modulename));
  return cls;
}

const char **PyvtkBoxWidget2_Doc()
{
  static const char *docstring[] = {
    "vtkBoxWidget2 - 3D widget for manipulating a box\n\n",
    "Superclass: vtkAbstractWidget\n\n",
    "This 3D widget interacts with a vtkBoxRepresentation class (i.e., it\nhandles the events that drive its corresponding representation). The\nrepresentation is assumed to represent a region of interest that is\nrepresented by an arbitrarily oriented hexahedron (or box) with\ninterior face angles of 90 degrees (i.e., orthogonal faces). The\nrepresentation manifests seven handles that can be moused on and\n",
    "manipulated, plus the six faces can also be interacted with. The\nfirst six handles are placed on the six faces, the seventh is in the\ncenter of the box. In addition, a bounding box outline is shown, the\n\"faces\" of which can be selected for object rotation or scaling. A\nnice feature of vtkBoxWidget2, like any 3D widget, will work with the\ncurrent interactor style. That is, if vtkBoxWidget2 does not",
    " handle\nan event, then all other registered observers (including the\ninteractor style) have an opportunity to process the event.\nOtherwise, the vtkBoxWidget will terminate the processing of the\nevent that it handles.\n\nTo use this widget, you generally pair it with a vtkBoxRepresentation\n(or a subclass). Variuos options are available in the representation\nfor controlling how the widget appears, and",
    " how the widget functions.\n\nEvent Bindings:\n\nBy default, the widget responds to the following VTK events (i.e., it\nwatches the vtkRenderWindowInteractor for these events):\n\nIf one of the seven handles are selected:\n  LeftButtonPressEvent - select the appropriate handle\n  LeftButtonReleaseEvent - release the currently selected handle\n  MouseMoveEvent - move the handle If one of the faces is selecte",
    "d:\n  LeftButtonPressEvent - select a box face\n  LeftButtonReleaseEvent - release the box face\n  MouseMoveEvent - rotate the box In all the cases, independent of\nwhat is picked, the widget responds to the following VTK events:\n  MiddleButtonPressEvent - translate the widget\n  MiddleButtonReleaseEvent - release the widget\n  RightButtonPressEvent - scale the widget's representation\n  RightButtonRelea",
    "seEvent - stop scaling the widget\n  MouseMoveEvent - scale (if right button) or move (if middle button)\nthe widget \n\nNote that the event bindings described above can be changed using\nthis class's vtkWidgetEventTranslator. This class translates VTK\nevents into the vtkBoxWidget2's widget events:\n\n\n  vtkWidgetEvent::Select -- some part of the widget has been selected\n  vtkWidgetEvent::EndSelect -- th",
    "e selection process has completed\n  vtkWidgetEvent::Scale -- some part of the widget has been selected\n  vtkWidgetEvent::EndScale -- the selection process has completed\n  vtkWidgetEvent::Translate -- some part of the widget has been\nselected\n  vtkWidgetEvent::EndTranslate -- the selection process has completed\n  vtkWidgetEvent::Move -- a request for motion has been invoked \n\nIn turn, when these wi",
    "dget events are processed, the vtkBoxWidget2\ninvokes the following VTK events on itself (which observers can\nlisten for):\n\n\n  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\nSee Also:\n\nvtkBoxRepresentation vtkBoxWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBoxWidget2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBoxWidget2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBoxWidget2", o) != 0)
    {
    Py_DECREF(o);
    }

}

