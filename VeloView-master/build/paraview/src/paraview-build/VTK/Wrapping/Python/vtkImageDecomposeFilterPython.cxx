// python wrapper for vtkImageDecomposeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageDecomposeFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageDecomposeFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageDecomposeFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageIterateFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageIterateFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageIterateFilterNew
#endif

static const char **PyvtkImageDecomposeFilter_Doc();


static PyObject *
PyvtkImageDecomposeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageDecomposeFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDecomposeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDecomposeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDecomposeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageDecomposeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDecomposeFilter::NewInstance());

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
PyvtkImageDecomposeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageDecomposeFilter *tempr = vtkImageDecomposeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDecomposeFilter_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimensionality(temp0);
      }
    else
      {
      op->vtkImageDecomposeFilter::SetDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDecomposeFilter_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageDecomposeFilter::GetDimensionality());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDecomposeFilter_PermuteIncrements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PermuteIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType *save0 = NULL;
  vtkIdType small0[8];
  int size0 = 0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->PermuteIncrements(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageDecomposeFilter::PermuteIncrements(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkImageDecomposeFilter_PermuteExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PermuteExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDecomposeFilter *op = static_cast<vtkImageDecomposeFilter *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->PermuteExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkImageDecomposeFilter::PermuteExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyMethodDef PyvtkImageDecomposeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageDecomposeFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {(char*)"IsA", PyvtkImageDecomposeFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {(char*)"NewInstance", PyvtkImageDecomposeFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageDecomposeFilter\nC++: vtkImageDecomposeFilter *NewInstance()\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {(char*)"SafeDownCast", PyvtkImageDecomposeFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageDecomposeFilter\nC++: vtkImageDecomposeFilter *SafeDownCast(vtkObject* o)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {(char*)"SetDimensionality", PyvtkImageDecomposeFilter_SetDimensionality, METH_VARARGS,
   (char*)"V.SetDimensionality(int)\nC++: void SetDimensionality(int dim)\n\nDimensionality is the number of axes which are considered during\nexecution. To process images dimensionality would be set to 2.\n"},
  {(char*)"GetDimensionality", PyvtkImageDecomposeFilter_GetDimensionality, METH_VARARGS,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nDimensionality is the number of axes which are considered during\nexecution. To process images dimensionality would be set to 2.\n"},
  {(char*)"PermuteIncrements", PyvtkImageDecomposeFilter_PermuteIncrements, METH_VARARGS,
   (char*)"V.PermuteIncrements([int, ...], int, int, int)\nC++: void PermuteIncrements(vtkIdType *increments,\n    vtkIdType &inc0, vtkIdType &inc1, vtkIdType &inc2)\n\nPrivate methods kept public for template execute functions.\n"},
  {(char*)"PermuteExtent", PyvtkImageDecomposeFilter_PermuteExtent, METH_VARARGS,
   (char*)"V.PermuteExtent([int, ...], int, int, int, int, int, int)\nC++: void PermuteExtent(int *extent, int &min0, int &max0,\n    int &min1, int &max1, int &min2, int &max2)\n\nPrivate methods kept public for template execute functions.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageDecomposeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageDecomposeFilter_Methods,
    "vtkImageDecomposeFilter", modulename,
    NULL, NULL,
    PyvtkImageDecomposeFilter_Doc(),
    PyVTKClass_vtkImageIterateFilterNew(modulename));
  return cls;
}

const char **PyvtkImageDecomposeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImageDecomposeFilter - Filters that execute axes in series.\n\n",
    "Superclass: vtkImageIterateFilter\n\n",
    "This superclass molds the vtkImageIterateFilter superclass so it\niterates over the axes.  The filter uses dimensionality to determine\nhow many axes to execute (starting from x). The filter also provides\nconvenience methods for permuting information retrieved from input,\noutput and vtkImageData.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageDecomposeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDecomposeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageDecomposeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

