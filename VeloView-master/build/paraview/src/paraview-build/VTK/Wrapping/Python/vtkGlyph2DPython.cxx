// python wrapper for vtkGlyph2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGlyph2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGlyph2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGlyph2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGlyph3DNew
extern "C" { PyObject *PyVTKClass_vtkGlyph3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkGlyph3DNew
#endif

static const char **PyvtkGlyph2D_Doc();


static PyObject *
PyvtkGlyph2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph2D *op = static_cast<vtkGlyph2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGlyph2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph2D *op = static_cast<vtkGlyph2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGlyph2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGlyph2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyph2D *op = static_cast<vtkGlyph2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGlyph2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGlyph2D::NewInstance());

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
PyvtkGlyph2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGlyph2D *tempr = vtkGlyph2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGlyph2D_Methods[] = {
  {(char*)"GetClassName", PyvtkGlyph2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGlyph2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGlyph2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGlyph2D\nC++: vtkGlyph2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGlyph2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGlyph2D\nC++: vtkGlyph2D *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGlyph2D_StaticNew()
{
  return vtkGlyph2D::New();
}

PyObject *PyVTKClass_vtkGlyph2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGlyph2D_StaticNew,
    PyvtkGlyph2D_Methods,
    "vtkGlyph2D", modulename,
    NULL, NULL,
    PyvtkGlyph2D_Doc(),
    PyVTKClass_vtkGlyph3DNew(modulename));
  return cls;
}

const char **PyvtkGlyph2D_Doc()
{
  static const char *docstring[] = {
    "vtkGlyph2D - copy oriented and scaled glyph geometry to every input\npoint (2D specialization)\n\n",
    "Superclass: vtkGlyph3D\n\n",
    "This subclass of vtkGlyph3D is a specialization to 2D.\nTransformations (i.e., translation, scaling, and rotation) are\nconstrained to the plane. For example, rotations due to a vector are\ncomputed from the x-y coordinates of the vector only, and are assumed\nto occur around the z-axis. (See vtkGlyph3D for documentation on the\ninterface to this class.)\n\nSee Also:\n\nvtkTensorGlyph vtkGlyph3D vtkProgram",
    "mableGlyphFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGlyph2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGlyph2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGlyph2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

