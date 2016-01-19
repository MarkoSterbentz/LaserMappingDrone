// python wrapper for vtkZLibDataCompressor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkZLibDataCompressor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkZLibDataCompressor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkZLibDataCompressorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataCompressorNew
extern "C" { PyObject *PyVTKClass_vtkDataCompressorNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataCompressorNew
#endif

static const char **PyvtkZLibDataCompressor_Doc();


static PyObject *
PyvtkZLibDataCompressor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkZLibDataCompressor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkZLibDataCompressor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkZLibDataCompressor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkZLibDataCompressor::NewInstance());

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
PyvtkZLibDataCompressor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkZLibDataCompressor *tempr = vtkZLibDataCompressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_GetMaximumCompressionSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCompressionSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    size_t tempr = (ap.IsBound() ?
      op->GetMaximumCompressionSpace(temp0) :
      op->vtkZLibDataCompressor::GetMaximumCompressionSpace(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_SetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompressionLevel(temp0);
      }
    else
      {
      op->vtkZLibDataCompressor::SetCompressionLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_GetCompressionLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevelMinValue() :
      op->vtkZLibDataCompressor::GetCompressionLevelMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_GetCompressionLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevelMaxValue() :
      op->vtkZLibDataCompressor::GetCompressionLevelMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_GetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevel() :
      op->vtkZLibDataCompressor::GetCompressionLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkZLibDataCompressor_Methods[] = {
  {(char*)"GetClassName", PyvtkZLibDataCompressor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkZLibDataCompressor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkZLibDataCompressor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkZLibDataCompressor\nC++: vtkZLibDataCompressor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkZLibDataCompressor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkZLibDataCompressor\nC++: vtkZLibDataCompressor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMaximumCompressionSpace", PyvtkZLibDataCompressor_GetMaximumCompressionSpace, METH_VARARGS,
   (char*)"V.GetMaximumCompressionSpace(int) -> int\nC++: size_t GetMaximumCompressionSpace(size_t size)\n\nGet the maximum space that may be needed to store data of the\ngiven uncompressed size after compression.  This is the minimum\nsize of the output buffer that can be passed to the four-argument\nCompress method.\n"},
  {(char*)"SetCompressionLevel", PyvtkZLibDataCompressor_SetCompressionLevel, METH_VARARGS,
   (char*)"V.SetCompressionLevel(int)\nC++: void SetCompressionLevel(int)\n\nGet/Set the compression level.\n"},
  {(char*)"GetCompressionLevelMinValue", PyvtkZLibDataCompressor_GetCompressionLevelMinValue, METH_VARARGS,
   (char*)"V.GetCompressionLevelMinValue() -> int\nC++: int GetCompressionLevelMinValue()\n\nGet/Set the compression level.\n"},
  {(char*)"GetCompressionLevelMaxValue", PyvtkZLibDataCompressor_GetCompressionLevelMaxValue, METH_VARARGS,
   (char*)"V.GetCompressionLevelMaxValue() -> int\nC++: int GetCompressionLevelMaxValue()\n\nGet/Set the compression level.\n"},
  {(char*)"GetCompressionLevel", PyvtkZLibDataCompressor_GetCompressionLevel, METH_VARARGS,
   (char*)"V.GetCompressionLevel() -> int\nC++: int GetCompressionLevel()\n\nGet/Set the compression level.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkZLibDataCompressor_StaticNew()
{
  return vtkZLibDataCompressor::New();
}

PyObject *PyVTKClass_vtkZLibDataCompressorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkZLibDataCompressor_StaticNew,
    PyvtkZLibDataCompressor_Methods,
    "vtkZLibDataCompressor", modulename,
    NULL, NULL,
    PyvtkZLibDataCompressor_Doc(),
    PyVTKClass_vtkDataCompressorNew(modulename));
  return cls;
}

const char **PyvtkZLibDataCompressor_Doc()
{
  static const char *docstring[] = {
    "vtkZLibDataCompressor - Data compression using zlib.\n\n",
    "Superclass: vtkDataCompressor\n\n",
    "vtkZLibDataCompressor provides a concrete vtkDataCompressor class\nusing zlib for compressing and uncompressing data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkZLibDataCompressor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkZLibDataCompressorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkZLibDataCompressor", o) != 0)
    {
    Py_DECREF(o);
    }

}

