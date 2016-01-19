// python wrapper for vtkInputStream
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInputStream.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInputStream(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInputStreamNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkInputStream_Doc();


static PyObject *
PyvtkInputStream_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInputStream::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInputStream_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInputStream::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInputStream_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInputStream *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInputStream::NewInstance());

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
PyvtkInputStream_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInputStream *tempr = vtkInputStream::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInputStream_StartReading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartReading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartReading();
      }
    else
      {
      op->vtkInputStream::StartReading();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInputStream_Seek(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Seek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->Seek(temp0) :
      op->vtkInputStream::Seek(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInputStream_Read(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  void  *temp0 = NULL;
  size_t temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    size_t tempr = (ap.IsBound() ?
      op->Read(temp0, temp1) :
      op->vtkInputStream::Read(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInputStream_EndReading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndReading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndReading();
      }
    else
      {
      op->vtkInputStream::EndReading();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInputStream_Methods[] = {
  {(char*)"GetClassName", PyvtkInputStream_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInputStream_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInputStream_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInputStream\nC++: vtkInputStream *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInputStream_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInputStream\nC++: vtkInputStream *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"StartReading", PyvtkInputStream_StartReading, METH_VARARGS,
   (char*)"V.StartReading()\nC++: virtual void StartReading()\n\nCalled after the stream position has been set by the caller, but\nbefore any Seek or Read calls.  The stream position should not be\nadjusted by the caller until after an EndReading call.\n"},
  {(char*)"Seek", PyvtkInputStream_Seek, METH_VARARGS,
   (char*)"V.Seek(int) -> int\nC++: virtual int Seek(vtkTypeInt64 offset)\n\nSeek to the given offset in the input data.  Returns 1 for\nsuccess, 0 for failure.\n"},
  {(char*)"Read", PyvtkInputStream_Read, METH_VARARGS,
   (char*)"V.Read(, int) -> int\nC++: virtual size_t Read(void *data, size_t length)\n\nRead input data of the given length.  Returns amount actually\nread.\n"},
  {(char*)"EndReading", PyvtkInputStream_EndReading, METH_VARARGS,
   (char*)"V.EndReading()\nC++: virtual void EndReading()\n\nCalled after all desired calls to Seek and Read have been made.\nAfter this call, the caller is free to change the position of the\nstream.  Additional reads should not be done until after another\ncall to StartReading.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInputStream_StaticNew()
{
  return vtkInputStream::New();
}

PyObject *PyVTKClass_vtkInputStreamNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInputStream_StaticNew,
    PyvtkInputStream_Methods,
    "vtkInputStream", modulename,
    NULL, NULL,
    PyvtkInputStream_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkInputStream_Doc()
{
  static const char *docstring[] = {
    "vtkInputStream - Wraps a binary input stream with a VTK interface.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkInputStream provides a VTK-style interface wrapping around a\nstandard input stream.  The access methods are virtual so that\nsubclasses can transparently provide decoding of an encoded stream.\nData lengths for Seek and Read calls refer to the length of the input\ndata.  The actual length in the stream may differ for subclasses that\nimplement an encoding scheme.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInputStream(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInputStreamNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInputStream", o) != 0)
    {
    Py_DECREF(o);
    }

}

