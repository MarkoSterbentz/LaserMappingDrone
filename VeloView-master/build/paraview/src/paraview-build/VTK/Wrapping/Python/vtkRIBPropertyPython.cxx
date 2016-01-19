// python wrapper for vtkRIBProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRIBProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRIBProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRIBPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPropertyNew
extern "C" { PyObject *PyVTKClass_vtkPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkPropertyNew
#endif

static const char **PyvtkRIBProperty_Doc();


static PyObject *
PyvtkRIBProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRIBProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRIBProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRIBProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRIBProperty::NewInstance());

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
PyvtkRIBProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRIBProperty *tempr = vtkRIBProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetSurfaceShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSurfaceShader(temp0);
      }
    else
      {
      op->vtkRIBProperty::SetSurfaceShader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetSurfaceShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetSurfaceShader() :
      op->vtkRIBProperty::GetSurfaceShader());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetDisplacementShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplacementShader(temp0);
      }
    else
      {
      op->vtkRIBProperty::SetDisplacementShader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetDisplacementShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetDisplacementShader() :
      op->vtkRIBProperty::GetDisplacementShader());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetVariable(temp0, temp1);
      }
    else
      {
      op->vtkRIBProperty::SetVariable(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBProperty_AddVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddVariable(temp0, temp1);
      }
    else
      {
      op->vtkRIBProperty::AddVariable(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetDeclarations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeclarations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetDeclarations() :
      op->vtkRIBProperty::GetDeclarations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

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
      op->vtkRIBProperty::SetParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBProperty_AddParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddParameter(temp0, temp1);
      }
    else
      {
      op->vtkRIBProperty::AddParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetParameters() :
      op->vtkRIBProperty::GetParameters());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRIBProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkRIBProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRIBProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRIBProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRIBProperty\nC++: vtkRIBProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRIBProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRIBProperty\nC++: vtkRIBProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSurfaceShader", PyvtkRIBProperty_SetSurfaceShader, METH_VARARGS,
   (char*)"V.SetSurfaceShader(string)\nC++: void SetSurfaceShader(char *)\n\nSpecify the name of a surface shader.\n"},
  {(char*)"GetSurfaceShader", PyvtkRIBProperty_GetSurfaceShader, METH_VARARGS,
   (char*)"V.GetSurfaceShader() -> string\nC++: char *GetSurfaceShader()\n\nSpecify the name of a surface shader.\n"},
  {(char*)"SetDisplacementShader", PyvtkRIBProperty_SetDisplacementShader, METH_VARARGS,
   (char*)"V.SetDisplacementShader(string)\nC++: void SetDisplacementShader(char *)\n\nSpecify the name of a displacement shader.\n"},
  {(char*)"GetDisplacementShader", PyvtkRIBProperty_GetDisplacementShader, METH_VARARGS,
   (char*)"V.GetDisplacementShader() -> string\nC++: char *GetDisplacementShader()\n\nSpecify the name of a displacement shader.\n"},
  {(char*)"SetVariable", PyvtkRIBProperty_SetVariable, METH_VARARGS,
   (char*)"V.SetVariable(string, string)\nC++: void SetVariable(char *variable, char *declaration)\n\nSpecify declarations for variables..\n"},
  {(char*)"AddVariable", PyvtkRIBProperty_AddVariable, METH_VARARGS,
   (char*)"V.AddVariable(string, string)\nC++: void AddVariable(char *variable, char *declaration)\n\nSpecify declarations for variables..\n"},
  {(char*)"GetDeclarations", PyvtkRIBProperty_GetDeclarations, METH_VARARGS,
   (char*)"V.GetDeclarations() -> string\nC++: char *GetDeclarations()\n\nGet variable declarations\n"},
  {(char*)"SetParameter", PyvtkRIBProperty_SetParameter, METH_VARARGS,
   (char*)"V.SetParameter(string, string)\nC++: void SetParameter(char *parameter, char *value)\n\nSpecify parameter values for variables.\n"},
  {(char*)"AddParameter", PyvtkRIBProperty_AddParameter, METH_VARARGS,
   (char*)"V.AddParameter(string, string)\nC++: void AddParameter(char *parameter, char *value)\n\nSpecify parameter values for variables.\n"},
  {(char*)"GetParameters", PyvtkRIBProperty_GetParameters, METH_VARARGS,
   (char*)"V.GetParameters() -> string\nC++: char *GetParameters()\n\nGet parameters.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRIBProperty_StaticNew()
{
  return vtkRIBProperty::New();
}

PyObject *PyVTKClass_vtkRIBPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRIBProperty_StaticNew,
    PyvtkRIBProperty_Methods,
    "vtkRIBProperty", modulename,
    NULL, NULL,
    PyvtkRIBProperty_Doc(),
    PyVTKClass_vtkPropertyNew(modulename));
  return cls;
}

const char **PyvtkRIBProperty_Doc()
{
  static const char *docstring[] = {
    "vtkRIBProperty - RIP Property\n\n",
    "Superclass: vtkProperty\n\n",
    "vtkRIBProperty is a subclass of vtkProperty that allows the user to\nspecify named shaders for use with RenderMan. Both a surface shader\nand displacement shader can be specified. Parameters for the shaders\ncan be declared and set.\n\nSee Also:\n\nvtkRIBExporter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRIBProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRIBPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRIBProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

