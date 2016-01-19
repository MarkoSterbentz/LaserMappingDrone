// python wrapper for vtkAnnotateAttributeDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAnnotateAttributeDataFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAnnotateAttributeDataFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAnnotateAttributeDataFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPythonAnnotationFilterNew
extern "C" { PyObject *PyVTKClass_vtkPythonAnnotationFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPythonAnnotationFilterNew
#endif

static const char **PyvtkAnnotateAttributeDataFilter_Doc();


static PyObject *
PyvtkAnnotateAttributeDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAnnotateAttributeDataFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnnotateAttributeDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAnnotateAttributeDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnnotateAttributeDataFilter::NewInstance());

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
PyvtkAnnotateAttributeDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAnnotateAttributeDataFilter *tempr = vtkAnnotateAttributeDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayName(temp0);
      }
    else
      {
      op->vtkAnnotateAttributeDataFilter::SetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkAnnotateAttributeDataFilter::GetArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_SetElementId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetElementId(temp0);
      }
    else
      {
      op->vtkAnnotateAttributeDataFilter::SetElementId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_GetElementId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetElementId() :
      op->vtkAnnotateAttributeDataFilter::GetElementId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_SetProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessId(temp0);
      }
    else
      {
      op->vtkAnnotateAttributeDataFilter::SetProcessId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_GetProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessId() :
      op->vtkAnnotateAttributeDataFilter::GetProcessId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_SetPrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

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
      op->vtkAnnotateAttributeDataFilter::SetPrefix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotateAttributeDataFilter_GetPrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotateAttributeDataFilter *op = static_cast<vtkAnnotateAttributeDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPrefix() :
      op->vtkAnnotateAttributeDataFilter::GetPrefix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAnnotateAttributeDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkAnnotateAttributeDataFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAnnotateAttributeDataFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAnnotateAttributeDataFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAnnotateAttributeDataFilter\nC++: vtkAnnotateAttributeDataFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAnnotateAttributeDataFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAnnotateAttributeDataFilter\nC++: vtkAnnotateAttributeDataFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetArrayName", PyvtkAnnotateAttributeDataFilter_SetArrayName, METH_VARARGS,
   (char*)"V.SetArrayName(string)\nC++: void SetArrayName(char *)\n\nSet the attribute array name to annotate with.\n"},
  {(char*)"GetArrayName", PyvtkAnnotateAttributeDataFilter_GetArrayName, METH_VARARGS,
   (char*)"V.GetArrayName() -> string\nC++: char *GetArrayName()\n\nSet the attribute array name to annotate with.\n"},
  {(char*)"SetElementId", PyvtkAnnotateAttributeDataFilter_SetElementId, METH_VARARGS,
   (char*)"V.SetElementId(int)\nC++: void SetElementId(vtkIdType a)\n\nSet the element number to annotate with.\n"},
  {(char*)"GetElementId", PyvtkAnnotateAttributeDataFilter_GetElementId, METH_VARARGS,
   (char*)"V.GetElementId() -> int\nC++: vtkIdType GetElementId()\n\nSet the element number to annotate with.\n"},
  {(char*)"SetProcessId", PyvtkAnnotateAttributeDataFilter_SetProcessId, METH_VARARGS,
   (char*)"V.SetProcessId(int)\nC++: void SetProcessId(int a)\n\nSet the rank to extract the data from. Default is 0.\n"},
  {(char*)"GetProcessId", PyvtkAnnotateAttributeDataFilter_GetProcessId, METH_VARARGS,
   (char*)"V.GetProcessId() -> int\nC++: int GetProcessId()\n\nSet the rank to extract the data from. Default is 0.\n"},
  {(char*)"SetPrefix", PyvtkAnnotateAttributeDataFilter_SetPrefix, METH_VARARGS,
   (char*)"V.SetPrefix(string)\nC++: void SetPrefix(char *)\n\nSet the text prefix to display in front of the Field value\n"},
  {(char*)"GetPrefix", PyvtkAnnotateAttributeDataFilter_GetPrefix, METH_VARARGS,
   (char*)"V.GetPrefix() -> string\nC++: char *GetPrefix()\n\nSet the text prefix to display in front of the Field value\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAnnotateAttributeDataFilter_StaticNew()
{
  return vtkAnnotateAttributeDataFilter::New();
}

PyObject *PyVTKClass_vtkAnnotateAttributeDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAnnotateAttributeDataFilter_StaticNew,
    PyvtkAnnotateAttributeDataFilter_Methods,
    "vtkAnnotateAttributeDataFilter", modulename,
    NULL, NULL,
    PyvtkAnnotateAttributeDataFilter_Doc(),
    PyVTKClass_vtkPythonAnnotationFilterNew(modulename));
  return cls;
}

const char **PyvtkAnnotateAttributeDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkAnnotateAttributeDataFilter - specialization of\n\n",
    "Superclass: vtkPythonAnnotationFilter\n\n",
    "vtkAnnotateAttributeDataFilter is a specialization of\nvtkPythonAnnotationFilter which makes it easier to annotate using\ndata values from any input dataset.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAnnotateAttributeDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAnnotateAttributeDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAnnotateAttributeDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

