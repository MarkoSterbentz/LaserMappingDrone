// python wrapper for vtkTIFFWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTIFFWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTIFFWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTIFFWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageWriterNew
extern "C" { PyObject *PyVTKClass_vtkImageWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageWriterNew
#endif

static const char **PyvtkTIFFWriter_Doc();


static PyObject *
PyvtkTIFFWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTIFFWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTIFFWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTIFFWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTIFFWriter::NewInstance());

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
PyvtkTIFFWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTIFFWriter *tempr = vtkTIFFWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompression(temp0);
      }
    else
      {
      op->vtkTIFFWriter::SetCompression(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_GetCompressionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompressionMinValue() :
      op->vtkTIFFWriter::GetCompressionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_GetCompressionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompressionMaxValue() :
      op->vtkTIFFWriter::GetCompressionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_GetCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetCompression() :
      op->vtkTIFFWriter::GetCompression());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompressionToNoCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionToNoCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompressionToNoCompression();
      }
    else
      {
      op->vtkTIFFWriter::SetCompressionToNoCompression();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompressionToPackBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionToPackBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompressionToPackBits();
      }
    else
      {
      op->vtkTIFFWriter::SetCompressionToPackBits();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompressionToJPEG(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionToJPEG");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompressionToJPEG();
      }
    else
      {
      op->vtkTIFFWriter::SetCompressionToJPEG();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompressionToDeflate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionToDeflate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompressionToDeflate();
      }
    else
      {
      op->vtkTIFFWriter::SetCompressionToDeflate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTIFFWriter_SetCompressionToLZW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionToLZW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTIFFWriter *op = static_cast<vtkTIFFWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompressionToLZW();
      }
    else
      {
      op->vtkTIFFWriter::SetCompressionToLZW();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTIFFWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkTIFFWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTIFFWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTIFFWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTIFFWriter\nC++: vtkTIFFWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTIFFWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTIFFWriter\nC++: vtkTIFFWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCompression", PyvtkTIFFWriter_SetCompression, METH_VARARGS,
   (char*)"V.SetCompression(int)\nC++: void SetCompression(int)\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"GetCompressionMinValue", PyvtkTIFFWriter_GetCompressionMinValue, METH_VARARGS,
   (char*)"V.GetCompressionMinValue() -> int\nC++: int GetCompressionMinValue()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"GetCompressionMaxValue", PyvtkTIFFWriter_GetCompressionMaxValue, METH_VARARGS,
   (char*)"V.GetCompressionMaxValue() -> int\nC++: int GetCompressionMaxValue()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"GetCompression", PyvtkTIFFWriter_GetCompression, METH_VARARGS,
   (char*)"V.GetCompression() -> int\nC++: int GetCompression()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"SetCompressionToNoCompression", PyvtkTIFFWriter_SetCompressionToNoCompression, METH_VARARGS,
   (char*)"V.SetCompressionToNoCompression()\nC++: void SetCompressionToNoCompression()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"SetCompressionToPackBits", PyvtkTIFFWriter_SetCompressionToPackBits, METH_VARARGS,
   (char*)"V.SetCompressionToPackBits()\nC++: void SetCompressionToPackBits()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"SetCompressionToJPEG", PyvtkTIFFWriter_SetCompressionToJPEG, METH_VARARGS,
   (char*)"V.SetCompressionToJPEG()\nC++: void SetCompressionToJPEG()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"SetCompressionToDeflate", PyvtkTIFFWriter_SetCompressionToDeflate, METH_VARARGS,
   (char*)"V.SetCompressionToDeflate()\nC++: void SetCompressionToDeflate()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {(char*)"SetCompressionToLZW", PyvtkTIFFWriter_SetCompressionToLZW, METH_VARARGS,
   (char*)"V.SetCompressionToLZW()\nC++: void SetCompressionToLZW()\n\nSet compression type. Sinze LZW compression is patented outside\nUS, the additional work steps have to be taken in order to use\nthat compression.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTIFFWriter_StaticNew()
{
  return vtkTIFFWriter::New();
}

PyObject *PyVTKClass_vtkTIFFWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTIFFWriter_StaticNew,
    PyvtkTIFFWriter_Methods,
    "vtkTIFFWriter", modulename,
    NULL, NULL,
    PyvtkTIFFWriter_Doc(),
    PyVTKClass_vtkImageWriterNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 5; c++)
      {
      static const struct { const char *name; int value; }
        constants[5] = {
          { "NoCompression", vtkTIFFWriter::NoCompression },
          { "PackBits", vtkTIFFWriter::PackBits },
          { "JPEG", vtkTIFFWriter::JPEG },
          { "Deflate", vtkTIFFWriter::Deflate },
          { "LZW", vtkTIFFWriter::LZW },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkTIFFWriter_Doc()
{
  static const char *docstring[] = {
    "vtkTIFFWriter - write out image data as a TIFF file\n\n",
    "Superclass: vtkImageWriter\n\n",
    "vtkTIFFWriter writes image data as a TIFF data file. Data can be\nwritten uncompressed or compressed. Several forms of compression are\nsupported including packed bits, JPEG, deflation, and LZW. (Note: LZW\ncompression is currently under patent in the US and is disabled until\nthe patent expires. However, the mechanism for supporting this\ncompression is available for those with a valid license or to w",
    "hom\nthe patent does not apply.)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTIFFWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTIFFWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTIFFWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

