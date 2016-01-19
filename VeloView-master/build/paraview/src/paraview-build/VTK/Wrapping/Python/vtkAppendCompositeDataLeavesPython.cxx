// python wrapper for vtkAppendCompositeDataLeaves
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAppendCompositeDataLeaves.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAppendCompositeDataLeaves(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAppendCompositeDataLeavesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCompositeDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataSetAlgorithmNew
#endif

static const char **PyvtkAppendCompositeDataLeaves_Doc();


static PyObject *
PyvtkAppendCompositeDataLeaves_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAppendCompositeDataLeaves::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAppendCompositeDataLeaves::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAppendCompositeDataLeaves *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAppendCompositeDataLeaves::NewInstance());

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
PyvtkAppendCompositeDataLeaves_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAppendCompositeDataLeaves *tempr = vtkAppendCompositeDataLeaves::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_SetAppendFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppendFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAppendFieldData(temp0);
      }
    else
      {
      op->vtkAppendCompositeDataLeaves::SetAppendFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_GetAppendFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAppendFieldData() :
      op->vtkAppendCompositeDataLeaves::GetAppendFieldData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_AppendFieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendFieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AppendFieldDataOn();
      }
    else
      {
      op->vtkAppendCompositeDataLeaves::AppendFieldDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendCompositeDataLeaves_AppendFieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendFieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendCompositeDataLeaves *op = static_cast<vtkAppendCompositeDataLeaves *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AppendFieldDataOff();
      }
    else
      {
      op->vtkAppendCompositeDataLeaves::AppendFieldDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAppendCompositeDataLeaves_Methods[] = {
  {(char*)"GetClassName", PyvtkAppendCompositeDataLeaves_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAppendCompositeDataLeaves_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAppendCompositeDataLeaves_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAppendCompositeDataLeaves\nC++: vtkAppendCompositeDataLeaves *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAppendCompositeDataLeaves_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAppendCompositeDataLeaves\nC++: vtkAppendCompositeDataLeaves *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAppendFieldData", PyvtkAppendCompositeDataLeaves_SetAppendFieldData, METH_VARARGS,
   (char*)"V.SetAppendFieldData(int)\nC++: void SetAppendFieldData(int a)\n\nSet/get whether the field data of each dataset in the composite\ndataset is copied to the output. If AppendFieldData is non-zero,\nthen field data arrays from all the inputs are added to the\noutput. If there are duplicates, the array on the first input\nencountered is taken.\n"},
  {(char*)"GetAppendFieldData", PyvtkAppendCompositeDataLeaves_GetAppendFieldData, METH_VARARGS,
   (char*)"V.GetAppendFieldData() -> int\nC++: int GetAppendFieldData()\n\nSet/get whether the field data of each dataset in the composite\ndataset is copied to the output. If AppendFieldData is non-zero,\nthen field data arrays from all the inputs are added to the\noutput. If there are duplicates, the array on the first input\nencountered is taken.\n"},
  {(char*)"AppendFieldDataOn", PyvtkAppendCompositeDataLeaves_AppendFieldDataOn, METH_VARARGS,
   (char*)"V.AppendFieldDataOn()\nC++: void AppendFieldDataOn()\n\nSet/get whether the field data of each dataset in the composite\ndataset is copied to the output. If AppendFieldData is non-zero,\nthen field data arrays from all the inputs are added to the\noutput. If there are duplicates, the array on the first input\nencountered is taken.\n"},
  {(char*)"AppendFieldDataOff", PyvtkAppendCompositeDataLeaves_AppendFieldDataOff, METH_VARARGS,
   (char*)"V.AppendFieldDataOff()\nC++: void AppendFieldDataOff()\n\nSet/get whether the field data of each dataset in the composite\ndataset is copied to the output. If AppendFieldData is non-zero,\nthen field data arrays from all the inputs are added to the\noutput. If there are duplicates, the array on the first input\nencountered is taken.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAppendCompositeDataLeaves_StaticNew()
{
  return vtkAppendCompositeDataLeaves::New();
}

PyObject *PyVTKClass_vtkAppendCompositeDataLeavesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAppendCompositeDataLeaves_StaticNew,
    PyvtkAppendCompositeDataLeaves_Methods,
    "vtkAppendCompositeDataLeaves", modulename,
    NULL, NULL,
    PyvtkAppendCompositeDataLeaves_Doc(),
    PyVTKClass_vtkCompositeDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAppendCompositeDataLeaves_Doc()
{
  static const char *docstring[] = {
    "vtkAppendCompositeDataLeaves - appends one or more composite datasets\nwith the same structure together into a single output composite\ndataset\n\n",
    "Superclass: vtkCompositeDataSetAlgorithm\n\n",
    "vtkAppendCompositeDataLeaves is a filter that takes input composite\ndatasets with the same structure: (1) the same number of entries and\n-- if any children are composites -- the same constraint holds from\nthem; and (2) the same type of dataset at each position. It then\ncreates an output dataset with the same structure whose leaves\ncontain all the cells from the datasets at the corresponding leaves",
    "\nof the input datasets.\n\nCurrently, this filter only supports \"appending\" of a few types for\nthe leaf nodes and the logic used for each supported data type is as\nfollows:\n\n\\li vtkUnstructuredGrid - appends all unstructured grids from the\n    leaf\n    location on all inputs into a single unstructured grid for the\n    corresponding location in the output composite dataset. PointData\nand\n    CellData",
    " arrays are extracted and appended only if they are\navailable in\n    all datasets.(For example, if one dataset has scalars but another\ndoes\n    not, scalars will not be appended.)\n\n\\li vtkPolyData - appends all polydatas from the leaf location on all\ninputs\n    into a single polydata for the corresponding location in the\noutput\n    composite dataset. PointData and CellData arrays are extracted\nand",
    "\n    appended only if they are available in all datasets.(For example,\nif one\n    dataset has scalars but another does not, scalars will not be\nappended.)\n\n\\li vtkImageData/vtkUniformGrid - simply passes the first non-null\n    grid for a particular location to corresponding location in the\noutput.\n\n\\li vtkTable - simply passes the first non-null vtkTable for a\n    particular\n    location to the co",
    "rresponding location in the output.\n\nOther types of leaf datasets will be ignored and their positions in\nthe output dataset will be NULL pointers.\n\nSee Also:\n\nvtkAppendPolyData vtkAppendFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAppendCompositeDataLeaves(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAppendCompositeDataLeavesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAppendCompositeDataLeaves", o) != 0)
    {
    Py_DECREF(o);
    }

}

