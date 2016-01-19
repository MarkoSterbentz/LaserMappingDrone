// python wrapper for vtkInformationInformationVectorKey
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationInformationVectorKey.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkInformationInformationVectorKey(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkInformationInformationVectorKeyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkInformationKeyNew
extern "C" { PyObject *PyVTKClass_vtkInformationKeyNew(const char *); }
#define DECLARED_PyVTKClass_vtkInformationKeyNew
#endif

static const char **PyvtkInformationInformationVectorKey_Doc();


static PyObject *
PyvtkInformationInformationVectorKey_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkInformationInformationVectorKey::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationVectorKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationInformationVectorKey::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationVectorKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformationInformationVectorKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationInformationVectorKey::NewInstance());

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
PyvtkInformationInformationVectorKey_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkInformationInformationVectorKey *tempr = vtkInformationInformationVectorKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationVectorKey_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformationVector *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationVector"))
    {
    if (ap.IsBound())
      {
      op->Set(temp0, temp1);
      }
    else
      {
      op->vtkInformationInformationVectorKey::Set(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationVectorKey_Get(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkInformationVector *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformationInformationVectorKey::Get(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationVectorKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0, temp1);
      }
    else
      {
      op->vtkInformationInformationVectorKey::ShallowCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationVectorKey_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

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
      op->vtkInformationInformationVectorKey::DeepCopy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInformationInformationVectorKey_Report(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Report");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationInformationVectorKey *op = static_cast<vtkInformationInformationVectorKey *>(vp);

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
      op->vtkInformationInformationVectorKey::Report(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInformationInformationVectorKey_Methods[] = {
  {(char*)"GetClassName", PyvtkInformationInformationVectorKey_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInformationInformationVectorKey_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInformationInformationVectorKey_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkInformationInformationVectorKey\nC++: vtkInformationInformationVectorKey *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInformationInformationVectorKey_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInformationInformationVectorKey\nC++: vtkInformationInformationVectorKey *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"Set", PyvtkInformationInformationVectorKey_Set, METH_VARARGS,
   (char*)"V.Set(vtkInformation, vtkInformationVector)\nC++: void Set(vtkInformation *info, vtkInformationVector *)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"Get", PyvtkInformationInformationVectorKey_Get, METH_VARARGS,
   (char*)"V.Get(vtkInformation) -> vtkInformationVector\nC++: vtkInformationVector *Get(vtkInformation *info)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {(char*)"ShallowCopy", PyvtkInformationInformationVectorKey_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkInformation, vtkInformation)\nC++: virtual void ShallowCopy(vtkInformation *from,\n    vtkInformation *to)\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {(char*)"DeepCopy", PyvtkInformationInformationVectorKey_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkInformation, vtkInformation)\nC++: virtual void DeepCopy(vtkInformation *from,\n    vtkInformation *to)\n\nDuplicate (new instance created) the entry associated with this\nkey from one information object to another (new instances of any\ncontained vtkInformation and vtkInformationVector objects are\ncreated).\n"},
  {(char*)"Report", PyvtkInformationInformationVectorKey_Report, METH_VARARGS,
   (char*)"V.Report(vtkInformation, vtkGarbageCollector)\nC++: virtual void Report(vtkInformation *info,\n    vtkGarbageCollector *collector)\n\nReport a reference this key has in the given information object.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInformationInformationVectorKeyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInformationInformationVectorKey_Methods,
    "vtkInformationInformationVectorKey", modulename,
    NULL, NULL,
    PyvtkInformationInformationVectorKey_Doc(),
    PyVTKClass_vtkInformationKeyNew(modulename));
  return cls;
}

const char **PyvtkInformationInformationVectorKey_Doc()
{
  static const char *docstring[] = {
    "vtkInformationInformationVectorKey - Key for vtkInformation vectors.\n\n",
    "Superclass: vtkInformationKey\n\n",
    "vtkInformationInformationVectorKey is used to represent keys in\nvtkInformation for vectors of other vtkInformation objects.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInformationInformationVectorKey(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInformationInformationVectorKeyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInformationInformationVectorKey", o) != 0)
    {
    Py_DECREF(o);
    }

}

