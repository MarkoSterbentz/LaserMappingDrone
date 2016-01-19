// python wrapper for vtkInformationKey
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationKey.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInformationKey(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInformationKeyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectBaseNew
extern "C" { PyObject *PyVTKClass_vtkObjectBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectBaseNew
#endif

static const char **PyvtkInformationKey_Doc();


static PyObject *
PyvtkInformationKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInformationKey::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationKey::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformationKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationKey::NewInstance());

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
PyvtkInformationKey_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInformationKey *tempr = vtkInformationKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKey_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkInformationKey::GetName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKey_GetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetLocation() :
      op->vtkInformationKey::GetLocation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    op->ShallowCopy(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKey_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0, temp1);
      }
    else
      {
      op->vtkInformationKey::DeepCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKey_Has(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformationKey::Has(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKey_Remove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->Remove(temp0);
      }
    else
      {
      op->vtkInformationKey::Remove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKey_Report(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Report");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkGarbageCollector *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkGarbageCollector"))
    {
    if (ap.IsBound())
      {
      op->Report(temp0, temp1);
      }
    else
      {
      op->vtkInformationKey::Report(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKey_Print(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Print");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->Print(temp0);
      }
    else
      {
      op->vtkInformationKey::Print(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKey_NeedToExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    bool tempr = (ap.IsBound() ?
      op->NeedToExecute(temp0, temp1) :
      op->vtkInformationKey::NeedToExecute(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKey_StoreMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StoreMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  vtkInformation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->StoreMetaData(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformationKey::StoreMetaData(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationKey_CopyDefaultInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDefaultInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationKey *op = static_cast<vtkInformationKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  vtkInformation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->CopyDefaultInformation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkInformationKey::CopyDefaultInformation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationKey_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationKey_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationKey_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInformationKey\nC++: vtkInformationKey *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInformationKey_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInformationKey\nC++: vtkInformationKey *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetName", PyvtkInformationKey_GetName, METH_VARARGS,
   (char*)"V.GetName() -> string\nC++: const char *GetName()\n\nGet the name of the key.  This is not the type of the key, but\nthe name of the key instance.\n"},
  {(char*)"GetLocation", PyvtkInformationKey_GetLocation, METH_VARARGS,
   (char*)"V.GetLocation() -> string\nC++: const char *GetLocation()\n\nGet the location of the key.  This is the name of the class in\nwhich the key is defined.\n"},
  {(char*)"ShallowCopy", PyvtkInformationKey_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkInformation, vtkInformation)\nC++: virtual void ShallowCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {(char*)"DeepCopy", PyvtkInformationKey_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkInformation, vtkInformation)\nC++: virtual void DeepCopy(vtkInformation *from,\n    vtkInformation *to)\n\nDuplicate (new instance created) the entry associated with this\nkey from one information object to another (new instances of any\ncontained vtkInformation and vtkInformationVector objects are\ncreated). Default implementation simply calls ShallowCopy().\n"},
  {(char*)"Has", PyvtkInformationKey_Has, METH_VARARGS,
   (char*)"V.Has(vtkInformation) -> int\nC++: virtual int Has(vtkInformation *info)\n\nCheck whether this key appears in the given information object.\n"},
  {(char*)"Remove", PyvtkInformationKey_Remove, METH_VARARGS,
   (char*)"V.Remove(vtkInformation)\nC++: virtual void Remove(vtkInformation *info)\n\nRemove this key from the given information object.\n"},
  {(char*)"Report", PyvtkInformationKey_Report, METH_VARARGS,
   (char*)"V.Report(vtkInformation, vtkGarbageCollector)\nC++: virtual void Report(vtkInformation *info,\n    vtkGarbageCollector *collector)\n\nReport a reference this key has in the given information object.\n"},
  {(char*)"Print", PyvtkInformationKey_Print, METH_VARARGS,
   (char*)"V.Print(vtkInformation)\nC++: void Print(vtkInformation *info)\n\nPrint the key's value in an information object to a stream.\n"},
  {(char*)"NeedToExecute", PyvtkInformationKey_NeedToExecute, METH_VARARGS,
   (char*)"V.NeedToExecute(vtkInformation, vtkInformation) -> bool\nC++: virtual bool NeedToExecute(vtkInformation *pipelineInfo,\n    vtkInformation *dobjInfo)\n\nThis function is only relevant when the pertaining key is used in\na VTK pipeline. Specific keys that handle pipeline data requests\n(for example, UPDATE_PIECE_NUMBER) can overwrite this method to\nnotify the pipeline that a a filter should be (re-)executed\nbecause what is in the current output is different that what is\nbeing requested by the key. For example, DATA_PIECE_NUMBER !=\nUPDATE_PIECE_NUMBER.\n"},
  {(char*)"StoreMetaData", PyvtkInformationKey_StoreMetaData, METH_VARARGS,
   (char*)"V.StoreMetaData(vtkInformation, vtkInformation, vtkInformation)\nC++: virtual void StoreMetaData(vtkInformation *request,\n    vtkInformation *pipelineInfo, vtkInformation *dobjInfo)\n\nThis function is only relevant when the pertaining key is used in\na VTK pipeline. Specific keys that handle pipeline data requests\n(for example, UPDATE_PIECE_NUMBER) can overwrite this method to\nstore in the data information meta-data about the request that\nled to the current filter execution. This meta-data can later be\nused to compare what is being requested to decide whether the\nfilter needs to re-execute. For example, a filter may store the\ncurrent UPDATE_PIECE_NUMBER in the data object's information as\nthe DATA_PIECE_NUMBER. DATA_PIECE_NUMBER can later be compared to\na new UPDATA_PIECE_NUMBER to decide whether a filter should\nre-execute.\n"},
  {(char*)"CopyDefaultInformation", PyvtkInformationKey_CopyDefaultInformation, METH_VARARGS,
   (char*)"V.CopyDefaultInformation(vtkInformation, vtkInformation,\n    vtkInformation)\nC++: virtual void CopyDefaultInformation(vtkInformation *request,\n    vtkInformation *fromInfo, vtkInformation *toInfo)\n\nThis function is only relevant when the pertaining key is used in\na VTK pipeline. By overwriting this method, a key can decide\nif/how to copy itself downstream or upstream during a particular\npipeline pass. For example, meta-data keys can copy themselves\nduring REQUEST_INFORMATION whereas request keys can copy\nthemselves during REQUEST_UPDATE_EXTENT.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationKey_Methods,
    "vtkInformationKey", modulename,
    NULL, NULL,
    PyvtkInformationKey_Doc(),
    PyVTKClass_vtkObjectBaseNew(modulename));
  return cls;
}

const char **PyvtkInformationKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationKey - Superclass for vtkInformation keys.\n\n",
    "Superclass: vtkObjectBase\n\n",
    "vtkInformationKey is the superclass for all keys used to access the\nmap represented by vtkInformation.  The vtkInformation::Set and\nvtkInformation::Get methods of vtkInformation are accessed by\ninformation keys.  A key is a pointer to an instance of a subclass of\nvtkInformationKey.  The type of the subclass determines the overload\nof Set/Get that is selected.  This ensures that the type of value\ns",
    "tored in a vtkInformation instance corresponding to a given key\nmatches the type expected for that key.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

