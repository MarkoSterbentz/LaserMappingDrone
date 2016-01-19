// python wrapper for vtkStructuredGridLIC2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStructuredGridLIC2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStructuredGridLIC2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStructuredGridLIC2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
#endif

static const char **PyvtkStructuredGridLIC2D_Doc();


static PyObject *
PyvtkStructuredGridLIC2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStructuredGridLIC2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredGridLIC2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredGridLIC2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredGridLIC2D::NewInstance());

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
PyvtkStructuredGridLIC2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStructuredGridLIC2D *tempr = vtkStructuredGridLIC2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    int tempr = (ap.IsBound() ?
      op->SetContext(temp0) :
      op->vtkStructuredGridLIC2D::SetContext(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkStructuredGridLIC2D::GetContext());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_SetSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSteps(temp0);
      }
    else
      {
      op->vtkStructuredGridLIC2D::SetSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSteps() :
      op->vtkStructuredGridLIC2D::GetSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_SetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStepSize(temp0);
      }
    else
      {
      op->vtkStructuredGridLIC2D::SetStepSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStepSize() :
      op->vtkStructuredGridLIC2D::GetStepSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_SetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMagnification(temp0);
      }
    else
      {
      op->vtkStructuredGridLIC2D::SetMagnification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetMagnificationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMagnificationMinValue() :
      op->vtkStructuredGridLIC2D::GetMagnificationMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetMagnificationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMagnificationMaxValue() :
      op->vtkStructuredGridLIC2D::GetMagnificationMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMagnification() :
      op->vtkStructuredGridLIC2D::GetMagnification());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetOpenGLExtensionsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpenGLExtensionsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOpenGLExtensionsSupported() :
      op->vtkStructuredGridLIC2D::GetOpenGLExtensionsSupported());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetFBOSuccess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFBOSuccess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFBOSuccess() :
      op->vtkStructuredGridLIC2D::GetFBOSuccess());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridLIC2D_GetLICSuccess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICSuccess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridLIC2D *op = static_cast<vtkStructuredGridLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLICSuccess() :
      op->vtkStructuredGridLIC2D::GetLICSuccess());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredGridLIC2D_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredGridLIC2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredGridLIC2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredGridLIC2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStructuredGridLIC2D\nC++: vtkStructuredGridLIC2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredGridLIC2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredGridLIC2D\nC++: vtkStructuredGridLIC2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetContext", PyvtkStructuredGridLIC2D_SetContext, METH_VARARGS,
   (char*)"V.SetContext(vtkRenderWindow) -> int\nC++: int SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\nReturn 0 upon failure and 1 upon success.\n"},
  {(char*)"GetContext", PyvtkStructuredGridLIC2D_GetContext, METH_VARARGS,
   (char*)"V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\nReturn 0 upon failure and 1 upon success.\n"},
  {(char*)"SetSteps", PyvtkStructuredGridLIC2D_SetSteps, METH_VARARGS,
   (char*)"V.SetSteps(int)\nC++: void SetSteps(int a)\n\nNumber of steps. Initial value is 1. class invariant: Steps>0. In\nterm of visual quality, the greater the better.\n"},
  {(char*)"GetSteps", PyvtkStructuredGridLIC2D_GetSteps, METH_VARARGS,
   (char*)"V.GetSteps() -> int\nC++: int GetSteps()\n\nNumber of steps. Initial value is 1. class invariant: Steps>0. In\nterm of visual quality, the greater the better.\n"},
  {(char*)"SetStepSize", PyvtkStructuredGridLIC2D_SetStepSize, METH_VARARGS,
   (char*)"V.SetStepSize(float)\nC++: void SetStepSize(double a)\n\nStep size. WE ARE NOT SURE YET about the space where we define\nthe step. If the image data has different spacing in each\ndimension, it is an issue. Initial value is 1.0. class invariant:\nStepSize>0.0. In term of visual quality, the smaller the better.\nThe type for the interface is double as VTK interface is double\nbut GPU only supports float. This value will be converted to\nfloat in the execution of the algorithm.\n"},
  {(char*)"GetStepSize", PyvtkStructuredGridLIC2D_GetStepSize, METH_VARARGS,
   (char*)"V.GetStepSize() -> float\nC++: double GetStepSize()\n\nStep size. WE ARE NOT SURE YET about the space where we define\nthe step. If the image data has different spacing in each\ndimension, it is an issue. Initial value is 1.0. class invariant:\nStepSize>0.0. In term of visual quality, the smaller the better.\nThe type for the interface is double as VTK interface is double\nbut GPU only supports float. This value will be converted to\nfloat in the execution of the algorithm.\n"},
  {(char*)"SetMagnification", PyvtkStructuredGridLIC2D_SetMagnification, METH_VARARGS,
   (char*)"V.SetMagnification(int)\nC++: void SetMagnification(int)\n\nThe the magnification factor. Default is 1\n"},
  {(char*)"GetMagnificationMinValue", PyvtkStructuredGridLIC2D_GetMagnificationMinValue, METH_VARARGS,
   (char*)"V.GetMagnificationMinValue() -> int\nC++: int GetMagnificationMinValue()\n\nThe the magnification factor. Default is 1\n"},
  {(char*)"GetMagnificationMaxValue", PyvtkStructuredGridLIC2D_GetMagnificationMaxValue, METH_VARARGS,
   (char*)"V.GetMagnificationMaxValue() -> int\nC++: int GetMagnificationMaxValue()\n\nThe the magnification factor. Default is 1\n"},
  {(char*)"GetMagnification", PyvtkStructuredGridLIC2D_GetMagnification, METH_VARARGS,
   (char*)"V.GetMagnification() -> int\nC++: int GetMagnification()\n\nThe the magnification factor. Default is 1\n"},
  {(char*)"GetOpenGLExtensionsSupported", PyvtkStructuredGridLIC2D_GetOpenGLExtensionsSupported, METH_VARARGS,
   (char*)"V.GetOpenGLExtensionsSupported() -> int\nC++: int GetOpenGLExtensionsSupported()\n\nCheck if the required OpenGL extensions / GPU are supported.\n"},
  {(char*)"GetFBOSuccess", PyvtkStructuredGridLIC2D_GetFBOSuccess, METH_VARARGS,
   (char*)"V.GetFBOSuccess() -> int\nC++: int GetFBOSuccess()\n\nCheck if FBO is started properly.\n"},
  {(char*)"GetLICSuccess", PyvtkStructuredGridLIC2D_GetLICSuccess, METH_VARARGS,
   (char*)"V.GetLICSuccess() -> int\nC++: int GetLICSuccess()\n\nCheck if LIC runs properly.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredGridLIC2D_StaticNew()
{
  return vtkStructuredGridLIC2D::New();
}

PyObject *PyVTKClass_vtkStructuredGridLIC2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredGridLIC2D_StaticNew,
    PyvtkStructuredGridLIC2D_Methods,
    "vtkStructuredGridLIC2D", modulename,
    NULL, NULL,
    PyvtkStructuredGridLIC2D_Doc(),
    PyVTKClass_vtkStructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkStructuredGridLIC2D_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredGridLIC2D\n\n",
    "Superclass: vtkStructuredGridAlgorithm\n\n",
    "GPU implementation of a Line Integral Convolution, a technique for\nimaging  vector fields.\n\nThe input on port 0 is an 2D vtkStructuredGrid. It needs a vector\nfield on point data. Port 1 is a special port for customized noise\ninput. It is an optional port. If not present, noise is generated by\nthe filter. Even if none-power-of-two texture are supported, giving a\npower-of-two image may result in fas",
    "ter execution on the GPU.\n\nPlease refer to Forssell, L. K., “Visualizing flow over curvilinear\ngrid surfaces using line integral convolution”, Visualization 94\nConference Proceedings, pages 240-247, IEEE Computer Society, 1994\nfor details of the algorithm.\n\nRequired OpenGL Extensions:\n\nGL_ARB_texture_non_power_of_two GL_VERSION_2_0 GL_ARB_texture_float\nGL_ARB_draw_buffers GL_EXT_framebuffer_ob",
    "ject\nGL_ARB_pixel_buffer_object\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredGridLIC2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredGridLIC2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredGridLIC2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

