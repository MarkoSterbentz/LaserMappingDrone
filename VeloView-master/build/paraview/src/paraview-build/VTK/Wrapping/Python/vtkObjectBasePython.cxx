// python wrapper for vtkObjectBase
//
#define VTK_WRAPPING_CXX
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkObjectBase.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkObjectBase(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkObjectBaseNew(const char *); }


static const char **PyvtkObjectBase_Doc();

static PyObject *
PyvtkObjectBase_GetAddressAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddressAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  char *temp0;
  char tempr[256];
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    sprintf(tempr, "Addr=%p", op);

    result = ap.BuildValue(tempr);
    }

  return result;
}

static PyObject *
PyvtkObjectBase_PrintRevisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintRevisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtksys_ios::ostringstream vtkmsg_with_warning_C4701;
    op->PrintRevisions(vtkmsg_with_warning_C4701);
    vtkmsg_with_warning_C4701.put('\0');
    tempr = vtkmsg_with_warning_C4701.str().c_str();

    result = ap.BuildValue(tempr);
    }

  return result;
}

static PyObject *
PyvtkObjectBase_Register(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Register");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  vtkObjectBase *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
    {
    if (!PyVTKObject_Check(self) ||
        (PyVTKObject_GetFlags(self) & VTK_PYTHON_IGNORE_UNREGISTER) == 0)
      {
      if (ap.IsBound())
        {
        op->Register(temp0);
        }
      else
        {
        op->vtkObjectBase::Register(temp0);
        }
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkObjectBase_UnRegister(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegister");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  vtkObjectBase *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
    {
    if (!PyVTKObject_Check(self) ||
        (PyVTKObject_GetFlags(self) & VTK_PYTHON_IGNORE_UNREGISTER) == 0)
      {
      if (ap.IsBound())
        {
        op->UnRegister(temp0);
        }
      else
        {
        op->vtkObjectBase::UnRegister(temp0);
        }
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObjectBase_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkObjectBase::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectBase_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkObjectBase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkObjectBase::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectBase_FastDelete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastDelete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FastDelete();
      }
    else
      {
      op->vtkObjectBase::FastDelete();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkObjectBase_GetReferenceCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReferenceCount() :
      op->vtkObjectBase::GetReferenceCount());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkObjectBase_SetReferenceCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReferenceCount(temp0);
      }
    else
      {
      op->vtkObjectBase::SetReferenceCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkObjectBase_Methods[] = {
  {(char*)"GetClassName", PyvtkObjectBase_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nReturn the class name as a string.\n"},
  {(char*)"IsTypeOf", PyvtkObjectBase_IsTypeOf, METH_VARARGS | METH_STATIC,
   (char*)"V.IsTypeOf(string) -> int\nC++: static int IsTypeOf(const char *name)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {(char*)"IsA", PyvtkObjectBase_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: virtual int IsA(const char *name)\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {(char*)"FastDelete", PyvtkObjectBase_FastDelete, METH_VARARGS,
   (char*)"V.FastDelete()\nC++: virtual void FastDelete()\n\nDelete a reference to this object.  This version will not invoke\ngarbage collection and can potentially leak the object if it is\npart of a reference loop.  Use this method only when it is known\nthat the object has another reference and would not be collected\nif a full garbage collection check were done.\n"},
  {(char*)"GetReferenceCount", PyvtkObjectBase_GetReferenceCount, METH_VARARGS,
   (char*)"V.GetReferenceCount() -> int\nC++: int GetReferenceCount()\n\nReturn the current reference count of this object.\n"},
  {(char*)"SetReferenceCount", PyvtkObjectBase_SetReferenceCount, METH_VARARGS,
   (char*)"V.SetReferenceCount(int)\nC++: void SetReferenceCount(int)\n\nSets the reference count. (This is very dangerous, use with\ncare.)\n"},
  {(char*)"GetAddressAsString",  PyvtkObjectBase_GetAddressAsString, 1,
   (char*)"V.GetAddressAsString(string) -> string\nC++: const char *GetAddressAsString()\n\nGet address of C++ object in format 'Addr=%p' after casting to\nthe specified type.  You can get the same information from o.__this__."},
  {(char*)"PrintRevisions",  PyvtkObjectBase_PrintRevisions, 1,
   (char*)"V.PrintRevisions() -> string\nC++: const char *PrintRevisions()\n\nPrints the .cxx file CVS revisions of the classes in the\nobject's inheritance chain."},
  {(char*)"Register", PyvtkObjectBase_Register, 1,
   (char*)"V.Register(vtkObjectBase)\nC++: virtual void Register(vtkObjectBase *o)\n\nIncrease the reference count by 1.\n"},
  {(char*)"UnRegister", PyvtkObjectBase_UnRegister, 1,
   (char*)"V.UnRegister(vtkObjectBase)\nC++: virtual void UnRegister(vtkObjectBase *o)\n\nDecrease the reference count (release by another object). This\nhas the same effect as invoking Delete() (i.e., it reduces the\nreference count by 1).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkObjectBase_StaticNew()
{
  return vtkObjectBase::New();
}

PyObject *PyVTKClass_vtkObjectBaseNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkObjectBase_StaticNew,
    PyvtkObjectBase_Methods,
    "vtkObjectBase", modulename,
    NULL, NULL,
    PyvtkObjectBase_Doc(),0);
  return cls;
}

const char **PyvtkObjectBase_Doc()
{
  static const char *docstring[] = {
    "vtkObjectBase - abstract base class for most VTK objects\n\n",
    "vtkObjectBase is the base class for all reference counted classes in\nthe VTK. These classes include vtkCommand classes, vtkInformationKey\nclasses, and vtkObject classes.\n\nvtkObjectBase performs reference counting: objects that are reference\ncounted exist as long as another object uses them. Once the last\nreference to a reference counted object is removed, the object will\nspontaneously destruct.\n\nC",
    "onstructor and destructor of the subclasses of vtkObjectBase should\nbe protected, so that only New() and UnRegister() actually call them.\nDebug leaks can be used to see if there are any objects left with\nnonzero reference count.\n\nCaveats:\n\nNote: Objects of subclasses of vtkObjectBase should always be created\nwith the New() method and deleted with the Delete() method. They\ncannot be allocated off t",
    "he stack (i.e., automatic objects) because\nthe constructor is a protected method.\n\nSee also:\n\nvtkObject vtkCommand vtkInformationKey\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkObjectBase(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkObjectBaseNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkObjectBase", o) != 0)
    {
    Py_DECREF(o);
    }

}

