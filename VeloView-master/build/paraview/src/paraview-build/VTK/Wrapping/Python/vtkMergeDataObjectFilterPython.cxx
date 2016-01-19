// python wrapper for vtkMergeDataObjectFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMergeDataObjectFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMergeDataObjectFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMergeDataObjectFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkMergeDataObjectFilter_Doc();


static PyObject *
PyvtkMergeDataObjectFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMergeDataObjectFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeDataObjectFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMergeDataObjectFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeDataObjectFilter::NewInstance());

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
PyvtkMergeDataObjectFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMergeDataObjectFilter *tempr = vtkMergeDataObjectFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_SetDataObjectInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetDataObjectInputData(temp0);
      }
    else
      {
      op->vtkMergeDataObjectFilter::SetDataObjectInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_GetDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataObject() :
      op->vtkMergeDataObjectFilter::GetDataObject());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_SetOutputField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputField(temp0);
      }
    else
      {
      op->vtkMergeDataObjectFilter::SetOutputField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_GetOutputField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputField() :
      op->vtkMergeDataObjectFilter::GetOutputField());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_SetOutputFieldToDataObjectField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFieldToDataObjectField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFieldToDataObjectField();
      }
    else
      {
      op->vtkMergeDataObjectFilter::SetOutputFieldToDataObjectField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_SetOutputFieldToPointDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFieldToPointDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFieldToPointDataField();
      }
    else
      {
      op->vtkMergeDataObjectFilter::SetOutputFieldToPointDataField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_SetOutputFieldToCellDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFieldToCellDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFieldToCellDataField();
      }
    else
      {
      op->vtkMergeDataObjectFilter::SetOutputFieldToCellDataField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMergeDataObjectFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkMergeDataObjectFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMergeDataObjectFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMergeDataObjectFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMergeDataObjectFilter\nC++: vtkMergeDataObjectFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMergeDataObjectFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMergeDataObjectFilter\nC++: vtkMergeDataObjectFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDataObjectInputData", PyvtkMergeDataObjectFilter_SetDataObjectInputData, METH_VARARGS,
   (char*)"V.SetDataObjectInputData(vtkDataObject)\nC++: void SetDataObjectInputData(vtkDataObject *object)\n\nSpecify the data object to merge with the input dataset.\n"},
  {(char*)"GetDataObject", PyvtkMergeDataObjectFilter_GetDataObject, METH_VARARGS,
   (char*)"V.GetDataObject() -> vtkDataObject\nC++: vtkDataObject *GetDataObject()\n\nSpecify the data object to merge with the input dataset.\n"},
  {(char*)"SetOutputField", PyvtkMergeDataObjectFilter_SetOutputField, METH_VARARGS,
   (char*)"V.SetOutputField(int)\nC++: void SetOutputField(int a)\n\nSpecify where to place the field data during the merge process. \nThere are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {(char*)"GetOutputField", PyvtkMergeDataObjectFilter_GetOutputField, METH_VARARGS,
   (char*)"V.GetOutputField() -> int\nC++: int GetOutputField()\n\nSpecify where to place the field data during the merge process. \nThere are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {(char*)"SetOutputFieldToDataObjectField", PyvtkMergeDataObjectFilter_SetOutputFieldToDataObjectField, METH_VARARGS,
   (char*)"V.SetOutputFieldToDataObjectField()\nC++: void SetOutputFieldToDataObjectField()\n\nSpecify where to place the field data during the merge process. \nThere are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {(char*)"SetOutputFieldToPointDataField", PyvtkMergeDataObjectFilter_SetOutputFieldToPointDataField, METH_VARARGS,
   (char*)"V.SetOutputFieldToPointDataField()\nC++: void SetOutputFieldToPointDataField()\n\nSpecify where to place the field data during the merge process. \nThere are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {(char*)"SetOutputFieldToCellDataField", PyvtkMergeDataObjectFilter_SetOutputFieldToCellDataField, METH_VARARGS,
   (char*)"V.SetOutputFieldToCellDataField()\nC++: void SetOutputFieldToCellDataField()\n\nSpecify where to place the field data during the merge process. \nThere are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMergeDataObjectFilter_StaticNew()
{
  return vtkMergeDataObjectFilter::New();
}

PyObject *PyVTKClass_vtkMergeDataObjectFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMergeDataObjectFilter_StaticNew,
    PyvtkMergeDataObjectFilter_Methods,
    "vtkMergeDataObjectFilter", modulename,
    NULL, NULL,
    PyvtkMergeDataObjectFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMergeDataObjectFilter_Doc()
{
  static const char *docstring[] = {
    "vtkMergeDataObjectFilter - merge dataset and data object field to\ncreate dataset with attribute data\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkMergeDataObjectFilter is a filter that merges the field from a\nvtkDataObject with a vtkDataSet. The resulting combined dataset can\nthen be processed by other filters (e.g.,\nvtkFieldDataToAttributeDataFilter) to create attribute data like\nscalars, vectors, etc.\n\nThe filter operates as follows. The field data from the vtkDataObject\nis merged with the input's vtkDataSet and then placed in the outp",
    "ut.\nYou can choose to place the field data into the cell data field, the\npoint data field, or the datasets field (i.e., the one inherited from\nvtkDataSet's superclass vtkDataObject). All this data shuffling\noccurs via reference counting, therefore memory is not copied.\n\nOne of the uses of this filter is to allow you to read/generate the\nstructure of a dataset independent of the attributes. So, for",
    "\nexample, you could store the dataset geometry/topology in one file,\nand field data in another. Then use this filter in combination with\nvtkFieldDataToAttributeData to create a dataset ready for processing\nin the visualization pipeline.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMergeDataObjectFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMergeDataObjectFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMergeDataObjectFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

