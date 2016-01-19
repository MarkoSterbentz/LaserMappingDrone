// python wrapper for vtkCSVExporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCSVExporter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCSVExporter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCSVExporterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCSVExporter_Doc();


static PyObject *
PyvtkCSVExporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCSVExporter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCSVExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCSVExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCSVExporter::NewInstance());

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
PyvtkCSVExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCSVExporter *tempr = vtkCSVExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVExporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkCSVExporter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCSVExporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCSVExporter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVExporter_SetFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldDelimiter(temp0);
      }
    else
      {
      op->vtkCSVExporter::SetFieldDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCSVExporter_GetFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDelimiter() :
      op->vtkCSVExporter::GetFieldDelimiter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVExporter_Open(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Open() :
      op->vtkCSVExporter::Open());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCSVExporter_WriteHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  vtkFieldData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->WriteHeader(temp0);
      }
    else
      {
      op->vtkCSVExporter::WriteHeader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCSVExporter_WriteData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  vtkFieldData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->WriteData(temp0);
      }
    else
      {
      op->vtkCSVExporter::WriteData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCSVExporter_Close(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Close");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVExporter *op = static_cast<vtkCSVExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Close();
      }
    else
      {
      op->vtkCSVExporter::Close();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCSVExporter_Methods[] = {
  {(char*)"GetClassName", PyvtkCSVExporter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCSVExporter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCSVExporter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCSVExporter\nC++: vtkCSVExporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCSVExporter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCSVExporter\nC++: vtkCSVExporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkCSVExporter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the filename for the file.\n"},
  {(char*)"GetFileName", PyvtkCSVExporter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the filename for the file.\n"},
  {(char*)"SetFieldDelimiter", PyvtkCSVExporter_SetFieldDelimiter, METH_VARARGS,
   (char*)"V.SetFieldDelimiter(string)\nC++: void SetFieldDelimiter(char *)\n\nGet/Set the delimiter use to separate fields (\",\" by default.)\n"},
  {(char*)"GetFieldDelimiter", PyvtkCSVExporter_GetFieldDelimiter, METH_VARARGS,
   (char*)"V.GetFieldDelimiter() -> string\nC++: char *GetFieldDelimiter()\n\nGet/Set the delimiter use to separate fields (\",\" by default.)\n"},
  {(char*)"Open", PyvtkCSVExporter_Open, METH_VARARGS,
   (char*)"V.Open() -> bool\nC++: bool Open()\n\n"},
  {(char*)"WriteHeader", PyvtkCSVExporter_WriteHeader, METH_VARARGS,
   (char*)"V.WriteHeader(vtkFieldData)\nC++: void WriteHeader(vtkFieldData *)\n\n"},
  {(char*)"WriteData", PyvtkCSVExporter_WriteData, METH_VARARGS,
   (char*)"V.WriteData(vtkFieldData)\nC++: void WriteData(vtkFieldData *)\n\n"},
  {(char*)"Close", PyvtkCSVExporter_Close, METH_VARARGS,
   (char*)"V.Close()\nC++: void Close()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCSVExporter_StaticNew()
{
  return vtkCSVExporter::New();
}

PyObject *PyVTKClass_vtkCSVExporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCSVExporter_StaticNew,
    PyvtkCSVExporter_Methods,
    "vtkCSVExporter", modulename,
    NULL, NULL,
    PyvtkCSVExporter_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCSVExporter_Doc()
{
  static const char *docstring[] = {
    "vtkCSVExporter - exporter used to save vtkFieldData as CSV.\n\n",
    "Superclass: vtkObject\n\n",
    "This is used by vtkSMCSVExporterProxy to export the data shown in the\nspreadsheet view as a CSV.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCSVExporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCSVExporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCSVExporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

