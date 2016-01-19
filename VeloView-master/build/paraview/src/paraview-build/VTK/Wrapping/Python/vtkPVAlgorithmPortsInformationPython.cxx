// python wrapper for vtkPVAlgorithmPortsInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVAlgorithmPortsInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVAlgorithmPortsInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVAlgorithmPortsInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVAlgorithmPortsInformation_Doc();


static PyObject *
PyvtkPVAlgorithmPortsInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAlgorithmPortsInformation *op = static_cast<vtkPVAlgorithmPortsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVAlgorithmPortsInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAlgorithmPortsInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAlgorithmPortsInformation *op = static_cast<vtkPVAlgorithmPortsInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVAlgorithmPortsInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAlgorithmPortsInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAlgorithmPortsInformation *op = static_cast<vtkPVAlgorithmPortsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVAlgorithmPortsInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVAlgorithmPortsInformation::NewInstance());

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
PyvtkPVAlgorithmPortsInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVAlgorithmPortsInformation *tempr = vtkPVAlgorithmPortsInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAlgorithmPortsInformation_GetNumberOfOutputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAlgorithmPortsInformation *op = static_cast<vtkPVAlgorithmPortsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfOutputs() :
      op->vtkPVAlgorithmPortsInformation::GetNumberOfOutputs());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAlgorithmPortsInformation_GetNumberOfRequiredInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRequiredInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAlgorithmPortsInformation *op = static_cast<vtkPVAlgorithmPortsInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRequiredInputs() :
      op->vtkPVAlgorithmPortsInformation::GetNumberOfRequiredInputs());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVAlgorithmPortsInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAlgorithmPortsInformation *op = static_cast<vtkPVAlgorithmPortsInformation *>(vp);

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
      op->vtkPVAlgorithmPortsInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAlgorithmPortsInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAlgorithmPortsInformation *op = static_cast<vtkPVAlgorithmPortsInformation *>(vp);

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
      op->vtkPVAlgorithmPortsInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAlgorithmPortsInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAlgorithmPortsInformation *op = static_cast<vtkPVAlgorithmPortsInformation *>(vp);

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
      op->vtkPVAlgorithmPortsInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVAlgorithmPortsInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAlgorithmPortsInformation *op = static_cast<vtkPVAlgorithmPortsInformation *>(vp);

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
      op->vtkPVAlgorithmPortsInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVAlgorithmPortsInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVAlgorithmPortsInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVAlgorithmPortsInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVAlgorithmPortsInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVAlgorithmPortsInformation\nC++: vtkPVAlgorithmPortsInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVAlgorithmPortsInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVAlgorithmPortsInformation\nC++: vtkPVAlgorithmPortsInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfOutputs", PyvtkPVAlgorithmPortsInformation_GetNumberOfOutputs, METH_VARARGS,
   (char*)"V.GetNumberOfOutputs() -> int\nC++: int GetNumberOfOutputs()\n\nGet number of outputs for a particular source.\n"},
  {(char*)"GetNumberOfRequiredInputs", PyvtkPVAlgorithmPortsInformation_GetNumberOfRequiredInputs, METH_VARARGS,
   (char*)"V.GetNumberOfRequiredInputs() -> int\nC++: int GetNumberOfRequiredInputs()\n\nGet the number of required inputs for a particular algorithm.\n"},
  {(char*)"CopyFromObject", PyvtkPVAlgorithmPortsInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"AddInformation", PyvtkPVAlgorithmPortsInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *)\n\nMerge another information object.\n"},
  {(char*)"CopyToStream", PyvtkPVAlgorithmPortsInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVAlgorithmPortsInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVAlgorithmPortsInformation_StaticNew()
{
  return vtkPVAlgorithmPortsInformation::New();
}

PyObject *PyVTKClass_vtkPVAlgorithmPortsInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVAlgorithmPortsInformation_StaticNew,
    PyvtkPVAlgorithmPortsInformation_Methods,
    "vtkPVAlgorithmPortsInformation", modulename,
    NULL, NULL,
    PyvtkPVAlgorithmPortsInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVAlgorithmPortsInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVAlgorithmPortsInformation - Holds number of outputs\n\n",
    "Superclass: vtkPVInformation\n\n",
    "This information object collects the number of outputs from the\nsources.  This is separate from vtkPVDataInformation because the\nnumber of outputs can be determined before Update is called.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVAlgorithmPortsInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVAlgorithmPortsInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVAlgorithmPortsInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

