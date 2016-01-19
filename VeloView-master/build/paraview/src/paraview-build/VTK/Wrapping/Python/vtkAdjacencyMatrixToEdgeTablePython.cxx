// python wrapper for vtkAdjacencyMatrixToEdgeTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAdjacencyMatrixToEdgeTable.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAdjacencyMatrixToEdgeTable(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAdjacencyMatrixToEdgeTableNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkAdjacencyMatrixToEdgeTable_Doc();


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAdjacencyMatrixToEdgeTable::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAdjacencyMatrixToEdgeTable::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAdjacencyMatrixToEdgeTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAdjacencyMatrixToEdgeTable::NewInstance());

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
PyvtkAdjacencyMatrixToEdgeTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAdjacencyMatrixToEdgeTable *tempr = vtkAdjacencyMatrixToEdgeTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_GetSourceDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSourceDimension() :
      op->vtkAdjacencyMatrixToEdgeTable::GetSourceDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_SetSourceDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSourceDimension(temp0);
      }
    else
      {
      op->vtkAdjacencyMatrixToEdgeTable::SetSourceDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_GetValueArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetValueArrayName() :
      op->vtkAdjacencyMatrixToEdgeTable::GetValueArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_SetValueArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValueArrayName(temp0);
      }
    else
      {
      op->vtkAdjacencyMatrixToEdgeTable::SetValueArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_GetMinimumCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMinimumCount() :
      op->vtkAdjacencyMatrixToEdgeTable::GetMinimumCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_SetMinimumCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumCount(temp0);
      }
    else
      {
      op->vtkAdjacencyMatrixToEdgeTable::SetMinimumCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_GetMinimumThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMinimumThreshold() :
      op->vtkAdjacencyMatrixToEdgeTable::GetMinimumThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_SetMinimumThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumThreshold(temp0);
      }
    else
      {
      op->vtkAdjacencyMatrixToEdgeTable::SetMinimumThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAdjacencyMatrixToEdgeTable_Methods[] = {
  {(char*)"GetClassName", PyvtkAdjacencyMatrixToEdgeTable_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAdjacencyMatrixToEdgeTable_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAdjacencyMatrixToEdgeTable_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAdjacencyMatrixToEdgeTable\nC++: vtkAdjacencyMatrixToEdgeTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAdjacencyMatrixToEdgeTable_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAdjacencyMatrixToEdgeTable\nC++: vtkAdjacencyMatrixToEdgeTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSourceDimension", PyvtkAdjacencyMatrixToEdgeTable_GetSourceDimension, METH_VARARGS,
   (char*)"V.GetSourceDimension() -> int\nC++: vtkIdType GetSourceDimension()\n\nSpecifies whether rows or columns become the \"source\" in the\noutput edge table. 0 = rows, 1 = columns.  Default: 0\n"},
  {(char*)"SetSourceDimension", PyvtkAdjacencyMatrixToEdgeTable_SetSourceDimension, METH_VARARGS,
   (char*)"V.SetSourceDimension(int)\nC++: void SetSourceDimension(vtkIdType a)\n\nSpecifies whether rows or columns become the \"source\" in the\noutput edge table. 0 = rows, 1 = columns.  Default: 0\n"},
  {(char*)"GetValueArrayName", PyvtkAdjacencyMatrixToEdgeTable_GetValueArrayName, METH_VARARGS,
   (char*)"V.GetValueArrayName() -> string\nC++: char *GetValueArrayName()\n\nControls the name of the output table column that contains edge\nweights. Default: \"value\"\n"},
  {(char*)"SetValueArrayName", PyvtkAdjacencyMatrixToEdgeTable_SetValueArrayName, METH_VARARGS,
   (char*)"V.SetValueArrayName(string)\nC++: void SetValueArrayName(char *)\n\nControls the name of the output table column that contains edge\nweights. Default: \"value\"\n"},
  {(char*)"GetMinimumCount", PyvtkAdjacencyMatrixToEdgeTable_GetMinimumCount, METH_VARARGS,
   (char*)"V.GetMinimumCount() -> int\nC++: vtkIdType GetMinimumCount()\n\nSpecifies the minimum number of adjacent edges to include for\neach source vertex. Default: 0\n"},
  {(char*)"SetMinimumCount", PyvtkAdjacencyMatrixToEdgeTable_SetMinimumCount, METH_VARARGS,
   (char*)"V.SetMinimumCount(int)\nC++: void SetMinimumCount(vtkIdType a)\n\nSpecifies the minimum number of adjacent edges to include for\neach source vertex. Default: 0\n"},
  {(char*)"GetMinimumThreshold", PyvtkAdjacencyMatrixToEdgeTable_GetMinimumThreshold, METH_VARARGS,
   (char*)"V.GetMinimumThreshold() -> float\nC++: double GetMinimumThreshold()\n\nSpecifies a minimum threshold that an edge weight must exceed to\nbe included in the output. Default: 0.5\n"},
  {(char*)"SetMinimumThreshold", PyvtkAdjacencyMatrixToEdgeTable_SetMinimumThreshold, METH_VARARGS,
   (char*)"V.SetMinimumThreshold(float)\nC++: void SetMinimumThreshold(double a)\n\nSpecifies a minimum threshold that an edge weight must exceed to\nbe included in the output. Default: 0.5\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAdjacencyMatrixToEdgeTable_StaticNew()
{
  return vtkAdjacencyMatrixToEdgeTable::New();
}

PyObject *PyVTKClass_vtkAdjacencyMatrixToEdgeTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAdjacencyMatrixToEdgeTable_StaticNew,
    PyvtkAdjacencyMatrixToEdgeTable_Methods,
    "vtkAdjacencyMatrixToEdgeTable", modulename,
    NULL, NULL,
    PyvtkAdjacencyMatrixToEdgeTable_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAdjacencyMatrixToEdgeTable_Doc()
{
  static const char *docstring[] = {
    "vtkAdjacencyMatrixToEdgeTable\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "Treats a dense 2-way array of doubles as an adacency matrix and\nconverts it into a vtkTable suitable for use as an edge table with\nvtkTableToGraph.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAdjacencyMatrixToEdgeTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAdjacencyMatrixToEdgeTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAdjacencyMatrixToEdgeTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

