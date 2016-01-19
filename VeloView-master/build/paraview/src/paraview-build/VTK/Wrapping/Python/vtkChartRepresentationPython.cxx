// python wrapper for vtkChartRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkChartRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkChartRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkChartRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkPVDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataRepresentationNew
#endif

static const char **PyvtkChartRepresentation_Doc();


static PyObject *
PyvtkChartRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkChartRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartRepresentation::NewInstance());

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
PyvtkChartRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkChartRepresentation *tempr = vtkChartRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_SetSelectionRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  vtkChartSelectionRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkChartSelectionRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionRepresentation(temp0);
      }
    else
      {
      op->vtkChartRepresentation::SetSelectionRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVisibility(temp0);
      }
    else
      {
      op->vtkChartRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MarkModified();
      }
    else
      {
      op->vtkChartRepresentation::MarkModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

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
      op->vtkChartRepresentation::SetFieldAssociation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkChartRepresentation::GetFieldAssociation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_SetCompositeDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

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
      op->vtkChartRepresentation::SetCompositeDataSetIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_AddCompositeDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCompositeDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddCompositeDataSetIndex(temp0);
      }
    else
      {
      op->vtkChartRepresentation::AddCompositeDataSetIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_ResetCompositeDataSetIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCompositeDataSetIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCompositeDataSetIndices();
      }
    else
      {
      op->vtkChartRepresentation::ResetCompositeDataSetIndices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->Initialize(temp0, temp1) :
      op->vtkChartRepresentation::Initialize(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  vtkInformation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkChartRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_GetDefaultSeriesLabel(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDefaultSeriesLabel");

  vtkStdString temp0;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkStdString tempr = vtkChartRepresentation::GetDefaultSeriesLabel(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_SetFlattenTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlattenTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

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
      op->vtkChartRepresentation::SetFlattenTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_GetFlattenTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlattenTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFlattenTable() :
      op->vtkChartRepresentation::GetFlattenTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_MapSelectionToInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapSelectionToInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  vtkSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
    {
    bool tempr = (ap.IsBound() ?
      op->MapSelectionToInput(temp0) :
      op->vtkChartRepresentation::MapSelectionToInput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartRepresentation_MapSelectionToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapSelectionToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartRepresentation *op = static_cast<vtkChartRepresentation *>(vp);

  vtkSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
    {
    bool tempr = (ap.IsBound() ?
      op->MapSelectionToView(temp0) :
      op->vtkChartRepresentation::MapSelectionToView(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkChartRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkChartRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChartRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChartRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkChartRepresentation\nC++: vtkChartRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChartRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChartRepresentation\nC++: vtkChartRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSelectionRepresentation", PyvtkChartRepresentation_SetSelectionRepresentation, METH_VARARGS,
   (char*)"V.SetSelectionRepresentation(vtkChartSelectionRepresentation)\nC++: void SetSelectionRepresentation(\n    vtkChartSelectionRepresentation *)\n\nThese must only be set during initialization before adding the\nrepresentation to any views or calling Update().\n"},
  {(char*)"SetVisibility", PyvtkChartRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool visible)\n\nSet visibility of the representation.\n"},
  {(char*)"MarkModified", PyvtkChartRepresentation_MarkModified, METH_VARARGS,
   (char*)"V.MarkModified()\nC++: virtual void MarkModified()\n\nThis needs to be called on all instances of\nvtkGeometryRepresentation when the input is modified. This is\nessential since the geometry filter does not have any real-input\non the client side which messes with the Update requests.\n"},
  {(char*)"SetFieldAssociation", PyvtkChartRepresentation_SetFieldAssociation, METH_VARARGS,
   (char*)"V.SetFieldAssociation(int)\nC++: void SetFieldAssociation(int)\n\nSet the field association for arrays to use. When changed, this\nwill call MarkModified().\n"},
  {(char*)"GetFieldAssociation", PyvtkChartRepresentation_GetFieldAssociation, METH_VARARGS,
   (char*)"V.GetFieldAssociation() -> int\nC++: int GetFieldAssociation()\n\nSet the field association for arrays to use. When changed, this\nwill call MarkModified().\n"},
  {(char*)"SetCompositeDataSetIndex", PyvtkChartRepresentation_SetCompositeDataSetIndex, METH_VARARGS,
   (char*)"V.SetCompositeDataSetIndex(int)\nC++: void SetCompositeDataSetIndex(unsigned int)\n\n"},
  {(char*)"AddCompositeDataSetIndex", PyvtkChartRepresentation_AddCompositeDataSetIndex, METH_VARARGS,
   (char*)"V.AddCompositeDataSetIndex(int)\nC++: void AddCompositeDataSetIndex(unsigned int)\n\n"},
  {(char*)"ResetCompositeDataSetIndices", PyvtkChartRepresentation_ResetCompositeDataSetIndices, METH_VARARGS,
   (char*)"V.ResetCompositeDataSetIndices()\nC++: void ResetCompositeDataSetIndices()\n\n"},
  {(char*)"Initialize", PyvtkChartRepresentation_Initialize, METH_VARARGS,
   (char*)"V.Initialize(int, int) -> int\nC++: virtual unsigned int Initialize(unsigned int minIdAvailable,\n    unsigned int maxIdAvailable)\n\nOverride because of internal selection representations that need\nto be initialized as well.\n"},
  {(char*)"ProcessViewRequest", PyvtkChartRepresentation_ProcessViewRequest, METH_VARARGS,
   (char*)"V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: virtual int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo)\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering. Overridden to handle REQUEST_RENDER() to\ncall PrepareForRendering.\n"},
  {(char*)"GetDefaultSeriesLabel", PyvtkChartRepresentation_GetDefaultSeriesLabel, METH_VARARGS | METH_STATIC,
   (char*)"V.GetDefaultSeriesLabel(string, string) -> string\nC++: static vtkStdString GetDefaultSeriesLabel(\n    const vtkStdString &tableName, const vtkStdString &columnName)\n\nMethod to provide the default name given the name of a table and\na column in that table.\n"},
  {(char*)"SetFlattenTable", PyvtkChartRepresentation_SetFlattenTable, METH_VARARGS,
   (char*)"V.SetFlattenTable(int)\nC++: void SetFlattenTable(int a)\n\nFlatten the table, i.e. split any multicomponent columns into\nseparate components.\n"},
  {(char*)"GetFlattenTable", PyvtkChartRepresentation_GetFlattenTable, METH_VARARGS,
   (char*)"V.GetFlattenTable() -> int\nC++: int GetFlattenTable()\n\nFlatten the table, i.e. split any multicomponent columns into\nseparate components.\n"},
  {(char*)"MapSelectionToInput", PyvtkChartRepresentation_MapSelectionToInput, METH_VARARGS,
   (char*)"V.MapSelectionToInput(vtkSelection) -> bool\nC++: virtual bool MapSelectionToInput(vtkSelection *sel)\n\nThis method is called on the client-side by the vtkPVContextView\nwhenever a new selection is made on all the visible\nrepresentations in that view. The goal of this method is allow\nthe representations to transform the selection created in the\nview (which is an id-based selection based on the vtkTable that\nis fed into the vtkChart) to an appropriate selection based on\nthe data going into the representation. Return false if the\nselection is not applicable to this representation or the\nconversion cannot be made. Default implementation simply ensures\nthat the FieldType on the selection nodes is set to match up with\nthe FieldAssociation on the representation.\n"},
  {(char*)"MapSelectionToView", PyvtkChartRepresentation_MapSelectionToView, METH_VARARGS,
   (char*)"V.MapSelectionToView(vtkSelection) -> bool\nC++: virtual bool MapSelectionToView(vtkSelection *sel)\n\nThis is the inverse of MapSelectionToInput(). In this case, we\nare converting the selection defined on the input for the\nrepresentation to a selection that corresponds to elements being\nrendered in the view. The default implementation checks removes\nvtkSelectionNode items in sel that don't have the FieldType that\nmatches this->FieldAssociation. Similar to MapSelectionToInput(),\nthis method is expected to transform the sel in place and return\nfalse is the selection is not applicable to this representation\nor the conversion cannot be made.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChartRepresentation_StaticNew()
{
  return vtkChartRepresentation::New();
}

PyObject *PyVTKClass_vtkChartRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChartRepresentation_StaticNew,
    PyvtkChartRepresentation_Methods,
    "vtkChartRepresentation", modulename,
    NULL, NULL,
    PyvtkChartRepresentation_Doc(),
    PyVTKClass_vtkPVDataRepresentationNew(modulename));
  return cls;
}

const char **PyvtkChartRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkChartRepresentation\n\n",
    "Superclass: vtkPVDataRepresentation\n\n",
    "vtkChartRepresentation is the base representation for charting\nrepresentations. Currently, ParaView's charting views are client-side\nonly views that render only on the client side. That being the case,\nwhen running in client-server mode or in parallel, the data-delivery\nmode is fixed. Hence, unlike representations for 3D views, this\nrepresentation delivers the data in RequestData() itself. This ma",
    "kes\nit possible for client code to call UpdatePipeline() on the\nrepresentation proxy and then access the delivered vtkTable on the\nclient.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChartRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChartRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChartRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

