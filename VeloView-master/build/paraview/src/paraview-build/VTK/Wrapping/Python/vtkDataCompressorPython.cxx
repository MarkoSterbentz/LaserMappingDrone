// python wrapper for vtkDataCompressor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDataCompressor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDataCompressor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDataCompressorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDataCompressor_Doc();


static PyObject *
PyvtkDataCompressor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDataCompressor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataCompressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataCompressor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataCompressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataCompressor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataCompressor::NewInstance());

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
PyvtkDataCompressor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDataCompressor *tempr = vtkDataCompressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataCompressor_GetMaximumCompressionSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCompressionSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    size_t tempr = op->GetMaximumCompressionSpace(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataCompressor_Compress_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  unsigned char *temp0 = NULL;
  unsigned char small0[4];
  int size0 = 0;
  size_t temp1;
  unsigned char *temp2 = NULL;
  unsigned char *save2 = NULL;
  unsigned char small2[8];
  int size2 = 0;
  size_t temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned char[size0];
      }
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new unsigned char[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp2, save2, size2);

    size_t tempr = (ap.IsBound() ?
      op->Compress(temp0, temp1, temp2, temp3) :
      op->vtkDataCompressor::Compress(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkDataCompressor_Compress_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  unsigned char *temp0 = NULL;
  unsigned char small0[4];
  int size0 = 0;
  size_t temp1;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned char[size0];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->Compress(temp0, temp1) :
      op->vtkDataCompressor::Compress(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkDataCompressor_Compress(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkDataCompressor_Compress_s1(self, args);
    case 2:
      return PyvtkDataCompressor_Compress_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Compress");
  return NULL;
}



static PyObject *
PyvtkDataCompressor_Uncompress_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Uncompress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  unsigned char *temp0 = NULL;
  unsigned char small0[4];
  int size0 = 0;
  size_t temp1;
  unsigned char *temp2 = NULL;
  unsigned char *save2 = NULL;
  unsigned char small2[8];
  int size2 = 0;
  size_t temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned char[size0];
      }
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new unsigned char[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp2, save2, size2);

    size_t tempr = (ap.IsBound() ?
      op->Uncompress(temp0, temp1, temp2, temp3) :
      op->vtkDataCompressor::Uncompress(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkDataCompressor_Uncompress_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Uncompress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataCompressor *op = static_cast<vtkDataCompressor *>(vp);

  unsigned char *temp0 = NULL;
  unsigned char small0[4];
  int size0 = 0;
  size_t temp1;
  size_t temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned char[size0];
      }
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->Uncompress(temp0, temp1, temp2) :
      op->vtkDataCompressor::Uncompress(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkDataCompressor_Uncompress(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkDataCompressor_Uncompress_s1(self, args);
    case 3:
      return PyvtkDataCompressor_Uncompress_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Uncompress");
  return NULL;
}


static PyMethodDef PyvtkDataCompressor_Methods[] = {
  {(char*)"GetClassName", PyvtkDataCompressor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataCompressor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataCompressor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDataCompressor\nC++: vtkDataCompressor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataCompressor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataCompressor\nC++: vtkDataCompressor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMaximumCompressionSpace", PyvtkDataCompressor_GetMaximumCompressionSpace, METH_VARARGS,
   (char*)"V.GetMaximumCompressionSpace(int) -> int\nC++: virtual size_t GetMaximumCompressionSpace(size_t size)\n\nGet the maximum space that may be needed to store data of the\ngiven uncompressed size after compression.  This is the minimum\nsize of the output buffer that can be passed to the four-argument\nCompress method.\n"},
  {(char*)"Compress", PyvtkDataCompressor_Compress, METH_VARARGS,
   (char*)"V.Compress((int, ...), int, [int, ...], int) -> int\nC++: size_t Compress(unsigned char const *uncompressedData,\n    size_t uncompressedSize, unsigned char *compressedData,\n    size_t compressionSpace)\nV.Compress((int, ...), int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *Compress(\n    unsigned char const *uncompressedData,\n    size_t uncompressedSize)\n\nCompress the given input data buffer into the given output\nbuffer.  The size of the output buffer must be at least as large\nas the value given by GetMaximumCompressionSpace for the given\ninput size.\n"},
  {(char*)"Uncompress", PyvtkDataCompressor_Uncompress, METH_VARARGS,
   (char*)"V.Uncompress((int, ...), int, [int, ...], int) -> int\nC++: size_t Uncompress(unsigned char const *compressedData,\n    size_t compressedSize, unsigned char *uncompressedData,\n    size_t uncompressedSize)\nV.Uncompress((int, ...), int, int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *Uncompress(\n    unsigned char const *compressedData, size_t compressedSize,\n    size_t uncompressedSize)\n\nUncompress the given input data into the given output buffer. The\nsize of the uncompressed data must be known by the caller. It\nshould be transmitted from the compressor by a means outside of\nthis class.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDataCompressorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDataCompressor_Methods,
    "vtkDataCompressor", modulename,
    NULL, NULL,
    PyvtkDataCompressor_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDataCompressor_Doc()
{
  static const char *docstring[] = {
    "vtkDataCompressor - Abstract interface for data compression classes.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDataCompressor provides a universal interface for data\ncompression.  Subclasses provide one compression method and one\ndecompression method.  The public interface to all compressors\nremains the same, and is defined by this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataCompressor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataCompressorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataCompressor", o) != 0)
    {
    Py_DECREF(o);
    }

}

