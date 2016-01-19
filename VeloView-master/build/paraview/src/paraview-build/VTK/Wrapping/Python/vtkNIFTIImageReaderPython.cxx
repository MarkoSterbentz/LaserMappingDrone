// python wrapper for vtkNIFTIImageReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkNIFTIImageReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNIFTIImageReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNIFTIImageReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageReader2New
extern "C" { PyObject *PyVTKClass_vtkImageReader2New(const char *); }
#define DECLARED_PyVTKClass_vtkImageReader2New
#endif

static const char **PyvtkNIFTIImageReader_Doc();


static PyObject *
PyvtkNIFTIImageReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNIFTIImageReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNIFTIImageReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNIFTIImageReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNIFTIImageReader::NewInstance());

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
PyvtkNIFTIImageReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNIFTIImageReader *tempr = vtkNIFTIImageReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkNIFTIImageReader::GetFileExtensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkNIFTIImageReader::GetDescriptiveName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkNIFTIImageReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetTimeAsVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeAsVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetTimeAsVector() :
      op->vtkNIFTIImageReader::GetTimeAsVector());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_SetTimeAsVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeAsVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeAsVector(temp0);
      }
    else
      {
      op->vtkNIFTIImageReader::SetTimeAsVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_TimeAsVectorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimeAsVectorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TimeAsVectorOn();
      }
    else
      {
      op->vtkNIFTIImageReader::TimeAsVectorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_TimeAsVectorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimeAsVectorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TimeAsVectorOff();
      }
    else
      {
      op->vtkNIFTIImageReader::TimeAsVectorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetTimeDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeDimension() :
      op->vtkNIFTIImageReader::GetTimeDimension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetTimeSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTimeSpacing() :
      op->vtkNIFTIImageReader::GetTimeSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRescaleSlope() :
      op->vtkNIFTIImageReader::GetRescaleSlope());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetRescaleIntercept(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleIntercept");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetRescaleIntercept() :
      op->vtkNIFTIImageReader::GetRescaleIntercept());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetQFac(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFac");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetQFac() :
      op->vtkNIFTIImageReader::GetQFac());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetQFormMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFormMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetQFormMatrix() :
      op->vtkNIFTIImageReader::GetQFormMatrix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetSFormMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSFormMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetSFormMatrix() :
      op->vtkNIFTIImageReader::GetSFormMatrix());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetNIFTIHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNIFTIHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNIFTIImageHeader *tempr = (ap.IsBound() ?
      op->GetNIFTIHeader() :
      op->vtkNIFTIImageReader::GetNIFTIHeader());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkNIFTIImageReader_Methods[] = {
  {(char*)"GetClassName", PyvtkNIFTIImageReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStatic method for construction.\n"},
  {(char*)"IsA", PyvtkNIFTIImageReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStatic method for construction.\n"},
  {(char*)"NewInstance", PyvtkNIFTIImageReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNIFTIImageReader\nC++: vtkNIFTIImageReader *NewInstance()\n\nStatic method for construction.\n"},
  {(char*)"SafeDownCast", PyvtkNIFTIImageReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNIFTIImageReader\nC++: vtkNIFTIImageReader *SafeDownCast(vtkObject* o)\n\nStatic method for construction.\n"},
  {(char*)"GetFileExtensions", PyvtkNIFTIImageReader_GetFileExtensions, METH_VARARGS,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nValid extensions for this file type.\n"},
  {(char*)"GetDescriptiveName", PyvtkNIFTIImageReader_GetDescriptiveName, METH_VARARGS,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nReturn a descriptive name that might be useful in a GUI.\n"},
  {(char*)"CanReadFile", PyvtkNIFTIImageReader_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *filename)\n\nReturn true if this reader can read the given file.\n"},
  {(char*)"GetTimeAsVector", PyvtkNIFTIImageReader_GetTimeAsVector, METH_VARARGS,
   (char*)"V.GetTimeAsVector() -> bool\nC++: bool GetTimeAsVector()\n\nRead the time dimension as scalar components (default: Off). If\nthis is on, then each time point will be stored as a component in\nthe image data.  If the file has both a time dimension and a\nvector dimension, then the number of components will be the\nproduct of these two dimensions, i.e. the components will store a\nsequence of vectors.\n"},
  {(char*)"SetTimeAsVector", PyvtkNIFTIImageReader_SetTimeAsVector, METH_VARARGS,
   (char*)"V.SetTimeAsVector(bool)\nC++: void SetTimeAsVector(bool a)\n\nRead the time dimension as scalar components (default: Off). If\nthis is on, then each time point will be stored as a component in\nthe image data.  If the file has both a time dimension and a\nvector dimension, then the number of components will be the\nproduct of these two dimensions, i.e. the components will store a\nsequence of vectors.\n"},
  {(char*)"TimeAsVectorOn", PyvtkNIFTIImageReader_TimeAsVectorOn, METH_VARARGS,
   (char*)"V.TimeAsVectorOn()\nC++: void TimeAsVectorOn()\n\nRead the time dimension as scalar components (default: Off). If\nthis is on, then each time point will be stored as a component in\nthe image data.  If the file has both a time dimension and a\nvector dimension, then the number of components will be the\nproduct of these two dimensions, i.e. the components will store a\nsequence of vectors.\n"},
  {(char*)"TimeAsVectorOff", PyvtkNIFTIImageReader_TimeAsVectorOff, METH_VARARGS,
   (char*)"V.TimeAsVectorOff()\nC++: void TimeAsVectorOff()\n\nRead the time dimension as scalar components (default: Off). If\nthis is on, then each time point will be stored as a component in\nthe image data.  If the file has both a time dimension and a\nvector dimension, then the number of components will be the\nproduct of these two dimensions, i.e. the components will store a\nsequence of vectors.\n"},
  {(char*)"GetTimeDimension", PyvtkNIFTIImageReader_GetTimeDimension, METH_VARARGS,
   (char*)"V.GetTimeDimension() -> int\nC++: int GetTimeDimension()\n\nGet the time dimension that was stored in the NIFTI header.\n"},
  {(char*)"GetTimeSpacing", PyvtkNIFTIImageReader_GetTimeSpacing, METH_VARARGS,
   (char*)"V.GetTimeSpacing() -> float\nC++: double GetTimeSpacing()\n\nGet the time dimension that was stored in the NIFTI header.\n"},
  {(char*)"GetRescaleSlope", PyvtkNIFTIImageReader_GetRescaleSlope, METH_VARARGS,
   (char*)"V.GetRescaleSlope() -> float\nC++: double GetRescaleSlope()\n\nGet the slope and intercept for rescaling the scalar values.\nThese values allow calibration of the data to real values. Use\nthe equation v = u*RescaleSlope + RescaleIntercept. This directly\nreturns the values stored in the scl_slope and scl_inter fields\nin the NIFTI header.\n"},
  {(char*)"GetRescaleIntercept", PyvtkNIFTIImageReader_GetRescaleIntercept, METH_VARARGS,
   (char*)"V.GetRescaleIntercept() -> float\nC++: double GetRescaleIntercept()\n\nGet the slope and intercept for rescaling the scalar values.\nThese values allow calibration of the data to real values. Use\nthe equation v = u*RescaleSlope + RescaleIntercept. This directly\nreturns the values stored in the scl_slope and scl_inter fields\nin the NIFTI header.\n"},
  {(char*)"GetQFac", PyvtkNIFTIImageReader_GetQFac, METH_VARARGS,
   (char*)"V.GetQFac() -> float\nC++: double GetQFac()\n\nQFac gives the slice order in the NIFTI file versus the VTK\nimage. If QFac is -1, then the VTK slice index J is related to\nthe NIFTI slice index j by the equation J = (num_slices - j - 1).\n VTK requires the slices to be ordered so that the voxel indices\n(I,J,K) provide a right-handed coordinate system, whereas NIFTI\ndoes not.  Instead, NIFTI stores a factor called \"qfac\" in the\nheader to signal when the (i,j,k) indices form a left-handed\ncoordinate system.  QFac will only ever have values of +1 or -1.\n"},
  {(char*)"GetQFormMatrix", PyvtkNIFTIImageReader_GetQFormMatrix, METH_VARARGS,
   (char*)"V.GetQFormMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetQFormMatrix()\n\nGet a matrix that gives the \"qform\" orientation and offset for\nthe data. If no qform matrix was stored in the file, the return\nvalue is NULL. This matrix will transform VTK data coordinates\ninto the NIFTI oriented data coordinates, where +X points right,\n+Y points anterior (toward the front), and +Z points superior\n(toward the head). The qform matrix will always have a positive\ndeterminant. The offset that is stored in the matrix gives the\nposition of the first pixel in the first slice of the VTK image\ndata.  Note that if QFac is -1, then the first slice in the VTK\nimage data is the last slice in the NIFTI file, and the Z offset\nwill automatically be adjusted to compensate for this.\n"},
  {(char*)"GetSFormMatrix", PyvtkNIFTIImageReader_GetSFormMatrix, METH_VARARGS,
   (char*)"V.GetSFormMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetSFormMatrix()\n\nGet a matrix that gives the \"sform\" orientation and offset for\nthe data. If no sform matrix was stored in the file, the return\nvalue is NULL. Like the qform matrix, this matrix will transform\nVTK data coordinates into a NIFTI coordinate system.  Unlike the\nqform matrix, the sform matrix can contain scaling information\nand can even (rarely) have a negative determinant, i.e. a flip. \nThis matrix is modified slightly as compared to the sform matrix\nstored in the NIFTI header: the pixdim pixel spacing is factored\nout.  Also, if QFac is -1, then the VTK slices are in reverse\norder as compared to the NIFTI slices, hence as compared to the\nsform matrix stored in the header, the third column of this\nmatrix is multiplied by -1 and the Z offset is shifted to\ncompensate for the fact that the last slice has become the first.\n"},
  {(char*)"GetNIFTIHeader", PyvtkNIFTIImageReader_GetNIFTIHeader, METH_VARARGS,
   (char*)"V.GetNIFTIHeader() -> vtkNIFTIImageHeader\nC++: vtkNIFTIImageHeader *GetNIFTIHeader()\n\nGet the raw header information from the NIfTI file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNIFTIImageReader_StaticNew()
{
  return vtkNIFTIImageReader::New();
}

PyObject *PyVTKClass_vtkNIFTIImageReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNIFTIImageReader_StaticNew,
    PyvtkNIFTIImageReader_Methods,
    "vtkNIFTIImageReader", modulename,
    NULL, NULL,
    PyvtkNIFTIImageReader_Doc(),
    PyVTKClass_vtkImageReader2New(modulename));
  return cls;
}

const char **PyvtkNIFTIImageReader_Doc()
{
  static const char *docstring[] = {
    "vtkNIFTIImageReader - Read NIfTI-1 and NIfTI-2 medical image files\n\n",
    "Superclass: vtkImageReader2\n\n",
    "This class reads NIFTI files, either in .nii format or as separate\n.img and .hdr files.  If two files are used, then they can be passed\nby using SetFileNames() instead of SetFileName().  Files ending in\n.gz are decompressed on-the-fly while they are being read.  Files\nwith complex numbers or vector dimensions will be read as\nmulti-component images.  If a NIFTI file has a time dimension, then\nby de",
    "fault only the first image in the time series will be read, but\nthe TimeAsVector flag can be set to read the time steps as vector\ncomponents.  Files in Analyze 7.5 format are also supported by this\nreader.\n\nThanks:\n\nThis class was contributed to VTK by the Calgary Image Processing and\nAnalysis Centre (CIPAC).\n\nSee Also:\n\nvtkNIFTIImageWriter, vtkNIFTIImageHeader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNIFTIImageReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNIFTIImageReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNIFTIImageReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

