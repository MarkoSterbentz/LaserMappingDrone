// python wrapper for vtkEnsembleSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEnsembleSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEnsembleSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEnsembleSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkEnsembleSource_Doc();


static PyObject *
PyvtkEnsembleSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEnsembleSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnsembleSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnsembleSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnsembleSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEnsembleSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnsembleSource::NewInstance());

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
PyvtkEnsembleSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEnsembleSource *tempr = vtkEnsembleSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnsembleSource_AddMember(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMember");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  vtkAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->AddMember(temp0);
      }
    else
      {
      op->vtkEnsembleSource::AddMember(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnsembleSource_RemoveAllMembers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMembers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllMembers();
      }
    else
      {
      op->vtkEnsembleSource::RemoveAllMembers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnsembleSource_GetNumberOfMembers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMembers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfMembers() :
      op->vtkEnsembleSource::GetNumberOfMembers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnsembleSource_SetCurrentMember(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentMember");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentMember(temp0);
      }
    else
      {
      op->vtkEnsembleSource::SetCurrentMember(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnsembleSource_GetCurrentMember(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentMember");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCurrentMember() :
      op->vtkEnsembleSource::GetCurrentMember());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnsembleSource_SetMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  vtkTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
    {
    if (ap.IsBound())
      {
      op->SetMetaData(temp0);
      }
    else
      {
      op->vtkEnsembleSource::SetMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnsembleSource_META_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "META_DATA");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDataObjectMetaDataKey *tempr = vtkEnsembleSource::META_DATA();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnsembleSource_UPDATE_MEMBER(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_MEMBER");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerRequestKey *tempr = vtkEnsembleSource::UPDATE_MEMBER();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEnsembleSource_Methods[] = {
  {(char*)"GetClassName", PyvtkEnsembleSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEnsembleSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEnsembleSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEnsembleSource\nC++: vtkEnsembleSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEnsembleSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEnsembleSource\nC++: vtkEnsembleSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddMember", PyvtkEnsembleSource_AddMember, METH_VARARGS,
   (char*)"V.AddMember(vtkAlgorithm)\nC++: void AddMember(vtkAlgorithm *)\n\n"},
  {(char*)"RemoveAllMembers", PyvtkEnsembleSource_RemoveAllMembers, METH_VARARGS,
   (char*)"V.RemoveAllMembers()\nC++: void RemoveAllMembers()\n\nRemoves all ensemble members.\n"},
  {(char*)"GetNumberOfMembers", PyvtkEnsembleSource_GetNumberOfMembers, METH_VARARGS,
   (char*)"V.GetNumberOfMembers() -> int\nC++: unsigned int GetNumberOfMembers()\n\nReturns the number of ensemble members.\n"},
  {(char*)"SetCurrentMember", PyvtkEnsembleSource_SetCurrentMember, METH_VARARGS,
   (char*)"V.SetCurrentMember(int)\nC++: void SetCurrentMember(unsigned int a)\n\nSet/Get the current ensemble member to process. Note that this\ndata member will not be used if the UPDATE_MEMBER key is present\nin the pipeline. Also, this data member may be removed in the\nfuture. Unless it is absolutely necessary to use this data\nmember, use the UPDATE_MEMBER key instead.\n"},
  {(char*)"GetCurrentMember", PyvtkEnsembleSource_GetCurrentMember, METH_VARARGS,
   (char*)"V.GetCurrentMember() -> int\nC++: unsigned int GetCurrentMember()\n\nSet/Get the current ensemble member to process. Note that this\ndata member will not be used if the UPDATE_MEMBER key is present\nin the pipeline. Also, this data member may be removed in the\nfuture. Unless it is absolutely necessary to use this data\nmember, use the UPDATE_MEMBER key instead.\n"},
  {(char*)"SetMetaData", PyvtkEnsembleSource_SetMetaData, METH_VARARGS,
   (char*)"V.SetMetaData(vtkTable)\nC++: void SetMetaData(vtkTable *)\n\nSet the meta-data that will be propagated downstream. Make sure\nthat this table has as many rows as the ensemble members and the\nmeta-data for each row matches the corresponding ensemble source.\n"},
  {(char*)"META_DATA", PyvtkEnsembleSource_META_DATA, METH_VARARGS | METH_STATIC,
   (char*)"V.META_DATA() -> vtkInformationDataObjectMetaDataKey\nC++: static vtkInformationDataObjectMetaDataKey *META_DATA()\n\nMeta-data for the ensemble. This is set with SetMetaData.\n"},
  {(char*)"UPDATE_MEMBER", PyvtkEnsembleSource_UPDATE_MEMBER, METH_VARARGS | METH_STATIC,
   (char*)"V.UPDATE_MEMBER() -> vtkInformationIntegerRequestKey\nC++: static vtkInformationIntegerRequestKey *UPDATE_MEMBER()\n\nKey used to request a particular ensemble member.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEnsembleSource_StaticNew()
{
  return vtkEnsembleSource::New();
}

PyObject *PyVTKClass_vtkEnsembleSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEnsembleSource_StaticNew,
    PyvtkEnsembleSource_Methods,
    "vtkEnsembleSource", modulename,
    NULL, NULL,
    PyvtkEnsembleSource_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkEnsembleSource_Doc()
{
  static const char *docstring[] = {
    "vtkEnsembleSource - source that manages dataset ensembles\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkEnsembleSource manages a collection of data sources in order to\nrepresent a dataset ensemble. It has the ability to provide meta-data\nabout the ensemble in the form of a table, using the META_DATA key as\nwell as accept a pipeline request using the UPDATE_MEMBER key. Note\nthat it is expected that all ensemble members produce data of the\nsame type.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEnsembleSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEnsembleSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEnsembleSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

