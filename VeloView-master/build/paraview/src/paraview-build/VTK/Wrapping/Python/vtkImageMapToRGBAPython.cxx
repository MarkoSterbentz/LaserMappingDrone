// python wrapper for vtkImageMapToRGBA
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkImageMapToRGBA.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageMapToRGBA(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageMapToRGBANew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageMapToColorsNew
extern "C" { PyObject *PyVTKClass_vtkImageMapToColorsNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageMapToColorsNew
#endif

static const char **PyvtkImageMapToRGBA_Doc();


static PyObject *
PyvtkImageMapToRGBA_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToRGBA *op = static_cast<vtkImageMapToRGBA *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageMapToRGBA::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToRGBA_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToRGBA *op = static_cast<vtkImageMapToRGBA *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMapToRGBA::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMapToRGBA_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToRGBA *op = static_cast<vtkImageMapToRGBA *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageMapToRGBA *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMapToRGBA::NewInstance());

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
PyvtkImageMapToRGBA_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageMapToRGBA *tempr = vtkImageMapToRGBA::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMapToRGBA_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMapToRGBA_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMapToRGBA_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMapToRGBA_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageMapToRGBA\nC++: vtkImageMapToRGBA *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMapToRGBA_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMapToRGBA\nC++: vtkImageMapToRGBA *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMapToRGBA_StaticNew()
{
  return vtkImageMapToRGBA::New();
}

PyObject *PyVTKClass_vtkImageMapToRGBANew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMapToRGBA_StaticNew,
    PyvtkImageMapToRGBA_Methods,
    "vtkImageMapToRGBA", modulename,
    NULL, NULL,
    PyvtkImageMapToRGBA_Doc(),
    PyVTKClass_vtkImageMapToColorsNew(modulename));
  return cls;
}

const char **PyvtkImageMapToRGBA_Doc()
{
  static const char *docstring[] = {
    "vtkImageMapToRGBA - map the input image through a lookup table\n\n",
    "Superclass: vtkImageMapToColors\n\n",
    "This filter has been replaced by vtkImageMapToColors, which provided\nadditional features.  Use vtkImageMapToColors instead.\n\nSee Also:\n\nvtkLookupTable\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMapToRGBA(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMapToRGBANew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMapToRGBA", o) != 0)
    {
    Py_DECREF(o);
    }

}

