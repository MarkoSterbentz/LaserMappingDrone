// python wrapper for vtkVolumeReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVolumeReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVolumeReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVolumeReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkVolumeReader_Doc();


static PyObject *
PyvtkVolumeReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVolumeReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeReader::NewInstance());

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
PyvtkVolumeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVolumeReader *tempr = vtkVolumeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeReader_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePrefix(temp0);
      }
    else
      {
      op->vtkVolumeReader::SetFilePrefix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeReader_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFilePrefix() :
      op->vtkVolumeReader::GetFilePrefix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeReader_SetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePattern(temp0);
      }
    else
      {
      op->vtkVolumeReader::SetFilePattern(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeReader_GetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFilePattern() :
      op->vtkVolumeReader::GetFilePattern());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeReader_SetImageRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetImageRange(temp0, temp1);
      }
    else
      {
      op->vtkVolumeReader::SetImageRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeReader_SetImageRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetImageRange(temp0);
      }
    else
      {
      op->vtkVolumeReader::SetImageRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeReader_SetImageRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVolumeReader_SetImageRange_s1(self, args);
    case 1:
      return PyvtkVolumeReader_SetImageRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetImageRange");
  return NULL;
}



static PyObject *
PyvtkVolumeReader_GetImageRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetImageRange() :
      op->vtkVolumeReader::GetImageRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeReader_SetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetDataSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVolumeReader::SetDataSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeReader_SetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDataSpacing(temp0);
      }
    else
      {
      op->vtkVolumeReader::SetDataSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeReader_SetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVolumeReader_SetDataSpacing_s1(self, args);
    case 1:
      return PyvtkVolumeReader_SetDataSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSpacing");
  return NULL;
}



static PyObject *
PyvtkVolumeReader_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDataSpacing() :
      op->vtkVolumeReader::GetDataSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeReader_SetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetDataOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVolumeReader::SetDataOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeReader_SetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDataOrigin(temp0);
      }
    else
      {
      op->vtkVolumeReader::SetDataOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeReader_SetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVolumeReader_SetDataOrigin_s1(self, args);
    case 1:
      return PyvtkVolumeReader_SetDataOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataOrigin");
  return NULL;
}



static PyObject *
PyvtkVolumeReader_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetDataOrigin() :
      op->vtkVolumeReader::GetDataOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeReader_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeReader *op = static_cast<vtkVolumeReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkImageData *tempr = op->GetImage(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeReader_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVolumeReader\nC++: vtkVolumeReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeReader\nC++: vtkVolumeReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFilePrefix", PyvtkVolumeReader_SetFilePrefix, METH_VARARGS,
   (char*)"V.SetFilePrefix(string)\nC++: void SetFilePrefix(char *)\n\nSpecify file prefix for the image file(s).\n"},
  {(char*)"GetFilePrefix", PyvtkVolumeReader_GetFilePrefix, METH_VARARGS,
   (char*)"V.GetFilePrefix() -> string\nC++: char *GetFilePrefix()\n\nSpecify file prefix for the image file(s).\n"},
  {(char*)"SetFilePattern", PyvtkVolumeReader_SetFilePattern, METH_VARARGS,
   (char*)"V.SetFilePattern(string)\nC++: void SetFilePattern(char *)\n\nThe sprintf format used to build filename from FilePrefix and\nnumber.\n"},
  {(char*)"GetFilePattern", PyvtkVolumeReader_GetFilePattern, METH_VARARGS,
   (char*)"V.GetFilePattern() -> string\nC++: char *GetFilePattern()\n\nThe sprintf format used to build filename from FilePrefix and\nnumber.\n"},
  {(char*)"SetImageRange", PyvtkVolumeReader_SetImageRange, METH_VARARGS,
   (char*)"V.SetImageRange(int, int)\nC++: void SetImageRange(int, int)\nV.SetImageRange((int, int))\nC++: void SetImageRange(int a[2])\n\n"},
  {(char*)"GetImageRange", PyvtkVolumeReader_GetImageRange, METH_VARARGS,
   (char*)"V.GetImageRange() -> (int, int)\nC++: int *GetImageRange()\n\nSet the range of files to read.\n"},
  {(char*)"SetDataSpacing", PyvtkVolumeReader_SetDataSpacing, METH_VARARGS,
   (char*)"V.SetDataSpacing(float, float, float)\nC++: void SetDataSpacing(double, double, double)\nV.SetDataSpacing((float, float, float))\nC++: void SetDataSpacing(double a[3])\n\n"},
  {(char*)"GetDataSpacing", PyvtkVolumeReader_GetDataSpacing, METH_VARARGS,
   (char*)"V.GetDataSpacing() -> (float, float, float)\nC++: double *GetDataSpacing()\n\nSpecify the spacing for the data.\n"},
  {(char*)"SetDataOrigin", PyvtkVolumeReader_SetDataOrigin, METH_VARARGS,
   (char*)"V.SetDataOrigin(float, float, float)\nC++: void SetDataOrigin(double, double, double)\nV.SetDataOrigin((float, float, float))\nC++: void SetDataOrigin(double a[3])\n\n"},
  {(char*)"GetDataOrigin", PyvtkVolumeReader_GetDataOrigin, METH_VARARGS,
   (char*)"V.GetDataOrigin() -> (float, float, float)\nC++: double *GetDataOrigin()\n\nSpecify the origin for the data.\n"},
  {(char*)"GetImage", PyvtkVolumeReader_GetImage, METH_VARARGS,
   (char*)"V.GetImage(int) -> vtkImageData\nC++: virtual vtkImageData *GetImage(int ImageNumber)\n\nOther objects make use of this method.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkVolumeReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkVolumeReader_Methods,
    "vtkVolumeReader", modulename,
    NULL, NULL,
    PyvtkVolumeReader_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVolumeReader_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeReader - read image files\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkVolumeReader is a source object that reads image files.\n\nVolumeReader creates structured point datasets. The dimension of the\ndataset depends upon the number of files read. Reading a single file\nresults in a 2D image, while reading more than one file results in a\n3D volume.\n\nFile names are created using FilePattern and FilePrefix as follows:\nsprintf (filename, FilePattern, FilePrefix, number); ",
    "where number is\nin the range ImageRange[0] to ImageRange[1]. If ImageRange[1] <=\nImageRange[0], then slice number ImageRange[0] is read. Thus to read\nan image set ImageRange[0] = ImageRange[1] = slice number. The\ndefault behavior is to read a single file (i.e., image slice 1).\n\nThe DataMask instance variable is used to read data files with\nimbedded connectivity or segmentation information. For exa",
    "mple, some\ndata has the high order bit set to indicate connected surface. The\nDataMask allows you to select this data. Other important ivars\ninclude HeaderSize, which allows you to skip over initial info, and\nSwapBytes, which turns on/off byte swapping. Consider using\nvtkImageReader as a replacement.\n\nSee Also:\n\nvtkSliceCubes vtkMarchingCubes vtkPNMReader vtkVolume16Reader\nvtkImageReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

