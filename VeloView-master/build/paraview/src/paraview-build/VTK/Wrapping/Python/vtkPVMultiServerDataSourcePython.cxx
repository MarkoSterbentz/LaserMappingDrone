// python wrapper for vtkPVMultiServerDataSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVMultiServerDataSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVMultiServerDataSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVMultiServerDataSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkPVMultiServerDataSource_Doc();


static PyObject *
PyvtkPVMultiServerDataSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiServerDataSource *op = static_cast<vtkPVMultiServerDataSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVMultiServerDataSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiServerDataSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiServerDataSource *op = static_cast<vtkPVMultiServerDataSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVMultiServerDataSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiServerDataSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiServerDataSource *op = static_cast<vtkPVMultiServerDataSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVMultiServerDataSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVMultiServerDataSource::NewInstance());

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
PyvtkPVMultiServerDataSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVMultiServerDataSource *tempr = vtkPVMultiServerDataSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiServerDataSource_SetExternalProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExternalProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiServerDataSource *op = static_cast<vtkPVMultiServerDataSource *>(vp);

  vtkSMSourceProxy *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->SetExternalProxy(temp0, temp1);
      }
    else
      {
      op->vtkPVMultiServerDataSource::SetExternalProxy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiServerDataSource_FetchData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiServerDataSource *op = static_cast<vtkPVMultiServerDataSource *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->FetchData(temp0);
      }
    else
      {
      op->vtkPVMultiServerDataSource::FetchData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVMultiServerDataSource_Methods[] = {
  {(char*)"GetClassName", PyvtkPVMultiServerDataSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVMultiServerDataSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVMultiServerDataSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVMultiServerDataSource\nC++: vtkPVMultiServerDataSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVMultiServerDataSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVMultiServerDataSource\nC++: vtkPVMultiServerDataSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetExternalProxy", PyvtkPVMultiServerDataSource_SetExternalProxy, METH_VARARGS,
   (char*)"V.SetExternalProxy(vtkSMSourceProxy, int)\nC++: virtual void SetExternalProxy(\n    vtkSMSourceProxy *proxyFromAnotherServer, int portNumber=0)\n\nBind vtk object with a given external proxy\n"},
  {(char*)"FetchData", PyvtkPVMultiServerDataSource_FetchData, METH_VARARGS,
   (char*)"V.FetchData(vtkDataObject)\nC++: virtual void FetchData(vtkDataObject *dataObjectToFill)\n\nMethod that need to be called when the data has changed and need\nto be updated...\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVMultiServerDataSource_StaticNew()
{
  return vtkPVMultiServerDataSource::New();
}

PyObject *PyVTKClass_vtkPVMultiServerDataSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVMultiServerDataSource_StaticNew,
    PyvtkPVMultiServerDataSource_Methods,
    "vtkPVMultiServerDataSource", modulename,
    NULL, NULL,
    PyvtkPVMultiServerDataSource_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPVMultiServerDataSource_Doc()
{
  static const char *docstring[] = {
    "vtkPVMultiServerDataSource\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "VTK class that handle the fetch of remote data\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVMultiServerDataSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVMultiServerDataSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVMultiServerDataSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

