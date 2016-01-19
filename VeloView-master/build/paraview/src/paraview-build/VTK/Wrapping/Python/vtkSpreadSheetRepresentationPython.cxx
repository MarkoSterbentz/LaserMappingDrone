// python wrapper for vtkSpreadSheetRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSpreadSheetRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSpreadSheetRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSpreadSheetRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkPVDataRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataRepresentationNew
#endif

static const char **PyvtkSpreadSheetRepresentation_Doc();


static PyObject *
PyvtkSpreadSheetRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSpreadSheetRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpreadSheetRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSpreadSheetRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpreadSheetRepresentation::NewInstance());

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
PyvtkSpreadSheetRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSpreadSheetRepresentation *tempr = vtkSpreadSheetRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MarkModified();
      }
    else
      {
      op->vtkSpreadSheetRepresentation::MarkModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_GetDataProducer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetDataProducer() :
      op->vtkSpreadSheetRepresentation::GetDataProducer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_GetExtractedDataProducer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractedDataProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetExtractedDataProducer() :
      op->vtkSpreadSheetRepresentation::GetExtractedDataProducer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_GetSelectionProducer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetSelectionProducer() :
      op->vtkSpreadSheetRepresentation::GetSelectionProducer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_SetGenerateCellConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

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
      op->vtkSpreadSheetRepresentation::SetGenerateCellConnectivity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_GetGenerateCellConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateCellConnectivity() :
      op->vtkSpreadSheetRepresentation::GetGenerateCellConnectivity());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

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
      op->vtkSpreadSheetRepresentation::SetFieldAssociation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkSpreadSheetRepresentation::GetFieldAssociation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_SetCompositeDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  int temp0;
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
      op->vtkSpreadSheetRepresentation::SetCompositeDataSetIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSpreadSheetRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkSpreadSheetRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSpreadSheetRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSpreadSheetRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSpreadSheetRepresentation\nC++: vtkSpreadSheetRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSpreadSheetRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSpreadSheetRepresentation\nC++: vtkSpreadSheetRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"MarkModified", PyvtkSpreadSheetRepresentation_MarkModified, METH_VARARGS,
   (char*)"V.MarkModified()\nC++: virtual void MarkModified()\n\nSince this has no delivery, just mark ourselves modified.\n"},
  {(char*)"GetDataProducer", PyvtkSpreadSheetRepresentation_GetDataProducer, METH_VARARGS,
   (char*)"V.GetDataProducer() -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetDataProducer()\n\n"},
  {(char*)"GetExtractedDataProducer", PyvtkSpreadSheetRepresentation_GetExtractedDataProducer, METH_VARARGS,
   (char*)"V.GetExtractedDataProducer() -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetExtractedDataProducer()\n\n"},
  {(char*)"GetSelectionProducer", PyvtkSpreadSheetRepresentation_GetSelectionProducer, METH_VARARGS,
   (char*)"V.GetSelectionProducer() -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetSelectionProducer()\n\n"},
  {(char*)"SetGenerateCellConnectivity", PyvtkSpreadSheetRepresentation_SetGenerateCellConnectivity, METH_VARARGS,
   (char*)"V.SetGenerateCellConnectivity(bool)\nC++: void SetGenerateCellConnectivity(bool)\n\nAllow user to enable/disable cell connectivity generation in the\ndatamodel\n"},
  {(char*)"GetGenerateCellConnectivity", PyvtkSpreadSheetRepresentation_GetGenerateCellConnectivity, METH_VARARGS,
   (char*)"V.GetGenerateCellConnectivity() -> bool\nC++: bool GetGenerateCellConnectivity()\n\nAllow user to enable/disable cell connectivity generation in the\ndatamodel\n"},
  {(char*)"SetFieldAssociation", PyvtkSpreadSheetRepresentation_SetFieldAssociation, METH_VARARGS,
   (char*)"V.SetFieldAssociation(int)\nC++: void SetFieldAssociation(int val)\n\n"},
  {(char*)"GetFieldAssociation", PyvtkSpreadSheetRepresentation_GetFieldAssociation, METH_VARARGS,
   (char*)"V.GetFieldAssociation() -> int\nC++: int GetFieldAssociation()\n\n"},
  {(char*)"SetCompositeDataSetIndex", PyvtkSpreadSheetRepresentation_SetCompositeDataSetIndex, METH_VARARGS,
   (char*)"V.SetCompositeDataSetIndex(int)\nC++: void SetCompositeDataSetIndex(int val)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSpreadSheetRepresentation_StaticNew()
{
  return vtkSpreadSheetRepresentation::New();
}

PyObject *PyVTKClass_vtkSpreadSheetRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSpreadSheetRepresentation_StaticNew,
    PyvtkSpreadSheetRepresentation_Methods,
    "vtkSpreadSheetRepresentation", modulename,
    NULL, NULL,
    PyvtkSpreadSheetRepresentation_Doc(),
    PyVTKClass_vtkPVDataRepresentationNew(modulename));
  return cls;
}

const char **PyvtkSpreadSheetRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkSpreadSheetRepresentation\n\n",
    "Superclass: vtkPVDataRepresentation\n\n",
    "Representation for showing data in a vtkSpreadSheetView. Unlike\ntypical ParaView representations, this one does not do any data\nmovement, it merely updates the input and provides access to the\ninput data objects (rather clones of those). This filer has 3 input\nports:\n\\li 0: Data (vtkDataObject)\n\\li 1: Extracted Data (vtkUnstructruedGrid or multi-block of it)\n\\li 2: Extracted vtkSelection (vtkSelec",
    "tion)\n\nCaveats:\n\nThis representation doesn't support caching currently.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSpreadSheetRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSpreadSheetRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSpreadSheetRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

