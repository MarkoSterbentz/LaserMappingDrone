// python wrapper for vtkIdFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkIdFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkIdFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkIdFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkIdFilter_Doc();


static PyObject *
PyvtkIdFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkIdFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIdFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIdFilter::NewInstance());

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
PyvtkIdFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkIdFilter *tempr = vtkIdFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_SetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointIds(temp0);
      }
    else
      {
      op->vtkIdFilter::SetPointIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_GetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPointIds() :
      op->vtkIdFilter::GetPointIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_PointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointIdsOn();
      }
    else
      {
      op->vtkIdFilter::PointIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_PointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointIdsOff();
      }
    else
      {
      op->vtkIdFilter::PointIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_SetCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellIds(temp0);
      }
    else
      {
      op->vtkIdFilter::SetCellIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_GetCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCellIds() :
      op->vtkIdFilter::GetCellIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_CellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CellIdsOn();
      }
    else
      {
      op->vtkIdFilter::CellIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_CellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CellIdsOff();
      }
    else
      {
      op->vtkIdFilter::CellIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_SetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldData(temp0);
      }
    else
      {
      op->vtkIdFilter::SetFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_GetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldData() :
      op->vtkIdFilter::GetFieldData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_FieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FieldDataOn();
      }
    else
      {
      op->vtkIdFilter::FieldDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_FieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FieldDataOff();
      }
    else
      {
      op->vtkIdFilter::FieldDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_SetIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIdsArrayName(temp0);
      }
    else
      {
      op->vtkIdFilter::SetIdsArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdFilter_GetIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetIdsArrayName() :
      op->vtkIdFilter::GetIdsArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkIdFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkIdFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIdFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIdFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkIdFilter\nC++: vtkIdFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIdFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIdFilter\nC++: vtkIdFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPointIds", PyvtkIdFilter_SetPointIds, METH_VARARGS,
   (char*)"V.SetPointIds(int)\nC++: void SetPointIds(int a)\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {(char*)"GetPointIds", PyvtkIdFilter_GetPointIds, METH_VARARGS,
   (char*)"V.GetPointIds() -> int\nC++: int GetPointIds()\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {(char*)"PointIdsOn", PyvtkIdFilter_PointIdsOn, METH_VARARGS,
   (char*)"V.PointIdsOn()\nC++: void PointIdsOn()\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {(char*)"PointIdsOff", PyvtkIdFilter_PointIdsOff, METH_VARARGS,
   (char*)"V.PointIdsOff()\nC++: void PointIdsOff()\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {(char*)"SetCellIds", PyvtkIdFilter_SetCellIds, METH_VARARGS,
   (char*)"V.SetCellIds(int)\nC++: void SetCellIds(int a)\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {(char*)"GetCellIds", PyvtkIdFilter_GetCellIds, METH_VARARGS,
   (char*)"V.GetCellIds() -> int\nC++: int GetCellIds()\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {(char*)"CellIdsOn", PyvtkIdFilter_CellIdsOn, METH_VARARGS,
   (char*)"V.CellIdsOn()\nC++: void CellIdsOn()\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {(char*)"CellIdsOff", PyvtkIdFilter_CellIdsOff, METH_VARARGS,
   (char*)"V.CellIdsOff()\nC++: void CellIdsOff()\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {(char*)"SetFieldData", PyvtkIdFilter_SetFieldData, METH_VARARGS,
   (char*)"V.SetFieldData(int)\nC++: void SetFieldData(int a)\n\nSet/Get the flag which controls whether to generate scalar data\nor field data. If this flag is off, scalar data is generated.\nOtherwise, field data is generated. Default is off.\n"},
  {(char*)"GetFieldData", PyvtkIdFilter_GetFieldData, METH_VARARGS,
   (char*)"V.GetFieldData() -> int\nC++: int GetFieldData()\n\nSet/Get the flag which controls whether to generate scalar data\nor field data. If this flag is off, scalar data is generated.\nOtherwise, field data is generated. Default is off.\n"},
  {(char*)"FieldDataOn", PyvtkIdFilter_FieldDataOn, METH_VARARGS,
   (char*)"V.FieldDataOn()\nC++: void FieldDataOn()\n\nSet/Get the flag which controls whether to generate scalar data\nor field data. If this flag is off, scalar data is generated.\nOtherwise, field data is generated. Default is off.\n"},
  {(char*)"FieldDataOff", PyvtkIdFilter_FieldDataOff, METH_VARARGS,
   (char*)"V.FieldDataOff()\nC++: void FieldDataOff()\n\nSet/Get the flag which controls whether to generate scalar data\nor field data. If this flag is off, scalar data is generated.\nOtherwise, field data is generated. Default is off.\n"},
  {(char*)"SetIdsArrayName", PyvtkIdFilter_SetIdsArrayName, METH_VARARGS,
   (char*)"V.SetIdsArrayName(string)\nC++: void SetIdsArrayName(char *)\n\nSet/Get the name of the Ids array if generated. By default the\nIds are named \"vtkIdFilter_Ids\", but this can be changed with\nthis function.\n"},
  {(char*)"GetIdsArrayName", PyvtkIdFilter_GetIdsArrayName, METH_VARARGS,
   (char*)"V.GetIdsArrayName() -> string\nC++: char *GetIdsArrayName()\n\nSet/Get the name of the Ids array if generated. By default the\nIds are named \"vtkIdFilter_Ids\", but this can be changed with\nthis function.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIdFilter_StaticNew()
{
  return vtkIdFilter::New();
}

PyObject *PyVTKClass_vtkIdFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIdFilter_StaticNew,
    PyvtkIdFilter_Methods,
    "vtkIdFilter", modulename,
    NULL, NULL,
    PyvtkIdFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkIdFilter_Doc()
{
  static const char *docstring[] = {
    "vtkIdFilter - generate scalars or field data from point and cell ids\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkIdFilter is a filter to that generates scalars or field data using\ncell and point ids. That is, the point attribute data scalars or\nfield data are generated from the point ids, and the cell attribute\ndata scalars or field data are generated from the the cell ids.\n\nTypically this filter is used with vtkLabeledDataMapper (and possibly\nvtkSelectVisiblePoints) to create labels for points and cells,",
    " or\nlabels for the point or cell data scalar values.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIdFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIdFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIdFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

