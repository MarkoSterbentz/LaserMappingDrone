// python wrapper for vtkBlankStructuredGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBlankStructuredGrid.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBlankStructuredGrid(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBlankStructuredGridNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
#endif

static const char **PyvtkBlankStructuredGrid_Doc();


static PyObject *
PyvtkBlankStructuredGrid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBlankStructuredGrid::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBlankStructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBlankStructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBlankStructuredGrid::NewInstance());

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
PyvtkBlankStructuredGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBlankStructuredGrid *tempr = vtkBlankStructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetMinBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinBlankingValue(temp0);
      }
    else
      {
      op->vtkBlankStructuredGrid::SetMinBlankingValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetMinBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinBlankingValue() :
      op->vtkBlankStructuredGrid::GetMinBlankingValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetMaxBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxBlankingValue(temp0);
      }
    else
      {
      op->vtkBlankStructuredGrid::SetMaxBlankingValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetMaxBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaxBlankingValue() :
      op->vtkBlankStructuredGrid::GetMaxBlankingValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayName(temp0);
      }
    else
      {
      op->vtkBlankStructuredGrid::SetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkBlankStructuredGrid::GetArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetArrayId(temp0);
      }
    else
      {
      op->vtkBlankStructuredGrid::SetArrayId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetArrayId() :
      op->vtkBlankStructuredGrid::GetArrayId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComponent(temp0);
      }
    else
      {
      op->vtkBlankStructuredGrid::SetComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponentMinValue() :
      op->vtkBlankStructuredGrid::GetComponentMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponentMaxValue() :
      op->vtkBlankStructuredGrid::GetComponentMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComponent() :
      op->vtkBlankStructuredGrid::GetComponent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBlankStructuredGrid_Methods[] = {
  {(char*)"GetClassName", PyvtkBlankStructuredGrid_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBlankStructuredGrid_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBlankStructuredGrid_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBlankStructuredGrid\nC++: vtkBlankStructuredGrid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBlankStructuredGrid_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBlankStructuredGrid\nC++: vtkBlankStructuredGrid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMinBlankingValue", PyvtkBlankStructuredGrid_SetMinBlankingValue, METH_VARARGS,
   (char*)"V.SetMinBlankingValue(float)\nC++: void SetMinBlankingValue(double a)\n\nSpecify the lower data value in the data array specified which\nwill be converted into a \"blank\" (or off) value in the blanking\narray.\n"},
  {(char*)"GetMinBlankingValue", PyvtkBlankStructuredGrid_GetMinBlankingValue, METH_VARARGS,
   (char*)"V.GetMinBlankingValue() -> float\nC++: double GetMinBlankingValue()\n\nSpecify the lower data value in the data array specified which\nwill be converted into a \"blank\" (or off) value in the blanking\narray.\n"},
  {(char*)"SetMaxBlankingValue", PyvtkBlankStructuredGrid_SetMaxBlankingValue, METH_VARARGS,
   (char*)"V.SetMaxBlankingValue(float)\nC++: void SetMaxBlankingValue(double a)\n\nSpecify the upper data value in the data array specified which\nwill be converted into a \"blank\" (or off) value in the blanking\narray.\n"},
  {(char*)"GetMaxBlankingValue", PyvtkBlankStructuredGrid_GetMaxBlankingValue, METH_VARARGS,
   (char*)"V.GetMaxBlankingValue() -> float\nC++: double GetMaxBlankingValue()\n\nSpecify the upper data value in the data array specified which\nwill be converted into a \"blank\" (or off) value in the blanking\narray.\n"},
  {(char*)"SetArrayName", PyvtkBlankStructuredGrid_SetArrayName, METH_VARARGS,
   (char*)"V.SetArrayName(string)\nC++: void SetArrayName(char *)\n\nSpecify the data array name to use to generate the blanking\nfield. Alternatively, you can specify the array id. (If both are\nset, the array name takes precedence.)\n"},
  {(char*)"GetArrayName", PyvtkBlankStructuredGrid_GetArrayName, METH_VARARGS,
   (char*)"V.GetArrayName() -> string\nC++: char *GetArrayName()\n\nSpecify the data array name to use to generate the blanking\nfield. Alternatively, you can specify the array id. (If both are\nset, the array name takes precedence.)\n"},
  {(char*)"SetArrayId", PyvtkBlankStructuredGrid_SetArrayId, METH_VARARGS,
   (char*)"V.SetArrayId(int)\nC++: void SetArrayId(int a)\n\nSpecify the data array id to use to generate the blanking field.\nAlternatively, you can specify the array name. (If both are set,\nthe array name takes precedence.)\n"},
  {(char*)"GetArrayId", PyvtkBlankStructuredGrid_GetArrayId, METH_VARARGS,
   (char*)"V.GetArrayId() -> int\nC++: int GetArrayId()\n\nSpecify the data array id to use to generate the blanking field.\nAlternatively, you can specify the array name. (If both are set,\nthe array name takes precedence.)\n"},
  {(char*)"SetComponent", PyvtkBlankStructuredGrid_SetComponent, METH_VARARGS,
   (char*)"V.SetComponent(int)\nC++: void SetComponent(int)\n\nSpecify the component in the data array to use to generate the\nblanking field.\n"},
  {(char*)"GetComponentMinValue", PyvtkBlankStructuredGrid_GetComponentMinValue, METH_VARARGS,
   (char*)"V.GetComponentMinValue() -> int\nC++: int GetComponentMinValue()\n\nSpecify the component in the data array to use to generate the\nblanking field.\n"},
  {(char*)"GetComponentMaxValue", PyvtkBlankStructuredGrid_GetComponentMaxValue, METH_VARARGS,
   (char*)"V.GetComponentMaxValue() -> int\nC++: int GetComponentMaxValue()\n\nSpecify the component in the data array to use to generate the\nblanking field.\n"},
  {(char*)"GetComponent", PyvtkBlankStructuredGrid_GetComponent, METH_VARARGS,
   (char*)"V.GetComponent() -> int\nC++: int GetComponent()\n\nSpecify the component in the data array to use to generate the\nblanking field.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBlankStructuredGrid_StaticNew()
{
  return vtkBlankStructuredGrid::New();
}

PyObject *PyVTKClass_vtkBlankStructuredGridNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBlankStructuredGrid_StaticNew,
    PyvtkBlankStructuredGrid_Methods,
    "vtkBlankStructuredGrid", modulename,
    NULL, NULL,
    PyvtkBlankStructuredGrid_Doc(),
    PyVTKClass_vtkStructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkBlankStructuredGrid_Doc()
{
  static const char *docstring[] = {
    "vtkBlankStructuredGrid - translate point attribute data into a\nblanking field\n\n",
    "Superclass: vtkStructuredGridAlgorithm\n\n",
    "vtkBlankStructuredGrid is a filter that sets the blanking field in a\nvtkStructuredGrid dataset. The blanking field is set by examining a\nspecified point attribute data array (e.g., scalars) and converting\nvalues in the data array to either a \"1\" (visible) or \"0\" (blanked)\nvalue in the blanking array. The values to be blanked are specified\nby giving a min/max range. All data values in the data arra",
    "y\nindicated and laying within the range specified (inclusive on both\nends) are translated to a \"off\" blanking value.\n\nSee Also:\n\nvtkStructuredGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBlankStructuredGrid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBlankStructuredGridNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBlankStructuredGrid", o) != 0)
    {
    Py_DECREF(o);
    }

}

