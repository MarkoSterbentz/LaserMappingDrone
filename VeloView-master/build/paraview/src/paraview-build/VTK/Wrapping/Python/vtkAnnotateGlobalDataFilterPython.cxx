// python wrapper for vtkAnnotateGlobalDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAnnotateGlobalDataFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAnnotateGlobalDataFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAnnotateGlobalDataFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPythonAnnotationFilterNew
extern "C" { PyObject *PyVTKClass_vtkPythonAnnotationFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPythonAnnotationFilterNew
#endif

static const char **PyvtkAnnotateGlobalDataFilter_Doc();


static PyObject *
PyvtkAnnotateGlobalDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAnnotateGlobalDataFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnnotateGlobalDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAnnotateGlobalDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnnotateGlobalDataFilter::NewInstance());

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
PyvtkAnnotateGlobalDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAnnotateGlobalDataFilter *tempr = vtkAnnotateGlobalDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_SetFieldArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldArrayName(temp0);
      }
    else
      {
      op->vtkAnnotateGlobalDataFilter::SetFieldArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_GetFieldArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFieldArrayName() :
      op->vtkAnnotateGlobalDataFilter::GetFieldArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_SetPrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPrefix(temp0);
      }
    else
      {
      op->vtkAnnotateGlobalDataFilter::SetPrefix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateGlobalDataFilter_GetPrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateGlobalDataFilter *op = static_cast<vtkAnnotateGlobalDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPrefix() :
      op->vtkAnnotateGlobalDataFilter::GetPrefix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAnnotateGlobalDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkAnnotateGlobalDataFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAnnotateGlobalDataFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAnnotateGlobalDataFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAnnotateGlobalDataFilter\nC++: vtkAnnotateGlobalDataFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAnnotateGlobalDataFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAnnotateGlobalDataFilter\nC++: vtkAnnotateGlobalDataFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFieldArrayName", PyvtkAnnotateGlobalDataFilter_SetFieldArrayName, METH_VARARGS,
   (char*)"V.SetFieldArrayName(string)\nC++: void SetFieldArrayName(char *)\n\nName of the field to display\n"},
  {(char*)"GetFieldArrayName", PyvtkAnnotateGlobalDataFilter_GetFieldArrayName, METH_VARARGS,
   (char*)"V.GetFieldArrayName() -> string\nC++: char *GetFieldArrayName()\n\nName of the field to display\n"},
  {(char*)"SetPrefix", PyvtkAnnotateGlobalDataFilter_SetPrefix, METH_VARARGS,
   (char*)"V.SetPrefix(string)\nC++: void SetPrefix(char *)\n\nSet the text prefix to display in front of the Field value\n"},
  {(char*)"GetPrefix", PyvtkAnnotateGlobalDataFilter_GetPrefix, METH_VARARGS,
   (char*)"V.GetPrefix() -> string\nC++: char *GetPrefix()\n\nSet the text prefix to display in front of the Field value\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAnnotateGlobalDataFilter_StaticNew()
{
  return vtkAnnotateGlobalDataFilter::New();
}

PyObject *PyVTKClass_vtkAnnotateGlobalDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAnnotateGlobalDataFilter_StaticNew,
    PyvtkAnnotateGlobalDataFilter_Methods,
    "vtkAnnotateGlobalDataFilter", modulename,
    NULL, NULL,
    PyvtkAnnotateGlobalDataFilter_Doc(),
    PyVTKClass_vtkPythonAnnotationFilterNew(modulename));
  return cls;
}

const char **PyvtkAnnotateGlobalDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkAnnotateGlobalDataFilter - filter for annotating with global data\n\n",
    "Superclass: vtkPythonAnnotationFilter\n\n",
    "vtkAnnotateGlobalDataFilter provides a simpler API for creating text\nannotations using vtkPythonAnnotationFilter. Instead of users\nspecifying the annotation expression, this filter determines the\nexpression based on the array selected by limiting the scope of the\nfunctionality. This filter only allows the user to annotate using\n\"global-data\" aka field data and specify the string prefix to use. If\n",
    "the field array chosen has as many elements as number of timesteps,\nthe array is assumed to be \"temporal\" and indexed using the current\ntimestep.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAnnotateGlobalDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAnnotateGlobalDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAnnotateGlobalDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

