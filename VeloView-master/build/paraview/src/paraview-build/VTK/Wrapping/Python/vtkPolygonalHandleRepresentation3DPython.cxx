// python wrapper for vtkPolygonalHandleRepresentation3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPolygonalHandleRepresentation3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPolygonalHandleRepresentation3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPolygonalHandleRepresentation3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractPolygonalHandleRepresentation3DNew
extern "C" { PyObject *PyVTKClass_vtkAbstractPolygonalHandleRepresentation3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractPolygonalHandleRepresentation3DNew
#endif

static const char **PyvtkPolygonalHandleRepresentation3D_Doc();


static PyObject *
PyvtkPolygonalHandleRepresentation3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalHandleRepresentation3D *op = static_cast<vtkPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPolygonalHandleRepresentation3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalHandleRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalHandleRepresentation3D *op = static_cast<vtkPolygonalHandleRepresentation3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolygonalHandleRepresentation3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalHandleRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalHandleRepresentation3D *op = static_cast<vtkPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolygonalHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolygonalHandleRepresentation3D::NewInstance());

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
PyvtkPolygonalHandleRepresentation3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPolygonalHandleRepresentation3D *tempr = vtkPolygonalHandleRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonalHandleRepresentation3D_SetWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalHandleRepresentation3D *op = static_cast<vtkPolygonalHandleRepresentation3D *>(vp);

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
      op->SetWorldPosition(temp0);
      }
    else
      {
      op->vtkPolygonalHandleRepresentation3D::SetWorldPosition(temp0);
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
PyvtkPolygonalHandleRepresentation3D_SetOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalHandleRepresentation3D *op = static_cast<vtkPolygonalHandleRepresentation3D *>(vp);

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
      op->SetOffset(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPolygonalHandleRepresentation3D::SetOffset(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolygonalHandleRepresentation3D_SetOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalHandleRepresentation3D *op = static_cast<vtkPolygonalHandleRepresentation3D *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0);
      }
    else
      {
      op->vtkPolygonalHandleRepresentation3D::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolygonalHandleRepresentation3D_SetOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPolygonalHandleRepresentation3D_SetOffset_s1(self, args);
    case 1:
      return PyvtkPolygonalHandleRepresentation3D_SetOffset_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOffset");
  return NULL;
}



static PyObject *
PyvtkPolygonalHandleRepresentation3D_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalHandleRepresentation3D *op = static_cast<vtkPolygonalHandleRepresentation3D *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkPolygonalHandleRepresentation3D::GetOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolygonalHandleRepresentation3D_Methods[] = {
  {(char*)"GetClassName", PyvtkPolygonalHandleRepresentation3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkPolygonalHandleRepresentation3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkPolygonalHandleRepresentation3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPolygonalHandleRepresentation3D\nC++: vtkPolygonalHandleRepresentation3D *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkPolygonalHandleRepresentation3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolygonalHandleRepresentation3D\nC++: vtkPolygonalHandleRepresentation3D *SafeDownCast(\n    vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"SetWorldPosition", PyvtkPolygonalHandleRepresentation3D_SetWorldPosition, METH_VARARGS,
   (char*)"V.SetWorldPosition([float, float, float])\nC++: virtual void SetWorldPosition(double p[3])\n\nSet the position of the point in world and display coordinates.\n"},
  {(char*)"SetOffset", PyvtkPolygonalHandleRepresentation3D_SetOffset, METH_VARARGS,
   (char*)"V.SetOffset(float, float, float)\nC++: void SetOffset(double, double, double)\nV.SetOffset((float, float, float))\nC++: void SetOffset(double a[3])\n\n"},
  {(char*)"GetOffset", PyvtkPolygonalHandleRepresentation3D_GetOffset, METH_VARARGS,
   (char*)"V.GetOffset() -> (float, float, float)\nC++: double *GetOffset()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolygonalHandleRepresentation3D_StaticNew()
{
  return vtkPolygonalHandleRepresentation3D::New();
}

PyObject *PyVTKClass_vtkPolygonalHandleRepresentation3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolygonalHandleRepresentation3D_StaticNew,
    PyvtkPolygonalHandleRepresentation3D_Methods,
    "vtkPolygonalHandleRepresentation3D", modulename,
    NULL, NULL,
    PyvtkPolygonalHandleRepresentation3D_Doc(),
    PyVTKClass_vtkAbstractPolygonalHandleRepresentation3DNew(modulename));
  return cls;
}

const char **PyvtkPolygonalHandleRepresentation3D_Doc()
{
  static const char *docstring[] = {
    "vtkPolygonalHandleRepresentation3D - represent a user defined handle\ngeometry in 3D space\n\n",
    "Superclass: vtkAbstractPolygonalHandleRepresentation3D\n\n",
    "This class serves as the geometrical representation of a\nvtkHandleWidget. The handle can be represented by an arbitrary\npolygonal data (vtkPolyData), set via SetHandle(vtkPolyData *). The\nactual position of the handle will be initially assumed to be\n(0,0,0). You can specify an offset from this position if desired.\n\nSee Also:\n\nvtkPointHandleRepresentation3D vtkHandleRepresentation\nvtkHandleWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolygonalHandleRepresentation3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolygonalHandleRepresentation3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolygonalHandleRepresentation3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

