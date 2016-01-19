// python wrapper for vtkPVOpenGLExtensionsInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVOpenGLExtensionsInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVOpenGLExtensionsInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVOpenGLExtensionsInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVOpenGLExtensionsInformation_Doc();


static PyObject *
PyvtkPVOpenGLExtensionsInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLExtensionsInformation *op = static_cast<vtkPVOpenGLExtensionsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVOpenGLExtensionsInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOpenGLExtensionsInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLExtensionsInformation *op = static_cast<vtkPVOpenGLExtensionsInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVOpenGLExtensionsInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOpenGLExtensionsInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLExtensionsInformation *op = static_cast<vtkPVOpenGLExtensionsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVOpenGLExtensionsInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVOpenGLExtensionsInformation::NewInstance());

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
PyvtkPVOpenGLExtensionsInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVOpenGLExtensionsInformation *tempr = vtkPVOpenGLExtensionsInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOpenGLExtensionsInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLExtensionsInformation *op = static_cast<vtkPVOpenGLExtensionsInformation *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->CopyFromObject(temp0);
      }
    else
      {
      op->vtkPVOpenGLExtensionsInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOpenGLExtensionsInformation_ExtensionSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtensionSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLExtensionsInformation *op = static_cast<vtkPVOpenGLExtensionsInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->ExtensionSupported(temp0) :
      op->vtkPVOpenGLExtensionsInformation::ExtensionSupported(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVOpenGLExtensionsInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLExtensionsInformation *op = static_cast<vtkPVOpenGLExtensionsInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyToStream(temp0);
      }
    else
      {
      op->vtkPVOpenGLExtensionsInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOpenGLExtensionsInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLExtensionsInformation *op = static_cast<vtkPVOpenGLExtensionsInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyFromStream(temp0);
      }
    else
      {
      op->vtkPVOpenGLExtensionsInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVOpenGLExtensionsInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVOpenGLExtensionsInformation *op = static_cast<vtkPVOpenGLExtensionsInformation *>(vp);

  vtkPVInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
    {
    if (ap.IsBound())
      {
      op->AddInformation(temp0);
      }
    else
      {
      op->vtkPVOpenGLExtensionsInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVOpenGLExtensionsInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVOpenGLExtensionsInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVOpenGLExtensionsInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVOpenGLExtensionsInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVOpenGLExtensionsInformation\nC++: vtkPVOpenGLExtensionsInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVOpenGLExtensionsInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVOpenGLExtensionsInformation\nC++: vtkPVOpenGLExtensionsInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyFromObject", PyvtkPVOpenGLExtensionsInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"ExtensionSupported", PyvtkPVOpenGLExtensionsInformation_ExtensionSupported, METH_VARARGS,
   (char*)"V.ExtensionSupported(string) -> bool\nC++: bool ExtensionSupported(const char *ext)\n\nReturns if the given extension is supported.\n"},
  {(char*)"CopyToStream", PyvtkPVOpenGLExtensionsInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVOpenGLExtensionsInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"AddInformation", PyvtkPVOpenGLExtensionsInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *)\n\nMerge another information object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVOpenGLExtensionsInformation_StaticNew()
{
  return vtkPVOpenGLExtensionsInformation::New();
}

PyObject *PyVTKClass_vtkPVOpenGLExtensionsInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVOpenGLExtensionsInformation_StaticNew,
    PyvtkPVOpenGLExtensionsInformation_Methods,
    "vtkPVOpenGLExtensionsInformation", modulename,
    NULL, NULL,
    PyvtkPVOpenGLExtensionsInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVOpenGLExtensionsInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVOpenGLExtensionsInformation - Information object\n\n",
    "Superclass: vtkPVInformation\n\n",
    "Information object that can be used to obtain OpenGL extension\ninformation. The object from which the information is obtained should\nbe a render window.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVOpenGLExtensionsInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVOpenGLExtensionsInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVOpenGLExtensionsInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

