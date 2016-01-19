// python wrapper for vtkNetCDFReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkNetCDFReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkNetCDFReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkNetCDFReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkNetCDFReader_Doc();


static PyObject *
PyvtkNetCDFReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkNetCDFReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNetCDFReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkNetCDFReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNetCDFReader::NewInstance());

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
PyvtkNetCDFReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkNetCDFReader *tempr = vtkNetCDFReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

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
      op->vtkNetCDFReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkNetCDFReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_UpdateMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->UpdateMetaData() :
      op->vtkNetCDFReader::UpdateMetaData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetNumberOfVariableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariableArrays() :
      op->vtkNetCDFReader::GetNumberOfVariableArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetVariableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetVariableArrayName(temp0) :
      op->vtkNetCDFReader::GetVariableArrayName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVariableArrayStatus(temp0) :
      op->vtkNetCDFReader::GetVariableArrayStatus(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_SetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetVariableArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkNetCDFReader::SetVariableArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetAllVariableArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllVariableArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAllVariableArrayNames() :
      op->vtkNetCDFReader::GetAllVariableArrayNames());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetVariableDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetVariableDimensions() :
      op->vtkNetCDFReader::GetVariableDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_SetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimensions(temp0);
      }
    else
      {
      op->vtkNetCDFReader::SetDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetAllDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAllDimensions() :
      op->vtkNetCDFReader::GetAllDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetReplaceFillValueWithNan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceFillValueWithNan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReplaceFillValueWithNan() :
      op->vtkNetCDFReader::GetReplaceFillValueWithNan());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_SetReplaceFillValueWithNan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceFillValueWithNan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReplaceFillValueWithNan(temp0);
      }
    else
      {
      op->vtkNetCDFReader::SetReplaceFillValueWithNan(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_ReplaceFillValueWithNanOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceFillValueWithNanOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceFillValueWithNanOn();
      }
    else
      {
      op->vtkNetCDFReader::ReplaceFillValueWithNanOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_ReplaceFillValueWithNanOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceFillValueWithNanOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceFillValueWithNanOff();
      }
    else
      {
      op->vtkNetCDFReader::ReplaceFillValueWithNanOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetTimeUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetTimeUnits() :
      op->vtkNetCDFReader::GetTimeUnits());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_GetCalendar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalendar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetCalendar() :
      op->vtkNetCDFReader::GetCalendar());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNetCDFReader_QueryArrayUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QueryArrayUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetCDFReader *op = static_cast<vtkNetCDFReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    std::string tempr = (ap.IsBound() ?
      op->QueryArrayUnits(temp0) :
      op->vtkNetCDFReader::QueryArrayUnits(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkNetCDFReader_Methods[] = {
  {(char*)"GetClassName", PyvtkNetCDFReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNetCDFReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNetCDFReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkNetCDFReader\nC++: vtkNetCDFReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNetCDFReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNetCDFReader\nC++: vtkNetCDFReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkNetCDFReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: virtual void SetFileName(const char *filename)\n\n"},
  {(char*)"GetFileName", PyvtkNetCDFReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\n"},
  {(char*)"UpdateMetaData", PyvtkNetCDFReader_UpdateMetaData, METH_VARARGS,
   (char*)"V.UpdateMetaData() -> int\nC++: int UpdateMetaData()\n\nUpdate the meta data from the current file.  Automatically called\nduring the RequestInformation pipeline update stage.\n"},
  {(char*)"GetNumberOfVariableArrays", PyvtkNetCDFReader_GetNumberOfVariableArrays, METH_VARARGS,
   (char*)"V.GetNumberOfVariableArrays() -> int\nC++: virtual int GetNumberOfVariableArrays()\n\nVariable array selection.\n"},
  {(char*)"GetVariableArrayName", PyvtkNetCDFReader_GetVariableArrayName, METH_VARARGS,
   (char*)"V.GetVariableArrayName(int) -> string\nC++: virtual const char *GetVariableArrayName(int idx)\n\nVariable array selection.\n"},
  {(char*)"GetVariableArrayStatus", PyvtkNetCDFReader_GetVariableArrayStatus, METH_VARARGS,
   (char*)"V.GetVariableArrayStatus(string) -> int\nC++: virtual int GetVariableArrayStatus(const char *name)\n\nVariable array selection.\n"},
  {(char*)"SetVariableArrayStatus", PyvtkNetCDFReader_SetVariableArrayStatus, METH_VARARGS,
   (char*)"V.SetVariableArrayStatus(string, int)\nC++: virtual void SetVariableArrayStatus(const char *name,\n    int status)\n\nVariable array selection.\n"},
  {(char*)"GetAllVariableArrayNames", PyvtkNetCDFReader_GetAllVariableArrayNames, METH_VARARGS,
   (char*)"V.GetAllVariableArrayNames() -> vtkStringArray\nC++: virtual vtkStringArray *GetAllVariableArrayNames()\n\nConvenience method to get a list of variable arrays.  The length\nof the returned list is the same as GetNumberOfVariableArrays,\nand the string at each index i is the same as returned from\nGetVariableArrayname(i).\n"},
  {(char*)"GetVariableDimensions", PyvtkNetCDFReader_GetVariableDimensions, METH_VARARGS,
   (char*)"V.GetVariableDimensions() -> vtkStringArray\nC++: vtkStringArray *GetVariableDimensions()\n\nReturns an array with string encodings for the dimensions used in\neach of the variables.  The indices in the returned array\ncorrespond to those used in the GetVariableArrayName method.  Two\narrays with the same dimensions will have the same encoded string\nreturned by this method.\n"},
  {(char*)"SetDimensions", PyvtkNetCDFReader_SetDimensions, METH_VARARGS,
   (char*)"V.SetDimensions(string)\nC++: virtual void SetDimensions(const char *dimensions)\n\nLoads the grid with the given dimensions.  The dimensions are\nencoded in a string that conforms to the same format as returned\nby GetVariableDimensions and GetAllDimensions.  This method is\nreally a convenience method for SetVariableArrayStatus.  It turns\non all variables that have the given dimensions and turns off all\nother variables.\n"},
  {(char*)"GetAllDimensions", PyvtkNetCDFReader_GetAllDimensions, METH_VARARGS,
   (char*)"V.GetAllDimensions() -> vtkStringArray\nC++: vtkStringArray *GetAllDimensions()\n\nReturns an array with string encodings for the dimension\ncombinations used in the variables.  The result is the same as\nGetVariableDimensions except that each entry in the array is\nunique (a set of dimensions is only given once even if it occurs\nfor multiple variables) and the order is meaningless.\n"},
  {(char*)"GetReplaceFillValueWithNan", PyvtkNetCDFReader_GetReplaceFillValueWithNan, METH_VARARGS,
   (char*)"V.GetReplaceFillValueWithNan() -> int\nC++: int GetReplaceFillValueWithNan()\n\nIf on, any float or double variable read that has a _FillValue\nattribute will have that fill value replaced with a not-a-number\n(NaN) value.  The advantage of setting these to NaN values is\nthat, if implemented properly by the system and careful math\noperations are used, they can implicitly be ignored by\ncalculations like finding the range of the values.  That said,\nthis option should be used with caution as VTK does not fully\nsupport NaN values and therefore odd calculations may occur.  By\ndefault this is off.\n"},
  {(char*)"SetReplaceFillValueWithNan", PyvtkNetCDFReader_SetReplaceFillValueWithNan, METH_VARARGS,
   (char*)"V.SetReplaceFillValueWithNan(int)\nC++: void SetReplaceFillValueWithNan(int a)\n\nIf on, any float or double variable read that has a _FillValue\nattribute will have that fill value replaced with a not-a-number\n(NaN) value.  The advantage of setting these to NaN values is\nthat, if implemented properly by the system and careful math\noperations are used, they can implicitly be ignored by\ncalculations like finding the range of the values.  That said,\nthis option should be used with caution as VTK does not fully\nsupport NaN values and therefore odd calculations may occur.  By\ndefault this is off.\n"},
  {(char*)"ReplaceFillValueWithNanOn", PyvtkNetCDFReader_ReplaceFillValueWithNanOn, METH_VARARGS,
   (char*)"V.ReplaceFillValueWithNanOn()\nC++: void ReplaceFillValueWithNanOn()\n\nIf on, any float or double variable read that has a _FillValue\nattribute will have that fill value replaced with a not-a-number\n(NaN) value.  The advantage of setting these to NaN values is\nthat, if implemented properly by the system and careful math\noperations are used, they can implicitly be ignored by\ncalculations like finding the range of the values.  That said,\nthis option should be used with caution as VTK does not fully\nsupport NaN values and therefore odd calculations may occur.  By\ndefault this is off.\n"},
  {(char*)"ReplaceFillValueWithNanOff", PyvtkNetCDFReader_ReplaceFillValueWithNanOff, METH_VARARGS,
   (char*)"V.ReplaceFillValueWithNanOff()\nC++: void ReplaceFillValueWithNanOff()\n\nIf on, any float or double variable read that has a _FillValue\nattribute will have that fill value replaced with a not-a-number\n(NaN) value.  The advantage of setting these to NaN values is\nthat, if implemented properly by the system and careful math\noperations are used, they can implicitly be ignored by\ncalculations like finding the range of the values.  That said,\nthis option should be used with caution as VTK does not fully\nsupport NaN values and therefore odd calculations may occur.  By\ndefault this is off.\n"},
  {(char*)"GetTimeUnits", PyvtkNetCDFReader_GetTimeUnits, METH_VARARGS,
   (char*)"V.GetTimeUnits() -> string\nC++: char *GetTimeUnits()\n\nAccess to the time dimensions units. Can be used by the udunits\nlibrary to convert raw numerical time values into meaningful\nrepresentations.\n"},
  {(char*)"GetCalendar", PyvtkNetCDFReader_GetCalendar, METH_VARARGS,
   (char*)"V.GetCalendar() -> string\nC++: char *GetCalendar()\n\nAccess to the time dimensions units. Can be used by the udunits\nlibrary to convert raw numerical time values into meaningful\nrepresentations.\n"},
  {(char*)"QueryArrayUnits", PyvtkNetCDFReader_QueryArrayUnits, METH_VARARGS,
   (char*)"V.QueryArrayUnits(string) -> string\nC++: std::string QueryArrayUnits(const char *ArrayName)\n\nGet units attached to a particular array in the netcdf file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNetCDFReader_StaticNew()
{
  return vtkNetCDFReader::New();
}

PyObject *PyVTKClass_vtkNetCDFReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNetCDFReader_StaticNew,
    PyvtkNetCDFReader_Methods,
    "vtkNetCDFReader", modulename,
    NULL, NULL,
    PyvtkNetCDFReader_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkNetCDFReader_Doc()
{
  static const char *docstring[] = {
    "vtkNetCDFReader\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "A superclass for reading netCDF files.  Subclass add conventions to\nthe reader.  This class just outputs data into a multi block data set\nwith a vtkImageData at each block.  A block is created for each\nvariable except that variables with matching dimensions will be\nplaced in the same block.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNetCDFReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNetCDFReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNetCDFReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

