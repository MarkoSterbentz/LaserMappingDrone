// python wrapper for vtkPVLinearExtrusionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVLinearExtrusionFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVLinearExtrusionFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVLinearExtrusionFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPLinearExtrusionFilterNew
extern "C" { PyObject *PyVTKClass_vtkPLinearExtrusionFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPLinearExtrusionFilterNew
#endif

static const char **PyvtkPVLinearExtrusionFilter_Doc();


static PyObject *
PyvtkPVLinearExtrusionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLinearExtrusionFilter *op = static_cast<vtkPVLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVLinearExtrusionFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLinearExtrusionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLinearExtrusionFilter *op = static_cast<vtkPVLinearExtrusionFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVLinearExtrusionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVLinearExtrusionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLinearExtrusionFilter *op = static_cast<vtkPVLinearExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVLinearExtrusionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVLinearExtrusionFilter::NewInstance());

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
PyvtkPVLinearExtrusionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVLinearExtrusionFilter *tempr = vtkPVLinearExtrusionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVLinearExtrusionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPVLinearExtrusionFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVLinearExtrusionFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVLinearExtrusionFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVLinearExtrusionFilter\nC++: vtkPVLinearExtrusionFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVLinearExtrusionFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVLinearExtrusionFilter\nC++: vtkPVLinearExtrusionFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVLinearExtrusionFilter_StaticNew()
{
  return vtkPVLinearExtrusionFilter::New();
}

PyObject *PyVTKClass_vtkPVLinearExtrusionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVLinearExtrusionFilter_StaticNew,
    PyvtkPVLinearExtrusionFilter_Methods,
    "vtkPVLinearExtrusionFilter", modulename,
    NULL, NULL,
    PyvtkPVLinearExtrusionFilter_Doc(),
    PyVTKClass_vtkPLinearExtrusionFilterNew(modulename));
  return cls;
}

const char **PyvtkPVLinearExtrusionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPVLinearExtrusionFilter - change a default value\n\n",
    "Superclass: vtkPLinearExtrusionFilter\n\n",
    "vtkPVLinearExtrusionFilter is a subclass of\nvtkPLinearExtrusionFilter. The only difference is changing the\ndefault extrusion type to vector extrusion\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVLinearExtrusionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVLinearExtrusionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVLinearExtrusionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

