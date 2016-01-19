// python wrapper for vtkSMViewExportHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkSMViewExportHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMViewExportHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMViewExportHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMViewExportHelper_Doc();


static PyObject *
PyvtkSMViewExportHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewExportHelper *op = static_cast<vtkSMViewExportHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMViewExportHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewExportHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewExportHelper *op = static_cast<vtkSMViewExportHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMViewExportHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewExportHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewExportHelper *op = static_cast<vtkSMViewExportHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMViewExportHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMViewExportHelper::NewInstance());

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
PyvtkSMViewExportHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMViewExportHelper *tempr = vtkSMViewExportHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewExportHelper_GetSupportedFileTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportedFileTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewExportHelper *op = static_cast<vtkSMViewExportHelper *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetSupportedFileTypes(temp0) :
      op->vtkSMViewExportHelper::GetSupportedFileTypes(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMViewExportHelper_CreateExporter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateExporter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewExportHelper *op = static_cast<vtkSMViewExportHelper *>(vp);

  char *temp0 = NULL;
  vtkSMViewProxy *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMViewProxy"))
    {
    vtkSMExporterProxy *tempr = (ap.IsBound() ?
      op->CreateExporter(temp0, temp1) :
      op->vtkSMViewExportHelper::CreateExporter(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMViewExportHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkSMViewExportHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMViewExportHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMViewExportHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMViewExportHelper\nC++: vtkSMViewExportHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMViewExportHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMViewExportHelper\nC++: vtkSMViewExportHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSupportedFileTypes", PyvtkSMViewExportHelper_GetSupportedFileTypes, METH_VARARGS,
   (char*)"V.GetSupportedFileTypes(vtkSMViewProxy) -> string\nC++: virtual vtkStdString GetSupportedFileTypes(\n    vtkSMViewProxy *view)\n\nReturns a formatted string with all supported file types for the\ngiven view. An example returned string would look like:\n \"PVD Files (*.pvd);;VTK Files (*.vtk)\"\n \n"},
  {(char*)"CreateExporter", PyvtkSMViewExportHelper_CreateExporter, METH_VARARGS,
   (char*)"V.CreateExporter(string, vtkSMViewProxy) -> vtkSMExporterProxy\nC++: virtual vtkSMExporterProxy *CreateExporter(\n    const char *filename, vtkSMViewProxy *)\n\nExports the view to the given output file. Returns a new exporter\ninstance (or NULL). Caller must release the returned object\nexplicitly.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMViewExportHelper_StaticNew()
{
  return vtkSMViewExportHelper::New();
}

PyObject *PyVTKClass_vtkSMViewExportHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMViewExportHelper_StaticNew,
    PyvtkSMViewExportHelper_Methods,
    "vtkSMViewExportHelper", modulename,
    NULL, NULL,
    PyvtkSMViewExportHelper_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMViewExportHelper_Doc()
{
  static const char *docstring[] = {
    "vtkSMViewExportHelper - helper class to export views.\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMViewExportHelper is a helper class to aid in exporting views.\nYou can create instances of this helper on-demand to query available\nexporters and create and exporter proxy (in same spirit as\nvtkSMWriterFactory, except that there's no globally existing\ninstance).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMViewExportHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMViewExportHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMViewExportHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

