// python wrapper for vtkSMProxyConfigurationWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMProxyConfigurationWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMProxyConfigurationWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMProxyConfigurationWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMProxyConfigurationWriter_Doc();


static PyObject *
PyvtkSMProxyConfigurationWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMProxyConfigurationWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyConfigurationWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxyConfigurationWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyConfigurationWriter::NewInstance());

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
PyvtkSMProxyConfigurationWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMProxyConfigurationWriter *tempr = vtkSMProxyConfigurationWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_SetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetProxy(temp0);
      }
    else
      {
      op->vtkSMProxyConfigurationWriter::SetProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy() :
      op->vtkSMProxyConfigurationWriter::GetProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_SetPropertyIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertyIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  vtkSMPropertyIterator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMPropertyIterator"))
    {
    if (ap.IsBound())
      {
      op->SetPropertyIterator(temp0);
      }
    else
      {
      op->vtkSMProxyConfigurationWriter::SetPropertyIterator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_GetPropertyIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMPropertyIterator *tempr = (ap.IsBound() ?
      op->GetPropertyIterator() :
      op->vtkSMProxyConfigurationWriter::GetPropertyIterator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

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
      op->vtkSMProxyConfigurationWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSMProxyConfigurationWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_SetFileIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileIdentifier(temp0);
      }
    else
      {
      op->vtkSMProxyConfigurationWriter::SetFileIdentifier(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_GetFileIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileIdentifier() :
      op->vtkSMProxyConfigurationWriter::GetFileIdentifier());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_SetFileDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileDescription(temp0);
      }
    else
      {
      op->vtkSMProxyConfigurationWriter::SetFileDescription(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_GetFileDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileDescription() :
      op->vtkSMProxyConfigurationWriter::GetFileDescription());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_SetFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileExtension(temp0);
      }
    else
      {
      op->vtkSMProxyConfigurationWriter::SetFileExtension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_GetFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileExtension() :
      op->vtkSMProxyConfigurationWriter::GetFileExtension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_GetWriterVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriterVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetWriterVersion() :
      op->vtkSMProxyConfigurationWriter::GetWriterVersion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_WriteConfiguration_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->WriteConfiguration() :
      op->vtkSMProxyConfigurationWriter::WriteConfiguration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyConfigurationWriter_WriteConfiguration_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->WriteConfiguration(temp0) :
      op->vtkSMProxyConfigurationWriter::WriteConfiguration(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyConfigurationWriter_WriteConfiguration(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMProxyConfigurationWriter_WriteConfiguration_s1(self, args);
    case 1:
      return PyvtkSMProxyConfigurationWriter_WriteConfiguration_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "WriteConfiguration");
  return NULL;
}


static PyMethodDef PyvtkSMProxyConfigurationWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkSMProxyConfigurationWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMProxyConfigurationWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMProxyConfigurationWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMProxyConfigurationWriter\nC++: vtkSMProxyConfigurationWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMProxyConfigurationWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMProxyConfigurationWriter\nC++: vtkSMProxyConfigurationWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetProxy", PyvtkSMProxyConfigurationWriter_SetProxy, METH_VARARGS,
   (char*)"V.SetProxy(vtkSMProxy)\nC++: virtual void SetProxy(vtkSMProxy *proxy)\n\nSet the proxy to write out.\n"},
  {(char*)"GetProxy", PyvtkSMProxyConfigurationWriter_GetProxy, METH_VARARGS,
   (char*)"V.GetProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetProxy()\n\nSet the proxy to write out.\n"},
  {(char*)"SetPropertyIterator", PyvtkSMProxyConfigurationWriter_SetPropertyIterator, METH_VARARGS,
   (char*)"V.SetPropertyIterator(vtkSMPropertyIterator)\nC++: virtual void SetPropertyIterator(vtkSMPropertyIterator *iter)\n\nSet the ieterator used to traverse properties during the write.\nIf no iterator is set then all properties are written.\n"},
  {(char*)"GetPropertyIterator", PyvtkSMProxyConfigurationWriter_GetPropertyIterator, METH_VARARGS,
   (char*)"V.GetPropertyIterator() -> vtkSMPropertyIterator\nC++: vtkSMPropertyIterator *GetPropertyIterator()\n\nSet the ieterator used to traverse properties during the write.\nIf no iterator is set then all properties are written.\n"},
  {(char*)"SetFileName", PyvtkSMProxyConfigurationWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet/Get the file name.\n"},
  {(char*)"GetFileName", PyvtkSMProxyConfigurationWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet/Get the file name.\n"},
  {(char*)"SetFileIdentifier", PyvtkSMProxyConfigurationWriter_SetFileIdentifier, METH_VARARGS,
   (char*)"V.SetFileIdentifier(string)\nC++: void SetFileIdentifier(char *)\n\nSet/get file meta data.\n"},
  {(char*)"GetFileIdentifier", PyvtkSMProxyConfigurationWriter_GetFileIdentifier, METH_VARARGS,
   (char*)"V.GetFileIdentifier() -> string\nC++: char *GetFileIdentifier()\n\nSet/get file meta data.\n"},
  {(char*)"SetFileDescription", PyvtkSMProxyConfigurationWriter_SetFileDescription, METH_VARARGS,
   (char*)"V.SetFileDescription(string)\nC++: void SetFileDescription(char *)\n\n"},
  {(char*)"GetFileDescription", PyvtkSMProxyConfigurationWriter_GetFileDescription, METH_VARARGS,
   (char*)"V.GetFileDescription() -> string\nC++: char *GetFileDescription()\n\n"},
  {(char*)"SetFileExtension", PyvtkSMProxyConfigurationWriter_SetFileExtension, METH_VARARGS,
   (char*)"V.SetFileExtension(string)\nC++: void SetFileExtension(char *)\n\n"},
  {(char*)"GetFileExtension", PyvtkSMProxyConfigurationWriter_GetFileExtension, METH_VARARGS,
   (char*)"V.GetFileExtension() -> string\nC++: char *GetFileExtension()\n\n"},
  {(char*)"GetWriterVersion", PyvtkSMProxyConfigurationWriter_GetWriterVersion, METH_VARARGS,
   (char*)"V.GetWriterVersion() -> string\nC++: virtual const char *GetWriterVersion()\n\nReturn the writer version string.\n"},
  {(char*)"WriteConfiguration", PyvtkSMProxyConfigurationWriter_WriteConfiguration, METH_VARARGS,
   (char*)"V.WriteConfiguration() -> int\nC++: virtual int WriteConfiguration()\nV.WriteConfiguration(string) -> int\nC++: virtual int WriteConfiguration(const char *fileName)\n\nWrite the proxy's state directly to an XML file, in PV state\nformat.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMProxyConfigurationWriter_StaticNew()
{
  return vtkSMProxyConfigurationWriter::New();
}

PyObject *PyVTKClass_vtkSMProxyConfigurationWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMProxyConfigurationWriter_StaticNew,
    PyvtkSMProxyConfigurationWriter_Methods,
    "vtkSMProxyConfigurationWriter", modulename,
    NULL, NULL,
    PyvtkSMProxyConfigurationWriter_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMProxyConfigurationWriter_Doc()
{
  static const char *docstring[] = {
    "vtkSMProxyConfigurationWriter - Base readers of a vtkSMProxy's\nvtkSMProperty's.\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMProxyConfigurationWriter writes state for properties for a\nsingle proxy. Internally the ParaView state machinery is employed.\n\nThe notion of proxy configuration is similar to state but lighter as\nthe proxy its domains and and its server side objects are assumed to\nalready exist. Configuration also provides subseting mechanism so\nthat properties may be excluded if needed.\n\nSubsetting is achiev",
    "ed through a specialized iterator derived from\nvtkSMPropertyIterator.\n\nSee also:\n\nvtkSMProxyConfigurationReader, vtkSMPropertyIterator,\nvtkSMNamedPropertyIterator\n\nThanks:\n\nThis class was contribued by SciberQuest Inc.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMProxyConfigurationWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMProxyConfigurationWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMProxyConfigurationWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

