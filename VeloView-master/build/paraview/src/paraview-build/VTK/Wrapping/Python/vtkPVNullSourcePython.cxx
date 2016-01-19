// python wrapper for vtkPVNullSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVNullSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVNullSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVNullSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLineSourceNew
extern "C" { PyObject *PyVTKClass_vtkLineSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkLineSourceNew
#endif

static const char **PyvtkPVNullSource_Doc();


static PyObject *
PyvtkPVNullSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVNullSource *op = static_cast<vtkPVNullSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVNullSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVNullSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVNullSource *op = static_cast<vtkPVNullSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVNullSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVNullSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVNullSource *op = static_cast<vtkPVNullSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVNullSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVNullSource::NewInstance());

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
PyvtkPVNullSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVNullSource *tempr = vtkPVNullSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVNullSource_Methods[] = {
  {(char*)"GetClassName", PyvtkPVNullSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVNullSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVNullSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVNullSource\nC++: vtkPVNullSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVNullSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVNullSource\nC++: vtkPVNullSource *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVNullSource_StaticNew()
{
  return vtkPVNullSource::New();
}

PyObject *PyVTKClass_vtkPVNullSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVNullSource_StaticNew,
    PyvtkPVNullSource_Methods,
    "vtkPVNullSource", modulename,
    NULL, NULL,
    PyvtkPVNullSource_Doc(),
    PyVTKClass_vtkLineSourceNew(modulename));
  return cls;
}

const char **PyvtkPVNullSource_Doc()
{
  static const char *docstring[] = {
    "vtkPVNullSource - source for NULL data.\n\n",
    "Superclass: vtkLineSource\n\n",
    "This is a source for null data. Although this actually produces a\nvtkPolyLine paraview blocks all data information from this source\nresulting in it being treated as a null source.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVNullSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVNullSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVNullSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

