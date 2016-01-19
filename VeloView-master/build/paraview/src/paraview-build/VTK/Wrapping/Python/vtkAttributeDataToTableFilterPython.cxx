// python wrapper for vtkAttributeDataToTableFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAttributeDataToTableFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAttributeDataToTableFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAttributeDataToTableFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkAttributeDataToTableFilter_Doc();


static PyObject *
PyvtkAttributeDataToTableFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAttributeDataToTableFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAttributeDataToTableFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAttributeDataToTableFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAttributeDataToTableFilter::NewInstance());

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
PyvtkAttributeDataToTableFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAttributeDataToTableFilter *tempr = vtkAttributeDataToTableFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

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
      op->vtkAttributeDataToTableFilter::SetFieldAssociation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkAttributeDataToTableFilter::GetFieldAssociation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_SetAddMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAddMetaData(temp0);
      }
    else
      {
      op->vtkAttributeDataToTableFilter::SetAddMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GetAddMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetAddMetaData() :
      op->vtkAttributeDataToTableFilter::GetAddMetaData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_AddMetaDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMetaDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddMetaDataOn();
      }
    else
      {
      op->vtkAttributeDataToTableFilter::AddMetaDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_AddMetaDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMetaDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AddMetaDataOff();
      }
    else
      {
      op->vtkAttributeDataToTableFilter::AddMetaDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_SetGenerateOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

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
      op->vtkAttributeDataToTableFilter::SetGenerateOriginalIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GetGenerateOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateOriginalIds() :
      op->vtkAttributeDataToTableFilter::GetGenerateOriginalIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_SetGenerateCellConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

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
      op->vtkAttributeDataToTableFilter::SetGenerateCellConnectivity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GetGenerateCellConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateCellConnectivity() :
      op->vtkAttributeDataToTableFilter::GetGenerateCellConnectivity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAttributeDataToTableFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkAttributeDataToTableFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAttributeDataToTableFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAttributeDataToTableFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAttributeDataToTableFilter\nC++: vtkAttributeDataToTableFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAttributeDataToTableFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAttributeDataToTableFilter\nC++: vtkAttributeDataToTableFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFieldAssociation", PyvtkAttributeDataToTableFilter_SetFieldAssociation, METH_VARARGS,
   (char*)"V.SetFieldAssociation(int)\nC++: void SetFieldAssociation(int a)\n\nSelect the attribute type. Accepted values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS,\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS,\n\\li vtkDataObject::FIELD_ASSOCIATION_NONE,\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES,\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES,\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nIf value is vtkDataObject::FIELD_ASSOCIATION_NONE, then FieldData\nassociated with the input dataobject is extracted.\n"},
  {(char*)"GetFieldAssociation", PyvtkAttributeDataToTableFilter_GetFieldAssociation, METH_VARARGS,
   (char*)"V.GetFieldAssociation() -> int\nC++: int GetFieldAssociation()\n\nSelect the attribute type. Accepted values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS,\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS,\n\\li vtkDataObject::FIELD_ASSOCIATION_NONE,\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES,\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES,\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nIf value is vtkDataObject::FIELD_ASSOCIATION_NONE, then FieldData\nassociated with the input dataobject is extracted.\n"},
  {(char*)"SetAddMetaData", PyvtkAttributeDataToTableFilter_SetAddMetaData, METH_VARARGS,
   (char*)"V.SetAddMetaData(bool)\nC++: void SetAddMetaData(bool a)\n\nIt is possible for this filter to add additional meta-data to the\nfield data such as point coordinates (when point attributes are\nselected and input is pointset) or structured coordinates etc. To\nenable this addition of extra information, turn this flag on. Off\nby default.\n"},
  {(char*)"GetAddMetaData", PyvtkAttributeDataToTableFilter_GetAddMetaData, METH_VARARGS,
   (char*)"V.GetAddMetaData() -> bool\nC++: bool GetAddMetaData()\n\nIt is possible for this filter to add additional meta-data to the\nfield data such as point coordinates (when point attributes are\nselected and input is pointset) or structured coordinates etc. To\nenable this addition of extra information, turn this flag on. Off\nby default.\n"},
  {(char*)"AddMetaDataOn", PyvtkAttributeDataToTableFilter_AddMetaDataOn, METH_VARARGS,
   (char*)"V.AddMetaDataOn()\nC++: void AddMetaDataOn()\n\nIt is possible for this filter to add additional meta-data to the\nfield data such as point coordinates (when point attributes are\nselected and input is pointset) or structured coordinates etc. To\nenable this addition of extra information, turn this flag on. Off\nby default.\n"},
  {(char*)"AddMetaDataOff", PyvtkAttributeDataToTableFilter_AddMetaDataOff, METH_VARARGS,
   (char*)"V.AddMetaDataOff()\nC++: void AddMetaDataOff()\n\nIt is possible for this filter to add additional meta-data to the\nfield data such as point coordinates (when point attributes are\nselected and input is pointset) or structured coordinates etc. To\nenable this addition of extra information, turn this flag on. Off\nby default.\n"},
  {(char*)"SetGenerateOriginalIds", PyvtkAttributeDataToTableFilter_SetGenerateOriginalIds, METH_VARARGS,
   (char*)"V.SetGenerateOriginalIds(bool)\nC++: void SetGenerateOriginalIds(bool a)\n\nWhen set (default) the vtkOriginalIndices array will be added to\nthe output. Can be overridden by setting this flag to 0. This is\nonly respected when AddMetaData is true.\n"},
  {(char*)"GetGenerateOriginalIds", PyvtkAttributeDataToTableFilter_GetGenerateOriginalIds, METH_VARARGS,
   (char*)"V.GetGenerateOriginalIds() -> bool\nC++: bool GetGenerateOriginalIds()\n\nWhen set (default) the vtkOriginalIndices array will be added to\nthe output. Can be overridden by setting this flag to 0. This is\nonly respected when AddMetaData is true.\n"},
  {(char*)"SetGenerateCellConnectivity", PyvtkAttributeDataToTableFilter_SetGenerateCellConnectivity, METH_VARARGS,
   (char*)"V.SetGenerateCellConnectivity(bool)\nC++: void SetGenerateCellConnectivity(bool a)\n\nWhen set (not the default) the connectivity of each cell will be\nadded by adding a new column for each point.\n"},
  {(char*)"GetGenerateCellConnectivity", PyvtkAttributeDataToTableFilter_GetGenerateCellConnectivity, METH_VARARGS,
   (char*)"V.GetGenerateCellConnectivity() -> bool\nC++: bool GetGenerateCellConnectivity()\n\nWhen set (not the default) the connectivity of each cell will be\nadded by adding a new column for each point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAttributeDataToTableFilter_StaticNew()
{
  return vtkAttributeDataToTableFilter::New();
}

PyObject *PyVTKClass_vtkAttributeDataToTableFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAttributeDataToTableFilter_StaticNew,
    PyvtkAttributeDataToTableFilter_Methods,
    "vtkAttributeDataToTableFilter", modulename,
    NULL, NULL,
    PyvtkAttributeDataToTableFilter_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAttributeDataToTableFilter_Doc()
{
  static const char *docstring[] = {
    "vtkAttributeDataToTableFilter - this filter produces a\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkAttributeDataToTableFilter is a filter that produces a vtkTable\nfrom the chosen attribute in the input dataobject. This filter can\naccept composite datasets. If the input is a composite dataset, the\noutput is a multiblock with vtkTable leaves.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAttributeDataToTableFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAttributeDataToTableFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAttributeDataToTableFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

