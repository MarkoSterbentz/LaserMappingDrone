// python wrapper for vtkGenericVertexAttributeMapping
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericVertexAttributeMapping.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericVertexAttributeMapping(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericVertexAttributeMappingNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGenericVertexAttributeMapping_Doc();


static PyObject *
PyvtkGenericVertexAttributeMapping_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericVertexAttributeMapping::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericVertexAttributeMapping::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericVertexAttributeMapping *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericVertexAttributeMapping::NewInstance());

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
PyvtkGenericVertexAttributeMapping_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericVertexAttributeMapping *tempr = vtkGenericVertexAttributeMapping::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_AddMapping_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->AddMapping(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkGenericVertexAttributeMapping::AddMapping(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericVertexAttributeMapping_AddMapping_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->AddMapping(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkGenericVertexAttributeMapping::AddMapping(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericVertexAttributeMapping_AddMapping_Methods[] = {
  {NULL, PyvtkGenericVertexAttributeMapping_AddMapping_s1, METH_VARARGS,
   (char*)"@zzii"},
  {NULL, PyvtkGenericVertexAttributeMapping_AddMapping_s2, METH_VARARGS,
   (char*)"@izii"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGenericVertexAttributeMapping_AddMapping(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGenericVertexAttributeMapping_AddMapping_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddMapping");
  return NULL;
}



static PyObject *
PyvtkGenericVertexAttributeMapping_RemoveMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->RemoveMapping(temp0) :
      op->vtkGenericVertexAttributeMapping::RemoveMapping(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_RemoveAllMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllMappings();
      }
    else
      {
      op->vtkGenericVertexAttributeMapping::RemoveAllMappings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetNumberOfMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfMappings() :
      op->vtkGenericVertexAttributeMapping::GetNumberOfMappings());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeName(temp0) :
      op->vtkGenericVertexAttributeMapping::GetAttributeName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetArrayName(temp0) :
      op->vtkGenericVertexAttributeMapping::GetArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation(temp0) :
      op->vtkGenericVertexAttributeMapping::GetFieldAssociation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponent(temp0) :
      op->vtkGenericVertexAttributeMapping::GetComponent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetTextureUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTextureUnit(temp0) :
      op->vtkGenericVertexAttributeMapping::GetTextureUnit(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericVertexAttributeMapping_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericVertexAttributeMapping_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericVertexAttributeMapping_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericVertexAttributeMapping_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericVertexAttributeMapping\nC++: vtkGenericVertexAttributeMapping *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericVertexAttributeMapping_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericVertexAttributeMapping\nC++: vtkGenericVertexAttributeMapping *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddMapping", PyvtkGenericVertexAttributeMapping_AddMapping, METH_VARARGS,
   (char*)"V.AddMapping(string, string, int, int)\nC++: void AddMapping(const char *attributeName,\n    const char *arrayName, int fieldAssociation, int component)\nV.AddMapping(int, string, int, int)\nC++: void AddMapping(int unit, const char *arrayName,\n    int fieldAssociation, int component)\n\nSelect a data array from the point/cell data and map it to a\ngeneric vertex attribute. Note that indices change when a mapping\nis added/removed.\n"},
  {(char*)"RemoveMapping", PyvtkGenericVertexAttributeMapping_RemoveMapping, METH_VARARGS,
   (char*)"V.RemoveMapping(string) -> bool\nC++: bool RemoveMapping(const char *attributeName)\n\nRemove a vertex attribute mapping.\n"},
  {(char*)"RemoveAllMappings", PyvtkGenericVertexAttributeMapping_RemoveAllMappings, METH_VARARGS,
   (char*)"V.RemoveAllMappings()\nC++: void RemoveAllMappings()\n\nRemove all mappings.\n"},
  {(char*)"GetNumberOfMappings", PyvtkGenericVertexAttributeMapping_GetNumberOfMappings, METH_VARARGS,
   (char*)"V.GetNumberOfMappings() -> int\nC++: unsigned int GetNumberOfMappings()\n\nGet number of mapppings.\n"},
  {(char*)"GetAttributeName", PyvtkGenericVertexAttributeMapping_GetAttributeName, METH_VARARGS,
   (char*)"V.GetAttributeName(int) -> string\nC++: const char *GetAttributeName(unsigned int index)\n\nGet the attribute name at the given index.\n"},
  {(char*)"GetArrayName", PyvtkGenericVertexAttributeMapping_GetArrayName, METH_VARARGS,
   (char*)"V.GetArrayName(int) -> string\nC++: const char *GetArrayName(unsigned int index)\n\nGet the array name at the given index.\n"},
  {(char*)"GetFieldAssociation", PyvtkGenericVertexAttributeMapping_GetFieldAssociation, METH_VARARGS,
   (char*)"V.GetFieldAssociation(int) -> int\nC++: int GetFieldAssociation(unsigned int index)\n\nGet the field association at the given index.\n"},
  {(char*)"GetComponent", PyvtkGenericVertexAttributeMapping_GetComponent, METH_VARARGS,
   (char*)"V.GetComponent(int) -> int\nC++: int GetComponent(unsigned int index)\n\nGet the component no. at the given index.\n"},
  {(char*)"GetTextureUnit", PyvtkGenericVertexAttributeMapping_GetTextureUnit, METH_VARARGS,
   (char*)"V.GetTextureUnit(int) -> int\nC++: int GetTextureUnit(unsigned int index)\n\nGet the component no. at the given index.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericVertexAttributeMapping_StaticNew()
{
  return vtkGenericVertexAttributeMapping::New();
}

PyObject *PyVTKClass_vtkGenericVertexAttributeMappingNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericVertexAttributeMapping_StaticNew,
    PyvtkGenericVertexAttributeMapping_Methods,
    "vtkGenericVertexAttributeMapping", modulename,
    NULL, NULL,
    PyvtkGenericVertexAttributeMapping_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGenericVertexAttributeMapping_Doc()
{
  static const char *docstring[] = {
    "vtkGenericVertexAttributeMapping - stores mapping for data arrays to\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGenericVertexAttributeMapping stores mapping between data arrays\nand generic vertex attributes. It is used by vtkPainterPolyDataMapper\nto pass the mappings to the painter which rendering the attributes.\n\nThanks:\n\nSupport for generic vertex attributes in VTK was contributed in\ncollaboration with Stephane Ploix at EDF.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericVertexAttributeMapping(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericVertexAttributeMappingNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericVertexAttributeMapping", o) != 0)
    {
    Py_DECREF(o);
    }

}

