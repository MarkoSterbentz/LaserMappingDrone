// python wrapper for vtkPVTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVTransform.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVTransform(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVTransformNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTransformNew
extern "C" { PyObject *PyVTKClass_vtkTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkTransformNew
#endif

static const char **PyvtkPVTransform_Doc();


static PyObject *
PyvtkPVTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVTransform::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTransform::NewInstance());

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
PyvtkPVTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVTransform *tempr = vtkPVTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTransform_SetAbsolutePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsolutePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

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
      op->SetAbsolutePosition(temp0);
      }
    else
      {
      op->vtkPVTransform::SetAbsolutePosition(temp0);
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
PyvtkPVTransform_SetAbsolutePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsolutePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetAbsolutePosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVTransform::SetAbsolutePosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVTransform_SetAbsolutePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVTransform_SetAbsolutePosition_s1(self, args);
    case 3:
      return PyvtkPVTransform_SetAbsolutePosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAbsolutePosition");
  return NULL;
}



static PyObject *
PyvtkPVTransform_GetAbsolutePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsolutePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAbsolutePosition() :
      op->vtkPVTransform::GetAbsolutePosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTransform_SetAbsoluteRotation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

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
      op->SetAbsoluteRotation(temp0);
      }
    else
      {
      op->vtkPVTransform::SetAbsoluteRotation(temp0);
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
PyvtkPVTransform_SetAbsoluteRotation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetAbsoluteRotation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVTransform::SetAbsoluteRotation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVTransform_SetAbsoluteRotation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVTransform_SetAbsoluteRotation_s1(self, args);
    case 3:
      return PyvtkPVTransform_SetAbsoluteRotation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAbsoluteRotation");
  return NULL;
}



static PyObject *
PyvtkPVTransform_GetAbsoluteRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAbsoluteRotation() :
      op->vtkPVTransform::GetAbsoluteRotation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTransform_SetAbsoluteScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

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
      op->SetAbsoluteScale(temp0);
      }
    else
      {
      op->vtkPVTransform::SetAbsoluteScale(temp0);
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
PyvtkPVTransform_SetAbsoluteScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetAbsoluteScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPVTransform::SetAbsoluteScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVTransform_SetAbsoluteScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPVTransform_SetAbsoluteScale_s1(self, args);
    case 3:
      return PyvtkPVTransform_SetAbsoluteScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAbsoluteScale");
  return NULL;
}



static PyObject *
PyvtkPVTransform_GetAbsoluteScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTransform *op = static_cast<vtkPVTransform *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetAbsoluteScale() :
      op->vtkPVTransform::GetAbsoluteScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkPVTransform_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVTransform_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVTransform_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVTransform\nC++: vtkPVTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVTransform_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVTransform\nC++: vtkPVTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAbsolutePosition", PyvtkPVTransform_SetAbsolutePosition, METH_VARARGS,
   (char*)"V.SetAbsolutePosition([float, float, float])\nC++: void SetAbsolutePosition(double xyz[3])\nV.SetAbsolutePosition(float, float, float)\nC++: void SetAbsolutePosition(double x, double y, double z)\n\nGet/Set Position of the transform.\n"},
  {(char*)"GetAbsolutePosition", PyvtkPVTransform_GetAbsolutePosition, METH_VARARGS,
   (char*)"V.GetAbsolutePosition() -> (float, float, float)\nC++: double *GetAbsolutePosition()\n\n"},
  {(char*)"SetAbsoluteRotation", PyvtkPVTransform_SetAbsoluteRotation, METH_VARARGS,
   (char*)"V.SetAbsoluteRotation([float, float, float])\nC++: void SetAbsoluteRotation(double xyz[3])\nV.SetAbsoluteRotation(float, float, float)\nC++: void SetAbsoluteRotation(double x, double y, double z)\n\nGet/Set Rotation for the transform.\n"},
  {(char*)"GetAbsoluteRotation", PyvtkPVTransform_GetAbsoluteRotation, METH_VARARGS,
   (char*)"V.GetAbsoluteRotation() -> (float, float, float)\nC++: double *GetAbsoluteRotation()\n\n"},
  {(char*)"SetAbsoluteScale", PyvtkPVTransform_SetAbsoluteScale, METH_VARARGS,
   (char*)"V.SetAbsoluteScale([float, float, float])\nC++: void SetAbsoluteScale(double xyz[3])\nV.SetAbsoluteScale(float, float, float)\nC++: void SetAbsoluteScale(double x, double y, double z)\n\nGet/Set Scale for the transform.\n"},
  {(char*)"GetAbsoluteScale", PyvtkPVTransform_GetAbsoluteScale, METH_VARARGS,
   (char*)"V.GetAbsoluteScale() -> (float, float, float)\nC++: double *GetAbsoluteScale()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVTransform_StaticNew()
{
  return vtkPVTransform::New();
}

PyObject *PyVTKClass_vtkPVTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVTransform_StaticNew,
    PyvtkPVTransform_Methods,
    "vtkPVTransform", modulename,
    NULL, NULL,
    PyvtkPVTransform_Doc(),
    PyVTKClass_vtkTransformNew(modulename));
  return cls;
}

const char **PyvtkPVTransform_Doc()
{
  static const char *docstring[] = {
    "vtkPVTransform - baseclass for all ParaView vtkTransform class.\n\n",
    "Superclass: vtkTransform\n\n",
    "vtkPVTransform extend vtkTransform in the sens that it extend the\nvtkTransform API with absolute position/rotation/scale change and not\nincremental one like the vtkTransform does.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

