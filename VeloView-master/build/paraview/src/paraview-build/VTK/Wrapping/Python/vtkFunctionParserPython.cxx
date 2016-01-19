// python wrapper for vtkFunctionParser
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFunctionParser.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFunctionParser(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFunctionParserNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkFunctionParser_Doc();


static PyObject *
PyvtkFunctionParser_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFunctionParser::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFunctionParser::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFunctionParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFunctionParser::NewInstance());

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
PyvtkFunctionParser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFunctionParser *tempr = vtkFunctionParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFunctionParser::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_SetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFunction(temp0);
      }
    else
      {
      op->vtkFunctionParser::SetFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFunction() :
      op->vtkFunctionParser::GetFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_IsScalarResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsScalarResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsScalarResult() :
      op->vtkFunctionParser::IsScalarResult());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_IsVectorResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsVectorResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsVectorResult() :
      op->vtkFunctionParser::IsVectorResult());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetScalarResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScalarResult() :
      op->vtkFunctionParser::GetScalarResult());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetVectorResult_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetVectorResult() :
      op->vtkFunctionParser::GetVectorResult());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetVectorResult_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetVectorResult(temp0);
      }
    else
      {
      op->vtkFunctionParser::GetVectorResult(temp0);
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

  return result;
}

static PyObject *
PyvtkFunctionParser_GetVectorResult(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkFunctionParser_GetVectorResult_s1(self, args);
    case 1:
      return PyvtkFunctionParser_GetVectorResult_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVectorResult");
  return NULL;
}



static PyObject *
PyvtkFunctionParser_SetScalarVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  char *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetScalarVariableValue(temp0, temp1);
      }
    else
      {
      op->vtkFunctionParser::SetScalarVariableValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFunctionParser_SetScalarVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetScalarVariableValue(temp0, temp1);
      }
    else
      {
      op->vtkFunctionParser::SetScalarVariableValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFunctionParser_SetScalarVariableValue_Methods[] = {
  {NULL, PyvtkFunctionParser_SetScalarVariableValue_s1, METH_VARARGS,
   (char*)"@zd"},
  {NULL, PyvtkFunctionParser_SetScalarVariableValue_s2, METH_VARARGS,
   (char*)"@id"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkFunctionParser_SetScalarVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_SetScalarVariableValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarVariableValue");
  return NULL;
}



static PyObject *
PyvtkFunctionParser_GetScalarVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScalarVariableValue(temp0) :
      op->vtkFunctionParser::GetScalarVariableValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetScalarVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetScalarVariableValue(temp0) :
      op->vtkFunctionParser::GetScalarVariableValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFunctionParser_GetScalarVariableValue_Methods[] = {
  {NULL, PyvtkFunctionParser_GetScalarVariableValue_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkFunctionParser_GetScalarVariableValue_s2, METH_VARARGS,
   (char*)"@i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkFunctionParser_GetScalarVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_GetScalarVariableValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarVariableValue");
  return NULL;
}



static PyObject *
PyvtkFunctionParser_SetVectorVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  char *temp0 = NULL;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetVectorVariableValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkFunctionParser::SetVectorVariableValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFunctionParser_SetVectorVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  char *temp0 = NULL;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetVectorVariableValue(temp0, temp1);
      }
    else
      {
      op->vtkFunctionParser::SetVectorVariableValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFunctionParser_SetVectorVariableValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetVectorVariableValue(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkFunctionParser::SetVectorVariableValue(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFunctionParser_SetVectorVariableValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetVectorVariableValue(temp0, temp1);
      }
    else
      {
      op->vtkFunctionParser::SetVectorVariableValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFunctionParser_SetVectorVariableValue_Methods[] = {
  {NULL, PyvtkFunctionParser_SetVectorVariableValue_s1, METH_VARARGS,
   (char*)"@zddd"},
  {NULL, PyvtkFunctionParser_SetVectorVariableValue_s2, METH_VARARGS,
   (char*)"@zO *d"},
  {NULL, PyvtkFunctionParser_SetVectorVariableValue_s3, METH_VARARGS,
   (char*)"@iddd"},
  {NULL, PyvtkFunctionParser_SetVectorVariableValue_s4, METH_VARARGS,
   (char*)"@iO *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkFunctionParser_SetVectorVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_SetVectorVariableValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVectorVariableValue");
  return NULL;
}



static PyObject *
PyvtkFunctionParser_GetVectorVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  char *temp0 = NULL;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetVectorVariableValue(temp0) :
      op->vtkFunctionParser::GetVectorVariableValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetVectorVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  char *temp0 = NULL;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetVectorVariableValue(temp0, temp1);
      }
    else
      {
      op->vtkFunctionParser::GetVectorVariableValue(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetVectorVariableValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetVectorVariableValue(temp0) :
      op->vtkFunctionParser::GetVectorVariableValue(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetVectorVariableValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetVectorVariableValue(temp0, temp1);
      }
    else
      {
      op->vtkFunctionParser::GetVectorVariableValue(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFunctionParser_GetVectorVariableValue_Methods[] = {
  {NULL, PyvtkFunctionParser_GetVectorVariableValue_s1, METH_VARARGS,
   (char*)"@z"},
  {NULL, PyvtkFunctionParser_GetVectorVariableValue_s2, METH_VARARGS,
   (char*)"@zO *d"},
  {NULL, PyvtkFunctionParser_GetVectorVariableValue_s3, METH_VARARGS,
   (char*)"@i"},
  {NULL, PyvtkFunctionParser_GetVectorVariableValue_s4, METH_VARARGS,
   (char*)"@iO *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkFunctionParser_GetVectorVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_GetVectorVariableValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVectorVariableValue");
  return NULL;
}



static PyObject *
PyvtkFunctionParser_GetNumberOfScalarVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarVariables() :
      op->vtkFunctionParser::GetNumberOfScalarVariables());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetNumberOfVectorVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVectorVariables() :
      op->vtkFunctionParser::GetNumberOfVectorVariables());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetScalarVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetScalarVariableName(temp0) :
      op->vtkFunctionParser::GetScalarVariableName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetVectorVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVectorVariableName(temp0) :
      op->vtkFunctionParser::GetVectorVariableName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_RemoveAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllVariables();
      }
    else
      {
      op->vtkFunctionParser::RemoveAllVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_RemoveScalarVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveScalarVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveScalarVariables();
      }
    else
      {
      op->vtkFunctionParser::RemoveScalarVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_RemoveVectorVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVectorVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveVectorVariables();
      }
    else
      {
      op->vtkFunctionParser::RemoveVectorVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_SetReplaceInvalidValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceInvalidValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReplaceInvalidValues(temp0);
      }
    else
      {
      op->vtkFunctionParser::SetReplaceInvalidValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetReplaceInvalidValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceInvalidValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReplaceInvalidValues() :
      op->vtkFunctionParser::GetReplaceInvalidValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_ReplaceInvalidValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInvalidValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceInvalidValuesOn();
      }
    else
      {
      op->vtkFunctionParser::ReplaceInvalidValuesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_ReplaceInvalidValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInvalidValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReplaceInvalidValuesOff();
      }
    else
      {
      op->vtkFunctionParser::ReplaceInvalidValuesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_SetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReplacementValue(temp0);
      }
    else
      {
      op->vtkFunctionParser::SetReplacementValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetReplacementValue() :
      op->vtkFunctionParser::GetReplacementValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFunctionParser_InvalidateFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InvalidateFunction();
      }
    else
      {
      op->vtkFunctionParser::InvalidateFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFunctionParser_Methods[] = {
  {(char*)"GetClassName", PyvtkFunctionParser_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFunctionParser_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFunctionParser_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFunctionParser\nC++: vtkFunctionParser *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFunctionParser_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFunctionParser\nC++: vtkFunctionParser *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkFunctionParser_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long int GetMTime()\n\nReturn parser's MTime\n"},
  {(char*)"SetFunction", PyvtkFunctionParser_SetFunction, METH_VARARGS,
   (char*)"V.SetFunction(string)\nC++: void SetFunction(const char *function)\n\nSet/Get input string to evaluate.\n"},
  {(char*)"GetFunction", PyvtkFunctionParser_GetFunction, METH_VARARGS,
   (char*)"V.GetFunction() -> string\nC++: char *GetFunction()\n\nSet/Get input string to evaluate.\n"},
  {(char*)"IsScalarResult", PyvtkFunctionParser_IsScalarResult, METH_VARARGS,
   (char*)"V.IsScalarResult() -> int\nC++: int IsScalarResult()\n\nCheck whether the result is a scalar result.  If it isn't, then\neither the result is a vector or an error has occurred.\n"},
  {(char*)"IsVectorResult", PyvtkFunctionParser_IsVectorResult, METH_VARARGS,
   (char*)"V.IsVectorResult() -> int\nC++: int IsVectorResult()\n\nCheck whether the result is a vector result.  If it isn't, then\neither the result is scalar or an error has occurred.\n"},
  {(char*)"GetScalarResult", PyvtkFunctionParser_GetScalarResult, METH_VARARGS,
   (char*)"V.GetScalarResult() -> float\nC++: double GetScalarResult()\n\nGet a scalar result from evaluating the input function.\n"},
  {(char*)"GetVectorResult", PyvtkFunctionParser_GetVectorResult, METH_VARARGS,
   (char*)"V.GetVectorResult() -> (float, float, float)\nC++: double *GetVectorResult()\nV.GetVectorResult([float, float, float])\nC++: void GetVectorResult(double result[3])\n\nGet a vector result from evaluating the input function.\n"},
  {(char*)"SetScalarVariableValue", PyvtkFunctionParser_SetScalarVariableValue, METH_VARARGS,
   (char*)"V.SetScalarVariableValue(string, float)\nC++: void SetScalarVariableValue(const char *variableName,\n    double value)\nV.SetScalarVariableValue(int, float)\nC++: void SetScalarVariableValue(int i, double value)\n\nSet the value of a scalar variable.  If a variable with this name\nexists, then its value will be set to the new value.  If there is\nnot already a variable with this name, variableName will be added\nto the list of variables, and its value will be set to the new\nvalue.\n"},
  {(char*)"GetScalarVariableValue", PyvtkFunctionParser_GetScalarVariableValue, METH_VARARGS,
   (char*)"V.GetScalarVariableValue(string) -> float\nC++: double GetScalarVariableValue(const char *variableName)\nV.GetScalarVariableValue(int) -> float\nC++: double GetScalarVariableValue(int i)\n\nGet the value of a scalar variable.\n"},
  {(char*)"SetVectorVariableValue", PyvtkFunctionParser_SetVectorVariableValue, METH_VARARGS,
   (char*)"V.SetVectorVariableValue(string, float, float, float)\nC++: void SetVectorVariableValue(const char *variableName,\n    double xValue, double yValue, double zValue)\nV.SetVectorVariableValue(string, (float, float, float))\nC++: void SetVectorVariableValue(const char *variableName,\n    const double values[3])\nV.SetVectorVariableValue(int, float, float, float)\nC++: void SetVectorVariableValue(int i, double xValue,\n    double yValue, double zValue)\nV.SetVectorVariableValue(int, (float, float, float))\nC++: void SetVectorVariableValue(int i, const double values[3])\n\nSet the value of a vector variable.  If a variable with this name\nexists, then its value will be set to the new value.  If there is\nnot already a variable with this name, variableName will be added\nto the list of variables, and its value will be set to the new\nvalue.\n"},
  {(char*)"GetVectorVariableValue", PyvtkFunctionParser_GetVectorVariableValue, METH_VARARGS,
   (char*)"V.GetVectorVariableValue(string) -> (float, float, float)\nC++: double *GetVectorVariableValue(const char *variableName)\nV.GetVectorVariableValue(string, [float, float, float])\nC++: void GetVectorVariableValue(const char *variableName,\n    double value[3])\nV.GetVectorVariableValue(int) -> (float, float, float)\nC++: double *GetVectorVariableValue(int i)\nV.GetVectorVariableValue(int, [float, float, float])\nC++: void GetVectorVariableValue(int i, double value[3])\n\nGet the value of a vector variable.\n"},
  {(char*)"GetNumberOfScalarVariables", PyvtkFunctionParser_GetNumberOfScalarVariables, METH_VARARGS,
   (char*)"V.GetNumberOfScalarVariables() -> int\nC++: int GetNumberOfScalarVariables()\n\nGet the number of scalar variables.\n"},
  {(char*)"GetNumberOfVectorVariables", PyvtkFunctionParser_GetNumberOfVectorVariables, METH_VARARGS,
   (char*)"V.GetNumberOfVectorVariables() -> int\nC++: int GetNumberOfVectorVariables()\n\nGet the number of vector variables.\n"},
  {(char*)"GetScalarVariableName", PyvtkFunctionParser_GetScalarVariableName, METH_VARARGS,
   (char*)"V.GetScalarVariableName(int) -> string\nC++: char *GetScalarVariableName(int i)\n\nGet the ith scalar variable name.\n"},
  {(char*)"GetVectorVariableName", PyvtkFunctionParser_GetVectorVariableName, METH_VARARGS,
   (char*)"V.GetVectorVariableName(int) -> string\nC++: char *GetVectorVariableName(int i)\n\nGet the ith vector variable name.\n"},
  {(char*)"RemoveAllVariables", PyvtkFunctionParser_RemoveAllVariables, METH_VARARGS,
   (char*)"V.RemoveAllVariables()\nC++: void RemoveAllVariables()\n\nRemove all the current variables.\n"},
  {(char*)"RemoveScalarVariables", PyvtkFunctionParser_RemoveScalarVariables, METH_VARARGS,
   (char*)"V.RemoveScalarVariables()\nC++: void RemoveScalarVariables()\n\nRemove all the scalar variables.\n"},
  {(char*)"RemoveVectorVariables", PyvtkFunctionParser_RemoveVectorVariables, METH_VARARGS,
   (char*)"V.RemoveVectorVariables()\nC++: void RemoveVectorVariables()\n\nRemove all the vector variables.\n"},
  {(char*)"SetReplaceInvalidValues", PyvtkFunctionParser_SetReplaceInvalidValues, METH_VARARGS,
   (char*)"V.SetReplaceInvalidValues(int)\nC++: void SetReplaceInvalidValues(int a)\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {(char*)"GetReplaceInvalidValues", PyvtkFunctionParser_GetReplaceInvalidValues, METH_VARARGS,
   (char*)"V.GetReplaceInvalidValues() -> int\nC++: int GetReplaceInvalidValues()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {(char*)"ReplaceInvalidValuesOn", PyvtkFunctionParser_ReplaceInvalidValuesOn, METH_VARARGS,
   (char*)"V.ReplaceInvalidValuesOn()\nC++: void ReplaceInvalidValuesOn()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {(char*)"ReplaceInvalidValuesOff", PyvtkFunctionParser_ReplaceInvalidValuesOff, METH_VARARGS,
   (char*)"V.ReplaceInvalidValuesOff()\nC++: void ReplaceInvalidValuesOff()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {(char*)"SetReplacementValue", PyvtkFunctionParser_SetReplacementValue, METH_VARARGS,
   (char*)"V.SetReplacementValue(float)\nC++: void SetReplacementValue(double a)\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {(char*)"GetReplacementValue", PyvtkFunctionParser_GetReplacementValue, METH_VARARGS,
   (char*)"V.GetReplacementValue() -> float\nC++: double GetReplacementValue()\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {(char*)"InvalidateFunction", PyvtkFunctionParser_InvalidateFunction, METH_VARARGS,
   (char*)"V.InvalidateFunction()\nC++: void InvalidateFunction()\n\nAllow the user to force the function to be re-parsed\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFunctionParser_StaticNew()
{
  return vtkFunctionParser::New();
}

PyObject *PyVTKClass_vtkFunctionParserNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFunctionParser_StaticNew,
    PyvtkFunctionParser_Methods,
    "vtkFunctionParser", modulename,
    NULL, NULL,
    PyvtkFunctionParser_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkFunctionParser_Doc()
{
  static const char *docstring[] = {
    "vtkFunctionParser - Parse and evaluate a mathematical expression\n\n",
    "Superclass: vtkObject\n\n",
    "vtkFunctionParser is a class that takes in a mathematical expression\nas a char string, parses it, and evaluates it at the specified values\nof the variables in the input string.\n\nYou can use the \"if\" operator to create conditional expressions such\nas if ( test, trueresult, falseresult). These evaluate the boolean\nvalued test expression and then evaluate either the trueresult or the\nfalseresult expr",
    "ession to produce a final (scalar or vector valued)\nvalue. \"test\" may contain <,>,=,|,&, and () and all three\nsubexpressions can evaluate arbitrary function operators (ln, cos, +,\nif, etc)\n\nThanks:\n\nJuha Nieminen (juha.nieminen@gmail.com) for relicensing this branch\nof the function parser code that this class is based upon under the\nnew BSD license so that it could be used in VTK. Note, the BSD\nli",
    "cense applies to this version of the function parser only (by\npermission of the author), and not the original library.\n\nThomas Dunne (thomas.dunne@iwr.uni-heidelberg.de) for adding code for\ntwo-parameter-parsing and a few functions (sign, min, max).\n\nSid Sydoriak (sxs@lanl.gov) for adding boolean operations and\nconditional expressions and for fixing a variety of bugs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFunctionParser(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFunctionParserNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFunctionParser", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 48; c++)
    {
    static const struct { const char *name; int value; }
      constants[48] = {
        { "VTK_PARSER_IMMEDIATE", 1 },
        { "VTK_PARSER_UNARY_MINUS", 2 },
        { "VTK_PARSER_ADD", 3 },
        { "VTK_PARSER_SUBTRACT", 4 },
        { "VTK_PARSER_MULTIPLY", 5 },
        { "VTK_PARSER_DIVIDE", 6 },
        { "VTK_PARSER_POWER", 7 },
        { "VTK_PARSER_ABSOLUTE_VALUE", 8 },
        { "VTK_PARSER_EXPONENT", 9 },
        { "VTK_PARSER_CEILING", 10 },
        { "VTK_PARSER_FLOOR", 11 },
        { "VTK_PARSER_LOGARITHM", 12 },
        { "VTK_PARSER_LOGARITHME", 13 },
        { "VTK_PARSER_LOGARITHM10", 14 },
        { "VTK_PARSER_SQUARE_ROOT", 15 },
        { "VTK_PARSER_SINE", 16 },
        { "VTK_PARSER_COSINE", 17 },
        { "VTK_PARSER_TANGENT", 18 },
        { "VTK_PARSER_ARCSINE", 19 },
        { "VTK_PARSER_ARCCOSINE", 20 },
        { "VTK_PARSER_ARCTANGENT", 21 },
        { "VTK_PARSER_HYPERBOLIC_SINE", 22 },
        { "VTK_PARSER_HYPERBOLIC_COSINE", 23 },
        { "VTK_PARSER_HYPERBOLIC_TANGENT", 24 },
        { "VTK_PARSER_MIN", 25 },
        { "VTK_PARSER_MAX", 26 },
        { "VTK_PARSER_SIGN", 28 },
        { "VTK_PARSER_CROSS", 27 },
        { "VTK_PARSER_VECTOR_UNARY_MINUS", 29 },
        { "VTK_PARSER_DOT_PRODUCT", 30 },
        { "VTK_PARSER_VECTOR_ADD", 31 },
        { "VTK_PARSER_VECTOR_SUBTRACT", 32 },
        { "VTK_PARSER_SCALAR_TIMES_VECTOR", 33 },
        { "VTK_PARSER_VECTOR_TIMES_SCALAR", 34 },
        { "VTK_PARSER_VECTOR_OVER_SCALAR", 35 },
        { "VTK_PARSER_MAGNITUDE", 36 },
        { "VTK_PARSER_NORMALIZE", 37 },
        { "VTK_PARSER_IHAT", 38 },
        { "VTK_PARSER_JHAT", 39 },
        { "VTK_PARSER_KHAT", 40 },
        { "VTK_PARSER_IF", 41 },
        { "VTK_PARSER_VECTOR_IF", 42 },
        { "VTK_PARSER_LESS_THAN", 43 },
        { "VTK_PARSER_GREATER_THAN", 44 },
        { "VTK_PARSER_EQUAL_TO", 45 },
        { "VTK_PARSER_AND", 46 },
        { "VTK_PARSER_OR", 47 },
        { "VTK_PARSER_BEGIN_VARIABLES", 48 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

  o = PyFloat_FromDouble(VTK_FLOAT_MAX);
  if (o)
    {
    PyDict_SetItemString(dict, (char *)"VTK_PARSER_ERROR_RESULT", o);
    Py_DECREF(o);
    }
}

