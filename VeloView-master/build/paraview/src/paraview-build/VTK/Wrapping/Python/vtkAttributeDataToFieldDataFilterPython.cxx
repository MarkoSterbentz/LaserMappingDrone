// python wrapper for vtkAttributeDataToFieldDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAttributeDataToFieldDataFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAttributeDataToFieldDataFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAttributeDataToFieldDataFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkAttributeDataToFieldDataFilter_Doc();


static PyObject *
PyvtkAttributeDataToFieldDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAttributeDataToFieldDataFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAttributeDataToFieldDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAttributeDataToFieldDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAttributeDataToFieldDataFilter::NewInstance());

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
PyvtkAttributeDataToFieldDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAttributeDataToFieldDataFilter *tempr = vtkAttributeDataToFieldDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_SetPassAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassAttributeData(temp0);
      }
    else
      {
      op->vtkAttributeDataToFieldDataFilter::SetPassAttributeData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_GetPassAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassAttributeData() :
      op->vtkAttributeDataToFieldDataFilter::GetPassAttributeData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassAttributeDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassAttributeDataOn();
      }
    else
      {
      op->vtkAttributeDataToFieldDataFilter::PassAttributeDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassAttributeDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassAttributeDataOff();
      }
    else
      {
      op->vtkAttributeDataToFieldDataFilter::PassAttributeDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAttributeDataToFieldDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkAttributeDataToFieldDataFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAttributeDataToFieldDataFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAttributeDataToFieldDataFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAttributeDataToFieldDataFilter\nC++: vtkAttributeDataToFieldDataFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAttributeDataToFieldDataFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAttributeDataToFieldDataFilter\nC++: vtkAttributeDataToFieldDataFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPassAttributeData", PyvtkAttributeDataToFieldDataFilter_SetPassAttributeData, METH_VARARGS,
   (char*)"V.SetPassAttributeData(int)\nC++: void SetPassAttributeData(int a)\n\nTurn on/off the passing of point and cell non-field attribute\ndata to the output of the filter.\n"},
  {(char*)"GetPassAttributeData", PyvtkAttributeDataToFieldDataFilter_GetPassAttributeData, METH_VARARGS,
   (char*)"V.GetPassAttributeData() -> int\nC++: int GetPassAttributeData()\n\nTurn on/off the passing of point and cell non-field attribute\ndata to the output of the filter.\n"},
  {(char*)"PassAttributeDataOn", PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOn, METH_VARARGS,
   (char*)"V.PassAttributeDataOn()\nC++: void PassAttributeDataOn()\n\nTurn on/off the passing of point and cell non-field attribute\ndata to the output of the filter.\n"},
  {(char*)"PassAttributeDataOff", PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOff, METH_VARARGS,
   (char*)"V.PassAttributeDataOff()\nC++: void PassAttributeDataOff()\n\nTurn on/off the passing of point and cell non-field attribute\ndata to the output of the filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAttributeDataToFieldDataFilter_StaticNew()
{
  return vtkAttributeDataToFieldDataFilter::New();
}

PyObject *PyVTKClass_vtkAttributeDataToFieldDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAttributeDataToFieldDataFilter_StaticNew,
    PyvtkAttributeDataToFieldDataFilter_Methods,
    "vtkAttributeDataToFieldDataFilter", modulename,
    NULL, NULL,
    PyvtkAttributeDataToFieldDataFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAttributeDataToFieldDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkAttributeDataToFieldDataFilter - map attribute data to field data\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkAttributeDataToFieldDataFilter is a class that maps attribute data\ninto field data. Since this filter is a subclass of\nvtkDataSetAlgorithm, the output dataset (whose structure is the same\nas the input dataset), will contain the field data that is generated.\nThe filter will convert point and cell attribute data to field data\nand assign it as point and cell field data, replacing any point or\nfiel",
    "d data that was there previously. By default, the original\nnon-field point and cell attribute data will be passed to the output\nof the filter, although you can shut this behavior down.\n\nCaveats:\n\nReference counting the underlying data arrays is used to create the\nfield data.  Therefore, no extra memory is utilized.\n\nThe original field data (if any) associated with the point and cell\nattribute data",
    " is placed into the generated fields along with the\nscalars, vectors, etc.\n\nSee Also:\n\nvtkFieldData vtkDataObject vtkDataSet\nvtkFieldDataToAttributeDataFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAttributeDataToFieldDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAttributeDataToFieldDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAttributeDataToFieldDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

