// python wrapper for vtkBMPReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBMPReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBMPReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBMPReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageReaderNew
extern "C" { PyObject *PyVTKClass_vtkImageReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageReaderNew
#endif

static const char **PyvtkBMPReader_Doc();


static PyObject *
PyvtkBMPReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBMPReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBMPReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBMPReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBMPReader::NewInstance());

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
PyvtkBMPReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBMPReader *tempr = vtkBMPReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDepth() :
      op->vtkBMPReader::GetDepth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkBMPReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkBMPReader::GetFileExtensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkBMPReader::GetDescriptiveName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_SetAllow8BitBMP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllow8BitBMP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllow8BitBMP(temp0);
      }
    else
      {
      op->vtkBMPReader::SetAllow8BitBMP(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_GetAllow8BitBMP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllow8BitBMP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAllow8BitBMP() :
      op->vtkBMPReader::GetAllow8BitBMP());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_Allow8BitBMPOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allow8BitBMPOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Allow8BitBMPOn();
      }
    else
      {
      op->vtkBMPReader::Allow8BitBMPOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_Allow8BitBMPOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allow8BitBMPOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Allow8BitBMPOff();
      }
    else
      {
      op->vtkBMPReader::Allow8BitBMPOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkBMPReader::GetLookupTable());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPReader_GetColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPReader *op = static_cast<vtkBMPReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetColors() :
      op->vtkBMPReader::GetColors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBMPReader_Methods[] = {
  {(char*)"GetClassName", PyvtkBMPReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBMPReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBMPReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBMPReader\nC++: vtkBMPReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBMPReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBMPReader\nC++: vtkBMPReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDepth", PyvtkBMPReader_GetDepth, METH_VARARGS,
   (char*)"V.GetDepth() -> int\nC++: int GetDepth()\n\nReturns the depth of the BMP, either 8 or 24.\n"},
  {(char*)"CanReadFile", PyvtkBMPReader_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *fname)\n\nIs the given file a BMP file?\n"},
  {(char*)"GetFileExtensions", PyvtkBMPReader_GetFileExtensions, METH_VARARGS,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nGet the file extensions for this format. Returns a string with a\nspace separated list of extensions in the format .extension\n"},
  {(char*)"GetDescriptiveName", PyvtkBMPReader_GetDescriptiveName, METH_VARARGS,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nReturn a descriptive name for the file format that might be\nuseful in a GUI.\n"},
  {(char*)"SetAllow8BitBMP", PyvtkBMPReader_SetAllow8BitBMP, METH_VARARGS,
   (char*)"V.SetAllow8BitBMP(int)\nC++: void SetAllow8BitBMP(int a)\n\nIf this flag is set and the BMP reader encounters an 8bit file,\nthe data will be kept as unsigned chars and a lookuptable will be\nexported\n"},
  {(char*)"GetAllow8BitBMP", PyvtkBMPReader_GetAllow8BitBMP, METH_VARARGS,
   (char*)"V.GetAllow8BitBMP() -> int\nC++: int GetAllow8BitBMP()\n\nIf this flag is set and the BMP reader encounters an 8bit file,\nthe data will be kept as unsigned chars and a lookuptable will be\nexported\n"},
  {(char*)"Allow8BitBMPOn", PyvtkBMPReader_Allow8BitBMPOn, METH_VARARGS,
   (char*)"V.Allow8BitBMPOn()\nC++: void Allow8BitBMPOn()\n\nIf this flag is set and the BMP reader encounters an 8bit file,\nthe data will be kept as unsigned chars and a lookuptable will be\nexported\n"},
  {(char*)"Allow8BitBMPOff", PyvtkBMPReader_Allow8BitBMPOff, METH_VARARGS,
   (char*)"V.Allow8BitBMPOff()\nC++: void Allow8BitBMPOff()\n\nIf this flag is set and the BMP reader encounters an 8bit file,\nthe data will be kept as unsigned chars and a lookuptable will be\nexported\n"},
  {(char*)"GetLookupTable", PyvtkBMPReader_GetLookupTable, METH_VARARGS,
   (char*)"V.GetLookupTable() -> vtkLookupTable\nC++: vtkLookupTable *GetLookupTable()\n\n"},
  {(char*)"GetColors", PyvtkBMPReader_GetColors, METH_VARARGS,
   (char*)"V.GetColors() -> (int, ...)\nC++: unsigned char *GetColors()\n\nReturns the color lut.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBMPReader_StaticNew()
{
  return vtkBMPReader::New();
}

PyObject *PyVTKClass_vtkBMPReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBMPReader_StaticNew,
    PyvtkBMPReader_Methods,
    "vtkBMPReader", modulename,
    NULL, NULL,
    PyvtkBMPReader_Doc(),
    PyVTKClass_vtkImageReaderNew(modulename));
  return cls;
}

const char **PyvtkBMPReader_Doc()
{
  static const char *docstring[] = {
    "vtkBMPReader - read Windows BMP files\n\n",
    "Superclass: vtkImageReader\n\n",
    "vtkBMPReader is a source object that reads Windows BMP files. This\nincludes indexed and 24bit bitmaps Usually, all BMPs are converted to\n24bit RGB, but BMPs may be output as 8bit images with a LookupTable\nif the Allow8BitBMP flag is set.\n\nBMPReader creates structured point datasets. The dimension of the\ndataset depends upon the number of files read. Reading a single file\nresults in a 2D image, whi",
    "le reading more than one file results in a\n3D volume.\n\nTo read a volume, files must be of the form \"FileName.<number>\"\n(e.g., foo.bmp.0, foo.bmp.1, ...). You must also specify the image\nrange. This range specifies the beginning and ending files to read\n(range can be any pair of non-negative numbers).\n\nThe default behavior is to read a single file. In this case, the form\nof the file is simply \"File",
    "Name\" (e.g., foo.bmp).\n\nSee Also:\n\nvtkBMPWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBMPReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBMPReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBMPReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

