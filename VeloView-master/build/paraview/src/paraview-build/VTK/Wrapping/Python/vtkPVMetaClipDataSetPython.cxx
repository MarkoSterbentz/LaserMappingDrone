// python wrapper for vtkPVMetaClipDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkPVMetaClipDataSet.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVMetaClipDataSet(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVMetaClipDataSetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVDataSetAlgorithmSelectorFilterNew
extern "C" { PyObject *PyVTKClass_vtkPVDataSetAlgorithmSelectorFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVDataSetAlgorithmSelectorFilterNew
#endif

static const char **PyvtkPVMetaClipDataSet_Doc();


static PyObject *
PyvtkPVMetaClipDataSet_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVMetaClipDataSet::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVMetaClipDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVMetaClipDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVMetaClipDataSet::NewInstance());

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
PyvtkPVMetaClipDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVMetaClipDataSet *tempr = vtkPVMetaClipDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_PreserveInputCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveInputCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->PreserveInputCells(temp0);
      }
    else
      {
      op->vtkPVMetaClipDataSet::PreserveInputCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetImplicitFunction(temp0);
      }
    else
      {
      op->vtkPVMetaClipDataSet::SetImplicitFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInsideOut(temp0);
      }
    else
      {
      op->vtkPVMetaClipDataSet::SetInsideOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_SetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetClipFunction(temp0);
      }
    else
      {
      op->vtkPVMetaClipDataSet::SetClipFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0);
      }
    else
      {
      op->vtkPVMetaClipDataSet::SetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  char *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkPVMetaClipDataSet::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkPVMetaClipDataSet::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1);
      }
    else
      {
      op->vtkPVMetaClipDataSet::SetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  int temp0;
  int temp1;
  int temp2;
  char *temp3 = NULL;
  char *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkPVMetaClipDataSet::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVMetaClipDataSet_SetInputArrayToProcess_Methods[] = {
  {NULL, PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s1, METH_VARARGS,
   (char*)"@iiiiz"},
  {NULL, PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s2, METH_VARARGS,
   (char*)"@iiiii"},
  {NULL, PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s4, METH_VARARGS,
   (char*)"@iiizz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVMetaClipDataSet_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVMetaClipDataSet_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPVMetaClipDataSet_SetInputArrayToProcess_s3(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return NULL;
}



static PyObject *
PyvtkPVMetaClipDataSet_SetUseValueAsOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseValueAsOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseValueAsOffset(temp0);
      }
    else
      {
      op->vtkPVMetaClipDataSet::SetUseValueAsOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMetaClipDataSet_ProcessRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMetaClipDataSet *op = static_cast<vtkPVMetaClipDataSet *>(vp);

  vtkInformation *temp0 = NULL;
  vtkCollection *temp1 = NULL;
  vtkInformationVector *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkInformationVector"))
    {
    int tempr = (ap.IsBound() ?
      op->ProcessRequest(temp0, temp1, temp2) :
      op->vtkPVMetaClipDataSet::ProcessRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVMetaClipDataSet_Methods[] = {
  {(char*)"GetClassName", PyvtkPVMetaClipDataSet_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVMetaClipDataSet_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVMetaClipDataSet_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVMetaClipDataSet\nC++: vtkPVMetaClipDataSet *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVMetaClipDataSet_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVMetaClipDataSet\nC++: vtkPVMetaClipDataSet *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PreserveInputCells", PyvtkPVMetaClipDataSet_PreserveInputCells, METH_VARARGS,
   (char*)"V.PreserveInputCells(int)\nC++: void PreserveInputCells(int keepCellAsIs)\n\nEnable or disable the Extract Cells By Regions.\n"},
  {(char*)"SetImplicitFunction", PyvtkPVMetaClipDataSet_SetImplicitFunction, METH_VARARGS,
   (char*)"V.SetImplicitFunction(vtkImplicitFunction)\nC++: void SetImplicitFunction(vtkImplicitFunction *func)\n\n"},
  {(char*)"SetInsideOut", PyvtkPVMetaClipDataSet_SetInsideOut, METH_VARARGS,
   (char*)"V.SetInsideOut(int)\nC++: void SetInsideOut(int insideOut)\n\n"},
  {(char*)"SetClipFunction", PyvtkPVMetaClipDataSet_SetClipFunction, METH_VARARGS,
   (char*)"V.SetClipFunction(vtkImplicitFunction)\nC++: void SetClipFunction(vtkImplicitFunction *func)\n\nExpose method from vtkCutter\n"},
  {(char*)"SetValue", PyvtkPVMetaClipDataSet_SetValue, METH_VARARGS,
   (char*)"V.SetValue(float)\nC++: void SetValue(double value)\n\nExpose method from vtkClip\n"},
  {(char*)"SetInputArrayToProcess", PyvtkPVMetaClipDataSet_SetInputArrayToProcess, METH_VARARGS,
   (char*)"V.SetInputArrayToProcess(int, int, int, int, string)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\nV.SetInputArrayToProcess(int, int, int, int, int)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, int fieldAttributeType)\nV.SetInputArrayToProcess(int, vtkInformation)\nC++: virtual void SetInputArrayToProcess(int idx,\n    vtkInformation *info)\nV.SetInputArrayToProcess(int, int, int, string, string)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, const char *fieldName, const char *fieldType)\n\n"},
  {(char*)"SetUseValueAsOffset", PyvtkPVMetaClipDataSet_SetUseValueAsOffset, METH_VARARGS,
   (char*)"V.SetUseValueAsOffset(int)\nC++: void SetUseValueAsOffset(int)\n\nExpose method from vtkClip\n"},
  {(char*)"ProcessRequest", PyvtkPVMetaClipDataSet_ProcessRequest, METH_VARARGS,
   (char*)"V.ProcessRequest(vtkInformation, vtkCollection,\n    vtkInformationVector) -> int\nC++: virtual int ProcessRequest(vtkInformation *request,\n    vtkCollection *inInfo, vtkInformationVector *outInfo)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVMetaClipDataSet_StaticNew()
{
  return vtkPVMetaClipDataSet::New();
}

PyObject *PyVTKClass_vtkPVMetaClipDataSetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVMetaClipDataSet_StaticNew,
    PyvtkPVMetaClipDataSet_Methods,
    "vtkPVMetaClipDataSet", modulename,
    NULL, NULL,
    PyvtkPVMetaClipDataSet_Doc(),
    PyVTKClass_vtkPVDataSetAlgorithmSelectorFilterNew(modulename));
  return cls;
}

const char **PyvtkPVMetaClipDataSet_Doc()
{
  static const char *docstring[] = {
    "vtkPVMetaClipDataSet -\n\n",
    "Superclass: vtkPVDataSetAlgorithmSelectorFilter\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVMetaClipDataSet(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVMetaClipDataSetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVMetaClipDataSet", o) != 0)
    {
    Py_DECREF(o);
    }

}

