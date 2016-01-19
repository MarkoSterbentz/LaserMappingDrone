// python wrapper for vtkDataEncoder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataEncoder.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataEncoder(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataEncoderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDataEncoder_Doc();


static PyObject *
PyvtkDataEncoder_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataEncoder::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataEncoder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataEncoder::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataEncoder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataEncoder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataEncoder::NewInstance());

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
PyvtkDataEncoder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataEncoder *tempr = vtkDataEncoder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataEncoder_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkDataEncoder::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataEncoder_Flush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Flush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataEncoder *op = static_cast<vtkDataEncoder *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Flush(temp0);
      }
    else
      {
      op->vtkDataEncoder::Flush(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDataEncoder_Methods[] = {
  {(char*)"GetClassName", PyvtkDataEncoder_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataEncoder_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataEncoder_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataEncoder\nC++: vtkDataEncoder *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataEncoder_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataEncoder\nC++: vtkDataEncoder *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkDataEncoder_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nRe-initializes the encoder. This will abort any on going encoding\nthreads and clear internal data-structures.\n"},
  {(char*)"Flush", PyvtkDataEncoder_Flush, METH_VARARGS,
   (char*)"V.Flush(int)\nC++: void Flush(vtkTypeUInt32 key)\n\nFlushes the encoding pipe and blocks till the most recently\npushed image for the particular key has been processed. This call\nwill block. Once this method returns, caller can use\nGetLatestOutput(key) to access the processed output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataEncoder_StaticNew()
{
  return vtkDataEncoder::New();
}

PyObject *PyVTKClass_vtkDataEncoderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataEncoder_StaticNew,
    PyvtkDataEncoder_Methods,
    "vtkDataEncoder", modulename,
    NULL, NULL,
    PyvtkDataEncoder_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDataEncoder_Doc()
{
  static const char *docstring[] = {
    "vtkDataEncoder - class used to compress/encode images using threads.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDataEncoder is used to compress and encode images using threads.\nMultiple images can be pushed into the encoder for compression and\nencoding. We use a vtkTypeUInt32 as the key to identify different\nimage pipes. The images in each pipe will be processed in parallel\nthreads. The latest compressed and encoded image can be accessed\nusing GetLatestOutput().\n\nvtkDataEncoder uses a thread-pool to do t",
    "he compression and encoding\nin parallel.  Note that images may not come out of the vtkDataEncoder\nin the same order as they are pushed in, if an image pushed in at\nN-th location takes longer to compress and encode than that pushed in\nat N+1-th location or if it was pushed in before the N-th location\nwas even taken up for encoding by the a thread in the thread pool.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataEncoder(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataEncoderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataEncoder", o) != 0)
    {
    Py_DECREF(o);
    }

}

