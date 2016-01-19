// python wrapper for vtkOutlineFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOutlineFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOutlineFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOutlineFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkOutlineFilter_Doc();


static PyObject *
PyvtkOutlineFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOutlineFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOutlineFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOutlineFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOutlineFilter::NewInstance());

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
PyvtkOutlineFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOutlineFilter *tempr = vtkOutlineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineFilter_SetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateFaces(temp0);
      }
    else
      {
      op->vtkOutlineFilter::SetGenerateFaces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineFilter_GenerateFacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFacesOn();
      }
    else
      {
      op->vtkOutlineFilter::GenerateFacesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineFilter_GenerateFacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFacesOff();
      }
    else
      {
      op->vtkOutlineFilter::GenerateFacesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineFilter_GetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGenerateFaces() :
      op->vtkOutlineFilter::GetGenerateFaces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOutlineFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkOutlineFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOutlineFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOutlineFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOutlineFilter\nC++: vtkOutlineFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOutlineFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOutlineFilter\nC++: vtkOutlineFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGenerateFaces", PyvtkOutlineFilter_SetGenerateFaces, METH_VARARGS,
   (char*)"V.SetGenerateFaces(int)\nC++: void SetGenerateFaces(int a)\n\nGenerate solid faces for the box. This is off by default.\n"},
  {(char*)"GenerateFacesOn", PyvtkOutlineFilter_GenerateFacesOn, METH_VARARGS,
   (char*)"V.GenerateFacesOn()\nC++: void GenerateFacesOn()\n\nGenerate solid faces for the box. This is off by default.\n"},
  {(char*)"GenerateFacesOff", PyvtkOutlineFilter_GenerateFacesOff, METH_VARARGS,
   (char*)"V.GenerateFacesOff()\nC++: void GenerateFacesOff()\n\nGenerate solid faces for the box. This is off by default.\n"},
  {(char*)"GetGenerateFaces", PyvtkOutlineFilter_GetGenerateFaces, METH_VARARGS,
   (char*)"V.GetGenerateFaces() -> int\nC++: int GetGenerateFaces()\n\nGenerate solid faces for the box. This is off by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOutlineFilter_StaticNew()
{
  return vtkOutlineFilter::New();
}

PyObject *PyVTKClass_vtkOutlineFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOutlineFilter_StaticNew,
    PyvtkOutlineFilter_Methods,
    "vtkOutlineFilter", modulename,
    NULL, NULL,
    PyvtkOutlineFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkOutlineFilter_Doc()
{
  static const char *docstring[] = {
    "vtkOutlineFilter - create wireframe outline for arbitrary data set\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkOutlineFilter is a filter that generates a wireframe outline of\nany data set. The outline consists of the twelve edges of the dataset\nbounding box.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOutlineFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOutlineFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOutlineFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

