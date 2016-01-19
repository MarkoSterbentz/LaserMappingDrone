// python wrapper for vtkInstantiator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInstantiator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInstantiator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInstantiatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkInstantiator_Doc();


static PyObject *
PyvtkInstantiator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInstantiator *op = static_cast<vtkInstantiator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInstantiator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInstantiator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInstantiator *op = static_cast<vtkInstantiator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInstantiator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInstantiator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInstantiator *op = static_cast<vtkInstantiator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInstantiator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInstantiator::NewInstance());

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
PyvtkInstantiator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInstantiator *tempr = vtkInstantiator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInstantiator_CreateInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateInstance");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkObject *tempr = vtkInstantiator::CreateInstance(temp0);

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

static PyMethodDef PyvtkInstantiator_Methods[] = {
  {(char*)"GetClassName", PyvtkInstantiator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInstantiator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInstantiator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInstantiator\nC++: vtkInstantiator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInstantiator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInstantiator\nC++: vtkInstantiator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CreateInstance", PyvtkInstantiator_CreateInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.CreateInstance(string) -> vtkObject\nC++: static vtkObject *CreateInstance(const char *className)\n\nCreate an instance of the class whose name is given.  If creation\nfails, a NULL pointer is returned.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInstantiator_StaticNew()
{
  return vtkInstantiator::New();
}

PyObject *PyVTKClass_vtkInstantiatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInstantiator_StaticNew,
    PyvtkInstantiator_Methods,
    "vtkInstantiator", modulename,
    NULL, NULL,
    PyvtkInstantiator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkInstantiator_Doc()
{
  static const char *docstring[] = {
    "vtkInstantiator - create an instance of any VTK class from its name.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkInstantiator provides an interface to create an instance of any\nVTK class from its name.  Instances are created through registered\npointers to functions returning the objects.  New classes can also be\nregistered with the creator.  VTK libraries automatically register\ntheir classes with the creator when they are loaded.  Instances are\ncreated using the static New() method, so the normal vtkObjec",
    "tFactory\nmechanism is still invoked.\n\nWhen using this class from language wrappers (Tcl, Python, or Java),\nthe vtkInstantiator should be able to create any class from any kit\nthat has been loaded.\n\nIn C++ code, one should include the header for each kit from which\none wishes to create instances through vtkInstantiator.  This is\nnecessary to ensure proper linking when building static libraries. Be\n",
    "careful, though, because including each kit's header means every\nclass from that kit will be linked into your executable whether or\nnot the class is used.  The headers are:\n\n\n  vtkCommon          - vtkCommonInstantiator.h\n  vtkFiltering       - vtkFilteringInstantiator.h\n  vtkIO              - vtkIOInstantiator.h\n  vtkImaging         - vtkImagingInstantiator.h\n  vtkGraphics        - vtkGraphicsIns",
    "tantiator.h\n  vtkRendering       - vtkRenderingInstantiator.h\n  vtkVolumeRendering - vtkVolumeRenderingInstantiator.h\n  vtkHybrid          - vtkHybridInstantiator.h\n  vtkParallel        - vtkParallelInstantiator.h\n\nThe VTK_MAKE_INSTANTIATOR() command in CMake is used to automatically\ngenerate the creator registration for each VTK library.  It can also\nbe used to create registration code for VTK-st",
    "yle user libraries that\nare linked to vtkCommon.  After using this command to register\nclasses from a new library, the generated header must be included.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInstantiator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInstantiatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInstantiator", o) != 0)
    {
    Py_DECREF(o);
    }

}

