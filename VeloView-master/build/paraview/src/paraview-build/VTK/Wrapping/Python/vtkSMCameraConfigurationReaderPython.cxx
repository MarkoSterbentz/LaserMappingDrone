// python wrapper for vtkSMCameraConfigurationReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMCameraConfigurationReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMCameraConfigurationReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMCameraConfigurationReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMProxyConfigurationReaderNew
extern "C" { PyObject *PyVTKClass_vtkSMProxyConfigurationReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMProxyConfigurationReaderNew
#endif

static const char **PyvtkSMCameraConfigurationReader_Doc();


static PyObject *
PyvtkSMCameraConfigurationReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationReader *op = static_cast<vtkSMCameraConfigurationReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMCameraConfigurationReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraConfigurationReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationReader *op = static_cast<vtkSMCameraConfigurationReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCameraConfigurationReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraConfigurationReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationReader *op = static_cast<vtkSMCameraConfigurationReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMCameraConfigurationReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCameraConfigurationReader::NewInstance());

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
PyvtkSMCameraConfigurationReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMCameraConfigurationReader *tempr = vtkSMCameraConfigurationReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraConfigurationReader_SetRenderViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationReader *op = static_cast<vtkSMCameraConfigurationReader *>(vp);

  vtkSMProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
    {
    if (ap.IsBound())
      {
      op->SetRenderViewProxy(temp0);
      }
    else
      {
      op->vtkSMCameraConfigurationReader::SetRenderViewProxy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCameraConfigurationReader_ReadConfiguration_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationReader *op = static_cast<vtkSMCameraConfigurationReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->ReadConfiguration(temp0) :
      op->vtkSMCameraConfigurationReader::ReadConfiguration(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMCameraConfigurationReader_ReadConfiguration_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationReader *op = static_cast<vtkSMCameraConfigurationReader *>(vp);

  vtkPVXMLElement *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
    {
    int tempr = (ap.IsBound() ?
      op->ReadConfiguration(temp0) :
      op->vtkSMCameraConfigurationReader::ReadConfiguration(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSMCameraConfigurationReader_ReadConfiguration_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationReader *op = static_cast<vtkSMCameraConfigurationReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->ReadConfiguration() :
      op->vtkSMCameraConfigurationReader::ReadConfiguration());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMCameraConfigurationReader_ReadConfiguration_Methods[] = {
  {NULL, PyvtkSMCameraConfigurationReader_ReadConfiguration_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkSMCameraConfigurationReader_ReadConfiguration_s2, METH_VARARGS,
   (char*)"@O *vtkPVXMLElement"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSMCameraConfigurationReader_ReadConfiguration(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMCameraConfigurationReader_ReadConfiguration_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSMCameraConfigurationReader_ReadConfiguration_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ReadConfiguration");
  return NULL;
}


static PyMethodDef PyvtkSMCameraConfigurationReader_Methods[] = {
  {(char*)"GetClassName", PyvtkSMCameraConfigurationReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMCameraConfigurationReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMCameraConfigurationReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMCameraConfigurationReader\nC++: vtkSMCameraConfigurationReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMCameraConfigurationReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMCameraConfigurationReader\nC++: vtkSMCameraConfigurationReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRenderViewProxy", PyvtkSMCameraConfigurationReader_SetRenderViewProxy, METH_VARARGS,
   (char*)"V.SetRenderViewProxy(vtkSMProxy)\nC++: void SetRenderViewProxy(vtkSMProxy *rvProxy)\n\nSet the render view proxy to extract camera properties from.\n"},
  {(char*)"ReadConfiguration", PyvtkSMCameraConfigurationReader_ReadConfiguration, METH_VARARGS,
   (char*)"V.ReadConfiguration(string) -> int\nC++: virtual int ReadConfiguration(const char *filename)\nV.ReadConfiguration(vtkPVXMLElement) -> int\nC++: virtual int ReadConfiguration(vtkPVXMLElement *x)\nV.ReadConfiguration() -> int\nC++: virtual int ReadConfiguration()\n\nRead the named file, and push the properties into the underying\nmanaged render view proxy. This will make sure the renderview is\nupdated after the read.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMCameraConfigurationReader_StaticNew()
{
  return vtkSMCameraConfigurationReader::New();
}

PyObject *PyVTKClass_vtkSMCameraConfigurationReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMCameraConfigurationReader_StaticNew,
    PyvtkSMCameraConfigurationReader_Methods,
    "vtkSMCameraConfigurationReader", modulename,
    NULL, NULL,
    PyvtkSMCameraConfigurationReader_Doc(),
    PyVTKClass_vtkSMProxyConfigurationReaderNew(modulename));
  return cls;
}

const char **PyvtkSMCameraConfigurationReader_Doc()
{
  static const char *docstring[] = {
    "vtkSMCameraConfigurationReader - A reader for XML camera\nconfiguration.\n\n",
    "Superclass: vtkSMProxyConfigurationReader\n\n",
    "A reader for XML camera configuration. Reades camera configuration\nfiles. writen by the vtkSMCameraConfigurationWriter.\n\nSee Also:\n\nvtkSMCameraConfigurationWriter, vtkSMProxyConfigurationReader\n\nThanks:\n\nThis class was contributed by SciberQuest Inc.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMCameraConfigurationReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMCameraConfigurationReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMCameraConfigurationReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

