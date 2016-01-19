// python wrapper for vtkParallelopipedRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkParallelopipedRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkParallelopipedRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkParallelopipedRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkParallelopipedRepresentation_Doc();

#ifndef DECLARED_PyvtkParallelopipedRepresentation__InteractionState_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkParallelopipedRepresentation__InteractionState_Type;
#define DECLARED_PyvtkParallelopipedRepresentation__InteractionState_Type
#endif

PyTypeObject PyvtkParallelopipedRepresentation__InteractionState_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"_InteractionState", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkParallelopipedRepresentation__InteractionState_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkParallelopipedRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkParallelopipedRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelopipedRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkParallelopipedRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelopipedRepresentation::NewInstance());

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
PyvtkParallelopipedRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkParallelopipedRepresentation *tempr = vtkParallelopipedRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  double temp0[8][3];
  double save0[8][3];
  static int size0[2] = { 8, 3 };
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
    {
    ap.SaveArray(*temp0, *save0, size0[0]*size0[1]);

    if (ap.IsBound())
      {
      op->PlaceWidget(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::PlaceWidget(temp0);
      }

    if (ap.ArrayHasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(0, *temp0, 2, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelopipedRepresentation_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->PlaceWidget(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::PlaceWidget(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkParallelopipedRepresentation_PlaceWidget_Methods[] = {
  {NULL, PyvtkParallelopipedRepresentation_PlaceWidget_s1, METH_VARARGS,
   (char*)"@O *d[3]"},
  {NULL, PyvtkParallelopipedRepresentation_PlaceWidget_s2, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkParallelopipedRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkParallelopipedRepresentation_PlaceWidget_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkParallelopipedRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionState(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::SetInteractionState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetBoundingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkPlaneCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
    {
    if (ap.IsBound())
      {
      op->GetBoundingPlanes(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::GetBoundingPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GetPolyData(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkParallelopipedRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetHandleProperty(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::SetHandleProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SetHoveredHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoveredHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetHoveredHandleProperty(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::SetHoveredHandleProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetSelectedHandleProperty(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::SetSelectedHandleProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkParallelopipedRepresentation::GetHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetHoveredHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoveredHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHoveredHandleProperty() :
      op->vtkParallelopipedRepresentation::GetHoveredHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkParallelopipedRepresentation::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkHandleRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHandleRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetHandleRepresentation(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::SetHandleRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetHandleRepresentation(temp0) :
      op->vtkParallelopipedRepresentation::GetHandleRepresentation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_HandlesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandlesOn();
      }
    else
      {
      op->vtkParallelopipedRepresentation::HandlesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_HandlesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandlesOff();
      }
    else
      {
      op->vtkParallelopipedRepresentation::HandlesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetFaceProperty() :
      op->vtkParallelopipedRepresentation::GetFaceProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetSelectedFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedFaceProperty() :
      op->vtkParallelopipedRepresentation::GetSelectedFaceProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetOutlineProperty() :
      op->vtkParallelopipedRepresentation::GetOutlineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedOutlineProperty() :
      op->vtkParallelopipedRepresentation::GetSelectedOutlineProperty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkParallelopipedRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkParallelopipedRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkParallelopipedRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkParallelopipedRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_Translate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->Translate(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::Translate(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelopipedRepresentation_Translate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Translate(temp0, temp1);
      }
    else
      {
      op->vtkParallelopipedRepresentation::Translate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelopipedRepresentation_Translate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkParallelopipedRepresentation_Translate_s1(self, args);
    case 2:
      return PyvtkParallelopipedRepresentation_Translate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Translate");
  return NULL;
}



static PyObject *
PyvtkParallelopipedRepresentation_Scale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Scale(temp0, temp1);
      }
    else
      {
      op->vtkParallelopipedRepresentation::Scale(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_PositionHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PositionHandles();
      }
    else
      {
      op->vtkParallelopipedRepresentation::PositionHandles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SetMinimumThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumThickness(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::SetMinimumThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetMinimumThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumThickness() :
      op->vtkParallelopipedRepresentation::GetMinimumThickness());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkParallelopipedRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkParallelopipedRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkParallelopipedRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkParallelopipedRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkParallelopipedRepresentation\nC++: vtkParallelopipedRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkParallelopipedRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParallelopipedRepresentation\nC++: vtkParallelopipedRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"GetActors", PyvtkParallelopipedRepresentation_GetActors, METH_VARARGS,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *pc)\n\nMethods to satisfy the superclass.\n"},
  {(char*)"PlaceWidget", PyvtkParallelopipedRepresentation_PlaceWidget, METH_VARARGS,
   (char*)"V.PlaceWidget([[float, float, float], [float, float, float],\n    [float, float, float], [float, float, float], [float, float,\n    float], [float, float, float], [float, float, float], [float,\n    float, float]])\nC++: virtual void PlaceWidget(double corners[8][3])\nV.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\n\nPlace the widget in the scene. You can use either of the two APIs\n:\n1) PlaceWidget( double bounds[6] ) Creates a cuboid conforming to\nthe said bounds.\n2) PlaceWidget( double corners[8][3] ) Creates a parallelopiped\n   with corners specified. The order in which corners are\n   specified must obey the following rule: Corner 0 - 1 - 2 - 3 -\n0  forms a face Corner 4 - 5 - 6 - 7 - 4  forms a face Corner 0 -\n4 - 5 - 1 - 0  forms a face Corner 1 - 5 - 6 - 2 - 1  forms a\n   face Corner 2 - 6 - 7 - 3 - 2  forms a face Corner 3 - 7 - 4 -\n0 - 3  forms a face\n"},
  {(char*)"SetInteractionState", PyvtkParallelopipedRepresentation_SetInteractionState, METH_VARARGS,
   (char*)"V.SetInteractionState(int)\nC++: void SetInteractionState(int a)\n\nThe interaction state may be set from a widget (e.g.,\nPointWidget) or other object. This controls how the interaction\nwith the widget proceeds.\n"},
  {(char*)"GetBoundingPlanes", PyvtkParallelopipedRepresentation_GetBoundingPlanes, METH_VARARGS,
   (char*)"V.GetBoundingPlanes(vtkPlaneCollection)\nC++: void GetBoundingPlanes(vtkPlaneCollection *pc)\n\nGet the bounding planes of the object. The first 6 planes will be\nbounding planes of the parallelopiped. If in chair mode, three\nadditional planes will be present. The last three planes will be\nthose of the chair. The normals of all the planes will point into\nthe object.\n"},
  {(char*)"GetPolyData", PyvtkParallelopipedRepresentation_GetPolyData, METH_VARARGS,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nThe parallelopiped polydata.\n"},
  {(char*)"GetBounds", PyvtkParallelopipedRepresentation_GetBounds, METH_VARARGS,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\nThe parallelopiped polydata.\n"},
  {(char*)"SetHandleProperty", PyvtkParallelopipedRepresentation_SetHandleProperty, METH_VARARGS,
   (char*)"V.SetHandleProperty(vtkProperty)\nC++: virtual void SetHandleProperty(vtkProperty *)\n\nSet/Get the handle properties.\n"},
  {(char*)"SetHoveredHandleProperty", PyvtkParallelopipedRepresentation_SetHoveredHandleProperty, METH_VARARGS,
   (char*)"V.SetHoveredHandleProperty(vtkProperty)\nC++: virtual void SetHoveredHandleProperty(vtkProperty *)\n\nSet/Get the handle properties.\n"},
  {(char*)"SetSelectedHandleProperty", PyvtkParallelopipedRepresentation_SetSelectedHandleProperty, METH_VARARGS,
   (char*)"V.SetSelectedHandleProperty(vtkProperty)\nC++: virtual void SetSelectedHandleProperty(vtkProperty *)\n\nSet/Get the handle properties.\n"},
  {(char*)"GetHandleProperty", PyvtkParallelopipedRepresentation_GetHandleProperty, METH_VARARGS,
   (char*)"V.GetHandleProperty() -> vtkProperty\nC++: vtkProperty *GetHandleProperty()\n\nSet/Get the handle properties.\n"},
  {(char*)"GetHoveredHandleProperty", PyvtkParallelopipedRepresentation_GetHoveredHandleProperty, METH_VARARGS,
   (char*)"V.GetHoveredHandleProperty() -> vtkProperty\nC++: vtkProperty *GetHoveredHandleProperty()\n\nSet/Get the handle properties.\n"},
  {(char*)"GetSelectedHandleProperty", PyvtkParallelopipedRepresentation_GetSelectedHandleProperty, METH_VARARGS,
   (char*)"V.GetSelectedHandleProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedHandleProperty()\n\nSet/Get the handle properties.\n"},
  {(char*)"SetHandleRepresentation", PyvtkParallelopipedRepresentation_SetHandleRepresentation, METH_VARARGS,
   (char*)"V.SetHandleRepresentation(vtkHandleRepresentation)\nC++: void SetHandleRepresentation(vtkHandleRepresentation *handle)\n\n"},
  {(char*)"GetHandleRepresentation", PyvtkParallelopipedRepresentation_GetHandleRepresentation, METH_VARARGS,
   (char*)"V.GetHandleRepresentation(int) -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetHandleRepresentation(int index)\n\n"},
  {(char*)"HandlesOn", PyvtkParallelopipedRepresentation_HandlesOn, METH_VARARGS,
   (char*)"V.HandlesOn()\nC++: void HandlesOn()\n\nTurns the visibility of the handles on/off. Sometimes they may\nget in the way of visualization.\n"},
  {(char*)"HandlesOff", PyvtkParallelopipedRepresentation_HandlesOff, METH_VARARGS,
   (char*)"V.HandlesOff()\nC++: void HandlesOff()\n\nTurns the visibility of the handles on/off. Sometimes they may\nget in the way of visualization.\n"},
  {(char*)"GetFaceProperty", PyvtkParallelopipedRepresentation_GetFaceProperty, METH_VARARGS,
   (char*)"V.GetFaceProperty() -> vtkProperty\nC++: vtkProperty *GetFaceProperty()\n\nGet the face properties. When a face is being translated, the\nface gets highlighted with the SelectedFaceProperty.\n"},
  {(char*)"GetSelectedFaceProperty", PyvtkParallelopipedRepresentation_GetSelectedFaceProperty, METH_VARARGS,
   (char*)"V.GetSelectedFaceProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedFaceProperty()\n\nGet the face properties. When a face is being translated, the\nface gets highlighted with the SelectedFaceProperty.\n"},
  {(char*)"GetOutlineProperty", PyvtkParallelopipedRepresentation_GetOutlineProperty, METH_VARARGS,
   (char*)"V.GetOutlineProperty() -> vtkProperty\nC++: vtkProperty *GetOutlineProperty()\n\nGet the outline properties. These are the properties with which\nthe parallelopiped wireframe is rendered.\n"},
  {(char*)"GetSelectedOutlineProperty", PyvtkParallelopipedRepresentation_GetSelectedOutlineProperty, METH_VARARGS,
   (char*)"V.GetSelectedOutlineProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedOutlineProperty()\n\nGet the outline properties. These are the properties with which\nthe parallelopiped wireframe is rendered.\n"},
  {(char*)"BuildRepresentation", PyvtkParallelopipedRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThis actually constructs the geometry of the widget from the\nvarious data parameters.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkParallelopipedRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *w)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderOverlay", PyvtkParallelopipedRepresentation_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkParallelopipedRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"ComputeInteractionState", PyvtkParallelopipedRepresentation_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nGiven and x-y display coordinate, compute the interaction state\nof the widget.\n"},
  {(char*)"Translate", PyvtkParallelopipedRepresentation_Translate, METH_VARARGS,
   (char*)"V.Translate([float, float, float])\nC++: virtual void Translate(double translation[3])\nV.Translate(int, int)\nC++: virtual void Translate(int X, int Y)\n\n"},
  {(char*)"Scale", PyvtkParallelopipedRepresentation_Scale, METH_VARARGS,
   (char*)"V.Scale(int, int)\nC++: virtual void Scale(int X, int Y)\n\n"},
  {(char*)"PositionHandles", PyvtkParallelopipedRepresentation_PositionHandles, METH_VARARGS,
   (char*)"V.PositionHandles()\nC++: virtual void PositionHandles()\n\nSynchronize the parallelopiped handle positions with the\nPolygonal datastructure.\n"},
  {(char*)"SetMinimumThickness", PyvtkParallelopipedRepresentation_SetMinimumThickness, METH_VARARGS,
   (char*)"V.SetMinimumThickness(float)\nC++: void SetMinimumThickness(double a)\n\nMinimum thickness for the parallelopiped. User interactions\ncannot make any individual axis of the parallopiped thinner than\nthis value. Default is 0.05 expressed as a fraction of the\ndiagonal of the bounding box used in the PlaceWidget()\ninvocation.\n"},
  {(char*)"GetMinimumThickness", PyvtkParallelopipedRepresentation_GetMinimumThickness, METH_VARARGS,
   (char*)"V.GetMinimumThickness() -> float\nC++: double GetMinimumThickness()\n\nMinimum thickness for the parallelopiped. User interactions\ncannot make any individual axis of the parallopiped thinner than\nthis value. Default is 0.05 expressed as a fraction of the\ndiagonal of the bounding box used in the PlaceWidget()\ninvocation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParallelopipedRepresentation_StaticNew()
{
  return vtkParallelopipedRepresentation::New();
}

PyObject *PyVTKClass_vtkParallelopipedRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParallelopipedRepresentation_StaticNew,
    PyvtkParallelopipedRepresentation_Methods,
    "vtkParallelopipedRepresentation", modulename,
    NULL, NULL,
    PyvtkParallelopipedRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkParallelopipedRepresentation__InteractionState_Type);
    PyvtkParallelopipedRepresentation__InteractionState_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkParallelopipedRepresentation__InteractionState_Type;
    if (o && PyDict_SetItemString(d, (char *)"_InteractionState", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 14; c++)
      {
      typedef vtkParallelopipedRepresentation::_InteractionState cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[14] = {
          { "Outside", vtkParallelopipedRepresentation::Outside },
          { "Inside", vtkParallelopipedRepresentation::Inside },
          { "RequestResizeParallelopiped", vtkParallelopipedRepresentation::RequestResizeParallelopiped },
          { "RequestResizeParallelopipedAlongAnAxis", vtkParallelopipedRepresentation::RequestResizeParallelopipedAlongAnAxis },
          { "RequestChairMode", vtkParallelopipedRepresentation::RequestChairMode },
          { "RequestTranslateParallelopiped", vtkParallelopipedRepresentation::RequestTranslateParallelopiped },
          { "RequestScaleParallelopiped", vtkParallelopipedRepresentation::RequestScaleParallelopiped },
          { "RequestRotateParallelopiped", vtkParallelopipedRepresentation::RequestRotateParallelopiped },
          { "ResizingParallelopiped", vtkParallelopipedRepresentation::ResizingParallelopiped },
          { "ResizingParallelopipedAlongAnAxis", vtkParallelopipedRepresentation::ResizingParallelopipedAlongAnAxis },
          { "ChairMode", vtkParallelopipedRepresentation::ChairMode },
          { "TranslatingParallelopiped", vtkParallelopipedRepresentation::TranslatingParallelopiped },
          { "ScalingParallelopiped", vtkParallelopipedRepresentation::ScalingParallelopiped },
          { "RotatingParallelopiped", vtkParallelopipedRepresentation::RotatingParallelopiped },
        };

      o = PyvtkParallelopipedRepresentation__InteractionState_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkParallelopipedRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkParallelopipedRepresentation - Default representation for\nvtkParallelopipedWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This class provides the default geometrical representation for\nvtkParallelopipedWidget. As a result of interactions of the widget,\nthis representation can take on of the following shapes:\n\n1) A parallelopiped. (8 handles, 6 faces)\n\n2) Paralleopiped with a chair depression on any one handle. (A chair\nis a depression on one of the handles that carves inwards so as to\nallow the user to visualize cuts",
    " in the volume). (14 handles, 9\nfaces).\n\nSee Also:\n\nvtkParallelopipedWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParallelopipedRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParallelopipedRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParallelopipedRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

