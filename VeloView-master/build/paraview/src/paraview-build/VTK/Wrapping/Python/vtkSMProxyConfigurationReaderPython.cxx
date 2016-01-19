// python wrapper for vtkSMProxyConfigurationReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMProxyConfigurationReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMProxyConfigurationReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMProxyConfigurationReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMObjectNew
extern "C" { PyObject *PyVTKClass_vtkSMObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMObjectNew
#endif

static const char **PyvtkSMProxyConfigurationReader_Doc();


static PyObject *
PyvtkSMProxyConfigurationReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMProxyConfigurationReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyConfigurationReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxyConfigurationReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyConfigurationReader::NewInstance());

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
PyvtkSMProxyConfigurationReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMProxyConfigurationReader *tempr = vtkSMProxyConfigurationReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

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
      op->vtkSMProxyConfigurationReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSMProxyConfigurationReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_SetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

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
      op->vtkSMProxyConfigurationReader::SetProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy() :
      op->vtkSMProxyConfigurationReader::GetProxy());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_SetFileIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

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
      op->vtkSMProxyConfigurationReader::SetFileIdentifier(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_GetFileIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileIdentifier() :
      op->vtkSMProxyConfigurationReader::GetFileIdentifier());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_SetFileDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

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
      op->vtkSMProxyConfigurationReader::SetFileDescription(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_GetFileDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileDescription() :
      op->vtkSMProxyConfigurationReader::GetFileDescription());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_SetFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

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
      op->vtkSMProxyConfigurationReader::SetFileExtension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_GetFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileExtension() :
      op->vtkSMProxyConfigurationReader::GetFileExtension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_SetValidateProxyType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidateProxyType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValidateProxyType(temp0);
      }
    else
      {
      op->vtkSMProxyConfigurationReader::SetValidateProxyType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_GetValidateProxyType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidateProxyType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetValidateProxyType() :
      op->vtkSMProxyConfigurationReader::GetValidateProxyType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_GetReaderVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReaderVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetReaderVersion() :
      op->vtkSMProxyConfigurationReader::GetReaderVersion());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_CanReadVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->CanReadVersion(temp0) :
      op->vtkSMProxyConfigurationReader::CanReadVersion(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_ReadConfiguration_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->ReadConfiguration() :
      op->vtkSMProxyConfigurationReader::ReadConfiguration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyConfigurationReader_ReadConfiguration_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->ReadConfiguration(temp0) :
      op->vtkSMProxyConfigurationReader::ReadConfiguration(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMProxyConfigurationReader_ReadConfiguration_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    int tempr = (ap.IsBound() ?
      op->ReadConfiguration(temp0) :
      op->vtkSMProxyConfigurationReader::ReadConfiguration(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMProxyConfigurationReader_ReadConfiguration_Methods[] = {
  {NULL, PyvtkSMProxyConfigurationReader_ReadConfiguration_s2, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkSMProxyConfigurationReader_ReadConfiguration_s3, METH_VARARGS,
   (char*)"@O *vtkPVXMLElement"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMProxyConfigurationReader_ReadConfiguration(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMProxyConfigurationReader_ReadConfiguration_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMProxyConfigurationReader_ReadConfiguration_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ReadConfiguration");
  return NULL;
}


static PyMethodDef PyvtkSMProxyConfigurationReader_Methods[] = {
  {(char*)"GetClassName", PyvtkSMProxyConfigurationReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMProxyConfigurationReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMProxyConfigurationReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMProxyConfigurationReader\nC++: vtkSMProxyConfigurationReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMProxyConfigurationReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMProxyConfigurationReader\nC++: vtkSMProxyConfigurationReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkSMProxyConfigurationReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet/Get the file name.\n"},
  {(char*)"GetFileName", PyvtkSMProxyConfigurationReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet/Get the file name.\n"},
  {(char*)"SetProxy", PyvtkSMProxyConfigurationReader_SetProxy, METH_VARARGS,
   (char*)"V.SetProxy(vtkSMProxy)\nC++: virtual void SetProxy(vtkSMProxy *proxy)\n\nSet the proxy to write out.\n"},
  {(char*)"GetProxy", PyvtkSMProxyConfigurationReader_GetProxy, METH_VARARGS,
   (char*)"V.GetProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetProxy()\n\nSet the proxy to write out.\n"},
  {(char*)"SetFileIdentifier", PyvtkSMProxyConfigurationReader_SetFileIdentifier, METH_VARARGS,
   (char*)"V.SetFileIdentifier(string)\nC++: void SetFileIdentifier(char *)\n\nSet/get file meta data.\n"},
  {(char*)"GetFileIdentifier", PyvtkSMProxyConfigurationReader_GetFileIdentifier, METH_VARARGS,
   (char*)"V.GetFileIdentifier() -> string\nC++: char *GetFileIdentifier()\n\nSet/get file meta data.\n"},
  {(char*)"SetFileDescription", PyvtkSMProxyConfigurationReader_SetFileDescription, METH_VARARGS,
   (char*)"V.SetFileDescription(string)\nC++: void SetFileDescription(char *)\n\n"},
  {(char*)"GetFileDescription", PyvtkSMProxyConfigurationReader_GetFileDescription, METH_VARARGS,
   (char*)"V.GetFileDescription() -> string\nC++: char *GetFileDescription()\n\n"},
  {(char*)"SetFileExtension", PyvtkSMProxyConfigurationReader_SetFileExtension, METH_VARARGS,
   (char*)"V.SetFileExtension(string)\nC++: void SetFileExtension(char *)\n\n"},
  {(char*)"GetFileExtension", PyvtkSMProxyConfigurationReader_GetFileExtension, METH_VARARGS,
   (char*)"V.GetFileExtension() -> string\nC++: char *GetFileExtension()\n\n"},
  {(char*)"SetValidateProxyType", PyvtkSMProxyConfigurationReader_SetValidateProxyType, METH_VARARGS,
   (char*)"V.SetValidateProxyType(int)\nC++: void SetValidateProxyType(int a)\n\nTurns on/off proxy type validation. If on then the proxy's type\nis compared with that found in the configuration file. The read\nfails if they do not match. The feature is on by default.\n"},
  {(char*)"GetValidateProxyType", PyvtkSMProxyConfigurationReader_GetValidateProxyType, METH_VARARGS,
   (char*)"V.GetValidateProxyType() -> int\nC++: int GetValidateProxyType()\n\nTurns on/off proxy type validation. If on then the proxy's type\nis compared with that found in the configuration file. The read\nfails if they do not match. The feature is on by default.\n"},
  {(char*)"GetReaderVersion", PyvtkSMProxyConfigurationReader_GetReaderVersion, METH_VARARGS,
   (char*)"V.GetReaderVersion() -> string\nC++: virtual const char *GetReaderVersion()\n\nReturn the reader version.\n"},
  {(char*)"CanReadVersion", PyvtkSMProxyConfigurationReader_CanReadVersion, METH_VARARGS,
   (char*)"V.CanReadVersion(string) -> bool\nC++: virtual bool CanReadVersion(const char *version)\n\nReturn true if the reader can read the specified version.\n"},
  {(char*)"ReadConfiguration", PyvtkSMProxyConfigurationReader_ReadConfiguration, METH_VARARGS,
   (char*)"V.ReadConfiguration() -> int\nC++: virtual int ReadConfiguration()\nV.ReadConfiguration(string) -> int\nC++: virtual int ReadConfiguration(const char *filename)\nV.ReadConfiguration(vtkPVXMLElement) -> int\nC++: virtual int ReadConfiguration(vtkPVXMLElement *xmlStream)\n\nRead the configuration from the file. UpdateVTKObjects is\nintentionally not called so that caller may have full control as\nto when the push from client to server takes place.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMProxyConfigurationReader_StaticNew()
{
  return vtkSMProxyConfigurationReader::New();
}

PyObject *PyVTKClass_vtkSMProxyConfigurationReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMProxyConfigurationReader_StaticNew,
    PyvtkSMProxyConfigurationReader_Methods,
    "vtkSMProxyConfigurationReader", modulename,
    NULL, NULL,
    PyvtkSMProxyConfigurationReader_Doc(),
    PyVTKClass_vtkSMObjectNew(modulename));
  return cls;
}

const char **PyvtkSMProxyConfigurationReader_Doc()
{
  static const char *docstring[] = {
    "vtkSMProxyConfigurationReader - Base readers of a vtkSMProxy's\nvtkSMProperty's.\n\n",
    "Superclass: vtkSMObject\n\n",
    "vtkSMProxyConfigurationReader reads state for properties for a single\nproxy. Internally the ParaView state machinery is employed.\n\nThe notion of proxy configuration is similar to state but lighter as\nthe proxy its domains and and its server side objects are assumed to\nalready exist. Configuration also provides subseting mechanism so\nthat properties may be excluded if needed.\n\nThe subsetting mechan",
    "ism is implemented in the writer, the reader\nsimply reads which ever properties are found.\n\nSee also:\n\nvtkSMProxyConfigurationWriter\n\nThanks:\n\nThis class was contribued by SciberQuest Inc.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMProxyConfigurationReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMProxyConfigurationReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMProxyConfigurationReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

