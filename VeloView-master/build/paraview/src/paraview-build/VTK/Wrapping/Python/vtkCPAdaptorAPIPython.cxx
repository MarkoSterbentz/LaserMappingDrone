// python wrapper for vtkCPAdaptorAPI
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkCPAdaptorAPI.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCPAdaptorAPI(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCPAdaptorAPINew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCPAdaptorAPI_Doc();


static PyObject *
PyvtkCPAdaptorAPI_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPAdaptorAPI *op = static_cast<vtkCPAdaptorAPI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCPAdaptorAPI::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPAdaptorAPI *op = static_cast<vtkCPAdaptorAPI *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPAdaptorAPI::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPAdaptorAPI *op = static_cast<vtkCPAdaptorAPI *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCPAdaptorAPI *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPAdaptorAPI::NewInstance());

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
PyvtkCPAdaptorAPI_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCPAdaptorAPI *tempr = vtkCPAdaptorAPI::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_CoProcessorInitialize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CoProcessorInitialize");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkCPAdaptorAPI::CoProcessorInitialize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_CoProcessorFinalize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CoProcessorFinalize");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkCPAdaptorAPI::CoProcessorFinalize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_RequestDataDescription(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RequestDataDescription");

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new int[2*size0];
    }
  save0 = &temp0[size0];
  size1 = ap.GetArgSize(1);
  temp1 = small1;
  if (size1 > 4)
    {
    temp1 = new double[2*size1];
    }
  save1 = &temp1[size1];
  size2 = ap.GetArgSize(2);
  temp2 = small2;
  if (size2 > 4)
    {
    temp2 = new int[2*size2];
    }
  save2 = &temp2[size2];

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    vtkCPAdaptorAPI::RequestDataDescription(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
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
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_NeedToCreateGrid(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NeedToCreateGrid");

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new int[2*size0];
    }
  save0 = &temp0[size0];

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkCPAdaptorAPI::NeedToCreateGrid(temp0);

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
PyvtkCPAdaptorAPI_CoProcess(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CoProcess");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkCPAdaptorAPI::CoProcess();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_GetCoProcessorData(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCoProcessorData");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkCPDataDescription *tempr = vtkCPAdaptorAPI::GetCoProcessorData();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCPAdaptorAPI_GetCoProcessor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCoProcessor");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkCPProcessor *tempr = vtkCPAdaptorAPI::GetCoProcessor();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCPAdaptorAPI_Methods[] = {
  {(char*)"GetClassName", PyvtkCPAdaptorAPI_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCPAdaptorAPI_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCPAdaptorAPI_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCPAdaptorAPI\nC++: vtkCPAdaptorAPI *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCPAdaptorAPI_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCPAdaptorAPI\nC++: vtkCPAdaptorAPI *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CoProcessorInitialize", PyvtkCPAdaptorAPI_CoProcessorInitialize, METH_VARARGS | METH_STATIC,
   (char*)"V.CoProcessorInitialize()\nC++: static void CoProcessorInitialize()\n\n"},
  {(char*)"CoProcessorFinalize", PyvtkCPAdaptorAPI_CoProcessorFinalize, METH_VARARGS | METH_STATIC,
   (char*)"V.CoProcessorFinalize()\nC++: static void CoProcessorFinalize()\n\n"},
  {(char*)"RequestDataDescription", PyvtkCPAdaptorAPI_RequestDataDescription, METH_VARARGS | METH_STATIC,
   (char*)"V.RequestDataDescription([int, ...], [float, ...], [int, ...])\nC++: static void RequestDataDescription(int *timeStep,\n    double *time, int *coprocessThisTimeStep)\n\n"},
  {(char*)"NeedToCreateGrid", PyvtkCPAdaptorAPI_NeedToCreateGrid, METH_VARARGS | METH_STATIC,
   (char*)"V.NeedToCreateGrid([int, ...])\nC++: static void NeedToCreateGrid(int *needGrid)\n\n"},
  {(char*)"CoProcess", PyvtkCPAdaptorAPI_CoProcess, METH_VARARGS | METH_STATIC,
   (char*)"V.CoProcess()\nC++: static void CoProcess()\n\n"},
  {(char*)"GetCoProcessorData", PyvtkCPAdaptorAPI_GetCoProcessorData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetCoProcessorData() -> vtkCPDataDescription\nC++: static vtkCPDataDescription *GetCoProcessorData()\n\n"},
  {(char*)"GetCoProcessor", PyvtkCPAdaptorAPI_GetCoProcessor, METH_VARARGS | METH_STATIC,
   (char*)"V.GetCoProcessor() -> vtkCPProcessor\nC++: static vtkCPProcessor *GetCoProcessor()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkCPAdaptorAPINew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkCPAdaptorAPI_Methods,
    "vtkCPAdaptorAPI", modulename,
    NULL, NULL,
    PyvtkCPAdaptorAPI_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCPAdaptorAPI_Doc()
{
  static const char *docstring[] = {
    "vtkCPAdaptorAPI - no description provided.\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCPAdaptorAPI(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCPAdaptorAPINew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCPAdaptorAPI", o) != 0)
    {
    Py_DECREF(o);
    }

}

