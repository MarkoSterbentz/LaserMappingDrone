// python wrapper for vtkNetCDFCFReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkNetCDFCFReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNetCDFCFReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNetCDFCFReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkNetCDFReaderNew
extern "C" { PyObject *PyVTKClass_vtkNetCDFReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkNetCDFReaderNew
#endif

static const char **PyvtkNetCDFCFReader_Doc();


static PyObject *
PyvtkNetCDFCFReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNetCDFCFReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNetCDFCFReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNetCDFCFReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNetCDFCFReader::NewInstance());

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
PyvtkNetCDFCFReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNetCDFCFReader *tempr = vtkNetCDFCFReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_GetSphericalCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphericalCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSphericalCoordinates() :
      op->vtkNetCDFCFReader::GetSphericalCoordinates());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetSphericalCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphericalCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSphericalCoordinates(temp0);
      }
    else
      {
      op->vtkNetCDFCFReader::SetSphericalCoordinates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SphericalCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SphericalCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SphericalCoordinatesOn();
      }
    else
      {
      op->vtkNetCDFCFReader::SphericalCoordinatesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SphericalCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SphericalCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SphericalCoordinatesOff();
      }
    else
      {
      op->vtkNetCDFCFReader::SphericalCoordinatesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_GetVerticalScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVerticalScale() :
      op->vtkNetCDFCFReader::GetVerticalScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetVerticalScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVerticalScale(temp0);
      }
    else
      {
      op->vtkNetCDFCFReader::SetVerticalScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_GetVerticalBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetVerticalBias() :
      op->vtkNetCDFCFReader::GetVerticalBias());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetVerticalBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVerticalBias(temp0);
      }
    else
      {
      op->vtkNetCDFCFReader::SetVerticalBias(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_GetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputType() :
      op->vtkNetCDFCFReader::GetOutputType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputType(temp0);
      }
    else
      {
      op->vtkNetCDFCFReader::SetOutputType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetOutputTypeToAutomatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToAutomatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputTypeToAutomatic();
      }
    else
      {
      op->vtkNetCDFCFReader::SetOutputTypeToAutomatic();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetOutputTypeToImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputTypeToImage();
      }
    else
      {
      op->vtkNetCDFCFReader::SetOutputTypeToImage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetOutputTypeToRectilinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToRectilinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputTypeToRectilinear();
      }
    else
      {
      op->vtkNetCDFCFReader::SetOutputTypeToRectilinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetOutputTypeToStructured(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToStructured");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputTypeToStructured();
      }
    else
      {
      op->vtkNetCDFCFReader::SetOutputTypeToStructured();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_SetOutputTypeToUnstructured(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToUnstructured");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFCFReader *op = static_cast<vtkNetCDFCFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputTypeToUnstructured();
      }
    else
      {
      op->vtkNetCDFCFReader::SetOutputTypeToUnstructured();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFCFReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkNetCDFCFReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkNetCDFCFReader_Methods[] = {
  {(char*)"GetClassName", PyvtkNetCDFCFReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNetCDFCFReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNetCDFCFReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNetCDFCFReader\nC++: vtkNetCDFCFReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNetCDFCFReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNetCDFCFReader\nC++: vtkNetCDFCFReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSphericalCoordinates", PyvtkNetCDFCFReader_GetSphericalCoordinates, METH_VARARGS,
   (char*)"V.GetSphericalCoordinates() -> int\nC++: int GetSphericalCoordinates()\n\nIf on (the default), then 3D data with latitude/longitude\ndimensions will be read in as curvilinear data shaped like\nspherical coordinates. If false, then the data will always be\nread in Cartesian coordinates.\n"},
  {(char*)"SetSphericalCoordinates", PyvtkNetCDFCFReader_SetSphericalCoordinates, METH_VARARGS,
   (char*)"V.SetSphericalCoordinates(int)\nC++: void SetSphericalCoordinates(int a)\n\nIf on (the default), then 3D data with latitude/longitude\ndimensions will be read in as curvilinear data shaped like\nspherical coordinates. If false, then the data will always be\nread in Cartesian coordinates.\n"},
  {(char*)"SphericalCoordinatesOn", PyvtkNetCDFCFReader_SphericalCoordinatesOn, METH_VARARGS,
   (char*)"V.SphericalCoordinatesOn()\nC++: void SphericalCoordinatesOn()\n\nIf on (the default), then 3D data with latitude/longitude\ndimensions will be read in as curvilinear data shaped like\nspherical coordinates. If false, then the data will always be\nread in Cartesian coordinates.\n"},
  {(char*)"SphericalCoordinatesOff", PyvtkNetCDFCFReader_SphericalCoordinatesOff, METH_VARARGS,
   (char*)"V.SphericalCoordinatesOff()\nC++: void SphericalCoordinatesOff()\n\nIf on (the default), then 3D data with latitude/longitude\ndimensions will be read in as curvilinear data shaped like\nspherical coordinates. If false, then the data will always be\nread in Cartesian coordinates.\n"},
  {(char*)"GetVerticalScale", PyvtkNetCDFCFReader_GetVerticalScale, METH_VARARGS,
   (char*)"V.GetVerticalScale() -> float\nC++: double GetVerticalScale()\n\nThe scale and bias of the vertical component of spherical\ncoordinates.  It is common to write the vertical component with\nrespect to something other than the center of the sphere (for\nexample, the surface).  In this case, it might be necessary to\nscale and/or bias the vertical height.  The height will become\nheight*scale + bias.  Keep in mind that if the positive attribute\nof the vertical dimension is down, then the height is negated. By\ndefault the scale is 1 and the bias is 0 (that is, no change). \nThe scaling will be adjusted if it results in invalid (negative)\nvertical values.\n"},
  {(char*)"SetVerticalScale", PyvtkNetCDFCFReader_SetVerticalScale, METH_VARARGS,
   (char*)"V.SetVerticalScale(float)\nC++: void SetVerticalScale(double a)\n\nThe scale and bias of the vertical component of spherical\ncoordinates.  It is common to write the vertical component with\nrespect to something other than the center of the sphere (for\nexample, the surface).  In this case, it might be necessary to\nscale and/or bias the vertical height.  The height will become\nheight*scale + bias.  Keep in mind that if the positive attribute\nof the vertical dimension is down, then the height is negated. By\ndefault the scale is 1 and the bias is 0 (that is, no change). \nThe scaling will be adjusted if it results in invalid (negative)\nvertical values.\n"},
  {(char*)"GetVerticalBias", PyvtkNetCDFCFReader_GetVerticalBias, METH_VARARGS,
   (char*)"V.GetVerticalBias() -> float\nC++: double GetVerticalBias()\n\nThe scale and bias of the vertical component of spherical\ncoordinates.  It is common to write the vertical component with\nrespect to something other than the center of the sphere (for\nexample, the surface).  In this case, it might be necessary to\nscale and/or bias the vertical height.  The height will become\nheight*scale + bias.  Keep in mind that if the positive attribute\nof the vertical dimension is down, then the height is negated. By\ndefault the scale is 1 and the bias is 0 (that is, no change). \nThe scaling will be adjusted if it results in invalid (negative)\nvertical values.\n"},
  {(char*)"SetVerticalBias", PyvtkNetCDFCFReader_SetVerticalBias, METH_VARARGS,
   (char*)"V.SetVerticalBias(float)\nC++: void SetVerticalBias(double a)\n\nThe scale and bias of the vertical component of spherical\ncoordinates.  It is common to write the vertical component with\nrespect to something other than the center of the sphere (for\nexample, the surface).  In this case, it might be necessary to\nscale and/or bias the vertical height.  The height will become\nheight*scale + bias.  Keep in mind that if the positive attribute\nof the vertical dimension is down, then the height is negated. By\ndefault the scale is 1 and the bias is 0 (that is, no change). \nThe scaling will be adjusted if it results in invalid (negative)\nvertical values.\n"},
  {(char*)"GetOutputType", PyvtkNetCDFCFReader_GetOutputType, METH_VARARGS,
   (char*)"V.GetOutputType() -> int\nC++: int GetOutputType()\n\nSet/get the data type of the output.  The index used is taken\nfrom the list of VTK data types in vtkType.h.  Valid types are\nVTK_IMAGE_DATA, VTK_RECTILINEAR_GRID, VTK_STRUCTURED_GRID, and\nVTK_UNSTRUCTURED_GRID.  In addition you can set the type to -1\n(the default), and this reader will pick the data type best\nsuited for the dimensions being read.\n"},
  {(char*)"SetOutputType", PyvtkNetCDFCFReader_SetOutputType, METH_VARARGS,
   (char*)"V.SetOutputType(int)\nC++: virtual void SetOutputType(int type)\n\nSet/get the data type of the output.  The index used is taken\nfrom the list of VTK data types in vtkType.h.  Valid types are\nVTK_IMAGE_DATA, VTK_RECTILINEAR_GRID, VTK_STRUCTURED_GRID, and\nVTK_UNSTRUCTURED_GRID.  In addition you can set the type to -1\n(the default), and this reader will pick the data type best\nsuited for the dimensions being read.\n"},
  {(char*)"SetOutputTypeToAutomatic", PyvtkNetCDFCFReader_SetOutputTypeToAutomatic, METH_VARARGS,
   (char*)"V.SetOutputTypeToAutomatic()\nC++: void SetOutputTypeToAutomatic()\n\nSet/get the data type of the output.  The index used is taken\nfrom the list of VTK data types in vtkType.h.  Valid types are\nVTK_IMAGE_DATA, VTK_RECTILINEAR_GRID, VTK_STRUCTURED_GRID, and\nVTK_UNSTRUCTURED_GRID.  In addition you can set the type to -1\n(the default), and this reader will pick the data type best\nsuited for the dimensions being read.\n"},
  {(char*)"SetOutputTypeToImage", PyvtkNetCDFCFReader_SetOutputTypeToImage, METH_VARARGS,
   (char*)"V.SetOutputTypeToImage()\nC++: void SetOutputTypeToImage()\n\nSet/get the data type of the output.  The index used is taken\nfrom the list of VTK data types in vtkType.h.  Valid types are\nVTK_IMAGE_DATA, VTK_RECTILINEAR_GRID, VTK_STRUCTURED_GRID, and\nVTK_UNSTRUCTURED_GRID.  In addition you can set the type to -1\n(the default), and this reader will pick the data type best\nsuited for the dimensions being read.\n"},
  {(char*)"SetOutputTypeToRectilinear", PyvtkNetCDFCFReader_SetOutputTypeToRectilinear, METH_VARARGS,
   (char*)"V.SetOutputTypeToRectilinear()\nC++: void SetOutputTypeToRectilinear()\n\nSet/get the data type of the output.  The index used is taken\nfrom the list of VTK data types in vtkType.h.  Valid types are\nVTK_IMAGE_DATA, VTK_RECTILINEAR_GRID, VTK_STRUCTURED_GRID, and\nVTK_UNSTRUCTURED_GRID.  In addition you can set the type to -1\n(the default), and this reader will pick the data type best\nsuited for the dimensions being read.\n"},
  {(char*)"SetOutputTypeToStructured", PyvtkNetCDFCFReader_SetOutputTypeToStructured, METH_VARARGS,
   (char*)"V.SetOutputTypeToStructured()\nC++: void SetOutputTypeToStructured()\n\nSet/get the data type of the output.  The index used is taken\nfrom the list of VTK data types in vtkType.h.  Valid types are\nVTK_IMAGE_DATA, VTK_RECTILINEAR_GRID, VTK_STRUCTURED_GRID, and\nVTK_UNSTRUCTURED_GRID.  In addition you can set the type to -1\n(the default), and this reader will pick the data type best\nsuited for the dimensions being read.\n"},
  {(char*)"SetOutputTypeToUnstructured", PyvtkNetCDFCFReader_SetOutputTypeToUnstructured, METH_VARARGS,
   (char*)"V.SetOutputTypeToUnstructured()\nC++: void SetOutputTypeToUnstructured()\n\nSet/get the data type of the output.  The index used is taken\nfrom the list of VTK data types in vtkType.h.  Valid types are\nVTK_IMAGE_DATA, VTK_RECTILINEAR_GRID, VTK_STRUCTURED_GRID, and\nVTK_UNSTRUCTURED_GRID.  In addition you can set the type to -1\n(the default), and this reader will pick the data type best\nsuited for the dimensions being read.\n"},
  {(char*)"CanReadFile", PyvtkNetCDFCFReader_CanReadFile, METH_VARARGS | METH_STATIC,
   (char*)"V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\nReturns true if the given file can be read.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNetCDFCFReader_StaticNew()
{
  return vtkNetCDFCFReader::New();
}

PyObject *PyVTKClass_vtkNetCDFCFReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNetCDFCFReader_StaticNew,
    PyvtkNetCDFCFReader_Methods,
    "vtkNetCDFCFReader", modulename,
    NULL, NULL,
    PyvtkNetCDFCFReader_Doc(),
    PyVTKClass_vtkNetCDFReaderNew(modulename));
  return cls;
}

const char **PyvtkNetCDFCFReader_Doc()
{
  static const char *docstring[] = {
    "vtkNetCDFCFReader\n\n",
    "Superclass: vtkNetCDFReader\n\n",
    "Reads netCDF files that follow the CF convention.  Details on this\nconvention can be found at <http://cf-pcmdi.llnl.gov/>.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNetCDFCFReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNetCDFCFReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNetCDFCFReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

