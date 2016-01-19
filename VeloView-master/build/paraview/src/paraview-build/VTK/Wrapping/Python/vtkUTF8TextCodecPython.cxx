// python wrapper for vtkUTF8TextCodec
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUTF8TextCodec.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUTF8TextCodec(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUTF8TextCodecNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTextCodecNew
extern "C" { PyObject *PyVTKClass_vtkTextCodecNew(const char *); }
#define DECLARED_PyVTKClass_vtkTextCodecNew
#endif

static const char **PyvtkUTF8TextCodec_Doc();


static PyObject *
PyvtkUTF8TextCodec_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUTF8TextCodec *op = static_cast<vtkUTF8TextCodec *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUTF8TextCodec::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUTF8TextCodec_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUTF8TextCodec *op = static_cast<vtkUTF8TextCodec *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUTF8TextCodec::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUTF8TextCodec_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUTF8TextCodec *op = static_cast<vtkUTF8TextCodec *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUTF8TextCodec *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUTF8TextCodec::NewInstance());

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
PyvtkUTF8TextCodec_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUTF8TextCodec *tempr = vtkUTF8TextCodec::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUTF8TextCodec_Name(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Name");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUTF8TextCodec *op = static_cast<vtkUTF8TextCodec *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->Name() :
      op->vtkUTF8TextCodec::Name());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUTF8TextCodec_CanHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUTF8TextCodec *op = static_cast<vtkUTF8TextCodec *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->CanHandle(temp0) :
      op->vtkUTF8TextCodec::CanHandle(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUTF8TextCodec_Methods[] = {
  {(char*)"GetClassName", PyvtkUTF8TextCodec_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUTF8TextCodec_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUTF8TextCodec_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUTF8TextCodec\nC++: vtkUTF8TextCodec *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUTF8TextCodec_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUTF8TextCodec\nC++: vtkUTF8TextCodec *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Name", PyvtkUTF8TextCodec_Name, METH_VARARGS,
   (char*)"V.Name() -> string\nC++: virtual const char *Name()\n\nThe name this codec goes by - should match the string the factory\nwill take to create it\n"},
  {(char*)"CanHandle", PyvtkUTF8TextCodec_CanHandle, METH_VARARGS,
   (char*)"V.CanHandle(string) -> bool\nC++: virtual bool CanHandle(const char *testStr)\n\nThe name this codec goes by - should match the string the factory\nwill take to create it\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUTF8TextCodec_StaticNew()
{
  return vtkUTF8TextCodec::New();
}

PyObject *PyVTKClass_vtkUTF8TextCodecNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUTF8TextCodec_StaticNew,
    PyvtkUTF8TextCodec_Methods,
    "vtkUTF8TextCodec", modulename,
    NULL, NULL,
    PyvtkUTF8TextCodec_Doc(),
    PyVTKClass_vtkTextCodecNew(modulename));
  return cls;
}

const char **PyvtkUTF8TextCodec_Doc()
{
  static const char *docstring[] = {
    "vtkUTF8TextCodec - Class to read/write UTF-8 text\n\n",
    "Superclass: vtkTextCodec\n\n",
    "A virtual class interface for codecs that readers/writers can rely on\n\nThanks:\n\nThanks to Tim Shed from Sandia National Laboratories for his work on\nthe concepts and to Marcus Hanwell and Jeff Baumes of Kitware for\nkeeping me out of the weeds\n\nSee Also:\n\nvtkUTF8TextCodecFactory\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUTF8TextCodec(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUTF8TextCodecNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUTF8TextCodec", o) != 0)
    {
    Py_DECREF(o);
    }

}

