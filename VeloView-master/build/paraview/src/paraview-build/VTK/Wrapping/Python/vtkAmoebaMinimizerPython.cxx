// python wrapper for vtkAmoebaMinimizer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAmoebaMinimizer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAmoebaMinimizer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAmoebaMinimizerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAmoebaMinimizer_Doc();


static PyObject *
PyvtkAmoebaMinimizer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAmoebaMinimizer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAmoebaMinimizer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAmoebaMinimizer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAmoebaMinimizer::NewInstance());

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
PyvtkAmoebaMinimizer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAmoebaMinimizer *tempr = vtkAmoebaMinimizer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFunction(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFunction(
        (temp0 == Py_None ? NULL : vtkPythonVoidFunc),
        (temp0 == Py_None ? NULL : temp0));
      if (temp0 != Py_None)
        {
        Py_INCREF(temp0);
        }
      op->SetFunctionArgDelete(
        (temp0 == Py_None ? NULL : vtkPythonVoidFuncArgDelete));
      }
    else
      {
      op->vtkAmoebaMinimizer::SetFunction(
        (temp0 == Py_None ? NULL : vtkPythonVoidFunc),
        (temp0 == Py_None ? NULL : temp0));
      if (temp0 != Py_None)
        {
        Py_INCREF(temp0);
        }
      op->vtkAmoebaMinimizer::SetFunctionArgDelete(
        (temp0 == Py_None ? NULL : vtkPythonVoidFuncArgDelete));
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SetParameterValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  char *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetParameterValue(temp0, temp1);
      }
    else
      {
      op->vtkAmoebaMinimizer::SetParameterValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAmoebaMinimizer_SetParameterValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetParameterValue(temp0, temp1);
      }
    else
      {
      op->vtkAmoebaMinimizer::SetParameterValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAmoebaMinimizer_SetParameterValue_Methods[] = {
  {NULL, PyvtkAmoebaMinimizer_SetParameterValue_s1, METH_VARARGS,
   (char*)"@zd"},
  {NULL, PyvtkAmoebaMinimizer_SetParameterValue_s2, METH_VARARGS,
   (char*)"@id"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAmoebaMinimizer_SetParameterValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAmoebaMinimizer_SetParameterValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetParameterValue");
  return NULL;
}



static PyObject *
PyvtkAmoebaMinimizer_SetParameterScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  char *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetParameterScale(temp0, temp1);
      }
    else
      {
      op->vtkAmoebaMinimizer::SetParameterScale(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAmoebaMinimizer_SetParameterScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetParameterScale(temp0, temp1);
      }
    else
      {
      op->vtkAmoebaMinimizer::SetParameterScale(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAmoebaMinimizer_SetParameterScale_Methods[] = {
  {NULL, PyvtkAmoebaMinimizer_SetParameterScale_s1, METH_VARARGS,
   (char*)"@zd"},
  {NULL, PyvtkAmoebaMinimizer_SetParameterScale_s2, METH_VARARGS,
   (char*)"@id"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAmoebaMinimizer_SetParameterScale(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAmoebaMinimizer_SetParameterScale_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetParameterScale");
  return NULL;
}



static PyObject *
PyvtkAmoebaMinimizer_GetParameterScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetParameterScale(temp0) :
      op->vtkAmoebaMinimizer::GetParameterScale(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAmoebaMinimizer_GetParameterScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetParameterScale(temp0) :
      op->vtkAmoebaMinimizer::GetParameterScale(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAmoebaMinimizer_GetParameterScale_Methods[] = {
  {NULL, PyvtkAmoebaMinimizer_GetParameterScale_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkAmoebaMinimizer_GetParameterScale_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAmoebaMinimizer_GetParameterScale(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAmoebaMinimizer_GetParameterScale_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetParameterScale");
  return NULL;
}



static PyObject *
PyvtkAmoebaMinimizer_GetParameterValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetParameterValue(temp0) :
      op->vtkAmoebaMinimizer::GetParameterValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAmoebaMinimizer_GetParameterValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetParameterValue(temp0) :
      op->vtkAmoebaMinimizer::GetParameterValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAmoebaMinimizer_GetParameterValue_Methods[] = {
  {NULL, PyvtkAmoebaMinimizer_GetParameterValue_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkAmoebaMinimizer_GetParameterValue_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAmoebaMinimizer_GetParameterValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAmoebaMinimizer_GetParameterValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetParameterValue");
  return NULL;
}



static PyObject *
PyvtkAmoebaMinimizer_GetParameterName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetParameterName(temp0) :
      op->vtkAmoebaMinimizer::GetParameterName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetNumberOfParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfParameters() :
      op->vtkAmoebaMinimizer::GetNumberOfParameters());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkAmoebaMinimizer::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_Minimize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Minimize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Minimize();
      }
    else
      {
      op->vtkAmoebaMinimizer::Minimize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_Iterate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Iterate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Iterate() :
      op->vtkAmoebaMinimizer::Iterate());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SetFunctionValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFunctionValue(temp0);
      }
    else
      {
      op->vtkAmoebaMinimizer::SetFunctionValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetFunctionValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetFunctionValue() :
      op->vtkAmoebaMinimizer::GetFunctionValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SetContractionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContractionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetContractionRatio(temp0);
      }
    else
      {
      op->vtkAmoebaMinimizer::SetContractionRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetContractionRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContractionRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetContractionRatioMinValue() :
      op->vtkAmoebaMinimizer::GetContractionRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetContractionRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContractionRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetContractionRatioMaxValue() :
      op->vtkAmoebaMinimizer::GetContractionRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetContractionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContractionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetContractionRatio() :
      op->vtkAmoebaMinimizer::GetContractionRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SetExpansionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExpansionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExpansionRatio(temp0);
      }
    else
      {
      op->vtkAmoebaMinimizer::SetExpansionRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetExpansionRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpansionRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetExpansionRatioMinValue() :
      op->vtkAmoebaMinimizer::GetExpansionRatioMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetExpansionRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpansionRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetExpansionRatioMaxValue() :
      op->vtkAmoebaMinimizer::GetExpansionRatioMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetExpansionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpansionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetExpansionRatio() :
      op->vtkAmoebaMinimizer::GetExpansionRatio());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkAmoebaMinimizer::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkAmoebaMinimizer::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SetParameterTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParameterTolerance(temp0);
      }
    else
      {
      op->vtkAmoebaMinimizer::SetParameterTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetParameterTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetParameterTolerance() :
      op->vtkAmoebaMinimizer::GetParameterTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_SetMaxIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxIterations(temp0);
      }
    else
      {
      op->vtkAmoebaMinimizer::SetMaxIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetMaxIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaxIterations() :
      op->vtkAmoebaMinimizer::GetMaxIterations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIterations() :
      op->vtkAmoebaMinimizer::GetIterations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_GetFunctionEvaluations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionEvaluations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFunctionEvaluations() :
      op->vtkAmoebaMinimizer::GetFunctionEvaluations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAmoebaMinimizer_EvaluateFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAmoebaMinimizer *op = static_cast<vtkAmoebaMinimizer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EvaluateFunction();
      }
    else
      {
      op->vtkAmoebaMinimizer::EvaluateFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAmoebaMinimizer_Methods[] = {
  {(char*)"GetClassName", PyvtkAmoebaMinimizer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAmoebaMinimizer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAmoebaMinimizer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAmoebaMinimizer\nC++: vtkAmoebaMinimizer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAmoebaMinimizer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAmoebaMinimizer\nC++: vtkAmoebaMinimizer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFunction", PyvtkAmoebaMinimizer_SetFunction, METH_VARARGS,
   (char*)"V.SetFunction(function)\nC++: void SetFunction(void (*f)(void *), void *arg)\n\nSpecify the function to be minimized.  When this function is\ncalled, it must get the parameter values by calling\nGetParameterValue() for each parameter, and then must call\nSetFunctionValue() to tell the minimizer what the result of the\nfunction evaluation was.  The number of function evaluations used\nfor the minimization can be retrieved using\nGetFunctionEvaluations().\n"},
  {(char*)"SetParameterValue", PyvtkAmoebaMinimizer_SetParameterValue, METH_VARARGS,
   (char*)"V.SetParameterValue(string, float)\nC++: void SetParameterValue(const char *name, double value)\nV.SetParameterValue(int, float)\nC++: void SetParameterValue(int i, double value)\n\nSet the initial value for the specified parameter.  Calling this\nfunction for any parameter will reset the Iterations and the\nFunctionEvaluations counts to zero.  You must also use\nSetParameterScale() to specify the step size by which the\nparameter will be modified during the minimization.  It is\npreferable to specify parameters by name, rather than by number.\n"},
  {(char*)"SetParameterScale", PyvtkAmoebaMinimizer_SetParameterScale, METH_VARARGS,
   (char*)"V.SetParameterScale(string, float)\nC++: void SetParameterScale(const char *name, double scale)\nV.SetParameterScale(int, float)\nC++: void SetParameterScale(int i, double scale)\n\nSet the scale to use when modifying a parameter, i.e. the initial\namount by which the parameter will be modified during the search\nfor the minimum.  It is preferable to identify scalars by name\nrather than by number.\n"},
  {(char*)"GetParameterScale", PyvtkAmoebaMinimizer_GetParameterScale, METH_VARARGS,
   (char*)"V.GetParameterScale(string) -> float\nC++: double GetParameterScale(const char *name)\nV.GetParameterScale(int) -> float\nC++: double GetParameterScale(int i)\n\nSet the scale to use when modifying a parameter, i.e. the initial\namount by which the parameter will be modified during the search\nfor the minimum.  It is preferable to identify scalars by name\nrather than by number.\n"},
  {(char*)"GetParameterValue", PyvtkAmoebaMinimizer_GetParameterValue, METH_VARARGS,
   (char*)"V.GetParameterValue(string) -> float\nC++: double GetParameterValue(const char *name)\nV.GetParameterValue(int) -> float\nC++: double GetParameterValue(int i)\n\nGet the value of a parameter at the current stage of the\nminimization. Call this method within the function that you are\nminimizing in order to get the current parameter values.  It is\npreferable to specify parameters by name rather than by index.\n"},
  {(char*)"GetParameterName", PyvtkAmoebaMinimizer_GetParameterName, METH_VARARGS,
   (char*)"V.GetParameterName(int) -> string\nC++: const char *GetParameterName(int i)\n\nFor completeness, an unchecked method to get the name for\nparticular parameter (the result will be NULL if no name was\nset).\n"},
  {(char*)"GetNumberOfParameters", PyvtkAmoebaMinimizer_GetNumberOfParameters, METH_VARARGS,
   (char*)"V.GetNumberOfParameters() -> int\nC++: int GetNumberOfParameters()\n\nGet the number of parameters that have been set.\n"},
  {(char*)"Initialize", PyvtkAmoebaMinimizer_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nInitialize the minimizer.  This will reset the number of\nparameters to zero so that the minimizer can be reused.\n"},
  {(char*)"Minimize", PyvtkAmoebaMinimizer_Minimize, METH_VARARGS,
   (char*)"V.Minimize()\nC++: virtual void Minimize()\n\nIterate until the minimum is found to within the specified\ntolerance, or until the MaxIterations has been reached.\n"},
  {(char*)"Iterate", PyvtkAmoebaMinimizer_Iterate, METH_VARARGS,
   (char*)"V.Iterate() -> int\nC++: virtual int Iterate()\n\nPerform one iteration of minimization.  Returns zero if the\ntolerance stopping criterion has been met.\n"},
  {(char*)"SetFunctionValue", PyvtkAmoebaMinimizer_SetFunctionValue, METH_VARARGS,
   (char*)"V.SetFunctionValue(float)\nC++: void SetFunctionValue(double a)\n\nGet the function value resulting from the minimization.\n"},
  {(char*)"GetFunctionValue", PyvtkAmoebaMinimizer_GetFunctionValue, METH_VARARGS,
   (char*)"V.GetFunctionValue() -> float\nC++: double GetFunctionValue()\n\nGet the function value resulting from the minimization.\n"},
  {(char*)"SetContractionRatio", PyvtkAmoebaMinimizer_SetContractionRatio, METH_VARARGS,
   (char*)"V.SetContractionRatio(float)\nC++: void SetContractionRatio(double)\n\nSet the amoeba contraction ratio.  The default value of 0.5 gives\nfast convergence, but larger values such as 0.6 or 0.7 provide\ngreater stability.\n"},
  {(char*)"GetContractionRatioMinValue", PyvtkAmoebaMinimizer_GetContractionRatioMinValue, METH_VARARGS,
   (char*)"V.GetContractionRatioMinValue() -> float\nC++: double GetContractionRatioMinValue()\n\nSet the amoeba contraction ratio.  The default value of 0.5 gives\nfast convergence, but larger values such as 0.6 or 0.7 provide\ngreater stability.\n"},
  {(char*)"GetContractionRatioMaxValue", PyvtkAmoebaMinimizer_GetContractionRatioMaxValue, METH_VARARGS,
   (char*)"V.GetContractionRatioMaxValue() -> float\nC++: double GetContractionRatioMaxValue()\n\nSet the amoeba contraction ratio.  The default value of 0.5 gives\nfast convergence, but larger values such as 0.6 or 0.7 provide\ngreater stability.\n"},
  {(char*)"GetContractionRatio", PyvtkAmoebaMinimizer_GetContractionRatio, METH_VARARGS,
   (char*)"V.GetContractionRatio() -> float\nC++: double GetContractionRatio()\n\nSet the amoeba contraction ratio.  The default value of 0.5 gives\nfast convergence, but larger values such as 0.6 or 0.7 provide\ngreater stability.\n"},
  {(char*)"SetExpansionRatio", PyvtkAmoebaMinimizer_SetExpansionRatio, METH_VARARGS,
   (char*)"V.SetExpansionRatio(float)\nC++: void SetExpansionRatio(double)\n\nSet the amoeba expansion ratio.  The default value is 2.0, which\nprovides rapid expansion.  Values between 1.1 and 2.0 are valid.\n"},
  {(char*)"GetExpansionRatioMinValue", PyvtkAmoebaMinimizer_GetExpansionRatioMinValue, METH_VARARGS,
   (char*)"V.GetExpansionRatioMinValue() -> float\nC++: double GetExpansionRatioMinValue()\n\nSet the amoeba expansion ratio.  The default value is 2.0, which\nprovides rapid expansion.  Values between 1.1 and 2.0 are valid.\n"},
  {(char*)"GetExpansionRatioMaxValue", PyvtkAmoebaMinimizer_GetExpansionRatioMaxValue, METH_VARARGS,
   (char*)"V.GetExpansionRatioMaxValue() -> float\nC++: double GetExpansionRatioMaxValue()\n\nSet the amoeba expansion ratio.  The default value is 2.0, which\nprovides rapid expansion.  Values between 1.1 and 2.0 are valid.\n"},
  {(char*)"GetExpansionRatio", PyvtkAmoebaMinimizer_GetExpansionRatio, METH_VARARGS,
   (char*)"V.GetExpansionRatio() -> float\nC++: double GetExpansionRatio()\n\nSet the amoeba expansion ratio.  The default value is 2.0, which\nprovides rapid expansion.  Values between 1.1 and 2.0 are valid.\n"},
  {(char*)"SetTolerance", PyvtkAmoebaMinimizer_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double a)\n\nSpecify the value tolerance to aim for during the minimization.\n"},
  {(char*)"GetTolerance", PyvtkAmoebaMinimizer_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSpecify the value tolerance to aim for during the minimization.\n"},
  {(char*)"SetParameterTolerance", PyvtkAmoebaMinimizer_SetParameterTolerance, METH_VARARGS,
   (char*)"V.SetParameterTolerance(float)\nC++: void SetParameterTolerance(double a)\n\nSpecify the parameter tolerance to aim for during the\nminimization.\n"},
  {(char*)"GetParameterTolerance", PyvtkAmoebaMinimizer_GetParameterTolerance, METH_VARARGS,
   (char*)"V.GetParameterTolerance() -> float\nC++: double GetParameterTolerance()\n\nSpecify the parameter tolerance to aim for during the\nminimization.\n"},
  {(char*)"SetMaxIterations", PyvtkAmoebaMinimizer_SetMaxIterations, METH_VARARGS,
   (char*)"V.SetMaxIterations(int)\nC++: void SetMaxIterations(int a)\n\nSpecify the maximum number of iterations to try before giving up.\n"},
  {(char*)"GetMaxIterations", PyvtkAmoebaMinimizer_GetMaxIterations, METH_VARARGS,
   (char*)"V.GetMaxIterations() -> int\nC++: int GetMaxIterations()\n\nSpecify the maximum number of iterations to try before giving up.\n"},
  {(char*)"GetIterations", PyvtkAmoebaMinimizer_GetIterations, METH_VARARGS,
   (char*)"V.GetIterations() -> int\nC++: int GetIterations()\n\nReturn the number of interations that have been performed.  This\nis not necessarily the same as the number of function\nevaluations.\n"},
  {(char*)"GetFunctionEvaluations", PyvtkAmoebaMinimizer_GetFunctionEvaluations, METH_VARARGS,
   (char*)"V.GetFunctionEvaluations() -> int\nC++: int GetFunctionEvaluations()\n\nReturn the number of times that the function has been evaluated.\n"},
  {(char*)"EvaluateFunction", PyvtkAmoebaMinimizer_EvaluateFunction, METH_VARARGS,
   (char*)"V.EvaluateFunction()\nC++: void EvaluateFunction()\n\nEvaluate the function.  This is usually called internally by the\nminimization code, but it is provided here as a public method.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAmoebaMinimizer_StaticNew()
{
  return vtkAmoebaMinimizer::New();
}

PyObject *PyVTKClass_vtkAmoebaMinimizerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAmoebaMinimizer_StaticNew,
    PyvtkAmoebaMinimizer_Methods,
    "vtkAmoebaMinimizer", modulename,
    NULL, NULL,
    PyvtkAmoebaMinimizer_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAmoebaMinimizer_Doc()
{
  static const char *docstring[] = {
    "vtkAmoebaMinimizer - nonlinear optimization with a simplex\n\n",
    "Superclass: vtkObject\n\n",
    "vtkAmoebaMinimizer will modify a set of parameters in order to find\nthe minimum of a specified function.  The method used is commonly\nknown as the amoeba method, it constructs an n-dimensional simplex in\nparameter space (i.e. a tetrahedron if the number or parameters is 3)\nand moves the vertices around parameter space until a local minimum\nis found.  The amoeba method is robust, reasonably efficie",
    "nt, but is\nnot guaranteed to find the global minimum if several local minima\nexist.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAmoebaMinimizer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAmoebaMinimizerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAmoebaMinimizer", o) != 0)
    {
    Py_DECREF(o);
    }

}

