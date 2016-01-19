// python wrapper for vtkCylindricalTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCylindricalTransform.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCylindricalTransform(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCylindricalTransformNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWarpTransformNew
extern "C" { PyObject *PyVTKClass_vtkWarpTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkWarpTransformNew
#endif

static const char **PyvtkCylindricalTransform_Doc();


static PyObject *
PyvtkCylindricalTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylindricalTransform *op = static_cast<vtkCylindricalTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCylindricalTransform::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylindricalTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylindricalTransform *op = static_cast<vtkCylindricalTransform *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCylindricalTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylindricalTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylindricalTransform *op = static_cast<vtkCylindricalTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCylindricalTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCylindricalTransform::NewInstance());

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
PyvtkCylindricalTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCylindricalTransform *tempr = vtkCylindricalTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylindricalTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylindricalTransform *op = static_cast<vtkCylindricalTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkCylindricalTransform::MakeTransform());

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

static PyMethodDef PyvtkCylindricalTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkCylindricalTransform_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCylindricalTransform_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCylindricalTransform_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCylindricalTransform\nC++: vtkCylindricalTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCylindricalTransform_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCylindricalTransform\nC++: vtkCylindricalTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"MakeTransform", PyvtkCylindricalTransform_MakeTransform, METH_VARARGS,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake another transform of the same type.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCylindricalTransform_StaticNew()
{
  return vtkCylindricalTransform::New();
}

PyObject *PyVTKClass_vtkCylindricalTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCylindricalTransform_StaticNew,
    PyvtkCylindricalTransform_Methods,
    "vtkCylindricalTransform", modulename,
    NULL, NULL,
    PyvtkCylindricalTransform_Doc(),
    PyVTKClass_vtkWarpTransformNew(modulename));
  return cls;
}

const char **PyvtkCylindricalTransform_Doc()
{
  static const char *docstring[] = {
    "vtkCylindricalTransform - cylindrical to rectangular coords and back\n\n",
    "Superclass: vtkWarpTransform\n\n",
    "vtkCylindricalTransform will convert (r,theta,z) coordinates to\n(x,y,z) coordinates and back again.  The angles are given in radians.\nBy default, it converts cylindrical coordinates to rectangular, but\nGetInverse() returns a transform that will do the opposite.  The\nequation that is used is x = r*cos(theta), y = r*sin(theta), z = z.\n\nCaveats:\n\nThis transform is not well behaved along the line x=y=",
    "0 (i.e. along\nthe z-axis)\n\nSee Also:\n\nvtkSphericalTransform vtkGeneralTransform\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCylindricalTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCylindricalTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCylindricalTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

