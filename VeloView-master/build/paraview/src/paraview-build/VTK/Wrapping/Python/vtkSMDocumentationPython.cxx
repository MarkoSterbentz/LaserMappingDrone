// python wrapper for vtkSMDocumentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDocumentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMDocumentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMDocumentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMDocumentation_Doc();


static PyObject *
PyvtkSMDocumentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDocumentation *op = static_cast<vtkSMDocumentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMDocumentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDocumentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDocumentation *op = static_cast<vtkSMDocumentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDocumentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDocumentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDocumentation *op = static_cast<vtkSMDocumentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDocumentation::NewInstance());

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
PyvtkSMDocumentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMDocumentation *tempr = vtkSMDocumentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDocumentation_GetLongHelp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLongHelp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDocumentation *op = static_cast<vtkSMDocumentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetLongHelp() :
      op->vtkSMDocumentation::GetLongHelp());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDocumentation_GetShortHelp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShortHelp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDocumentation *op = static_cast<vtkSMDocumentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetShortHelp() :
      op->vtkSMDocumentation::GetShortHelp());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDocumentation_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDocumentation *op = static_cast<vtkSMDocumentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkSMDocumentation::GetDescription());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDocumentation_SetDocumentationElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDocumentationElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDocumentation *op = static_cast<vtkSMDocumentation *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    if (ap.IsBound())
      {
      op->SetDocumentationElement(temp0);
      }
    else
      {
      op->vtkSMDocumentation::SetDocumentationElement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDocumentation_GetDocumentationElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDocumentationElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDocumentation *op = static_cast<vtkSMDocumentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetDocumentationElement() :
      op->vtkSMDocumentation::GetDocumentationElement());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDocumentation_Methods[] = {
  {(char*)"GetClassName", PyvtkSMDocumentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMDocumentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMDocumentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMDocumentation\nC++: vtkSMDocumentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMDocumentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMDocumentation\nC++: vtkSMDocumentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetLongHelp", PyvtkSMDocumentation_GetLongHelp, METH_VARARGS,
   (char*)"V.GetLongHelp() -> string\nC++: const char *GetLongHelp()\n\nReturns the text for long help, if any. NULL otherwise.\n"},
  {(char*)"GetShortHelp", PyvtkSMDocumentation_GetShortHelp, METH_VARARGS,
   (char*)"V.GetShortHelp() -> string\nC++: const char *GetShortHelp()\n\nReturns the text for short help, if any. NULL otherwise.\n"},
  {(char*)"GetDescription", PyvtkSMDocumentation_GetDescription, METH_VARARGS,
   (char*)"V.GetDescription() -> string\nC++: const char *GetDescription()\n\nReturns the description text, if any.\n"},
  {(char*)"SetDocumentationElement", PyvtkSMDocumentation_SetDocumentationElement, METH_VARARGS,
   (char*)"V.SetDocumentationElement(vtkPVXMLElement)\nC++: void SetDocumentationElement(vtkPVXMLElement *)\n\nGet/Set the documentation XML element.\n"},
  {(char*)"GetDocumentationElement", PyvtkSMDocumentation_GetDocumentationElement, METH_VARARGS,
   (char*)"V.GetDocumentationElement() -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetDocumentationElement()\n\nGet/Set the documentation XML element.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMDocumentation_StaticNew()
{
  return vtkSMDocumentation::New();
}

PyObject *PyVTKClass_vtkSMDocumentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMDocumentation_StaticNew,
    PyvtkSMDocumentation_Methods,
    "vtkSMDocumentation", modulename,
    NULL, NULL,
    PyvtkSMDocumentation_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMDocumentation_Doc()
{
  static const char *docstring[] = {
    "vtkSMDocumentation - class providing access to the documentation\n\n",
    "Superclass: vtkSMObject\n\n",
    "Every proxy defined in the server manager XML can have documentation\nassociated with it. This class provides access to the various types\nof documentation text for every proxy.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMDocumentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMDocumentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMDocumentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

