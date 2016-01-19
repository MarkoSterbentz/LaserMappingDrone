// python wrapper for vtkOpenGLProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPropertyNew
extern "C" { PyObject *PyVTKClass_vtkPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkPropertyNew
#endif

static const char **PyvtkOpenGLProperty_Doc();


static PyObject *
PyvtkOpenGLProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLProperty::NewInstance());

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
PyvtkOpenGLProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLProperty *tempr = vtkOpenGLProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  vtkActor *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLProperty::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_BackfaceRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackfaceRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  vtkActor *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->BackfaceRender(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLProperty::BackfaceRender(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_PostRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  vtkActor *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->PostRender(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLProperty::PostRender(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkOpenGLProperty::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_GetPropProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkShaderProgram2 *tempr = (ap.IsBound() ?
      op->GetPropProgram() :
      op->vtkOpenGLProperty::GetPropProgram());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_SetPropProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  vtkShaderProgram2 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram2"))
    {
    if (ap.IsBound())
      {
      op->SetPropProgram(temp0);
      }
    else
      {
      op->vtkOpenGLProperty::SetPropProgram(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_GetShaderDeviceAdapter2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderDeviceAdapter2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkShaderDeviceAdapter2 *tempr = (ap.IsBound() ?
      op->GetShaderDeviceAdapter2() :
      op->vtkOpenGLProperty::GetShaderDeviceAdapter2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_GetCurrentShaderProgram2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentShaderProgram2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkShaderProgram2 *tempr = (ap.IsBound() ?
      op->GetCurrentShaderProgram2() :
      op->vtkOpenGLProperty::GetCurrentShaderProgram2());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProperty_AddShaderVariable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

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
      op->AddShaderVariable(temp0, temp1, temp2);
      }
    else
      {
      op->vtkOpenGLProperty::AddShaderVariable(temp0, temp1, temp2);
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
PyvtkOpenGLProperty_AddShaderVariable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProperty *op = static_cast<vtkOpenGLProperty *>(vp);

  char *temp0 = NULL;
  int temp1;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
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
      op->AddShaderVariable(temp0, temp1, temp2);
      }
    else
      {
      op->vtkOpenGLProperty::AddShaderVariable(temp0, temp1, temp2);
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

static PyMethodDef PyvtkOpenGLProperty_AddShaderVariable_Methods[] = {
  {NULL, PyvtkOpenGLProperty_AddShaderVariable_s1, METH_VARARGS,
   (char*)"@ziO *i"},
  {NULL, PyvtkOpenGLProperty_AddShaderVariable_s2, METH_VARARGS,
   (char*)"@ziO *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkOpenGLProperty_AddShaderVariable(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLProperty_AddShaderVariable_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddShaderVariable");
  return NULL;
}



static PyObject *
PyvtkOpenGLProperty_SetMaterialProperties(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetMaterialProperties");

  unsigned int temp0;
  double temp1;
  double temp2[3];
  const int size2 = 3;
  double temp3;
  double temp4[3];
  const int size4 = 3;
  double temp5;
  double temp6[3];
  const int size6 = 3;
  double temp7;
  double temp8;
  vtkOpenGLRenderWindow *temp9 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetVTKObject(temp9, "vtkOpenGLRenderWindow"))
    {
    vtkOpenGLProperty::SetMaterialProperties(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLProperty\nC++: vtkOpenGLProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLProperty\nC++: vtkOpenGLProperty *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkOpenGLProperty_Render, METH_VARARGS,
   (char*)"V.Render(vtkActor, vtkRenderer)\nC++: void Render(vtkActor *a, vtkRenderer *ren)\n\nImplement base class method.\n"},
  {(char*)"BackfaceRender", PyvtkOpenGLProperty_BackfaceRender, METH_VARARGS,
   (char*)"V.BackfaceRender(vtkActor, vtkRenderer)\nC++: void BackfaceRender(vtkActor *a, vtkRenderer *ren)\n\nImplement base class method.\n"},
  {(char*)"PostRender", PyvtkOpenGLProperty_PostRender, METH_VARARGS,
   (char*)"V.PostRender(vtkActor, vtkRenderer)\nC++: virtual void PostRender(vtkActor *a, vtkRenderer *r)\n\nThis method is called after the actor has been rendered. Don't\ncall this directly. This method cleans up any shaders allocated.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLProperty_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *win)\n\nRelease any graphics resources that are being consumed by this\nproperty. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetPropProgram", PyvtkOpenGLProperty_GetPropProgram, METH_VARARGS,
   (char*)"V.GetPropProgram() -> vtkShaderProgram2\nC++: vtkShaderProgram2 *GetPropProgram()\n\nSet/Get the shader program of the vtkProp. It can be set directly\nor by defining a Material.\n"},
  {(char*)"SetPropProgram", PyvtkOpenGLProperty_SetPropProgram, METH_VARARGS,
   (char*)"V.SetPropProgram(vtkShaderProgram2)\nC++: void SetPropProgram(vtkShaderProgram2 *)\n\nSet/Get the shader program of the vtkProp. It can be set directly\nor by defining a Material.\n"},
  {(char*)"GetShaderDeviceAdapter2", PyvtkOpenGLProperty_GetShaderDeviceAdapter2, METH_VARARGS,
   (char*)"V.GetShaderDeviceAdapter2() -> vtkShaderDeviceAdapter2\nC++: virtual vtkShaderDeviceAdapter2 *GetShaderDeviceAdapter2()\n\nGet the object that can pass vertex attribute to a\nvtkShaderProgram2.\n"},
  {(char*)"GetCurrentShaderProgram2", PyvtkOpenGLProperty_GetCurrentShaderProgram2, METH_VARARGS,
   (char*)"V.GetCurrentShaderProgram2() -> vtkShaderProgram2\nC++: vtkShaderProgram2 *GetCurrentShaderProgram2()\n\nGet the vtkShaderProgram2 object in use.\n"},
  {(char*)"AddShaderVariable", PyvtkOpenGLProperty_AddShaderVariable, METH_VARARGS,
   (char*)"V.AddShaderVariable(string, int, [int, ...])\nC++: virtual void AddShaderVariable(const char *name, int numVars,\n     int *x)\nV.AddShaderVariable(string, int, [float, ...])\nC++: virtual void AddShaderVariable(const char *name, int numVars,\n     double *x)\n\nProvide values to initialize shader variables. Useful to\ninitialize shader variables that change over time (animation, GUI\nwidgets inputs, etc. )\n- name - hardware name of the uniform variable\n- numVars - number of variables being set\n- x - values\n"},
  {(char*)"SetMaterialProperties", PyvtkOpenGLProperty_SetMaterialProperties, METH_VARARGS | METH_STATIC,
   (char*)"V.SetMaterialProperties(int, float, (float, float, float), float,\n    (float, float, float), float, (float, float, float), float,\n    float, vtkOpenGLRenderWindow)\nC++: static void SetMaterialProperties(unsigned int face,\n    double ambient, const double ambient_color[3], double diffuse,\n     const double diffuse_color[3], double specular,\n    const double specular_color[3], double specular_power,\n    double opacity, vtkOpenGLRenderWindow *context)\n\nHelper method to set OpenGL material properties.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLProperty_StaticNew()
{
  return vtkOpenGLProperty::New();
}

PyObject *PyVTKClass_vtkOpenGLPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLProperty_StaticNew,
    PyvtkOpenGLProperty_Methods,
    "vtkOpenGLProperty", modulename,
    NULL, NULL,
    PyvtkOpenGLProperty_Doc(),
    PyVTKClass_vtkPropertyNew(modulename));
  return cls;
}

const char **PyvtkOpenGLProperty_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLProperty - OpenGL property\n\n",
    "Superclass: vtkProperty\n\n",
    "vtkOpenGLProperty is a concrete implementation of the abstract class\nvtkProperty. vtkOpenGLProperty interfaces to the OpenGL rendering\nlibrary.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

