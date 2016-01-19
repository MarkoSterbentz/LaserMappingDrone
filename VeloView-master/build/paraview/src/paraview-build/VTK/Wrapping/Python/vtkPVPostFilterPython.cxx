// python wrapper for vtkPVPostFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkPVPostFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVPostFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVPostFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkPVPostFilter_Doc();


static PyObject *
PyvtkPVPostFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPostFilter *op = static_cast<vtkPVPostFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVPostFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPostFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPostFilter *op = static_cast<vtkPVPostFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPostFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPostFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPostFilter *op = static_cast<vtkPVPostFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVPostFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPostFilter::NewInstance());

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
PyvtkPVPostFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVPostFilter *tempr = vtkPVPostFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPostFilter_CreateDefaultExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPostFilter *op = static_cast<vtkPVPostFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExecutive *tempr = (ap.IsBound() ?
      op->CreateDefaultExecutive() :
      op->vtkPVPostFilter::CreateDefaultExecutive());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVPostFilter_DefaultComponentName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DefaultComponentName");

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkStdString tempr = vtkPVPostFilter::DefaultComponentName(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVPostFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPVPostFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVPostFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVPostFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVPostFilter\nC++: vtkPVPostFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVPostFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVPostFilter\nC++: vtkPVPostFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CreateDefaultExecutive", PyvtkPVPostFilter_CreateDefaultExecutive, METH_VARARGS,
   (char*)"V.CreateDefaultExecutive() -> vtkExecutive\nC++: vtkExecutive *CreateDefaultExecutive()\n\nWe need to override this method because the composite data\npipeline is not what we want. Instead we need the\nPVCompositeDataPipeline so that we can figure out what we\nconversion(s) we need to do\n"},
  {(char*)"DefaultComponentName", PyvtkPVPostFilter_DefaultComponentName, METH_VARARGS | METH_STATIC,
   (char*)"V.DefaultComponentName(int, int) -> string\nC++: static vtkStdString DefaultComponentName(int componentNumber,\n     int componentCount)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVPostFilter_StaticNew()
{
  return vtkPVPostFilter::New();
}

PyObject *PyVTKClass_vtkPVPostFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVPostFilter_StaticNew,
    PyvtkPVPostFilter_Methods,
    "vtkPVPostFilter", modulename,
    NULL, NULL,
    PyvtkPVPostFilter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPVPostFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPVPostFilter - Post Filter for on demand conversion\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkPVPostFilter is a filter used for on demand conversion of\nproperties Provide the ability to automatically use a vector\ncomponent as a scalar input property.\n\n\n Interpolate cell centered data to point data, and the inverse if\nneeded by the filter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVPostFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVPostFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVPostFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

