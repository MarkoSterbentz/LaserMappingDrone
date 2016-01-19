// python wrapper for vtkOutputStream
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOutputStream.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOutputStream(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOutputStreamNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkOutputStream_Doc();


static PyObject *
PyvtkOutputStream_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputStream *op = static_cast<vtkOutputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOutputStream::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputStream_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputStream *op = static_cast<vtkOutputStream *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOutputStream::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputStream_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputStream *op = static_cast<vtkOutputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOutputStream *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOutputStream::NewInstance());

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
PyvtkOutputStream_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOutputStream *tempr = vtkOutputStream::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputStream_StartWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputStream *op = static_cast<vtkOutputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->StartWriting() :
      op->vtkOutputStream::StartWriting());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputStream_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputStream *op = static_cast<vtkOutputStream *>(vp);

  void  *temp0 = NULL;
  size_t temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->Write(temp0, temp1) :
      op->vtkOutputStream::Write(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputStream_EndWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputStream *op = static_cast<vtkOutputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->EndWriting() :
      op->vtkOutputStream::EndWriting());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOutputStream_Methods[] = {
  {(char*)"GetClassName", PyvtkOutputStream_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOutputStream_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOutputStream_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOutputStream\nC++: vtkOutputStream *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOutputStream_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOutputStream\nC++: vtkOutputStream *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"StartWriting", PyvtkOutputStream_StartWriting, METH_VARARGS,
   (char*)"V.StartWriting() -> int\nC++: virtual int StartWriting()\n\nCalled after the stream position has been set by the caller, but\nbefore any Write calls.  The stream position should not be\nadjusted by the caller until after an EndWriting call.\n"},
  {(char*)"Write", PyvtkOutputStream_Write, METH_VARARGS,
   (char*)"V.Write(, int) -> int\nC++: virtual int Write(void const *data, size_t length)\n\nWrite output data of the given length.\n"},
  {(char*)"EndWriting", PyvtkOutputStream_EndWriting, METH_VARARGS,
   (char*)"V.EndWriting() -> int\nC++: virtual int EndWriting()\n\nCalled after all desired calls to Write have been made.  After\nthis call, the caller is free to change the position of the\nstream.  Additional writes should not be done until after another\ncall to StartWriting.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOutputStream_StaticNew()
{
  return vtkOutputStream::New();
}

PyObject *PyVTKClass_vtkOutputStreamNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOutputStream_StaticNew,
    PyvtkOutputStream_Methods,
    "vtkOutputStream", modulename,
    NULL, NULL,
    PyvtkOutputStream_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkOutputStream_Doc()
{
  static const char *docstring[] = {
    "vtkOutputStream - Wraps a binary output stream with a VTK interface.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkOutputStream provides a VTK-style interface wrapping around a\nstandard output stream.  The access methods are virtual so that\nsubclasses can transparently provide encoding of the output.  Data\nlengths for Write calls refer to the length of the data in memory.\nThe actual length in the stream may differ for subclasses that\nimplement an encoding scheme.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOutputStream(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOutputStreamNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOutputStream", o) != 0)
    {
    Py_DECREF(o);
    }

}

