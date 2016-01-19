// python wrapper for vtkASCIITextCodec
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkASCIITextCodec.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkASCIITextCodec(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkASCIITextCodecNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTextCodecNew
extern "C" { PyObject *PyVTKClass_vtkTextCodecNew(const char *); }
#define DECLARED_PyVTKClass_vtkTextCodecNew
#endif

static const char **PyvtkASCIITextCodec_Doc();


static PyObject *
PyvtkASCIITextCodec_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkASCIITextCodec *op = static_cast<vtkASCIITextCodec *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkASCIITextCodec::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkASCIITextCodec_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkASCIITextCodec *op = static_cast<vtkASCIITextCodec *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkASCIITextCodec::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkASCIITextCodec_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkASCIITextCodec *op = static_cast<vtkASCIITextCodec *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkASCIITextCodec *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkASCIITextCodec::NewInstance());

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
PyvtkASCIITextCodec_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkASCIITextCodec *tempr = vtkASCIITextCodec::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkASCIITextCodec_Name(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Name");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkASCIITextCodec *op = static_cast<vtkASCIITextCodec *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->Name() :
      op->vtkASCIITextCodec::Name());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkASCIITextCodec_CanHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkASCIITextCodec *op = static_cast<vtkASCIITextCodec *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->CanHandle(temp0) :
      op->vtkASCIITextCodec::CanHandle(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkASCIITextCodec_Methods[] = {
  {(char*)"GetClassName", PyvtkASCIITextCodec_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkASCIITextCodec_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkASCIITextCodec_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkASCIITextCodec\nC++: vtkASCIITextCodec *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkASCIITextCodec_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkASCIITextCodec\nC++: vtkASCIITextCodec *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Name", PyvtkASCIITextCodec_Name, METH_VARARGS,
   (char*)"V.Name() -> string\nC++: virtual const char *Name()\n\nThe name this codec goes by - should match the string the factory\nwill take to create it\n"},
  {(char*)"CanHandle", PyvtkASCIITextCodec_CanHandle, METH_VARARGS,
   (char*)"V.CanHandle(string) -> bool\nC++: virtual bool CanHandle(const char *NameString)\n\nThe name this codec goes by - should match the string the factory\nwill take to create it\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkASCIITextCodec_StaticNew()
{
  return vtkASCIITextCodec::New();
}

PyObject *PyVTKClass_vtkASCIITextCodecNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkASCIITextCodec_StaticNew,
    PyvtkASCIITextCodec_Methods,
    "vtkASCIITextCodec", modulename,
    NULL, NULL,
    PyvtkASCIITextCodec_Doc(),
    PyVTKClass_vtkTextCodecNew(modulename));
  return cls;
}

const char **PyvtkASCIITextCodec_Doc()
{
  static const char *docstring[] = {
    "vtkASCIITextCodec - Class to read/write ascii text.\n\n",
    "Superclass: vtkTextCodec\n\n",
    "A virtual class interface for codecs that readers/writers can rely on\n\nThanks:\n\nThanks to Tim Shed from Sandia National Laboratories for his work on\nthe concepts and to Marcus Hanwell and Jeff Baumes of Kitware for\nkeeping me out of the weeds\n\nSee Also:\n\nvtkASCIITextCodecFactory\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkASCIITextCodec(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkASCIITextCodecNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkASCIITextCodec", o) != 0)
    {
    Py_DECREF(o);
    }

}

