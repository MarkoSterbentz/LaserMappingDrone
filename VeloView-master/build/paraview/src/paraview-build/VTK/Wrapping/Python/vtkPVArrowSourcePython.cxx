// python wrapper for vtkPVArrowSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVArrowSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVArrowSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVArrowSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkArrowSourceNew
extern "C" { PyObject *PyVTKClass_vtkArrowSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrowSourceNew
#endif

static const char **PyvtkPVArrowSource_Doc();


static PyObject *
PyvtkPVArrowSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrowSource *op = static_cast<vtkPVArrowSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVArrowSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrowSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrowSource *op = static_cast<vtkPVArrowSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVArrowSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVArrowSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrowSource *op = static_cast<vtkPVArrowSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVArrowSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVArrowSource::NewInstance());

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
PyvtkPVArrowSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVArrowSource *tempr = vtkPVArrowSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVArrowSource_Methods[] = {
  {(char*)"GetClassName", PyvtkPVArrowSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVArrowSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVArrowSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVArrowSource\nC++: vtkPVArrowSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVArrowSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVArrowSource\nC++: vtkPVArrowSource *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVArrowSource_StaticNew()
{
  return vtkPVArrowSource::New();
}

PyObject *PyVTKClass_vtkPVArrowSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVArrowSource_StaticNew,
    PyvtkPVArrowSource_Methods,
    "vtkPVArrowSource", modulename,
    NULL, NULL,
    PyvtkPVArrowSource_Doc(),
    PyVTKClass_vtkArrowSourceNew(modulename));
  return cls;
}

const char **PyvtkPVArrowSource_Doc()
{
  static const char *docstring[] = {
    "vtkPVArrowSource - A quick fix for a bug.\n\n",
    "Superclass: vtkArrowSource\n\n",
    "This class does nothing but tell the pipeline it can generate pieces.\nThis is a quick fix for a bug with glyphs and multidisplay with the\nzero empty option.  Zero does not update arrow when created. Glyph\nupdates zero but not others.  Transmit poly data hangs. The correct\nsolution is to not connect the pipeline on this seudo client.  I can\nget rid of this class then.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVArrowSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVArrowSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVArrowSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

