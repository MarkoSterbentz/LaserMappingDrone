// python wrapper for vtkMetaImageWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMetaImageWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkMetaImageWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkMetaImageWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageWriterNew
extern "C" { PyObject *PyVTKClass_vtkImageWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageWriterNew
#endif

static const char **PyvtkMetaImageWriter_Doc();


static PyObject *
PyvtkMetaImageWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkMetaImageWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMetaImageWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMetaImageWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMetaImageWriter::NewInstance());

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
PyvtkMetaImageWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkMetaImageWriter *tempr = vtkMetaImageWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkMetaImageWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMetaImageWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_SetRAWFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRAWFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRAWFileName(temp0);
      }
    else
      {
      op->vtkMetaImageWriter::SetRAWFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_GetRAWFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRAWFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetRAWFileName() :
      op->vtkMetaImageWriter::GetRAWFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_SetCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  bool temp0 = false;
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
      op->vtkMetaImageWriter::SetCompression(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_GetCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetCompression() :
      op->vtkMetaImageWriter::GetCompression());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMetaImageWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaImageWriter *op = static_cast<vtkMetaImageWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write();
      }
    else
      {
      op->vtkMetaImageWriter::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMetaImageWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkMetaImageWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMetaImageWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMetaImageWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkMetaImageWriter\nC++: vtkMetaImageWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMetaImageWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMetaImageWriter\nC++: vtkMetaImageWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkMetaImageWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: virtual void SetFileName(const char *fname)\n\nSpecify file name of meta file\n"},
  {(char*)"GetFileName", PyvtkMetaImageWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name of meta file\n"},
  {(char*)"SetRAWFileName", PyvtkMetaImageWriter_SetRAWFileName, METH_VARARGS,
   (char*)"V.SetRAWFileName(string)\nC++: virtual void SetRAWFileName(const char *fname)\n\nSpecify the file name of the raw image data.\n"},
  {(char*)"GetRAWFileName", PyvtkMetaImageWriter_GetRAWFileName, METH_VARARGS,
   (char*)"V.GetRAWFileName() -> string\nC++: virtual char *GetRAWFileName()\n\nSpecify the file name of the raw image data.\n"},
  {(char*)"SetCompression", PyvtkMetaImageWriter_SetCompression, METH_VARARGS,
   (char*)"V.SetCompression(bool)\nC++: virtual void SetCompression(bool compress)\n\n"},
  {(char*)"GetCompression", PyvtkMetaImageWriter_GetCompression, METH_VARARGS,
   (char*)"V.GetCompression() -> bool\nC++: virtual bool GetCompression(void)\n\n"},
  {(char*)"Write", PyvtkMetaImageWriter_Write, METH_VARARGS,
   (char*)"V.Write()\nC++: virtual void Write()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMetaImageWriter_StaticNew()
{
  return vtkMetaImageWriter::New();
}

PyObject *PyVTKClass_vtkMetaImageWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMetaImageWriter_StaticNew,
    PyvtkMetaImageWriter_Methods,
    "vtkMetaImageWriter", modulename,
    NULL, NULL,
    PyvtkMetaImageWriter_Doc(),
    PyVTKClass_vtkImageWriterNew(modulename));
  return cls;
}

const char **PyvtkMetaImageWriter_Doc()
{
  static const char *docstring[] = {
    "vtkMetaImageWriter - write a binary UNC meta image data\n\n",
    "Superclass: vtkImageWriter\n\n",
    "One of the formats for which a reader is already available in the\ntoolkit is the MetaImage file format. This is a fairly simple yet\npowerful format consisting of a text header and a binary data\nsection. The following instructions describe how you can write a\nMetaImage header for the data that you download from the BrainWeb\npage.\n\nThe minimal structure of the MetaImage header is the following:\n\n\n  ",
    " NDims = 3\n   DimSize = 181 217 181\n   ElementType = MET_UCHAR\n   ElementSpacing = 1.0 1.0 1.0\n   ElementByteOrderMSB = False\n   ElementDataFile = brainweb1.raw\n\n* NDims indicate that this is a 3D image. ITK can handle images of\n  arbitrary dimension.\n* DimSize indicates the size of the volume in pixels along each\n  direction.\n* ElementType indicate the primitive type used for pixels. In this\n  ca",
    "se is \"unsigned char\", implying that the data is digitized in 8\n  bits / pixel.\n* ElementSpacing indicates the physical separation between the center\nof one pixel and the center of the next pixel along each direction in\nspace. The units used are millimeters.\n* ElementByteOrderMSB indicates is the data is encoded in little or\n  big endian order. You might want to play with this value when\n  moving ",
    "data between different computer platforms.\n* ElementDataFile is the name of the file containing the raw binary\n  data of the image. This file must be in the same directory as the\n  header.\n\nMetaImage headers are expected to have extension: \".mha\" or \".mhd\"\n\nOnce you write this header text file, it should be possible to read\nthe image into your ITK based application using the\nitk::FileIOToImageFilt",
    "er class.\n\nCaveats:\n\nSee Also:\n\nvtkImageWriter vtkMetaImageReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMetaImageWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMetaImageWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMetaImageWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

