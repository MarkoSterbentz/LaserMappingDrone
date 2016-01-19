// python wrapper for vtkTDxInteractorStyleSettings
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTDxInteractorStyleSettings.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTDxInteractorStyleSettings(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTDxInteractorStyleSettingsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTDxInteractorStyleSettings_Doc();


static PyObject *
PyvtkTDxInteractorStyleSettings_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTDxInteractorStyleSettings::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTDxInteractorStyleSettings::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTDxInteractorStyleSettings *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTDxInteractorStyleSettings::NewInstance());

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
PyvtkTDxInteractorStyleSettings_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTDxInteractorStyleSettings *tempr = vtkTDxInteractorStyleSettings::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetAngleSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAngleSensitivity(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyleSettings::SetAngleSensitivity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetAngleSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetAngleSensitivity() :
      op->vtkTDxInteractorStyleSettings::GetAngleSensitivity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetUseRotationX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRotationX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseRotationX(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyleSettings::SetUseRotationX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetUseRotationX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRotationX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseRotationX() :
      op->vtkTDxInteractorStyleSettings::GetUseRotationX());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetUseRotationY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRotationY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseRotationY(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyleSettings::SetUseRotationY(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetUseRotationY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRotationY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseRotationY() :
      op->vtkTDxInteractorStyleSettings::GetUseRotationY());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetUseRotationZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRotationZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseRotationZ(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyleSettings::SetUseRotationZ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetUseRotationZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRotationZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseRotationZ() :
      op->vtkTDxInteractorStyleSettings::GetUseRotationZ());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetTranslationXSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationXSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTranslationXSensitivity(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyleSettings::SetTranslationXSensitivity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetTranslationXSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationXSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTranslationXSensitivity() :
      op->vtkTDxInteractorStyleSettings::GetTranslationXSensitivity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetTranslationYSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationYSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTranslationYSensitivity(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyleSettings::SetTranslationYSensitivity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetTranslationYSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationYSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTranslationYSensitivity() :
      op->vtkTDxInteractorStyleSettings::GetTranslationYSensitivity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetTranslationZSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationZSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTranslationZSensitivity(temp0);
      }
    else
      {
      op->vtkTDxInteractorStyleSettings::SetTranslationZSensitivity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetTranslationZSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationZSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTranslationZSensitivity() :
      op->vtkTDxInteractorStyleSettings::GetTranslationZSensitivity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTDxInteractorStyleSettings_Methods[] = {
  {(char*)"GetClassName", PyvtkTDxInteractorStyleSettings_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTDxInteractorStyleSettings_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTDxInteractorStyleSettings_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTDxInteractorStyleSettings\nC++: vtkTDxInteractorStyleSettings *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTDxInteractorStyleSettings_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTDxInteractorStyleSettings\nC++: vtkTDxInteractorStyleSettings *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAngleSensitivity", PyvtkTDxInteractorStyleSettings_SetAngleSensitivity, METH_VARARGS,
   (char*)"V.SetAngleSensitivity(float)\nC++: void SetAngleSensitivity(double a)\n\nSensitivity of the rotation angle. This can be any value:\npositive, negative, null.\n- x<-1.0: faster reversed\n- x=-1.0: reversed neutral\n- -1.0<x<0.0:  reversed slower\n- x=0.0: no rotation\n- 0.0<x<1.0: slower\n- x=1.0: neutral\n- x>1.0: faster\n"},
  {(char*)"GetAngleSensitivity", PyvtkTDxInteractorStyleSettings_GetAngleSensitivity, METH_VARARGS,
   (char*)"V.GetAngleSensitivity() -> float\nC++: double GetAngleSensitivity()\n\nSensitivity of the rotation angle. This can be any value:\npositive, negative, null.\n- x<-1.0: faster reversed\n- x=-1.0: reversed neutral\n- -1.0<x<0.0:  reversed slower\n- x=0.0: no rotation\n- 0.0<x<1.0: slower\n- x=1.0: neutral\n- x>1.0: faster\n"},
  {(char*)"SetUseRotationX", PyvtkTDxInteractorStyleSettings_SetUseRotationX, METH_VARARGS,
   (char*)"V.SetUseRotationX(bool)\nC++: void SetUseRotationX(bool a)\n\nUse or mask the rotation component around the X-axis. Initial\nvalue is true.\n"},
  {(char*)"GetUseRotationX", PyvtkTDxInteractorStyleSettings_GetUseRotationX, METH_VARARGS,
   (char*)"V.GetUseRotationX() -> bool\nC++: bool GetUseRotationX()\n\nUse or mask the rotation component around the X-axis. Initial\nvalue is true.\n"},
  {(char*)"SetUseRotationY", PyvtkTDxInteractorStyleSettings_SetUseRotationY, METH_VARARGS,
   (char*)"V.SetUseRotationY(bool)\nC++: void SetUseRotationY(bool a)\n\nUse or mask the rotation component around the Y-axis. Initial\nvalue is true.\n"},
  {(char*)"GetUseRotationY", PyvtkTDxInteractorStyleSettings_GetUseRotationY, METH_VARARGS,
   (char*)"V.GetUseRotationY() -> bool\nC++: bool GetUseRotationY()\n\nUse or mask the rotation component around the Y-axis. Initial\nvalue is true.\n"},
  {(char*)"SetUseRotationZ", PyvtkTDxInteractorStyleSettings_SetUseRotationZ, METH_VARARGS,
   (char*)"V.SetUseRotationZ(bool)\nC++: void SetUseRotationZ(bool a)\n\nUse or mask the rotation component around the Z-axis. Initial\nvalue is true.\n"},
  {(char*)"GetUseRotationZ", PyvtkTDxInteractorStyleSettings_GetUseRotationZ, METH_VARARGS,
   (char*)"V.GetUseRotationZ() -> bool\nC++: bool GetUseRotationZ()\n\nUse or mask the rotation component around the Z-axis. Initial\nvalue is true.\n"},
  {(char*)"SetTranslationXSensitivity", PyvtkTDxInteractorStyleSettings_SetTranslationXSensitivity, METH_VARARGS,
   (char*)"V.SetTranslationXSensitivity(float)\nC++: void SetTranslationXSensitivity(double a)\n\nSensitivity of the translation along the X-axis. This can be any\nvalue: positive, negative, null.\n- x<-1.0: faster reversed\n- x=-1.0: reversed neutral\n- -1.0<x<0.0:  reversed slower\n- x=0.0: no translation\n- 0.0<x<1.0: slower\n- x=1.0: neutral\n- x>1.0: faster Initial value is 1.0\n"},
  {(char*)"GetTranslationXSensitivity", PyvtkTDxInteractorStyleSettings_GetTranslationXSensitivity, METH_VARARGS,
   (char*)"V.GetTranslationXSensitivity() -> float\nC++: double GetTranslationXSensitivity()\n\nSensitivity of the translation along the X-axis. This can be any\nvalue: positive, negative, null.\n- x<-1.0: faster reversed\n- x=-1.0: reversed neutral\n- -1.0<x<0.0:  reversed slower\n- x=0.0: no translation\n- 0.0<x<1.0: slower\n- x=1.0: neutral\n- x>1.0: faster Initial value is 1.0\n"},
  {(char*)"SetTranslationYSensitivity", PyvtkTDxInteractorStyleSettings_SetTranslationYSensitivity, METH_VARARGS,
   (char*)"V.SetTranslationYSensitivity(float)\nC++: void SetTranslationYSensitivity(double a)\n\nSensitivity of the translation along the Y-axis. See comment of\nSetTranslationXSensitivity().\n"},
  {(char*)"GetTranslationYSensitivity", PyvtkTDxInteractorStyleSettings_GetTranslationYSensitivity, METH_VARARGS,
   (char*)"V.GetTranslationYSensitivity() -> float\nC++: double GetTranslationYSensitivity()\n\nSensitivity of the translation along the Y-axis. See comment of\nSetTranslationXSensitivity().\n"},
  {(char*)"SetTranslationZSensitivity", PyvtkTDxInteractorStyleSettings_SetTranslationZSensitivity, METH_VARARGS,
   (char*)"V.SetTranslationZSensitivity(float)\nC++: void SetTranslationZSensitivity(double a)\n\nSensitivity of the translation along the Z-axis. See comment of\nSetTranslationXSensitivity().\n"},
  {(char*)"GetTranslationZSensitivity", PyvtkTDxInteractorStyleSettings_GetTranslationZSensitivity, METH_VARARGS,
   (char*)"V.GetTranslationZSensitivity() -> float\nC++: double GetTranslationZSensitivity()\n\nSensitivity of the translation along the Z-axis. See comment of\nSetTranslationXSensitivity().\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTDxInteractorStyleSettings_StaticNew()
{
  return vtkTDxInteractorStyleSettings::New();
}

PyObject *PyVTKClass_vtkTDxInteractorStyleSettingsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTDxInteractorStyleSettings_StaticNew,
    PyvtkTDxInteractorStyleSettings_Methods,
    "vtkTDxInteractorStyleSettings", modulename,
    NULL, NULL,
    PyvtkTDxInteractorStyleSettings_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkTDxInteractorStyleSettings_Doc()
{
  static const char *docstring[] = {
    "vtkTDxInteractorStyleSettings - 3DConnexion device settings\n\n",
    "Superclass: vtkObject\n\n",
    "vtkTDxInteractorStyleSettings defines settings for 3DConnexion device\nsuch as sensitivity, axis filters\n\nSee Also:\n\nvtkInteractorStyle vtkRenderWindowInteractor vtkTDxInteractorStyle\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTDxInteractorStyleSettings(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTDxInteractorStyleSettingsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTDxInteractorStyleSettings", o) != 0)
    {
    Py_DECREF(o);
    }

}

