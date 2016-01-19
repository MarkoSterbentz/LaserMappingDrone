// python wrapper for vtkBase64InputStream
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBase64InputStream.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBase64InputStream(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBase64InputStreamNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInputStreamNew
extern "C" { PyObject *PyVTKClass_vtkInputStreamNew(const char *); }
#define DECLARED_PyVTKClass_vtkInputStreamNew
#endif

static const char **PyvtkBase64InputStream_Doc();


static PyObject *
PyvtkBase64InputStream_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBase64InputStream::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64InputStream_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBase64InputStream::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64InputStream_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBase64InputStream *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBase64InputStream::NewInstance());

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
PyvtkBase64InputStream_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBase64InputStream *tempr = vtkBase64InputStream::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64InputStream_StartReading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartReading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartReading();
      }
    else
      {
      op->vtkBase64InputStream::StartReading();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBase64InputStream_Seek(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Seek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->Seek(temp0) :
      op->vtkBase64InputStream::Seek(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64InputStream_Read(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  void  *temp0 = NULL;
  size_t temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    size_t tempr = (ap.IsBound() ?
      op->Read(temp0, temp1) :
      op->vtkBase64InputStream::Read(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64InputStream_EndReading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndReading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndReading();
      }
    else
      {
      op->vtkBase64InputStream::EndReading();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBase64InputStream_Methods[] = {
  {(char*)"GetClassName", PyvtkBase64InputStream_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBase64InputStream_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBase64InputStream_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBase64InputStream\nC++: vtkBase64InputStream *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBase64InputStream_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBase64InputStream\nC++: vtkBase64InputStream *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"StartReading", PyvtkBase64InputStream_StartReading, METH_VARARGS,
   (char*)"V.StartReading()\nC++: void StartReading()\n\nCalled after the stream position has been set by the caller, but\nbefore any Seek or Read calls.  The stream position should not be\nadjusted by the caller until after an EndReading call.\n"},
  {(char*)"Seek", PyvtkBase64InputStream_Seek, METH_VARARGS,
   (char*)"V.Seek(int) -> int\nC++: int Seek(vtkTypeInt64 offset)\n\nSeek to the given offset in the input data.  Returns 1 for\nsuccess, 0 for failure.\n"},
  {(char*)"Read", PyvtkBase64InputStream_Read, METH_VARARGS,
   (char*)"V.Read(, int) -> int\nC++: size_t Read(void *data, size_t length)\n\nRead input data of the given length.  Returns amount actually\nread.\n"},
  {(char*)"EndReading", PyvtkBase64InputStream_EndReading, METH_VARARGS,
   (char*)"V.EndReading()\nC++: void EndReading()\n\nCalled after all desired calls to Seek and Read have been made.\nAfter this call, the caller is free to change the position of the\nstream.  Additional reads should not be done until after another\ncall to StartReading.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBase64InputStream_StaticNew()
{
  return vtkBase64InputStream::New();
}

PyObject *PyVTKClass_vtkBase64InputStreamNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBase64InputStream_StaticNew,
    PyvtkBase64InputStream_Methods,
    "vtkBase64InputStream", modulename,
    NULL, NULL,
    PyvtkBase64InputStream_Doc(),
    PyVTKClass_vtkInputStreamNew(modulename));
  return cls;
}

const char **PyvtkBase64InputStream_Doc()
{
  static const char *docstring[] = {
    "vtkBase64InputStream - Reads base64-encoded input from a stream.\n\n",
    "Superclass: vtkInputStream\n\n",
    "vtkBase64InputStream implements base64 decoding with the\nvtkInputStream interface.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBase64InputStream(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBase64InputStreamNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBase64InputStream", o) != 0)
    {
    Py_DECREF(o);
    }

}

