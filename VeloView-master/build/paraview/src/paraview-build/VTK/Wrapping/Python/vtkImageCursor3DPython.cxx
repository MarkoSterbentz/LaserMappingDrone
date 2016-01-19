// python wrapper for vtkImageCursor3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageCursor3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageCursor3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageCursor3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageInPlaceFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageInPlaceFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageInPlaceFilterNew
#endif

static const char **PyvtkImageCursor3D_Doc();


static PyObject *
PyvtkImageCursor3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageCursor3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCursor3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageCursor3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCursor3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageCursor3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageCursor3D::NewInstance());

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
PyvtkImageCursor3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageCursor3D *tempr = vtkImageCursor3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCursor3D_SetCursorPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

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
      op->SetCursorPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageCursor3D::SetCursorPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCursor3D_SetCursorPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCursorPosition(temp0);
      }
    else
      {
      op->vtkImageCursor3D::SetCursorPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCursor3D_SetCursorPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageCursor3D_SetCursorPosition_s1(self, args);
    case 1:
      return PyvtkImageCursor3D_SetCursorPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCursorPosition");
  return NULL;
}



static PyObject *
PyvtkImageCursor3D_GetCursorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCursorPosition() :
      op->vtkImageCursor3D::GetCursorPosition());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCursor3D_SetCursorValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCursorValue(temp0);
      }
    else
      {
      op->vtkImageCursor3D::SetCursorValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCursor3D_GetCursorValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetCursorValue() :
      op->vtkImageCursor3D::GetCursorValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCursor3D_SetCursorRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCursorRadius(temp0);
      }
    else
      {
      op->vtkImageCursor3D::SetCursorRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCursor3D_GetCursorRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCursor3D *op = static_cast<vtkImageCursor3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCursorRadius() :
      op->vtkImageCursor3D::GetCursorRadius());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageCursor3D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageCursor3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageCursor3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageCursor3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageCursor3D\nC++: vtkImageCursor3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageCursor3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageCursor3D\nC++: vtkImageCursor3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCursorPosition", PyvtkImageCursor3D_SetCursorPosition, METH_VARARGS,
   (char*)"V.SetCursorPosition(float, float, float)\nC++: void SetCursorPosition(double, double, double)\nV.SetCursorPosition((float, float, float))\nC++: void SetCursorPosition(double a[3])\n\n"},
  {(char*)"GetCursorPosition", PyvtkImageCursor3D_GetCursorPosition, METH_VARARGS,
   (char*)"V.GetCursorPosition() -> (float, float, float)\nC++: double *GetCursorPosition()\n\n"},
  {(char*)"SetCursorValue", PyvtkImageCursor3D_SetCursorValue, METH_VARARGS,
   (char*)"V.SetCursorValue(float)\nC++: void SetCursorValue(double a)\n\nSets/Gets what pixel value to draw the cursor in.\n"},
  {(char*)"GetCursorValue", PyvtkImageCursor3D_GetCursorValue, METH_VARARGS,
   (char*)"V.GetCursorValue() -> float\nC++: double GetCursorValue()\n\nSets/Gets what pixel value to draw the cursor in.\n"},
  {(char*)"SetCursorRadius", PyvtkImageCursor3D_SetCursorRadius, METH_VARARGS,
   (char*)"V.SetCursorRadius(int)\nC++: void SetCursorRadius(int a)\n\nSets/Gets the radius of the cursor. The radius determines how far\nthe axis lines project out from the cursors center.\n"},
  {(char*)"GetCursorRadius", PyvtkImageCursor3D_GetCursorRadius, METH_VARARGS,
   (char*)"V.GetCursorRadius() -> int\nC++: int GetCursorRadius()\n\nSets/Gets the radius of the cursor. The radius determines how far\nthe axis lines project out from the cursors center.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageCursor3D_StaticNew()
{
  return vtkImageCursor3D::New();
}

PyObject *PyVTKClass_vtkImageCursor3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageCursor3D_StaticNew,
    PyvtkImageCursor3D_Methods,
    "vtkImageCursor3D", modulename,
    NULL, NULL,
    PyvtkImageCursor3D_Doc(),
    PyVTKClass_vtkImageInPlaceFilterNew(modulename));
  return cls;
}

const char **PyvtkImageCursor3D_Doc()
{
  static const char *docstring[] = {
    "vtkImageCursor3D - Paints a cursor on top of an image or volume.\n\n",
    "Superclass: vtkImageInPlaceFilter\n\n",
    "vtkImageCursor3D will draw a cursor on a 2d image or 3d volume.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageCursor3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageCursor3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageCursor3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

