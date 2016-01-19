// python wrapper for vtkBlockDeliveryPreprocessor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBlockDeliveryPreprocessor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBlockDeliveryPreprocessor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBlockDeliveryPreprocessorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkBlockDeliveryPreprocessor_Doc();


static PyObject *
PyvtkBlockDeliveryPreprocessor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBlockDeliveryPreprocessor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBlockDeliveryPreprocessor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBlockDeliveryPreprocessor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBlockDeliveryPreprocessor::NewInstance());

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
PyvtkBlockDeliveryPreprocessor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBlockDeliveryPreprocessor *tempr = vtkBlockDeliveryPreprocessor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_SetCompositeDataSetIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompositeDataSetIndex(temp0);
      }
    else
      {
      op->vtkBlockDeliveryPreprocessor::SetCompositeDataSetIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBlockDeliveryPreprocessor_SetCompositeDataSetIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompositeDataSetIndex();
      }
    else
      {
      op->vtkBlockDeliveryPreprocessor::SetCompositeDataSetIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBlockDeliveryPreprocessor_SetCompositeDataSetIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkBlockDeliveryPreprocessor_SetCompositeDataSetIndex_s1(self, args);
    case 0:
      return PyvtkBlockDeliveryPreprocessor_SetCompositeDataSetIndex_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCompositeDataSetIndex");
  return NULL;
}



static PyObject *
PyvtkBlockDeliveryPreprocessor_GetCompositeDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCompositeDataSetIndex() :
      op->vtkBlockDeliveryPreprocessor::GetCompositeDataSetIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_SetGenerateCellConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateCellConnectivity(temp0);
      }
    else
      {
      op->vtkBlockDeliveryPreprocessor::SetGenerateCellConnectivity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_GetGenerateCellConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateCellConnectivity() :
      op->vtkBlockDeliveryPreprocessor::GetGenerateCellConnectivity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldAssociation(temp0);
      }
    else
      {
      op->vtkBlockDeliveryPreprocessor::SetFieldAssociation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkBlockDeliveryPreprocessor::GetFieldAssociation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_SetFlattenTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlattenTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlattenTable(temp0);
      }
    else
      {
      op->vtkBlockDeliveryPreprocessor::SetFlattenTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_GetFlattenTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlattenTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFlattenTable() :
      op->vtkBlockDeliveryPreprocessor::GetFlattenTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_SetGenerateOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateOriginalIds(temp0);
      }
    else
      {
      op->vtkBlockDeliveryPreprocessor::SetGenerateOriginalIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_GetGenerateOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateOriginalIds() :
      op->vtkBlockDeliveryPreprocessor::GetGenerateOriginalIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBlockDeliveryPreprocessor_Methods[] = {
  {(char*)"GetClassName", PyvtkBlockDeliveryPreprocessor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBlockDeliveryPreprocessor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBlockDeliveryPreprocessor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBlockDeliveryPreprocessor\nC++: vtkBlockDeliveryPreprocessor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBlockDeliveryPreprocessor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBlockDeliveryPreprocessor\nC++: vtkBlockDeliveryPreprocessor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCompositeDataSetIndex", PyvtkBlockDeliveryPreprocessor_SetCompositeDataSetIndex, METH_VARARGS,
   (char*)"V.SetCompositeDataSetIndex(int)\nC++: void SetCompositeDataSetIndex(unsigned int a)\nV.SetCompositeDataSetIndex()\nC++: void SetCompositeDataSetIndex()\n\nIn case of Composite datasets, set the flat index of the subtree\nto pass. Default is 0 which results in passing the entire\ncomposite tree.\n"},
  {(char*)"GetCompositeDataSetIndex", PyvtkBlockDeliveryPreprocessor_GetCompositeDataSetIndex, METH_VARARGS,
   (char*)"V.GetCompositeDataSetIndex() -> int\nC++: unsigned int GetCompositeDataSetIndex()\n\nIn case of Composite datasets, set the flat index of the subtree\nto pass. Default is 0 which results in passing the entire\ncomposite tree.\n"},
  {(char*)"SetGenerateCellConnectivity", PyvtkBlockDeliveryPreprocessor_SetGenerateCellConnectivity, METH_VARARGS,
   (char*)"V.SetGenerateCellConnectivity(bool)\nC++: void SetGenerateCellConnectivity(bool a)\n\nAllow user to enable/disable cell connectivity generation in the\ndatamodel\n"},
  {(char*)"GetGenerateCellConnectivity", PyvtkBlockDeliveryPreprocessor_GetGenerateCellConnectivity, METH_VARARGS,
   (char*)"V.GetGenerateCellConnectivity() -> bool\nC++: bool GetGenerateCellConnectivity()\n\nAllow user to enable/disable cell connectivity generation in the\ndatamodel\n"},
  {(char*)"SetFieldAssociation", PyvtkBlockDeliveryPreprocessor_SetFieldAssociation, METH_VARARGS,
   (char*)"V.SetFieldAssociation(int)\nC++: void SetFieldAssociation(int a)\n\nSelect the attribute type. Accepted values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS,\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS,\n\\li vtkDataObject::FIELD_ASSOCIATION_NONE,\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES,\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES,\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nIf value is vtkDataObject::FIELD_ASSOCIATION_NONE, then FieldData\nassociated with the input dataobject is extracted.\n"},
  {(char*)"GetFieldAssociation", PyvtkBlockDeliveryPreprocessor_GetFieldAssociation, METH_VARARGS,
   (char*)"V.GetFieldAssociation() -> int\nC++: int GetFieldAssociation()\n\nSelect the attribute type. Accepted values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS,\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS,\n\\li vtkDataObject::FIELD_ASSOCIATION_NONE,\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES,\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES,\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nIf value is vtkDataObject::FIELD_ASSOCIATION_NONE, then FieldData\nassociated with the input dataobject is extracted.\n"},
  {(char*)"SetFlattenTable", PyvtkBlockDeliveryPreprocessor_SetFlattenTable, METH_VARARGS,
   (char*)"V.SetFlattenTable(int)\nC++: void SetFlattenTable(int a)\n\nFlatten the table, i.e. split any multicomponent columns into\nseparate components, internally the vtkSplitColumnComponents\nfilter is used.\n"},
  {(char*)"GetFlattenTable", PyvtkBlockDeliveryPreprocessor_GetFlattenTable, METH_VARARGS,
   (char*)"V.GetFlattenTable() -> int\nC++: int GetFlattenTable()\n\nFlatten the table, i.e. split any multicomponent columns into\nseparate components, internally the vtkSplitColumnComponents\nfilter is used.\n"},
  {(char*)"SetGenerateOriginalIds", PyvtkBlockDeliveryPreprocessor_SetGenerateOriginalIds, METH_VARARGS,
   (char*)"V.SetGenerateOriginalIds(bool)\nC++: void SetGenerateOriginalIds(bool a)\n\nWhen set (default) the vtkOriginalIndices array will be added to\nthe output. Can be overridden by setting this flag to 0. This is\nonly respected when AddMetaData is true.\n"},
  {(char*)"GetGenerateOriginalIds", PyvtkBlockDeliveryPreprocessor_GetGenerateOriginalIds, METH_VARARGS,
   (char*)"V.GetGenerateOriginalIds() -> bool\nC++: bool GetGenerateOriginalIds()\n\nWhen set (default) the vtkOriginalIndices array will be added to\nthe output. Can be overridden by setting this flag to 0. This is\nonly respected when AddMetaData is true.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBlockDeliveryPreprocessor_StaticNew()
{
  return vtkBlockDeliveryPreprocessor::New();
}

PyObject *PyVTKClass_vtkBlockDeliveryPreprocessorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBlockDeliveryPreprocessor_StaticNew,
    PyvtkBlockDeliveryPreprocessor_Methods,
    "vtkBlockDeliveryPreprocessor", modulename,
    NULL, NULL,
    PyvtkBlockDeliveryPreprocessor_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkBlockDeliveryPreprocessor_Doc()
{
  static const char *docstring[] = {
    "vtkBlockDeliveryPreprocessor - filter used by block-delivery\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkBlockDeliveryPreprocessor is a filter used by block-delivery\nrepresentation for pre-processing data. It internally uses\nvtkAttributeDataToTableFilter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBlockDeliveryPreprocessor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBlockDeliveryPreprocessorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBlockDeliveryPreprocessor", o) != 0)
    {
    Py_DECREF(o);
    }

}

