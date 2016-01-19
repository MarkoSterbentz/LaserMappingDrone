// python wrapper for vtkPSciVizDescriptiveStats
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPSciVizDescriptiveStats.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPSciVizDescriptiveStats(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPSciVizDescriptiveStatsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSciVizStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkSciVizStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkSciVizStatisticsNew
#endif

static const char **PyvtkPSciVizDescriptiveStats_Doc();


static PyObject *
PyvtkPSciVizDescriptiveStats_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizDescriptiveStats *op = static_cast<vtkPSciVizDescriptiveStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPSciVizDescriptiveStats::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizDescriptiveStats_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizDescriptiveStats *op = static_cast<vtkPSciVizDescriptiveStats *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPSciVizDescriptiveStats::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizDescriptiveStats_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizDescriptiveStats *op = static_cast<vtkPSciVizDescriptiveStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPSciVizDescriptiveStats *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPSciVizDescriptiveStats::NewInstance());

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
PyvtkPSciVizDescriptiveStats_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPSciVizDescriptiveStats *tempr = vtkPSciVizDescriptiveStats::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizDescriptiveStats_SetSignedDeviations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSignedDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizDescriptiveStats *op = static_cast<vtkPSciVizDescriptiveStats *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSignedDeviations(temp0);
      }
    else
      {
      op->vtkPSciVizDescriptiveStats::SetSignedDeviations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPSciVizDescriptiveStats_GetSignedDeviations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSignedDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizDescriptiveStats *op = static_cast<vtkPSciVizDescriptiveStats *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSignedDeviations() :
      op->vtkPSciVizDescriptiveStats::GetSignedDeviations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPSciVizDescriptiveStats_Methods[] = {
  {(char*)"GetClassName", PyvtkPSciVizDescriptiveStats_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPSciVizDescriptiveStats_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPSciVizDescriptiveStats_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPSciVizDescriptiveStats\nC++: vtkPSciVizDescriptiveStats *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPSciVizDescriptiveStats_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPSciVizDescriptiveStats\nC++: vtkPSciVizDescriptiveStats *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSignedDeviations", PyvtkPSciVizDescriptiveStats_SetSignedDeviations, METH_VARARGS,
   (char*)"V.SetSignedDeviations(int)\nC++: void SetSignedDeviations(int a)\n\n"},
  {(char*)"GetSignedDeviations", PyvtkPSciVizDescriptiveStats_GetSignedDeviations, METH_VARARGS,
   (char*)"V.GetSignedDeviations() -> int\nC++: int GetSignedDeviations()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPSciVizDescriptiveStats_StaticNew()
{
  return vtkPSciVizDescriptiveStats::New();
}

PyObject *PyVTKClass_vtkPSciVizDescriptiveStatsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPSciVizDescriptiveStats_StaticNew,
    PyvtkPSciVizDescriptiveStats_Methods,
    "vtkPSciVizDescriptiveStats", modulename,
    NULL, NULL,
    PyvtkPSciVizDescriptiveStats_Doc(),
    PyVTKClass_vtkSciVizStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPSciVizDescriptiveStats_Doc()
{
  static const char *docstring[] = {
    "vtkPSciVizDescriptiveStats - Provide access to VTK descriptive\nstatistics.\n\n",
    "Superclass: vtkSciVizStatistics\n\n",
    "This filter provides access to the features of\nvtkDescriptiveStatistics. See VTK documentation for details\n\nThanks:\n\nThanks to David Thompson and Philippe Pebay from Sandia National\nLaboratories for implementing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPSciVizDescriptiveStats(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPSciVizDescriptiveStatsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPSciVizDescriptiveStats", o) != 0)
    {
    Py_DECREF(o);
    }

}

