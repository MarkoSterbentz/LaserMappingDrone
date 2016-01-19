// python wrapper for vtkGLSLShaderDeviceAdapter2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGLSLShaderDeviceAdapter2.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGLSLShaderDeviceAdapter2(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGLSLShaderDeviceAdapter2New(const char *); }

#ifndef DECLARED_PyVTKClass_vtkShaderDeviceAdapter2New
extern "C" { PyObject *PyVTKClass_vtkShaderDeviceAdapter2New(const char *); }
#define DECLARED_PyVTKClass_vtkShaderDeviceAdapter2New
#endif

static const char **PyvtkGLSLShaderDeviceAdapter2_Doc();


static PyObject *
PyvtkGLSLShaderDeviceAdapter2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter2 *op = static_cast<vtkGLSLShaderDeviceAdapter2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGLSLShaderDeviceAdapter2::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderDeviceAdapter2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter2 *op = static_cast<vtkGLSLShaderDeviceAdapter2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGLSLShaderDeviceAdapter2::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderDeviceAdapter2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter2 *op = static_cast<vtkGLSLShaderDeviceAdapter2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGLSLShaderDeviceAdapter2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGLSLShaderDeviceAdapter2::NewInstance());

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
PyvtkGLSLShaderDeviceAdapter2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGLSLShaderDeviceAdapter2 *tempr = vtkGLSLShaderDeviceAdapter2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderDeviceAdapter2_PrepareForRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter2 *op = static_cast<vtkGLSLShaderDeviceAdapter2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrepareForRender();
      }
    else
      {
      op->vtkGLSLShaderDeviceAdapter2::PrepareForRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGLSLShaderDeviceAdapter2_SendAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLSLShaderDeviceAdapter2 *op = static_cast<vtkGLSLShaderDeviceAdapter2 *>(vp);

  char *temp0 = NULL;
  int temp1;
  int temp2;
  void  *temp3 = NULL;
  unsigned long temp4 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      op->SendAttribute(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkGLSLShaderDeviceAdapter2::SendAttribute(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGLSLShaderDeviceAdapter2_Methods[] = {
  {(char*)"GetClassName", PyvtkGLSLShaderDeviceAdapter2_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGLSLShaderDeviceAdapter2_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGLSLShaderDeviceAdapter2_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGLSLShaderDeviceAdapter2\nC++: vtkGLSLShaderDeviceAdapter2 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGLSLShaderDeviceAdapter2_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGLSLShaderDeviceAdapter2\nC++: vtkGLSLShaderDeviceAdapter2 *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PrepareForRender", PyvtkGLSLShaderDeviceAdapter2_PrepareForRender, METH_VARARGS,
   (char*)"V.PrepareForRender()\nC++: virtual void PrepareForRender()\n\n"},
  {(char*)"SendAttribute", PyvtkGLSLShaderDeviceAdapter2_SendAttribute, METH_VARARGS,
   (char*)"V.SendAttribute(string, int, int, , int)\nC++: virtual void SendAttribute(const char *attrname,\n    int components, int type, const void *attribute,\n    unsigned long offset=0)\n\nSends a single attribute to the graphics card. The attrname\nparameter identifies the name of attribute. The components\nparameter gives the number of components in the attribute.  In\ngeneral, components must be between 1-4, but a rendering system\nmay impose even more constraints.  The type parameter is a VTK\ntype enumeration (VTK_FLOAT, VTK_INT, etc.). Again, a rendering\nsystem may not support all types for all attributes.  The\nattribute parameter is the actual data for the attribute. If\noffset is specified, it is added to attribute pointer after it\nhas been casted to the proper type. If attribute is NULL, the\nOpenGL ID for the attribute will simply be cached.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGLSLShaderDeviceAdapter2_StaticNew()
{
  return vtkGLSLShaderDeviceAdapter2::New();
}

PyObject *PyVTKClass_vtkGLSLShaderDeviceAdapter2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGLSLShaderDeviceAdapter2_StaticNew,
    PyvtkGLSLShaderDeviceAdapter2_Methods,
    "vtkGLSLShaderDeviceAdapter2", modulename,
    NULL, NULL,
    PyvtkGLSLShaderDeviceAdapter2_Doc(),
    PyVTKClass_vtkShaderDeviceAdapter2New(modulename));
  return cls;
}

const char **PyvtkGLSLShaderDeviceAdapter2_Doc()
{
  static const char *docstring[] = {
    "vtkGLSLShaderDeviceAdapter2 - adapter to pass generic vertex\n\n",
    "Superclass: vtkShaderDeviceAdapter2\n\n",
    "vtkShaderDeviceAdapter subclass for vtkShaderProgram2.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGLSLShaderDeviceAdapter2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGLSLShaderDeviceAdapter2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGLSLShaderDeviceAdapter2", o) != 0)
    {
    Py_DECREF(o);
    }

}

