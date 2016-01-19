// python wrapper for vtkSMPropertyGroup
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMPropertyGroup.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMPropertyGroup(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMPropertyGroupNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMPropertyGroup_Doc();


static PyObject *
PyvtkSMPropertyGroup_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMPropertyGroup::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPropertyGroup::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMPropertyGroup *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPropertyGroup::NewInstance());

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
PyvtkSMPropertyGroup_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMPropertyGroup *tempr = vtkSMPropertyGroup::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetName(temp0);
      }
    else
      {
      op->vtkSMPropertyGroup::SetName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkSMPropertyGroup::GetName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_SetXMLLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMLLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXMLLabel(temp0);
      }
    else
      {
      op->vtkSMPropertyGroup::SetXMLLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetXMLLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXMLLabel() :
      op->vtkSMPropertyGroup::GetXMLLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_SetPanelWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanelWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPanelWidget(temp0);
      }
    else
      {
      op->vtkSMPropertyGroup::SetPanelWidget(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetPanelWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanelWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPanelWidget() :
      op->vtkSMPropertyGroup::GetPanelWidget());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_SetPanelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPanelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPanelVisibility(temp0);
      }
    else
      {
      op->vtkSMPropertyGroup::SetPanelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetPanelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPanelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPanelVisibility() :
      op->vtkSMPropertyGroup::GetPanelVisibility());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_IsEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsEmpty() :
      op->vtkSMPropertyGroup::IsEmpty());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_AddProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  char *temp0 = NULL;
  vtkSMProperty *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProperty"))
    {
    if (ap.IsBound())
      {
      op->AddProperty(temp0, temp1);
      }
    else
      {
      op->vtkSMPropertyGroup::AddProperty(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty(temp0) :
      op->vtkSMPropertyGroup::GetProperty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMPropertyGroup_GetProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty(temp0) :
      op->vtkSMPropertyGroup::GetProperty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMPropertyGroup_GetProperty_Methods[] = {
  {NULL, PyvtkSMPropertyGroup_GetProperty_s1, METH_VARARGS,
   (char*)"@I"},
  {NULL, PyvtkSMPropertyGroup_GetProperty_s2, METH_VARARGS,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMPropertyGroup_GetProperty(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMPropertyGroup_GetProperty_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetProperty");
  return NULL;
}



static PyObject *
PyvtkSMPropertyGroup_GetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetFunction(temp0) :
      op->vtkSMPropertyGroup::GetFunction(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetNumberOfProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProperties() :
      op->vtkSMPropertyGroup::GetNumberOfProperties());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetDocumentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDocumentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->GetDocumentation() :
      op->vtkSMPropertyGroup::GetDocumentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMPropertyGroup_GetHints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPropertyGroup *op = static_cast<vtkSMPropertyGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetHints() :
      op->vtkSMPropertyGroup::GetHints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMPropertyGroup_Methods[] = {
  {(char*)"GetClassName", PyvtkSMPropertyGroup_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMPropertyGroup_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMPropertyGroup_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMPropertyGroup\nC++: vtkSMPropertyGroup *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMPropertyGroup_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMPropertyGroup\nC++: vtkSMPropertyGroup *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetName", PyvtkSMPropertyGroup_SetName, METH_VARARGS,
   (char*)"V.SetName(string)\nC++: void SetName(char *)\n\nSets the name of the property group to name.\n"},
  {(char*)"GetName", PyvtkSMPropertyGroup_GetName, METH_VARARGS,
   (char*)"V.GetName() -> string\nC++: char *GetName()\n\nReturns the name of the property group.\n"},
  {(char*)"SetXMLLabel", PyvtkSMPropertyGroup_SetXMLLabel, METH_VARARGS,
   (char*)"V.SetXMLLabel(string)\nC++: void SetXMLLabel(char *)\n\nSets the name of the property group to name.\n"},
  {(char*)"GetXMLLabel", PyvtkSMPropertyGroup_GetXMLLabel, METH_VARARGS,
   (char*)"V.GetXMLLabel() -> string\nC++: char *GetXMLLabel()\n\nReturns the name of the property group.\n"},
  {(char*)"SetPanelWidget", PyvtkSMPropertyGroup_SetPanelWidget, METH_VARARGS,
   (char*)"V.SetPanelWidget(string)\nC++: void SetPanelWidget(char *)\n\nSets the name of the panel widget to use for the property group.\n"},
  {(char*)"GetPanelWidget", PyvtkSMPropertyGroup_GetPanelWidget, METH_VARARGS,
   (char*)"V.GetPanelWidget() -> string\nC++: char *GetPanelWidget()\n\nGets the name of the panel widget to use for the property group.\n"},
  {(char*)"SetPanelVisibility", PyvtkSMPropertyGroup_SetPanelVisibility, METH_VARARGS,
   (char*)"V.SetPanelVisibility(string)\nC++: void SetPanelVisibility(char *)\n\nSets the panel visibility for the property group.\n\n\\see vtkSMProperty::SetPanelVisibility()\n"},
  {(char*)"GetPanelVisibility", PyvtkSMPropertyGroup_GetPanelVisibility, METH_VARARGS,
   (char*)"V.GetPanelVisibility() -> string\nC++: char *GetPanelVisibility()\n\nReturns the panel visibility for the property group.\n"},
  {(char*)"IsEmpty", PyvtkSMPropertyGroup_IsEmpty, METH_VARARGS,
   (char*)"V.IsEmpty() -> bool\nC++: bool IsEmpty()\n\nReturns true if the property group contains zero properties.\n"},
  {(char*)"AddProperty", PyvtkSMPropertyGroup_AddProperty, METH_VARARGS,
   (char*)"V.AddProperty(string, vtkSMProperty)\nC++: void AddProperty(const char *function,\n    vtkSMProperty *property)\n\nAdds property to the group. function can be NULL.\n"},
  {(char*)"GetProperty", PyvtkSMPropertyGroup_GetProperty, METH_VARARGS,
   (char*)"V.GetProperty(int) -> vtkSMProperty\nC++: vtkSMProperty *GetProperty(unsigned int index)\nV.GetProperty(string) -> vtkSMProperty\nC++: vtkSMProperty *GetProperty(const char *function)\n\nReturns the property at index.\n"},
  {(char*)"GetFunction", PyvtkSMPropertyGroup_GetFunction, METH_VARARGS,
   (char*)"V.GetFunction(vtkSMProperty) -> string\nC++: const char *GetFunction(vtkSMProperty *property)\n\nGiven property in the group, returns its function. Will return\nNULL if the property is not present in this group.\n"},
  {(char*)"GetNumberOfProperties", PyvtkSMPropertyGroup_GetNumberOfProperties, METH_VARARGS,
   (char*)"V.GetNumberOfProperties() -> int\nC++: unsigned int GetNumberOfProperties()\n\nReturns the number of properties in the group.\n"},
  {(char*)"GetDocumentation", PyvtkSMPropertyGroup_GetDocumentation, METH_VARARGS,
   (char*)"V.GetDocumentation() -> vtkSMDocumentation\nC++: vtkSMDocumentation *GetDocumentation()\n\nReturns the documentation for this proxy.\n"},
  {(char*)"GetHints", PyvtkSMPropertyGroup_GetHints, METH_VARARGS,
   (char*)"V.GetHints() -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetHints()\n\nThe server manager configuration XML may define <Hints /> element\nfor a property. Hints are metadata associated with the property.\nThe Server Manager does not (and should not) interpret the hints.\nHints provide a mechanism to add GUI pertinant information to the\nserver manager XML.  Returns the XML element for the hints\nassociated with this property, if any, otherwise returns NULL.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMPropertyGroup_StaticNew()
{
  return vtkSMPropertyGroup::New();
}

PyObject *PyVTKClass_vtkSMPropertyGroupNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMPropertyGroup_StaticNew,
    PyvtkSMPropertyGroup_Methods,
    "vtkSMPropertyGroup", modulename,
    NULL, NULL,
    PyvtkSMPropertyGroup_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMPropertyGroup_Doc()
{
  static const char *docstring[] = {
    "vtkSMPropertyGroup - no description provided.\n\n",
    "Superclass: vtkSMObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMPropertyGroup(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMPropertyGroupNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMPropertyGroup", o) != 0)
    {
    Py_DECREF(o);
    }

}

