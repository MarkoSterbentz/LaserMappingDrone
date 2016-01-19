// python wrapper for vtkPVRecoverGeometryWireframe
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVRecoverGeometryWireframe.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVRecoverGeometryWireframe(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVRecoverGeometryWireframeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkPVRecoverGeometryWireframe_Doc();


static PyObject *
PyvtkPVRecoverGeometryWireframe_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRecoverGeometryWireframe *op = static_cast<vtkPVRecoverGeometryWireframe *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVRecoverGeometryWireframe::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRecoverGeometryWireframe_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRecoverGeometryWireframe *op = static_cast<vtkPVRecoverGeometryWireframe *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVRecoverGeometryWireframe::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRecoverGeometryWireframe_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRecoverGeometryWireframe *op = static_cast<vtkPVRecoverGeometryWireframe *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVRecoverGeometryWireframe *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVRecoverGeometryWireframe::NewInstance());

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
PyvtkPVRecoverGeometryWireframe_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVRecoverGeometryWireframe *tempr = vtkPVRecoverGeometryWireframe::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRecoverGeometryWireframe_ORIGINAL_FACE_IDS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ORIGINAL_FACE_IDS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    const char *tempr = vtkPVRecoverGeometryWireframe::ORIGINAL_FACE_IDS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVRecoverGeometryWireframe_Methods[] = {
  {(char*)"GetClassName", PyvtkPVRecoverGeometryWireframe_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVRecoverGeometryWireframe_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVRecoverGeometryWireframe_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVRecoverGeometryWireframe\nC++: vtkPVRecoverGeometryWireframe *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVRecoverGeometryWireframe_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVRecoverGeometryWireframe\nC++: vtkPVRecoverGeometryWireframe *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ORIGINAL_FACE_IDS", PyvtkPVRecoverGeometryWireframe_ORIGINAL_FACE_IDS, METH_VARARGS | METH_STATIC,
   (char*)"V.ORIGINAL_FACE_IDS() -> string\nC++: static const char *ORIGINAL_FACE_IDS()\n\nIn order to determine which edges existed in the original data,\nwe need an identifier on each cell determining which face (not\ncell) it originally came from.  The ids should be put in a cell\ndata array with this name.  The existance of this field is also a\nsignal that this wireframe extraction is necessary.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVRecoverGeometryWireframe_StaticNew()
{
  return vtkPVRecoverGeometryWireframe::New();
}

PyObject *PyVTKClass_vtkPVRecoverGeometryWireframeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVRecoverGeometryWireframe_StaticNew,
    PyvtkPVRecoverGeometryWireframe_Methods,
    "vtkPVRecoverGeometryWireframe", modulename,
    NULL, NULL,
    PyvtkPVRecoverGeometryWireframe_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPVRecoverGeometryWireframe_Doc()
{
  static const char *docstring[] = {
    "vtkPVRecoverGeometryWireframe - Get corrected wireframe from\ntesselated facets\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "When vtkPVGeometryFilter tessellates nonlinear faces into linear\napproximations, it introduces edges in the middle of the facets of\nthe original mesh (as any valid tessellation would).  To correct for\nthis, vtkPVGeometryFilter also writes out some fields that allows use\nto identify the edges that are actually part of the original mesh. \nThis filter works in conjunction with vtkPVGeometryFilter by ",
    "taking\nits output, adding an edge flag and making the appropriate\nadjustments so that rendering with line fill mode will make the\ncorrect wireframe.\n\nSee Also:\n\nvtkPVGeometryFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVRecoverGeometryWireframe(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVRecoverGeometryWireframeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVRecoverGeometryWireframe", o) != 0)
    {
    Py_DECREF(o);
    }

}

