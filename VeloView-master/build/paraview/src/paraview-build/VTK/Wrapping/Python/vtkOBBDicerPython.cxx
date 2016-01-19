// python wrapper for vtkOBBDicer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOBBDicer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOBBDicer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOBBDicerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDicerNew
extern "C" { PyObject *PyVTKClass_vtkDicerNew(const char *); }
#define DECLARED_PyVTKClass_vtkDicerNew
#endif

static const char **PyvtkOBBDicer_Doc();


static PyObject *
PyvtkOBBDicer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBBDicer *op = static_cast<vtkOBBDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOBBDicer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOBBDicer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBBDicer *op = static_cast<vtkOBBDicer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOBBDicer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOBBDicer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOBBDicer *op = static_cast<vtkOBBDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOBBDicer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOBBDicer::NewInstance());

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
PyvtkOBBDicer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOBBDicer *tempr = vtkOBBDicer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOBBDicer_Methods[] = {
  {(char*)"GetClassName", PyvtkOBBDicer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOBBDicer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOBBDicer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOBBDicer\nC++: vtkOBBDicer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOBBDicer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOBBDicer\nC++: vtkOBBDicer *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOBBDicer_StaticNew()
{
  return vtkOBBDicer::New();
}

PyObject *PyVTKClass_vtkOBBDicerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOBBDicer_StaticNew,
    PyvtkOBBDicer_Methods,
    "vtkOBBDicer", modulename,
    NULL, NULL,
    PyvtkOBBDicer_Doc(),
    PyVTKClass_vtkDicerNew(modulename));
  return cls;
}

const char **PyvtkOBBDicer_Doc()
{
  static const char *docstring[] = {
    "vtkOBBDicer - divide dataset into spatially aggregated pieces\n\n",
    "Superclass: vtkDicer\n\n",
    "vtkOBBDicer separates the cells of a dataset into spatially\naggregated pieces using a Oriented Bounding Box (OBB). These pieces\ncan then be operated on by other filters (e.g., vtkThreshold). One\napplication is to break very large polygonal models into pieces and\nperforming viewing and occlusion culling on the pieces.\n\nRefer to the superclass documentation (vtkDicer) for more\ninformation.\n\nSee Also",
    ":\n\nvtkDicer vtkConnectedDicer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOBBDicer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOBBDicerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOBBDicer", o) != 0)
    {
    Py_DECREF(o);
    }

}

