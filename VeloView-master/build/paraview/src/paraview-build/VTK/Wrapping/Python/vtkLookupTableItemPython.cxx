// python wrapper for vtkLookupTableItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLookupTableItem.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLookupTableItem(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLookupTableItemNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkScalarsToColorsItemNew
extern "C" { PyObject *PyVTKClass_vtkScalarsToColorsItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkScalarsToColorsItemNew
#endif

static const char **PyvtkLookupTableItem_Doc();


static PyObject *
PyvtkLookupTableItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableItem *op = static_cast<vtkLookupTableItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLookupTableItem::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableItem *op = static_cast<vtkLookupTableItem *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLookupTableItem::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableItem *op = static_cast<vtkLookupTableItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLookupTableItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLookupTableItem::NewInstance());

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
PyvtkLookupTableItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLookupTableItem *tempr = vtkLookupTableItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableItem_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableItem *op = static_cast<vtkLookupTableItem *>(vp);

  vtkLookupTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkLookupTableItem::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLookupTableItem_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableItem *op = static_cast<vtkLookupTableItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkLookupTableItem::GetLookupTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLookupTableItem_Methods[] = {
  {(char*)"GetClassName", PyvtkLookupTableItem_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLookupTableItem_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLookupTableItem_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLookupTableItem\nC++: vtkLookupTableItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLookupTableItem_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLookupTableItem\nC++: vtkLookupTableItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLookupTable", PyvtkLookupTableItem_SetLookupTable, METH_VARARGS,
   (char*)"V.SetLookupTable(vtkLookupTable)\nC++: void SetLookupTable(vtkLookupTable *t)\n\n"},
  {(char*)"GetLookupTable", PyvtkLookupTableItem_GetLookupTable, METH_VARARGS,
   (char*)"V.GetLookupTable() -> vtkLookupTable\nC++: vtkLookupTable *GetLookupTable()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLookupTableItem_StaticNew()
{
  return vtkLookupTableItem::New();
}

PyObject *PyVTKClass_vtkLookupTableItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLookupTableItem_StaticNew,
    PyvtkLookupTableItem_Methods,
    "vtkLookupTableItem", modulename,
    NULL, NULL,
    PyvtkLookupTableItem_Doc(),
    PyVTKClass_vtkScalarsToColorsItemNew(modulename));
  return cls;
}

const char **PyvtkLookupTableItem_Doc()
{
  static const char *docstring[] = {
    "vtkLookupTableItem - no description provided.\n\n",
    "Superclass: vtkScalarsToColorsItem\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLookupTableItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLookupTableItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLookupTableItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

