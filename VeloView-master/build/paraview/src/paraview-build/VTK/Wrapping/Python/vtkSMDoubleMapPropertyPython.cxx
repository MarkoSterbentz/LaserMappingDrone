// python wrapper for vtkSMDoubleMapProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDoubleMapProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMDoubleMapProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMDoubleMapPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMMapPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSMMapPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMMapPropertyNew
#endif

static const char **PyvtkSMDoubleMapProperty_Doc();


static PyObject *
PyvtkSMDoubleMapProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMDoubleMapProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDoubleMapProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDoubleMapProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDoubleMapProperty::NewInstance());

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
PyvtkSMDoubleMapProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMDoubleMapProperty *tempr = vtkSMDoubleMapProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfComponents(temp0);
      }
    else
      {
      op->vtkSMDoubleMapProperty::SetNumberOfComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkSMDoubleMapProperty::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_SetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetElement(temp0, temp1);
      }
    else
      {
      op->vtkSMDoubleMapProperty::SetElement(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_SetElements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  double *temp1 = NULL;
  double small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[size1];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetElements(temp0, temp1);
      }
    else
      {
      op->vtkSMDoubleMapProperty::SetElements(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkSMDoubleMapProperty_SetElements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  double *temp1 = NULL;
  double small1[4];
  int size1 = 0;
  unsigned int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[size1];
      }
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetElements(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMDoubleMapProperty::SetElements(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkSMDoubleMapProperty_SetElements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSMDoubleMapProperty_SetElements_s1(self, args);
    case 3:
      return PyvtkSMDoubleMapProperty_SetElements_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetElements");
  return NULL;
}



static PyObject *
PyvtkSMDoubleMapProperty_SetElementComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  unsigned int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetElementComponent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSMDoubleMapProperty::SetElementComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetElement(temp0) :
      op->vtkSMDoubleMapProperty::GetElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_GetElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetElements(temp0) :
      op->vtkSMDoubleMapProperty::GetElements(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_GetElementComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = (ap.IsBound() ?
      op->GetElementComponent(temp0, temp1) :
      op->vtkSMDoubleMapProperty::GetElementComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_RemoveElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveElement(temp0);
      }
    else
      {
      op->vtkSMDoubleMapProperty::RemoveElement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkSMDoubleMapProperty::GetNumberOfElements());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_ClearElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearElements();
      }
    else
      {
      op->vtkSMDoubleMapProperty::ClearElements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDoubleMapPropertyIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSMDoubleMapProperty::NewIterator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_GetMapPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    void  *tempr = (ap.IsBound() ?
      op->GetMapPointer() :
      op->vtkSMDoubleMapProperty::GetMapPointer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    if (ap.IsBound())
      {
      op->Copy(temp0);
      }
    else
      {
      op->vtkSMDoubleMapProperty::Copy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMDoubleMapProperty_ResetToXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapProperty *op = static_cast<vtkSMDoubleMapProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetToXMLDefaults();
      }
    else
      {
      op->vtkSMDoubleMapProperty::ResetToXMLDefaults();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDoubleMapProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSMDoubleMapProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMDoubleMapProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMDoubleMapProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMDoubleMapProperty\nC++: vtkSMDoubleMapProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMDoubleMapProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMDoubleMapProperty\nC++: vtkSMDoubleMapProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfComponents", PyvtkSMDoubleMapProperty_SetNumberOfComponents, METH_VARARGS,
   (char*)"V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(unsigned int components)\n\nSets the number of components.\n"},
  {(char*)"GetNumberOfComponents", PyvtkSMDoubleMapProperty_GetNumberOfComponents, METH_VARARGS,
   (char*)"V.GetNumberOfComponents() -> int\nC++: unsigned int GetNumberOfComponents()\n\nReturns the number of components.\n"},
  {(char*)"SetElement", PyvtkSMDoubleMapProperty_SetElement, METH_VARARGS,
   (char*)"V.SetElement(int, float)\nC++: void SetElement(vtkIdType index, double value)\n\nSets the element at index to value.\n"},
  {(char*)"SetElements", PyvtkSMDoubleMapProperty_SetElements, METH_VARARGS,
   (char*)"V.SetElements(int, (float, ...))\nC++: void SetElements(vtkIdType index, const double *values)\nV.SetElements(int, (float, ...), int)\nC++: void SetElements(vtkIdType index, const double *values,\n    unsigned int numValues)\n\nSets the elements at index to values.\n"},
  {(char*)"SetElementComponent", PyvtkSMDoubleMapProperty_SetElementComponent, METH_VARARGS,
   (char*)"V.SetElementComponent(int, int, float)\nC++: void SetElementComponent(vtkIdType index,\n    unsigned int component, double value)\n\nSets the component at index to value.\n"},
  {(char*)"GetElement", PyvtkSMDoubleMapProperty_GetElement, METH_VARARGS,
   (char*)"V.GetElement(int) -> float\nC++: double GetElement(vtkIdType index)\n\nReturns the element at index.\n"},
  {(char*)"GetElements", PyvtkSMDoubleMapProperty_GetElements, METH_VARARGS,
   (char*)"V.GetElements(int) -> (float, ...)\nC++: double *GetElements(vtkIdType index)\n\nReturns the elements at index.\n"},
  {(char*)"GetElementComponent", PyvtkSMDoubleMapProperty_GetElementComponent, METH_VARARGS,
   (char*)"V.GetElementComponent(int, int) -> float\nC++: double GetElementComponent(vtkIdType index,\n    vtkIdType component)\n\nReturns the element component at index.\n"},
  {(char*)"RemoveElement", PyvtkSMDoubleMapProperty_RemoveElement, METH_VARARGS,
   (char*)"V.RemoveElement(int)\nC++: void RemoveElement(vtkIdType index)\n\nRemoves the element at index.\n"},
  {(char*)"GetNumberOfElements", PyvtkSMDoubleMapProperty_GetNumberOfElements, METH_VARARGS,
   (char*)"V.GetNumberOfElements() -> int\nC++: virtual vtkIdType GetNumberOfElements()\n\nReturns the number of elements.\n"},
  {(char*)"ClearElements", PyvtkSMDoubleMapProperty_ClearElements, METH_VARARGS,
   (char*)"V.ClearElements()\nC++: void ClearElements()\n\nClears all of the elements from the property.\n"},
  {(char*)"NewIterator", PyvtkSMDoubleMapProperty_NewIterator, METH_VARARGS,
   (char*)"V.NewIterator() -> vtkSMDoubleMapPropertyIterator\nC++: vtkSMDoubleMapPropertyIterator *NewIterator()\n\nReturns a new iterator for the map.\n"},
  {(char*)"GetMapPointer", PyvtkSMDoubleMapProperty_GetMapPointer, METH_VARARGS,
   (char*)"V.GetMapPointer() ->\nC++: void *GetMapPointer()\n\n"},
  {(char*)"Copy", PyvtkSMDoubleMapProperty_Copy, METH_VARARGS,
   (char*)"V.Copy(vtkSMProperty)\nC++: virtual void Copy(vtkSMProperty *src)\n\nCopy all property values.\n"},
  {(char*)"ResetToXMLDefaults", PyvtkSMDoubleMapProperty_ResetToXMLDefaults, METH_VARARGS,
   (char*)"V.ResetToXMLDefaults()\nC++: virtual void ResetToXMLDefaults()\n\nFor properties that support specifying defaults in XML\nconfiguration, this method will reset the property value to the\ndefault values specified in the XML.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMDoubleMapProperty_StaticNew()
{
  return vtkSMDoubleMapProperty::New();
}

PyObject *PyVTKClass_vtkSMDoubleMapPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMDoubleMapProperty_StaticNew,
    PyvtkSMDoubleMapProperty_Methods,
    "vtkSMDoubleMapProperty", modulename,
    NULL, NULL,
    PyvtkSMDoubleMapProperty_Doc(),
    PyVTKClass_vtkSMMapPropertyNew(modulename));
  return cls;
}

const char **PyvtkSMDoubleMapProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSMDoubleMapProperty - a map property storing double values\n\n",
    "Superclass: vtkSMMapProperty\n\n",
    "vtkSMDoubleMapProperty stores a map of vtkIdType keys to double\nvalues.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMDoubleMapProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMDoubleMapPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMDoubleMapProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

