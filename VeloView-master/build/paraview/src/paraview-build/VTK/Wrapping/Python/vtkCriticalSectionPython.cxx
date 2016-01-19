// python wrapper for vtkCriticalSection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCriticalSection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCriticalSection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCriticalSectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCriticalSection_Doc();


static PyObject *
PyvtkCriticalSection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCriticalSection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCriticalSection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCriticalSection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCriticalSection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCriticalSection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCriticalSection::NewInstance());

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
PyvtkCriticalSection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCriticalSection *tempr = vtkCriticalSection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCriticalSection_Lock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Lock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Lock();
      }
    else
      {
      op->vtkCriticalSection::Lock();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCriticalSection_Unlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Unlock();
      }
    else
      {
      op->vtkCriticalSection::Unlock();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCriticalSection_Methods[] = {
  {(char*)"GetClassName", PyvtkCriticalSection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCriticalSection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCriticalSection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCriticalSection\nC++: vtkCriticalSection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCriticalSection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCriticalSection\nC++: vtkCriticalSection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Lock", PyvtkCriticalSection_Lock, METH_VARARGS,
   (char*)"V.Lock()\nC++: void Lock()\n\nLock the vtkCriticalSection\n"},
  {(char*)"Unlock", PyvtkCriticalSection_Unlock, METH_VARARGS,
   (char*)"V.Unlock()\nC++: void Unlock()\n\nUnlock the vtkCriticalSection\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCriticalSection_StaticNew()
{
  return vtkCriticalSection::New();
}

PyObject *PyVTKClass_vtkCriticalSectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCriticalSection_StaticNew,
    PyvtkCriticalSection_Methods,
    "vtkCriticalSection", modulename,
    NULL, NULL,
    PyvtkCriticalSection_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCriticalSection_Doc()
{
  static const char *docstring[] = {
    "vtkCriticalSection - Critical section locking class\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCriticalSection allows the locking of variables which are accessed\nthrough different threads.  This header file also defines\nvtkSimpleCriticalSection which is not a subclass of vtkObject. The\nAPI is identical to that of vtkMutexLock, and the behavior is\nidentical as well, except on Windows 9x/NT platforms. The only\ndifference on these platforms is that vtkMutexLock is more flexible,\nin that it ",
    "works across processes as well as across threads, but also\ncosts more, in that it evokes a 600-cycle x86 ring transition. The\nvtkCriticalSection provides a higher-performance equivalent (on\nWindows) but won't work across processes. Since it is unclear how, in\nvtk, an object at the vtk level can be shared across processes in the\nfirst place, one should use vtkCriticalSection unless one has a very\ng",
    "ood reason to use vtkMutexLock. If higher-performance equivalents\nfor non-Windows platforms (Irix, SunOS, etc) are discovered, they\nshould replace the implementations in this class\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCriticalSection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCriticalSectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCriticalSection", o) != 0)
    {
    Py_DECREF(o);
    }

}

