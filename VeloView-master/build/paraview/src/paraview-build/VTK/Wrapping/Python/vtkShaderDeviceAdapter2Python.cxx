// python wrapper for vtkShaderDeviceAdapter2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkShaderDeviceAdapter2.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkShaderDeviceAdapter2(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkShaderDeviceAdapter2New(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkShaderDeviceAdapter2_Doc();


static PyObject *
PyvtkShaderDeviceAdapter2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter2 *op = static_cast<vtkShaderDeviceAdapter2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkShaderDeviceAdapter2::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter2 *op = static_cast<vtkShaderDeviceAdapter2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShaderDeviceAdapter2::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter2 *op = static_cast<vtkShaderDeviceAdapter2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkShaderDeviceAdapter2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShaderDeviceAdapter2::NewInstance());

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
PyvtkShaderDeviceAdapter2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkShaderDeviceAdapter2 *tempr = vtkShaderDeviceAdapter2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter2_SendAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter2 *op = static_cast<vtkShaderDeviceAdapter2 *>(vp);

  char *temp0 = NULL;
  int temp1;
  int temp2;
  void  *temp3 = NULL;
  unsigned long temp4 = 0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    op->SendAttribute(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter2_SetShaderProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter2 *op = static_cast<vtkShaderDeviceAdapter2 *>(vp);

  vtkShaderProgram2 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram2"))
    {
    if (ap.IsBound())
      {
      op->SetShaderProgram(temp0);
      }
    else
      {
      op->vtkShaderDeviceAdapter2::SetShaderProgram(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter2_GetShaderProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter2 *op = static_cast<vtkShaderDeviceAdapter2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkShaderProgram2 *tempr = (ap.IsBound() ?
      op->GetShaderProgram() :
      op->vtkShaderDeviceAdapter2::GetShaderProgram());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShaderDeviceAdapter2_PrepareForRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderDeviceAdapter2 *op = static_cast<vtkShaderDeviceAdapter2 *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->PrepareForRender();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkShaderDeviceAdapter2_Methods[] = {
  {(char*)"GetClassName", PyvtkShaderDeviceAdapter2_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkShaderDeviceAdapter2_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkShaderDeviceAdapter2_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkShaderDeviceAdapter2\nC++: vtkShaderDeviceAdapter2 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkShaderDeviceAdapter2_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkShaderDeviceAdapter2\nC++: vtkShaderDeviceAdapter2 *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SendAttribute", PyvtkShaderDeviceAdapter2_SendAttribute, METH_VARARGS,
   (char*)"V.SendAttribute(string, int, int, , int)\nC++: virtual void SendAttribute(const char *attrname,\n    int components, int type, const void *attribute,\n    unsigned long offset=0)\n\nSends a single attribute to the graphics card. The attrname\nparameter identifies the name of attribute. The components\nparameter gives the number of components in the attribute.  In\ngeneral, components must be between 1-4, but a rendering system\nmay impose even more constraints.  The type parameter is a VTK\ntype enumeration (VTK_FLOAT, VTK_INT, etc.). Again, a rendering\nsystem may not support all types for all attributes.  The\nattribute parameter is the actual data for the attribute. If\noffset is specified, it is added to attribute pointer after it\nhas been casted to the proper type.\n"},
  {(char*)"SetShaderProgram", PyvtkShaderDeviceAdapter2_SetShaderProgram, METH_VARARGS,
   (char*)"V.SetShaderProgram(vtkShaderProgram2)\nC++: void SetShaderProgram(vtkShaderProgram2 *program)\n\nSet the shader program which is being updated by this device\nadapter. The shader program is not reference counted to avoid\nreference loops.\n"},
  {(char*)"GetShaderProgram", PyvtkShaderDeviceAdapter2_GetShaderProgram, METH_VARARGS,
   (char*)"V.GetShaderProgram() -> vtkShaderProgram2\nC++: vtkShaderProgram2 *GetShaderProgram()\n\nSet the shader program which is being updated by this device\nadapter. The shader program is not reference counted to avoid\nreference loops.\n"},
  {(char*)"PrepareForRender", PyvtkShaderDeviceAdapter2_PrepareForRender, METH_VARARGS,
   (char*)"V.PrepareForRender()\nC++: virtual void PrepareForRender()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkShaderDeviceAdapter2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkShaderDeviceAdapter2_Methods,
    "vtkShaderDeviceAdapter2", modulename,
    NULL, NULL,
    PyvtkShaderDeviceAdapter2_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkShaderDeviceAdapter2_Doc()
{
  static const char *docstring[] = {
    "vtkShaderDeviceAdapter2 - an adapter to pass generic vertex attributes\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkShaderDeviceAdapter2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkShaderDeviceAdapter2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkShaderDeviceAdapter2", o) != 0)
    {
    Py_DECREF(o);
    }

}

