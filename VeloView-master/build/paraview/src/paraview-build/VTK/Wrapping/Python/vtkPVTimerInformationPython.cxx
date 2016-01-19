// python wrapper for vtkPVTimerInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkMultiProcessStream.h"
#include "vtkPVTimerInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVTimerInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVTimerInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVTimerInformation_Doc();


static PyObject *
PyvtkPVTimerInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVTimerInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTimerInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVTimerInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTimerInformation::NewInstance());

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
PyvtkPVTimerInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVTimerInformation *tempr = vtkPVTimerInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_SetLogThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLogThreshold(temp0);
      }
    else
      {
      op->vtkPVTimerInformation::SetLogThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_GetLogThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLogThreshold() :
      op->vtkPVTimerInformation::GetLogThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_GetNumberOfLogs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLogs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLogs() :
      op->vtkPVTimerInformation::GetNumberOfLogs());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_GetLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLog(temp0) :
      op->vtkPVTimerInformation::GetLog(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

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
      op->vtkPVTimerInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_CopyFromMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

  unsigned char *temp0 = NULL;
  unsigned char *save0 = NULL;
  unsigned char small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new unsigned char[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->CopyFromMessage(temp0);
      }
    else
      {
      op->vtkPVTimerInformation::CopyFromMessage(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

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
      op->vtkPVTimerInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

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
      op->vtkPVTimerInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVTimerInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTimerInformation *op = static_cast<vtkPVTimerInformation *>(vp);

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
      op->vtkPVTimerInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVTimerInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVTimerInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVTimerInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVTimerInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVTimerInformation\nC++: vtkPVTimerInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVTimerInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVTimerInformation\nC++: vtkPVTimerInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLogThreshold", PyvtkPVTimerInformation_SetLogThreshold, METH_VARARGS,
   (char*)"V.SetLogThreshold(float)\nC++: void SetLogThreshold(double a)\n\nGet/Set the threshold to use to gather the timer log information.\nThis must be set before calling GatherInformation().\n"},
  {(char*)"GetLogThreshold", PyvtkPVTimerInformation_GetLogThreshold, METH_VARARGS,
   (char*)"V.GetLogThreshold() -> float\nC++: double GetLogThreshold()\n\nGet/Set the threshold to use to gather the timer log information.\nThis must be set before calling GatherInformation().\n"},
  {(char*)"GetNumberOfLogs", PyvtkPVTimerInformation_GetNumberOfLogs, METH_VARARGS,
   (char*)"V.GetNumberOfLogs() -> int\nC++: int GetNumberOfLogs()\n\nAccess to the logs.\n"},
  {(char*)"GetLog", PyvtkPVTimerInformation_GetLog, METH_VARARGS,
   (char*)"V.GetLog(int) -> string\nC++: char *GetLog(int proc)\n\nAccess to the logs.\n"},
  {(char*)"CopyFromObject", PyvtkPVTimerInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *data)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"CopyFromMessage", PyvtkPVTimerInformation_CopyFromMessage, METH_VARARGS,
   (char*)"V.CopyFromMessage([int, ...])\nC++: virtual void CopyFromMessage(unsigned char *msg)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"AddInformation", PyvtkPVTimerInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *info)\n\nMerge another information object.\n"},
  {(char*)"CopyToStream", PyvtkPVTimerInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nSerialize objects to/from a stream object.\n"},
  {(char*)"CopyFromStream", PyvtkPVTimerInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *css)\n\nSerialize objects to/from a stream object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVTimerInformation_StaticNew()
{
  return vtkPVTimerInformation::New();
}

PyObject *PyVTKClass_vtkPVTimerInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVTimerInformation_StaticNew,
    PyvtkPVTimerInformation_Methods,
    "vtkPVTimerInformation", modulename,
    NULL, NULL,
    PyvtkPVTimerInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVTimerInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVTimerInformation - Holds timer log for all processes.\n\n",
    "Superclass: vtkPVInformation\n\n",
    "I am using this information object to gather timer logs from all\nprocesses.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVTimerInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVTimerInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVTimerInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

