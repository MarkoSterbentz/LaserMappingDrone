// python wrapper for vtkMarkSelectedRows
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMarkSelectedRows.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMarkSelectedRows(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMarkSelectedRowsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkMarkSelectedRows_Doc();


static PyObject *
PyvtkMarkSelectedRows_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkSelectedRows *op = static_cast<vtkMarkSelectedRows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMarkSelectedRows::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarkSelectedRows_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkSelectedRows *op = static_cast<vtkMarkSelectedRows *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMarkSelectedRows::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarkSelectedRows_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkSelectedRows *op = static_cast<vtkMarkSelectedRows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMarkSelectedRows *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMarkSelectedRows::NewInstance());

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
PyvtkMarkSelectedRows_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMarkSelectedRows *tempr = vtkMarkSelectedRows::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMarkSelectedRows_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkSelectedRows *op = static_cast<vtkMarkSelectedRows *>(vp);

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
      op->vtkMarkSelectedRows::SetFieldAssociation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMarkSelectedRows_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkSelectedRows *op = static_cast<vtkMarkSelectedRows *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkMarkSelectedRows::GetFieldAssociation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMarkSelectedRows_Methods[] = {
  {(char*)"GetClassName", PyvtkMarkSelectedRows_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMarkSelectedRows_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMarkSelectedRows_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMarkSelectedRows\nC++: vtkMarkSelectedRows *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMarkSelectedRows_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMarkSelectedRows\nC++: vtkMarkSelectedRows *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFieldAssociation", PyvtkMarkSelectedRows_SetFieldAssociation, METH_VARARGS,
   (char*)"V.SetFieldAssociation(int)\nC++: void SetFieldAssociation(int a)\n\nSelect the field to process. Only selection associated with the\nchosen field are considered. Accepted values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS,\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS,\n\\li vtkDataObject::FIELD_ASSOCIATION_NONE,\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES,\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES,\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nIf value is vtkDataObject::FIELD_ASSOCIATION_NONE, then FieldData\nassociated with the input dataobject is extracted.\n"},
  {(char*)"GetFieldAssociation", PyvtkMarkSelectedRows_GetFieldAssociation, METH_VARARGS,
   (char*)"V.GetFieldAssociation() -> int\nC++: int GetFieldAssociation()\n\nSelect the field to process. Only selection associated with the\nchosen field are considered. Accepted values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS,\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS,\n\\li vtkDataObject::FIELD_ASSOCIATION_NONE,\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES,\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES,\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nIf value is vtkDataObject::FIELD_ASSOCIATION_NONE, then FieldData\nassociated with the input dataobject is extracted.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMarkSelectedRows_StaticNew()
{
  return vtkMarkSelectedRows::New();
}

PyObject *PyVTKClass_vtkMarkSelectedRowsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMarkSelectedRows_StaticNew,
    PyvtkMarkSelectedRows_Methods,
    "vtkMarkSelectedRows", modulename,
    NULL, NULL,
    PyvtkMarkSelectedRows_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMarkSelectedRows_Doc()
{
  static const char *docstring[] = {
    "vtkMarkSelectedRows\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkMarkSelectedRows is used by vtkSpreadSheetView to marks rows from\nthe vtkTable generated by vtkSortedTableStreamer or\nvtkBlockDeliveryPreprocessor as selected (done by adding a new\nvtkCharArray named \"__vtkIsSelected__\"). It has two input ports:\n\\li 0 : vtkTable\n\\li 1 : vtkTable (the extracted selection).\nAlternatively, for composite datasets, both inputs can be composite\ndatasets with vtkTable",
    " leaf nodes with identical structure.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMarkSelectedRows(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMarkSelectedRowsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMarkSelectedRows", o) != 0)
    {
    Py_DECREF(o);
    }

}

