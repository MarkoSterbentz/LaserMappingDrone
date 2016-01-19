// python wrapper for vtkPythonProgrammableFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPythonProgrammableFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPythonProgrammableFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPythonProgrammableFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkProgrammableFilterNew
extern "C" { PyObject *PyVTKClass_vtkProgrammableFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkProgrammableFilterNew
#endif

static const char **PyvtkPythonProgrammableFilter_Doc();


static PyObject *
PyvtkPythonProgrammableFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPythonProgrammableFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonProgrammableFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPythonProgrammableFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonProgrammableFilter::NewInstance());

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
PyvtkPythonProgrammableFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPythonProgrammableFilter *tempr = vtkPythonProgrammableFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScript(temp0);
      }
    else
      {
      op->vtkPythonProgrammableFilter::SetScript(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_GetScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetScript() :
      op->vtkPythonProgrammableFilter::GetScript());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetInformationScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformationScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInformationScript(temp0);
      }
    else
      {
      op->vtkPythonProgrammableFilter::SetInformationScript(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_GetInformationScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetInformationScript() :
      op->vtkPythonProgrammableFilter::GetInformationScript());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetUpdateExtentScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtentScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUpdateExtentScript(temp0);
      }
    else
      {
      op->vtkPythonProgrammableFilter::SetUpdateExtentScript(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_GetUpdateExtentScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtentScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetUpdateExtentScript() :
      op->vtkPythonProgrammableFilter::GetUpdateExtentScript());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetParameterInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetParameterInternal(temp0, temp1);
      }
    else
      {
      op->vtkPythonProgrammableFilter::SetParameterInternal(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetParameter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetParameter(temp0, temp1);
      }
    else
      {
      op->vtkPythonProgrammableFilter::SetParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPythonProgrammableFilter_SetParameter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetParameter(temp0, temp1);
      }
    else
      {
      op->vtkPythonProgrammableFilter::SetParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPythonProgrammableFilter_SetParameter_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  char *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetParameter(temp0, temp1);
      }
    else
      {
      op->vtkPythonProgrammableFilter::SetParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPythonProgrammableFilter_SetParameter_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  char *temp0 = NULL;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetParameter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPythonProgrammableFilter::SetParameter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPythonProgrammableFilter_SetParameter_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

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
      op->SetParameter(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPythonProgrammableFilter::SetParameter(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPythonProgrammableFilter_SetParameter_Methods[] = {
  {NULL, PyvtkPythonProgrammableFilter_SetParameter_s1, METH_VARARGS,
   (char*)"@zz"},
  {NULL, PyvtkPythonProgrammableFilter_SetParameter_s2, METH_VARARGS,
   (char*)"@zi"},
  {NULL, PyvtkPythonProgrammableFilter_SetParameter_s3, METH_VARARGS,
   (char*)"@zd"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPythonProgrammableFilter_SetParameter(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPythonProgrammableFilter_SetParameter_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPythonProgrammableFilter_SetParameter_s4(self, args);
    case 4:
      return PyvtkPythonProgrammableFilter_SetParameter_s5(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetParameter");
  return NULL;
}



static PyObject *
PyvtkPythonProgrammableFilter_ClearParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearParameters();
      }
    else
      {
      op->vtkPythonProgrammableFilter::ClearParameters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_ExecuteScript(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ExecuteScript");

  void  *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPythonProgrammableFilter::ExecuteScript(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetOutputDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputDataSetType(temp0);
      }
    else
      {
      op->vtkPythonProgrammableFilter::SetOutputDataSetType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_GetOutputDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputDataSetType() :
      op->vtkPythonProgrammableFilter::GetOutputDataSetType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_SetPythonPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPythonPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPythonPath(temp0);
      }
    else
      {
      op->vtkPythonProgrammableFilter::SetPythonPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPythonProgrammableFilter_GetPythonPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPythonPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonProgrammableFilter *op = static_cast<vtkPythonProgrammableFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetPythonPath() :
      op->vtkPythonProgrammableFilter::GetPythonPath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPythonProgrammableFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPythonProgrammableFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPythonProgrammableFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPythonProgrammableFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPythonProgrammableFilter\nC++: vtkPythonProgrammableFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPythonProgrammableFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPythonProgrammableFilter\nC++: vtkPythonProgrammableFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetScript", PyvtkPythonProgrammableFilter_SetScript, METH_VARARGS,
   (char*)"V.SetScript(string)\nC++: void SetScript(char *)\n\nSet the text of the python script to execute.\n"},
  {(char*)"GetScript", PyvtkPythonProgrammableFilter_GetScript, METH_VARARGS,
   (char*)"V.GetScript() -> string\nC++: char *GetScript()\n\nSet the text of the python script to execute.\n"},
  {(char*)"SetInformationScript", PyvtkPythonProgrammableFilter_SetInformationScript, METH_VARARGS,
   (char*)"V.SetInformationScript(string)\nC++: void SetInformationScript(char *)\n\nSet the text of the python script to execute in\nRequestInformation().\n"},
  {(char*)"GetInformationScript", PyvtkPythonProgrammableFilter_GetInformationScript, METH_VARARGS,
   (char*)"V.GetInformationScript() -> string\nC++: char *GetInformationScript()\n\nSet the text of the python script to execute in\nRequestInformation().\n"},
  {(char*)"SetUpdateExtentScript", PyvtkPythonProgrammableFilter_SetUpdateExtentScript, METH_VARARGS,
   (char*)"V.SetUpdateExtentScript(string)\nC++: void SetUpdateExtentScript(char *)\n\nSet the text of the python script to execute in\nRequestUpdateExtent().\n"},
  {(char*)"GetUpdateExtentScript", PyvtkPythonProgrammableFilter_GetUpdateExtentScript, METH_VARARGS,
   (char*)"V.GetUpdateExtentScript() -> string\nC++: char *GetUpdateExtentScript()\n\nSet the text of the python script to execute in\nRequestUpdateExtent().\n"},
  {(char*)"SetParameterInternal", PyvtkPythonProgrammableFilter_SetParameterInternal, METH_VARARGS,
   (char*)"V.SetParameterInternal(string, string)\nC++: void SetParameterInternal(const char *name,\n    const char *value)\n\nSet a name-value parameter that will be available to the script\nwhen it is run\n"},
  {(char*)"SetParameter", PyvtkPythonProgrammableFilter_SetParameter, METH_VARARGS,
   (char*)"V.SetParameter(string, string)\nC++: void SetParameter(const char *name, const char *value)\nV.SetParameter(string, int)\nC++: void SetParameter(const char *name, int value)\nV.SetParameter(string, float)\nC++: void SetParameter(const char *name, double value)\nV.SetParameter(string, float, float)\nC++: void SetParameter(const char *name, double value1,\n    double value2)\nV.SetParameter(string, float, float, float)\nC++: void SetParameter(const char *name, double value1,\n    double value2, double value3)\n\nSet a name-value parameter that will be available to the script\nwhen it is run\n"},
  {(char*)"ClearParameters", PyvtkPythonProgrammableFilter_ClearParameters, METH_VARARGS,
   (char*)"V.ClearParameters()\nC++: void ClearParameters()\n\nClear all name-value parameters\n"},
  {(char*)"ExecuteScript", PyvtkPythonProgrammableFilter_ExecuteScript, METH_VARARGS | METH_STATIC,
   (char*)"V.ExecuteScript()\nC++: static void ExecuteScript(void *)\n\nFor internal use only.\n"},
  {(char*)"SetOutputDataSetType", PyvtkPythonProgrammableFilter_SetOutputDataSetType, METH_VARARGS,
   (char*)"V.SetOutputDataSetType(int)\nC++: void SetOutputDataSetType(int a)\n\nChanges the output data set type. Allowable values are defined in\nvtkType.h\n"},
  {(char*)"GetOutputDataSetType", PyvtkPythonProgrammableFilter_GetOutputDataSetType, METH_VARARGS,
   (char*)"V.GetOutputDataSetType() -> int\nC++: int GetOutputDataSetType()\n\nChanges the output data set type. Allowable values are defined in\nvtkType.h\n"},
  {(char*)"SetPythonPath", PyvtkPythonProgrammableFilter_SetPythonPath, METH_VARARGS,
   (char*)"V.SetPythonPath(string)\nC++: void SetPythonPath(char *)\n\nA semi-colon (;) separated list of directories to add to the\npython library search path.\n"},
  {(char*)"GetPythonPath", PyvtkPythonProgrammableFilter_GetPythonPath, METH_VARARGS,
   (char*)"V.GetPythonPath() -> string\nC++: char *GetPythonPath()\n\nA semi-colon (;) separated list of directories to add to the\npython library search path.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPythonProgrammableFilter_StaticNew()
{
  return vtkPythonProgrammableFilter::New();
}

PyObject *PyVTKClass_vtkPythonProgrammableFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPythonProgrammableFilter_StaticNew,
    PyvtkPythonProgrammableFilter_Methods,
    "vtkPythonProgrammableFilter", modulename,
    NULL, NULL,
    PyvtkPythonProgrammableFilter_Doc(),
    PyVTKClass_vtkProgrammableFilterNew(modulename));
  return cls;
}

const char **PyvtkPythonProgrammableFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPythonProgrammableFilter - Executes a user supplied python script\n\n",
    "Superclass: vtkProgrammableFilter\n\n",
    "This filter will execute a python script to produce an output\ndataset. An new interpretor is created at the beginning of\nRequestInformation(). The state of the python interpretor is\npreserved until the next execution of RequestInformation(). After the\ninterpretor is creates the vtk module is imported with \"from paraview import\nvtk\".\n\nThen the interpretor runs the InformationScript during\nRequestIn",
    "formation(). This script is run in a python function called\nRequestInformation(). An argument named self that refers to the\nprogrammable filter is passed to the function. The interpretor also\nruns the Script during RequestData(). This script is run in a python\nfunction called RequestData(). An argument named self that refers to\nthe programmable filter is passed to the function. Furthermore, a set\n",
    "of parameters passed with the SetParameter() call are defined as\nPython variables inside both scripts. This allows the developer to\nkeep the scripts the same but change their behaviour using\nparameters.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPythonProgrammableFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPythonProgrammableFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPythonProgrammableFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

