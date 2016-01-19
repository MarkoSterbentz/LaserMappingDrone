// python wrapper for vtkPVTemporalDataInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMultiProcessStream.h"
#include "vtkPVTemporalDataInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVTemporalDataInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVTemporalDataInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVTemporalDataInformation_Doc();


static PyObject *
PyvtkPVTemporalDataInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVTemporalDataInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTemporalDataInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVTemporalDataInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTemporalDataInformation::NewInstance());

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
PyvtkPVTemporalDataInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVTemporalDataInformation *tempr = vtkPVTemporalDataInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_SetPortNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPortNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPortNumber(temp0);
      }
    else
      {
      op->vtkPVTemporalDataInformation::SetPortNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->CopyFromObject(temp0);
      }
    else
      {
      op->vtkPVTemporalDataInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  vtkPVInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
    {
    if (ap.IsBound())
      {
      op->AddInformation(temp0);
      }
    else
      {
      op->vtkPVTemporalDataInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyToStream(temp0);
      }
    else
      {
      op->vtkPVTemporalDataInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyFromStream(temp0);
      }
    else
      {
      op->vtkPVTemporalDataInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPVTemporalDataInformation::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkPVTemporalDataInformation::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetTimeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetTimeRange() :
      op->vtkPVTemporalDataInformation::GetTimeRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetPointDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetPointDataInformation() :
      op->vtkPVTemporalDataInformation::GetPointDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetCellDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetCellDataInformation() :
      op->vtkPVTemporalDataInformation::GetCellDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetVertexDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetVertexDataInformation() :
      op->vtkPVTemporalDataInformation::GetVertexDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetEdgeDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetEdgeDataInformation() :
      op->vtkPVTemporalDataInformation::GetEdgeDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetRowDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetRowDataInformation() :
      op->vtkPVTemporalDataInformation::GetRowDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetAttributeInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetAttributeInformation(temp0) :
      op->vtkPVTemporalDataInformation::GetAttributeInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetFieldDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataSetAttributesInformation *tempr = (ap.IsBound() ?
      op->GetFieldDataInformation() :
      op->vtkPVTemporalDataInformation::GetFieldDataInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTemporalDataInformation_GetArrayInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTemporalDataInformation *op = static_cast<vtkPVTemporalDataInformation *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkPVArrayInformation *tempr = (ap.IsBound() ?
      op->GetArrayInformation(temp0, temp1) :
      op->vtkPVTemporalDataInformation::GetArrayInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVTemporalDataInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVTemporalDataInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVTemporalDataInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVTemporalDataInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVTemporalDataInformation\nC++: vtkPVTemporalDataInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVTemporalDataInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVTemporalDataInformation\nC++: vtkPVTemporalDataInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPortNumber", PyvtkPVTemporalDataInformation_SetPortNumber, METH_VARARGS,
   (char*)"V.SetPortNumber(int)\nC++: void SetPortNumber(int a)\n\nPort number controls which output port the information is\ngathered from. This is only applicable when the vtkObject from\nwhich the information being gathered is a vtkAlgorithm. Set it to\n-1(default), to return the classname of the vtkAlgorithm itself.\nThis is the only parameter that can be set on  the client-side\nbefore gathering the information.\n"},
  {(char*)"CopyFromObject", PyvtkPVTemporalDataInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *object)\n\nTransfer information about a single object into this object. This\nexpects the object to be a vtkAlgorithmOutput.\n"},
  {(char*)"AddInformation", PyvtkPVTemporalDataInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *info)\n\nMerge another information object. Calls AddInformation(info, 0).\n"},
  {(char*)"CopyToStream", PyvtkPVTemporalDataInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVTemporalDataInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"Initialize", PyvtkPVTemporalDataInformation_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nInitializes the information object.\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkPVTemporalDataInformation_GetNumberOfTimeSteps, METH_VARARGS,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nReturns the number of timesteps this information was gathered\nfrom.\n"},
  {(char*)"GetTimeRange", PyvtkPVTemporalDataInformation_GetTimeRange, METH_VARARGS,
   (char*)"V.GetTimeRange() -> (float, float)\nC++: double *GetTimeRange()\n\n"},
  {(char*)"GetPointDataInformation", PyvtkPVTemporalDataInformation_GetPointDataInformation, METH_VARARGS,
   (char*)"V.GetPointDataInformation() -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetPointDataInformation()\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {(char*)"GetCellDataInformation", PyvtkPVTemporalDataInformation_GetCellDataInformation, METH_VARARGS,
   (char*)"V.GetCellDataInformation() -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetCellDataInformation()\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {(char*)"GetVertexDataInformation", PyvtkPVTemporalDataInformation_GetVertexDataInformation, METH_VARARGS,
   (char*)"V.GetVertexDataInformation() -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetVertexDataInformation()\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {(char*)"GetEdgeDataInformation", PyvtkPVTemporalDataInformation_GetEdgeDataInformation, METH_VARARGS,
   (char*)"V.GetEdgeDataInformation() -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetEdgeDataInformation()\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {(char*)"GetRowDataInformation", PyvtkPVTemporalDataInformation_GetRowDataInformation, METH_VARARGS,
   (char*)"V.GetRowDataInformation() -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetRowDataInformation()\n\nAccess to information about point/cell/vertex/edge/row data.\n"},
  {(char*)"GetAttributeInformation", PyvtkPVTemporalDataInformation_GetAttributeInformation, METH_VARARGS,
   (char*)"V.GetAttributeInformation(int)\n    -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetAttributeInformation(\n    int attr)\n\nConvenience method to get the attribute information given the\nattribute type. attr can be vtkDataObject::FieldAssociations or\nvtkDataObject::AttributeTypes (since both are identical).\n"},
  {(char*)"GetFieldDataInformation", PyvtkPVTemporalDataInformation_GetFieldDataInformation, METH_VARARGS,
   (char*)"V.GetFieldDataInformation() -> vtkPVDataSetAttributesInformation\nC++: vtkPVDataSetAttributesInformation *GetFieldDataInformation()\n\nAccess to information about field data, if any.\n"},
  {(char*)"GetArrayInformation", PyvtkPVTemporalDataInformation_GetArrayInformation, METH_VARARGS,
   (char*)"V.GetArrayInformation(string, int) -> vtkPVArrayInformation\nC++: vtkPVArrayInformation *GetArrayInformation(\n    const char *arrayname, int fieldAssociation)\n\nMethod to find and return attribute array information for a\nparticular array for the given attribute type if one exists.\nReturns NULL if none is found.fieldAssociation can be\nvtkDataObject::FIELD_ASSOCIATION_POINTS,\nvtkDataObject::FIELD_ASSOCIATION_CELLS etc. (use\nvtkDataObject::FIELD_ASSOCIATION_NONE for field data) (or\nvtkDataObject::POINT, vtkDataObject::CELL, vtkDataObject::FIELD).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVTemporalDataInformation_StaticNew()
{
  return vtkPVTemporalDataInformation::New();
}

PyObject *PyVTKClass_vtkPVTemporalDataInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVTemporalDataInformation_StaticNew,
    PyvtkPVTemporalDataInformation_Methods,
    "vtkPVTemporalDataInformation", modulename,
    NULL, NULL,
    PyvtkPVTemporalDataInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVTemporalDataInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVTemporalDataInformation\n\n",
    "Superclass: vtkPVInformation\n\n",
    "vtkPVTemporalDataInformation is used to gather data information over\ntime. This information provided by this class is a sub-set of\nvtkPVDataInformation and hence this is not directly a subclass of\nvtkPVDataInformation. It internally uses vtkPVDataInformation to\ncollect information about each timestep.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVTemporalDataInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVTemporalDataInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVTemporalDataInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

