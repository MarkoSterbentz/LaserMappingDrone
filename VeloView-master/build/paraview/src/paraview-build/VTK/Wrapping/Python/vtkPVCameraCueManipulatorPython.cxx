// python wrapper for vtkPVCameraCueManipulator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVCameraCueManipulator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVCameraCueManipulator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVCameraCueManipulatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVKeyFrameCueManipulatorNew
extern "C" { PyObject *PyVTKClass_vtkPVKeyFrameCueManipulatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVKeyFrameCueManipulatorNew
#endif

static const char **PyvtkPVCameraCueManipulator_Doc();

#ifndef DECLARED_PyvtkPVCameraCueManipulator_Modes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPVCameraCueManipulator_Modes_Type;
#define DECLARED_PyvtkPVCameraCueManipulator_Modes_Type
#endif

PyTypeObject PyvtkPVCameraCueManipulator_Modes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"Modes", // tp_name
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

PyObject *PyvtkPVCameraCueManipulator_Modes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVCameraCueManipulator_Modes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPVCameraCueManipulator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCueManipulator *op = static_cast<vtkPVCameraCueManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVCameraCueManipulator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraCueManipulator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCueManipulator *op = static_cast<vtkPVCameraCueManipulator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCameraCueManipulator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraCueManipulator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCueManipulator *op = static_cast<vtkPVCameraCueManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVCameraCueManipulator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCameraCueManipulator::NewInstance());

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
PyvtkPVCameraCueManipulator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVCameraCueManipulator *tempr = vtkPVCameraCueManipulator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraCueManipulator_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCueManipulator *op = static_cast<vtkPVCameraCueManipulator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMode(temp0);
      }
    else
      {
      op->vtkPVCameraCueManipulator::SetMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraCueManipulator_GetModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCueManipulator *op = static_cast<vtkPVCameraCueManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetModeMinValue() :
      op->vtkPVCameraCueManipulator::GetModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraCueManipulator_GetModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCueManipulator *op = static_cast<vtkPVCameraCueManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetModeMaxValue() :
      op->vtkPVCameraCueManipulator::GetModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraCueManipulator_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCueManipulator *op = static_cast<vtkPVCameraCueManipulator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkPVCameraCueManipulator::GetMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCameraCueManipulator_SetDataSourceProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSourceProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCueManipulator *op = static_cast<vtkPVCameraCueManipulator *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetDataSourceProxy(temp0);
      }
    else
      {
      op->vtkPVCameraCueManipulator::SetDataSourceProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVCameraCueManipulator_Methods[] = {
  {(char*)"GetClassName", PyvtkPVCameraCueManipulator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVCameraCueManipulator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVCameraCueManipulator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVCameraCueManipulator\nC++: vtkPVCameraCueManipulator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVCameraCueManipulator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVCameraCueManipulator\nC++: vtkPVCameraCueManipulator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMode", PyvtkPVCameraCueManipulator_SetMode, METH_VARARGS,
   (char*)"V.SetMode(int)\nC++: void SetMode(int)\n\nThis manipulator has three modes:\n\\li CAMERA - the traditional mode using vtkCameraInterpolator\n    where camera\nvalues are directly interpolated.\n\\li PATH - the easy-to-use path  based interpolation where the\n    camera\nposition/camera focal point paths can be explicitly specified. We\nmay eventually deprecate CAMERA mode since it may run out of\nusability as PATH mode matures. So the code precariously meanders\nbetween the two right now, but deprecating the old should help\nclean that up.\n\\li FOLLOW_DATA - the camera will follow the data set with the\nSetDataSourceProxy() method.\n"},
  {(char*)"GetModeMinValue", PyvtkPVCameraCueManipulator_GetModeMinValue, METH_VARARGS,
   (char*)"V.GetModeMinValue() -> int\nC++: int GetModeMinValue()\n\nThis manipulator has three modes:\n\\li CAMERA - the traditional mode using vtkCameraInterpolator\n    where camera\nvalues are directly interpolated.\n\\li PATH - the easy-to-use path  based interpolation where the\n    camera\nposition/camera focal point paths can be explicitly specified. We\nmay eventually deprecate CAMERA mode since it may run out of\nusability as PATH mode matures. So the code precariously meanders\nbetween the two right now, but deprecating the old should help\nclean that up.\n\\li FOLLOW_DATA - the camera will follow the data set with the\nSetDataSourceProxy() method.\n"},
  {(char*)"GetModeMaxValue", PyvtkPVCameraCueManipulator_GetModeMaxValue, METH_VARARGS,
   (char*)"V.GetModeMaxValue() -> int\nC++: int GetModeMaxValue()\n\nThis manipulator has three modes:\n\\li CAMERA - the traditional mode using vtkCameraInterpolator\n    where camera\nvalues are directly interpolated.\n\\li PATH - the easy-to-use path  based interpolation where the\n    camera\nposition/camera focal point paths can be explicitly specified. We\nmay eventually deprecate CAMERA mode since it may run out of\nusability as PATH mode matures. So the code precariously meanders\nbetween the two right now, but deprecating the old should help\nclean that up.\n\\li FOLLOW_DATA - the camera will follow the data set with the\nSetDataSourceProxy() method.\n"},
  {(char*)"GetMode", PyvtkPVCameraCueManipulator_GetMode, METH_VARARGS,
   (char*)"V.GetMode() -> int\nC++: int GetMode()\n\nThis manipulator has three modes:\n\\li CAMERA - the traditional mode using vtkCameraInterpolator\n    where camera\nvalues are directly interpolated.\n\\li PATH - the easy-to-use path  based interpolation where the\n    camera\nposition/camera focal point paths can be explicitly specified. We\nmay eventually deprecate CAMERA mode since it may run out of\nusability as PATH mode matures. So the code precariously meanders\nbetween the two right now, but deprecating the old should help\nclean that up.\n\\li FOLLOW_DATA - the camera will follow the data set with the\nSetDataSourceProxy() method.\n"},
  {(char*)"SetDataSourceProxy", PyvtkPVCameraCueManipulator_SetDataSourceProxy, METH_VARARGS,
   (char*)"V.SetDataSourceProxy(vtkSMProxy)\nC++: void SetDataSourceProxy(vtkSMProxy *dataSourceProxy)\n\nSet the data soruce proxy. This is used when in the FOLLOW_DATA\nmode. The camera will track the data refered to by the data\nsource proxy.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVCameraCueManipulator_StaticNew()
{
  return vtkPVCameraCueManipulator::New();
}

PyObject *PyVTKClass_vtkPVCameraCueManipulatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVCameraCueManipulator_StaticNew,
    PyvtkPVCameraCueManipulator_Methods,
    "vtkPVCameraCueManipulator", modulename,
    NULL, NULL,
    PyvtkPVCameraCueManipulator_Doc(),
    PyVTKClass_vtkPVKeyFrameCueManipulatorNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPVCameraCueManipulator_Modes_Type);
    PyvtkPVCameraCueManipulator_Modes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPVCameraCueManipulator_Modes_Type;
    if (o && PyDict_SetItemString(d, (char *)"Modes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 3; c++)
      {
      typedef vtkPVCameraCueManipulator::Modes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[3] = {
          { "CAMERA", vtkPVCameraCueManipulator::CAMERA },
          { "PATH", vtkPVCameraCueManipulator::PATH },
          { "FOLLOW_DATA", vtkPVCameraCueManipulator::FOLLOW_DATA },
        };

      o = PyvtkPVCameraCueManipulator_Modes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPVCameraCueManipulator_Doc()
{
  static const char *docstring[] = {
    "vtkSMCameraManipulatorProxy - Manipulator for Camera animation.\n\n",
    "Superclass: vtkPVKeyFrameCueManipulator\n\n",
    "This is the manipulator for animating camera. Unlike the base class,\ninterpolation is not done by the Keyframe objects. Instead, this\nclass does the interpolation using the values in the keyframe\nobjects. All the keyframes added to a vtkSMCameraManipulatorProxy\nmust be vtkSMCameraKeyFrameProxy. Like all animation proxies, this is\na client side only proxy with no VTK objects created on the server\ns",
    "ide.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVCameraCueManipulator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVCameraCueManipulatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVCameraCueManipulator", o) != 0)
    {
    Py_DECREF(o);
    }

}

