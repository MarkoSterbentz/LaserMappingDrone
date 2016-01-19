// python wrapper for vtkXMLCollectionReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLCollectionReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLCollectionReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLCollectionReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLReaderNew
#endif

static const char **PyvtkXMLCollectionReader_Doc();


static PyObject *
PyvtkXMLCollectionReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLCollectionReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLCollectionReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLCollectionReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLCollectionReader::NewInstance());

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
PyvtkXMLCollectionReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLCollectionReader *tempr = vtkXMLCollectionReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_SetRestriction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestriction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRestriction(temp0, temp1);
      }
    else
      {
      op->vtkXMLCollectionReader::SetRestriction(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetRestriction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestriction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetRestriction(temp0) :
      op->vtkXMLCollectionReader::GetRestriction(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_SetRestrictionAsIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestrictionAsIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRestrictionAsIndex(temp0, temp1);
      }
    else
      {
      op->vtkXMLCollectionReader::SetRestrictionAsIndex(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetRestrictionAsIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestrictionAsIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRestrictionAsIndex(temp0) :
      op->vtkXMLCollectionReader::GetRestrictionAsIndex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetNumberOfAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAttributes() :
      op->vtkXMLCollectionReader::GetNumberOfAttributes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeName(temp0) :
      op->vtkXMLCollectionReader::GetAttributeName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetAttributeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeIndex(temp0) :
      op->vtkXMLCollectionReader::GetAttributeIndex(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetNumberOfAttributeValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAttributeValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAttributeValues(temp0) :
      op->vtkXMLCollectionReader::GetNumberOfAttributeValues(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetAttributeValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeValue(temp0, temp1) :
      op->vtkXMLCollectionReader::GetAttributeValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLCollectionReader_GetAttributeValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeValue(temp0, temp1) :
      op->vtkXMLCollectionReader::GetAttributeValue(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLCollectionReader_GetAttributeValue_Methods[] = {
  {NULL, PyvtkXMLCollectionReader_GetAttributeValue_s1, METH_VARARGS,
   (char*)"@ii"},
  {NULL, PyvtkXMLCollectionReader_GetAttributeValue_s2, METH_VARARGS,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkXMLCollectionReader_GetAttributeValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkXMLCollectionReader_GetAttributeValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetAttributeValue");
  return NULL;
}



static PyObject *
PyvtkXMLCollectionReader_GetAttributeValueIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValueIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeValueIndex(temp0, temp1) :
      op->vtkXMLCollectionReader::GetAttributeValueIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLCollectionReader_GetAttributeValueIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValueIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->GetAttributeValueIndex(temp0, temp1) :
      op->vtkXMLCollectionReader::GetAttributeValueIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLCollectionReader_GetAttributeValueIndex_Methods[] = {
  {NULL, PyvtkXMLCollectionReader_GetAttributeValueIndex_s1, METH_VARARGS,
   (char*)"@iz"},
  {NULL, PyvtkXMLCollectionReader_GetAttributeValueIndex_s2, METH_VARARGS,
   (char*)"@zz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkXMLCollectionReader_GetAttributeValueIndex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkXMLCollectionReader_GetAttributeValueIndex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetAttributeValueIndex");
  return NULL;
}



static PyObject *
PyvtkXMLCollectionReader_GetOutputXMLDataElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputXMLDataElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkXMLDataElement *tempr = (ap.IsBound() ?
      op->GetOutputXMLDataElement(temp0) :
      op->vtkXMLCollectionReader::GetOutputXMLDataElement(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_SetForceOutputTypeToMultiBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceOutputTypeToMultiBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForceOutputTypeToMultiBlock(temp0);
      }
    else
      {
      op->vtkXMLCollectionReader::SetForceOutputTypeToMultiBlock(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_GetForceOutputTypeToMultiBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceOutputTypeToMultiBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetForceOutputTypeToMultiBlock() :
      op->vtkXMLCollectionReader::GetForceOutputTypeToMultiBlock());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_ForceOutputTypeToMultiBlockOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOutputTypeToMultiBlockOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceOutputTypeToMultiBlockOn();
      }
    else
      {
      op->vtkXMLCollectionReader::ForceOutputTypeToMultiBlockOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCollectionReader_ForceOutputTypeToMultiBlockOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOutputTypeToMultiBlockOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCollectionReader *op = static_cast<vtkXMLCollectionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceOutputTypeToMultiBlockOff();
      }
    else
      {
      op->vtkXMLCollectionReader::ForceOutputTypeToMultiBlockOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLCollectionReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLCollectionReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLCollectionReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLCollectionReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLCollectionReader\nC++: vtkXMLCollectionReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLCollectionReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLCollectionReader\nC++: vtkXMLCollectionReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRestriction", PyvtkXMLCollectionReader_SetRestriction, METH_VARARGS,
   (char*)"V.SetRestriction(string, string)\nC++: virtual void SetRestriction(const char *name,\n    const char *value)\n\nGet/Set the required value for a particular named attribute. Only\ndata sets matching this value will be read.  A NULL value or\nempty string will disable any restriction from the given\nattribute.\n"},
  {(char*)"GetRestriction", PyvtkXMLCollectionReader_GetRestriction, METH_VARARGS,
   (char*)"V.GetRestriction(string) -> string\nC++: virtual const char *GetRestriction(const char *name)\n\nGet/Set the required value for a particular named attribute. Only\ndata sets matching this value will be read.  A NULL value or\nempty string will disable any restriction from the given\nattribute.\n"},
  {(char*)"SetRestrictionAsIndex", PyvtkXMLCollectionReader_SetRestrictionAsIndex, METH_VARARGS,
   (char*)"V.SetRestrictionAsIndex(string, int)\nC++: virtual void SetRestrictionAsIndex(const char *name,\n    int index)\n\nGet/set the required value for a particular named attribute.  The\nvalue should be referenced by its index.  Only data sets matching\nthis value will be read.  An out-of-range index will remove the\nrestriction. Make sure to call UpdateInformation() before using\nthese methods.\n"},
  {(char*)"GetRestrictionAsIndex", PyvtkXMLCollectionReader_GetRestrictionAsIndex, METH_VARARGS,
   (char*)"V.GetRestrictionAsIndex(string) -> int\nC++: virtual int GetRestrictionAsIndex(const char *name)\n\nGet/set the required value for a particular named attribute.  The\nvalue should be referenced by its index.  Only data sets matching\nthis value will be read.  An out-of-range index will remove the\nrestriction. Make sure to call UpdateInformation() before using\nthese methods.\n"},
  {(char*)"GetNumberOfAttributes", PyvtkXMLCollectionReader_GetNumberOfAttributes, METH_VARARGS,
   (char*)"V.GetNumberOfAttributes() -> int\nC++: int GetNumberOfAttributes()\n\nGet the number of distinct attribute values present in the file.\nValid after UpdateInformation.\n"},
  {(char*)"GetAttributeName", PyvtkXMLCollectionReader_GetAttributeName, METH_VARARGS,
   (char*)"V.GetAttributeName(int) -> string\nC++: const char *GetAttributeName(int attribute)\n\nGet the name of an attribute.  The order of attributes with\nrespect to the index is not specified, but will be the same every\ntime the same instance of the reader reads the same input file.\n"},
  {(char*)"GetAttributeIndex", PyvtkXMLCollectionReader_GetAttributeIndex, METH_VARARGS,
   (char*)"V.GetAttributeIndex(string) -> int\nC++: int GetAttributeIndex(const char *name)\n\nGet the index of the attribute with the given name.  Returns -1\nif no such attribute exists.\n"},
  {(char*)"GetNumberOfAttributeValues", PyvtkXMLCollectionReader_GetNumberOfAttributeValues, METH_VARARGS,
   (char*)"V.GetNumberOfAttributeValues(int) -> int\nC++: int GetNumberOfAttributeValues(int attribute)\n\nGet the number of distinct values for the given attribute.\n"},
  {(char*)"GetAttributeValue", PyvtkXMLCollectionReader_GetAttributeValue, METH_VARARGS,
   (char*)"V.GetAttributeValue(int, int) -> string\nC++: const char *GetAttributeValue(int attribute, int index)\nV.GetAttributeValue(string, int) -> string\nC++: const char *GetAttributeValue(const char *name, int index)\n\nGet one of the possible values for a given attribute.  The order\nof values for the attribute with respect to the index is not\nspecified, but will be the same every time the same instance of\nthe reader reads the same input file.\n"},
  {(char*)"GetAttributeValueIndex", PyvtkXMLCollectionReader_GetAttributeValueIndex, METH_VARARGS,
   (char*)"V.GetAttributeValueIndex(int, string) -> int\nC++: int GetAttributeValueIndex(int attribute, const char *value)\nV.GetAttributeValueIndex(string, string) -> int\nC++: int GetAttributeValueIndex(const char *name,\n    const char *value)\n\nGet the index of the attribute value with the given name. \nReturns -1 if no such attribute or value exists.\n"},
  {(char*)"GetOutputXMLDataElement", PyvtkXMLCollectionReader_GetOutputXMLDataElement, METH_VARARGS,
   (char*)"V.GetOutputXMLDataElement(int) -> vtkXMLDataElement\nC++: vtkXMLDataElement *GetOutputXMLDataElement(int index)\n\nGet the vtkXMLDataElement representing the collection element\ncorresponding to the output with the given index.  Valid when a\nFileName has been set.  May change when Restriction settings are\nchanged.\n"},
  {(char*)"SetForceOutputTypeToMultiBlock", PyvtkXMLCollectionReader_SetForceOutputTypeToMultiBlock, METH_VARARGS,
   (char*)"V.SetForceOutputTypeToMultiBlock(int)\nC++: void SetForceOutputTypeToMultiBlock(int a)\n\nIf ForceOutputTypeToMultiBlock is set to 1, the output of this\nreader will always be a multi-block dataset, even if there is 1\nsimple output.\n"},
  {(char*)"GetForceOutputTypeToMultiBlock", PyvtkXMLCollectionReader_GetForceOutputTypeToMultiBlock, METH_VARARGS,
   (char*)"V.GetForceOutputTypeToMultiBlock() -> int\nC++: int GetForceOutputTypeToMultiBlock()\n\nIf ForceOutputTypeToMultiBlock is set to 1, the output of this\nreader will always be a multi-block dataset, even if there is 1\nsimple output.\n"},
  {(char*)"ForceOutputTypeToMultiBlockOn", PyvtkXMLCollectionReader_ForceOutputTypeToMultiBlockOn, METH_VARARGS,
   (char*)"V.ForceOutputTypeToMultiBlockOn()\nC++: void ForceOutputTypeToMultiBlockOn()\n\nIf ForceOutputTypeToMultiBlock is set to 1, the output of this\nreader will always be a multi-block dataset, even if there is 1\nsimple output.\n"},
  {(char*)"ForceOutputTypeToMultiBlockOff", PyvtkXMLCollectionReader_ForceOutputTypeToMultiBlockOff, METH_VARARGS,
   (char*)"V.ForceOutputTypeToMultiBlockOff()\nC++: void ForceOutputTypeToMultiBlockOff()\n\nIf ForceOutputTypeToMultiBlock is set to 1, the output of this\nreader will always be a multi-block dataset, even if there is 1\nsimple output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLCollectionReader_StaticNew()
{
  return vtkXMLCollectionReader::New();
}

PyObject *PyVTKClass_vtkXMLCollectionReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLCollectionReader_StaticNew,
    PyvtkXMLCollectionReader_Methods,
    "vtkXMLCollectionReader", modulename,
    NULL, NULL,
    PyvtkXMLCollectionReader_Doc(),
    PyVTKClass_vtkXMLReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLCollectionReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLCollectionReader - Read a file wrapping many other XML files.\n\n",
    "Superclass: vtkXMLReader\n\n",
    "vtkXMLCollectionReader will read a \"Collection\" VTKData XML file.\nThis file format references an arbitrary number of other XML data\nsets.  Each referenced data set has a list of associated\nattribute/value pairs.  One may use the SetRestriction method to set\nrequirements on attribute's values.  Only those data sets in the file\nmatching the restrictions will be read.  Each matching data set\nbecomes ",
    "an output of this reader in the order in which they appear in\nthe file.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLCollectionReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLCollectionReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLCollectionReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

