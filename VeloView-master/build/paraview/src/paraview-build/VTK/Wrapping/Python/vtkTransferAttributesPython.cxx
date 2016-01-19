// python wrapper for vtkTransferAttributes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVariant.h"
#include "vtkTransferAttributes.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTransferAttributes(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTransferAttributesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkTransferAttributes_Doc();


static PyObject *
PyvtkTransferAttributes_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTransferAttributes::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransferAttributes::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransferAttributes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransferAttributes::NewInstance());

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
PyvtkTransferAttributes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTransferAttributes *tempr = vtkTransferAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetDirectMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDirectMapping(temp0);
      }
    else
      {
      op->vtkTransferAttributes::SetDirectMapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetDirectMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetDirectMapping() :
      op->vtkTransferAttributes::GetDirectMapping());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_DirectMappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectMappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectMappingOn();
      }
    else
      {
      op->vtkTransferAttributes::DirectMappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_DirectMappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectMappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DirectMappingOff();
      }
    else
      {
      op->vtkTransferAttributes::DirectMappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetSourceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetSourceArrayName() :
      op->vtkTransferAttributes::GetSourceArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetSourceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSourceArrayName(temp0);
      }
    else
      {
      op->vtkTransferAttributes::SetSourceArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetTargetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetTargetArrayName() :
      op->vtkTransferAttributes::GetTargetArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetTargetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTargetArrayName(temp0);
      }
    else
      {
      op->vtkTransferAttributes::SetTargetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetSourceFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSourceFieldType() :
      op->vtkTransferAttributes::GetSourceFieldType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetSourceFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSourceFieldType(temp0);
      }
    else
      {
      op->vtkTransferAttributes::SetSourceFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetTargetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTargetFieldType() :
      op->vtkTransferAttributes::GetTargetFieldType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetTargetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTargetFieldType(temp0);
      }
    else
      {
      op->vtkTransferAttributes::SetTargetFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetDefaultValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetDefaultValue() :
      op->vtkTransferAttributes::GetDefaultValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetDefaultValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetDefaultValue(*temp0);
      }
    else
      {
      op->vtkTransferAttributes::SetDefaultValue(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkTransferAttributes_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkTransferAttributes::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTransferAttributes_Methods[] = {
  {(char*)"GetClassName", PyvtkTransferAttributes_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransferAttributes_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransferAttributes_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTransferAttributes\nC++: vtkTransferAttributes *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransferAttributes_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransferAttributes\nC++: vtkTransferAttributes *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDirectMapping", PyvtkTransferAttributes_SetDirectMapping, METH_VARARGS,
   (char*)"V.SetDirectMapping(bool)\nC++: void SetDirectMapping(bool a)\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"GetDirectMapping", PyvtkTransferAttributes_GetDirectMapping, METH_VARARGS,
   (char*)"V.GetDirectMapping() -> bool\nC++: bool GetDirectMapping()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"DirectMappingOn", PyvtkTransferAttributes_DirectMappingOn, METH_VARARGS,
   (char*)"V.DirectMappingOn()\nC++: void DirectMappingOn()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"DirectMappingOff", PyvtkTransferAttributes_DirectMappingOff, METH_VARARGS,
   (char*)"V.DirectMappingOff()\nC++: void DirectMappingOff()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {(char*)"GetSourceArrayName", PyvtkTransferAttributes_GetSourceArrayName, METH_VARARGS,
   (char*)"V.GetSourceArrayName() -> string\nC++: char *GetSourceArrayName()\n\nThe field name to use for storing the source array.\n"},
  {(char*)"SetSourceArrayName", PyvtkTransferAttributes_SetSourceArrayName, METH_VARARGS,
   (char*)"V.SetSourceArrayName(string)\nC++: void SetSourceArrayName(char *)\n\nThe field name to use for storing the source array.\n"},
  {(char*)"GetTargetArrayName", PyvtkTransferAttributes_GetTargetArrayName, METH_VARARGS,
   (char*)"V.GetTargetArrayName() -> string\nC++: char *GetTargetArrayName()\n\nThe field name to use for storing the source array.\n"},
  {(char*)"SetTargetArrayName", PyvtkTransferAttributes_SetTargetArrayName, METH_VARARGS,
   (char*)"V.SetTargetArrayName(string)\nC++: void SetTargetArrayName(char *)\n\nThe field name to use for storing the source array.\n"},
  {(char*)"GetSourceFieldType", PyvtkTransferAttributes_GetSourceFieldType, METH_VARARGS,
   (char*)"V.GetSourceFieldType() -> int\nC++: int GetSourceFieldType()\n\nThe source field type for accessing the source array. Valid\nvalues are those from enum vtkDataObject::FieldAssociations.\n"},
  {(char*)"SetSourceFieldType", PyvtkTransferAttributes_SetSourceFieldType, METH_VARARGS,
   (char*)"V.SetSourceFieldType(int)\nC++: void SetSourceFieldType(int a)\n\nThe source field type for accessing the source array. Valid\nvalues are those from enum vtkDataObject::FieldAssociations.\n"},
  {(char*)"GetTargetFieldType", PyvtkTransferAttributes_GetTargetFieldType, METH_VARARGS,
   (char*)"V.GetTargetFieldType() -> int\nC++: int GetTargetFieldType()\n\nThe target field type for accessing the target array. Valid\nvalues are those from enum vtkDataObject::FieldAssociations.\n"},
  {(char*)"SetTargetFieldType", PyvtkTransferAttributes_SetTargetFieldType, METH_VARARGS,
   (char*)"V.SetTargetFieldType(int)\nC++: void SetTargetFieldType(int a)\n\nThe target field type for accessing the target array. Valid\nvalues are those from enum vtkDataObject::FieldAssociations.\n"},
  {(char*)"GetDefaultValue", PyvtkTransferAttributes_GetDefaultValue, METH_VARARGS,
   (char*)"V.GetDefaultValue() -> vtkVariant\nC++: vtkVariant GetDefaultValue()\n\nMethod to get/set the default value.\n"},
  {(char*)"SetDefaultValue", PyvtkTransferAttributes_SetDefaultValue, METH_VARARGS,
   (char*)"V.SetDefaultValue(vtkVariant)\nC++: void SetDefaultValue(vtkVariant value)\n\nMethod to get/set the default value.\n"},
  {(char*)"FillInputPortInformation", PyvtkTransferAttributes_FillInputPortInformation, METH_VARARGS,
   (char*)"V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n\nSet the input type of the algorithm to vtkGraph.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransferAttributes_StaticNew()
{
  return vtkTransferAttributes::New();
}

PyObject *PyVTKClass_vtkTransferAttributesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransferAttributes_StaticNew,
    PyvtkTransferAttributes_Methods,
    "vtkTransferAttributes", modulename,
    NULL, NULL,
    PyvtkTransferAttributes_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTransferAttributes_Doc()
{
  static const char *docstring[] = {
    "vtkTransferAttributes - transfer data from a graph representation\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "The filter requires both a vtkGraph and vtkTree as input.  The tree\nvertices must be a superset of the graph vertices.  A common example\nis when the graph vertices correspond to the leaves of the tree, but\nthe internal vertices of the tree represent groupings of graph\nvertices.  The algorithm matches the vertices using the array\n\"PedigreeId\".  The user may alternately set the DirectMapping flag to",
    "\nindicate that the two structures must have directly corresponding\noffsets (i.e. node i in the graph must correspond to node i in the\ntree).\n\nThanks:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransferAttributes(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransferAttributesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransferAttributes", o) != 0)
    {
    Py_DECREF(o);
    }

}

