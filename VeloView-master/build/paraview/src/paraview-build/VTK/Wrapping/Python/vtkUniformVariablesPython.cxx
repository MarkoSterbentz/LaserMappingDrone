// python wrapper for vtkUniformVariables
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkUniformVariables.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkUniformVariables(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkUniformVariablesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkUniformVariables_Doc();


static PyObject *
PyvtkUniformVariables_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkUniformVariables::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUniformVariables::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkUniformVariables *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUniformVariables::NewInstance());

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
PyvtkUniformVariables_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkUniformVariables *tempr = vtkUniformVariables::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_SetUniformi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  char *temp0 = NULL;
  int temp1;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new int[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->SetUniformi(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUniformVariables::SetUniformi(temp0, temp1, temp2);
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

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_SetUniformf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  char *temp0 = NULL;
  int temp1;
  float *temp2 = NULL;
  float *save2 = NULL;
  float small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new float[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->SetUniformf(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUniformVariables::SetUniformf(temp0, temp1, temp2);
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

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_SetUniformiv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformiv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  char *temp0 = NULL;
  int temp1;
  int temp2;
  int *temp3 = NULL;
  int *save3 = NULL;
  int small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new int[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->SetUniformiv(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkUniformVariables::SetUniformiv(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_SetUniformfv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformfv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  char *temp0 = NULL;
  int temp1;
  int temp2;
  float *temp3 = NULL;
  float *save3 = NULL;
  float small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new float[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->SetUniformfv(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkUniformVariables::SetUniformfv(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_SetUniformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  char *temp0 = NULL;
  int temp1;
  int temp2;
  float *temp3 = NULL;
  float *save3 = NULL;
  float small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new float[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->SetUniformMatrix(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkUniformVariables::SetUniformMatrix(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_RemoveUniform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveUniform(temp0);
      }
    else
      {
      op->vtkUniformVariables::RemoveUniform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_RemoveAllUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllUniforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllUniforms();
      }
    else
      {
      op->vtkUniformVariables::RemoveAllUniforms();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_Send(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Send(temp0, temp1);
      }
    else
      {
      op->vtkUniformVariables::Send(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Start();
      }
    else
      {
      op->vtkUniformVariables::Start();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkUniformVariables::IsAtEnd());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_GetCurrentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetCurrentName() :
      op->vtkUniformVariables::GetCurrentName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_SendCurrentUniform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendCurrentUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SendCurrentUniform(temp0);
      }
    else
      {
      op->vtkUniformVariables::SendCurrentUniform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Next();
      }
    else
      {
      op->vtkUniformVariables::Next();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  vtkUniformVariables *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUniformVariables"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkUniformVariables::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUniformVariables_Merge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Merge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformVariables *op = static_cast<vtkUniformVariables *>(vp);

  vtkUniformVariables *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUniformVariables"))
    {
    if (ap.IsBound())
      {
      op->Merge(temp0);
      }
    else
      {
      op->vtkUniformVariables::Merge(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUniformVariables_Methods[] = {
  {(char*)"GetClassName", PyvtkUniformVariables_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUniformVariables_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUniformVariables_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkUniformVariables\nC++: vtkUniformVariables *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUniformVariables_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUniformVariables\nC++: vtkUniformVariables *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetUniformi", PyvtkUniformVariables_SetUniformi, METH_VARARGS,
   (char*)"V.SetUniformi(string, int, [int, ...])\nC++: void SetUniformi(const char *name, int numberOfComponents,\n    int *value)\n\nSet an integer uniform variable.\n\\pre name_exists: name!=0\n\\pre value_exists: value!=0\n\\pre valid_numberOfComponents: numberOfComponents>=1 &&\n    numberOfComponents<=4\n"},
  {(char*)"SetUniformf", PyvtkUniformVariables_SetUniformf, METH_VARARGS,
   (char*)"V.SetUniformf(string, int, [float, ...])\nC++: void SetUniformf(const char *name, int numberOfComponents,\n    float *value)\n\nSet an float uniform variable.\n\\pre name_exists: name!=0\n\\pre value_exists: value!=0\n\\pre valid_numberOfComponents: numberOfComponents>=1 &&\n    numberOfComponents<=4\n"},
  {(char*)"SetUniformiv", PyvtkUniformVariables_SetUniformiv, METH_VARARGS,
   (char*)"V.SetUniformiv(string, int, int, [int, ...])\nC++: void SetUniformiv(const char *name, int numberOfComponents,\n    int numberOfElements, int *value)\n\nSet an array of integer uniform variables. The array `value' is of size\n`numberOfElements'*`numberOfComponents.'.\n\\pre name_exists: name!=0\n\\pre value_exists: value!=0\n\\pre valid_numberOfComponents: numberOfComponents>=1 &&\n    numberOfComponents<=4\n\\pre valid_numberOfElements: numberOfElements>=1\n"},
  {(char*)"SetUniformfv", PyvtkUniformVariables_SetUniformfv, METH_VARARGS,
   (char*)"V.SetUniformfv(string, int, int, [float, ...])\nC++: void SetUniformfv(const char *name, int numberOfComponents,\n    int numberOfElements, float *value)\n\nSet an array of float uniform variables. The array `value' is of size\n`numberOfElements'*`numberOfComponents.'.\n\\pre name_exists: name!=0\n\\pre value_exists: value!=0\n\\pre valid_numberOfComponents: numberOfComponents>=1 &&\n    numberOfComponents<=4\n\\pre valid_numberOfElements: numberOfElements>=1\n"},
  {(char*)"SetUniformMatrix", PyvtkUniformVariables_SetUniformMatrix, METH_VARARGS,
   (char*)"V.SetUniformMatrix(string, int, int, [float, ...])\nC++: void SetUniformMatrix(const char *name, int rows,\n    int columns, float *value)\n\nSet a matrix uniform variable.\n\\pre name_exists: name!=0\n\\pre value_exists: value!=0\n\\pre valid_rows:  rows>=2 && rows<=4\n\\pre valid_columns: columns>=2 && columns<=4\n"},
  {(char*)"RemoveUniform", PyvtkUniformVariables_RemoveUniform, METH_VARARGS,
   (char*)"V.RemoveUniform(string)\nC++: void RemoveUniform(const char *name)\n\nRemove uniform `name' from the list.\n"},
  {(char*)"RemoveAllUniforms", PyvtkUniformVariables_RemoveAllUniforms, METH_VARARGS,
   (char*)"V.RemoveAllUniforms()\nC++: void RemoveAllUniforms()\n\nRemove all uniforms from the list.\n"},
  {(char*)"Send", PyvtkUniformVariables_Send, METH_VARARGS,
   (char*)"V.Send(string, int)\nC++: void Send(const char *name, int uniformIndex)\n\n\\pre need a valid OpenGL context and a shader program in use.\n"},
  {(char*)"Start", PyvtkUniformVariables_Start, METH_VARARGS,
   (char*)"V.Start()\nC++: void Start()\n\nPlace the internal cursor on the first uniform.\n"},
  {(char*)"IsAtEnd", PyvtkUniformVariables_IsAtEnd, METH_VARARGS,
   (char*)"V.IsAtEnd() -> bool\nC++: bool IsAtEnd()\n\nIs the iteration done?\n"},
  {(char*)"GetCurrentName", PyvtkUniformVariables_GetCurrentName, METH_VARARGS,
   (char*)"V.GetCurrentName() -> string\nC++: const char *GetCurrentName()\n\nName of the uniform at the current cursor position.\n\\pre not_done: !this->IsAtEnd()\n"},
  {(char*)"SendCurrentUniform", PyvtkUniformVariables_SendCurrentUniform, METH_VARARGS,
   (char*)"V.SendCurrentUniform(int)\nC++: void SendCurrentUniform(int uniformIndex)\n\n\\pre need a valid OpenGL context and a shader program in use.\n\\pre not_done: !this->IsAtEnd()\n"},
  {(char*)"Next", PyvtkUniformVariables_Next, METH_VARARGS,
   (char*)"V.Next()\nC++: void Next()\n\nMove the cursor to the next uniform.\n\\pre not_done: !this->IsAtEnd()\n"},
  {(char*)"DeepCopy", PyvtkUniformVariables_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkUniformVariables)\nC++: void DeepCopy(vtkUniformVariables *other)\n\nCopy all the variables from `other'. Any existing variable will\nbe deleted first.\n\\pre other_exists: other!=0\n\\pre not_self: other!=this\n"},
  {(char*)"Merge", PyvtkUniformVariables_Merge, METH_VARARGS,
   (char*)"V.Merge(vtkUniformVariables)\nC++: void Merge(vtkUniformVariables *other)\n\nCopy all the variables from `other'. Any existing variable will\nbe overwritten.\n\\pre other_exists: other!=0\n\\pre not_self: other!=this\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUniformVariables_StaticNew()
{
  return vtkUniformVariables::New();
}

PyObject *PyVTKClass_vtkUniformVariablesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUniformVariables_StaticNew,
    PyvtkUniformVariables_Methods,
    "vtkUniformVariables", modulename,
    NULL, NULL,
    PyvtkUniformVariables_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkUniformVariables_Doc()
{
  static const char *docstring[] = {
    "vtkUniformVariables - GLSL uniform variables\n\n",
    "Superclass: vtkObject\n\n",
    "vtkUniformVariables is a list of uniform variables attached to either\na vtkShader2 object or to a vtkShaderProgram2. Uniform variables on a\nvtkShaderProgram2 override values of uniform variables on a\nvtkShader2.\n\nSee Also:\n\nvtkShader2 vtkShaderProgram2\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUniformVariables(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUniformVariablesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUniformVariables", o) != 0)
    {
    Py_DECREF(o);
    }

}

