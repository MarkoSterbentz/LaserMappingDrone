// python wrapper for vtkImageDataLIC2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageDataLIC2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageDataLIC2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageDataLIC2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageDataLIC2D_Doc();


static PyObject *
PyvtkImageDataLIC2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageDataLIC2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDataLIC2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageDataLIC2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDataLIC2D::NewInstance());

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
PyvtkImageDataLIC2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageDataLIC2D *tempr = vtkImageDataLIC2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    int tempr = (ap.IsBound() ?
      op->SetContext(temp0) :
      op->vtkImageDataLIC2D::SetContext(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkImageDataLIC2D::GetContext());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SetSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

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
      op->vtkImageDataLIC2D::SetSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSteps() :
      op->vtkImageDataLIC2D::GetSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

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
      op->vtkImageDataLIC2D::SetStepSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetStepSize() :
      op->vtkImageDataLIC2D::GetStepSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_SetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

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
      op->vtkImageDataLIC2D::SetMagnification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMagnification() :
      op->vtkImageDataLIC2D::GetMagnification());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_GetOpenGLExtensionsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpenGLExtensionsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOpenGLExtensionsSupported() :
      op->vtkImageDataLIC2D::GetOpenGLExtensionsSupported());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataLIC2D_TranslateInputExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslateInputExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataLIC2D *op = static_cast<vtkImageDataLIC2D *>(vp);

  int *temp0 = NULL;
  int small0[4];
  int size0 = 0;
  int *temp1 = NULL;
  int small1[4];
  int size1 = 0;
  int *temp2 = NULL;
  int *save2 = NULL;
  int small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[size0];
      }
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[size1];
      }
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new int[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->TranslateInputExtent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageDataLIC2D::TranslateInputExtent(temp0, temp1, temp2);
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

static PyMethodDef PyvtkImageDataLIC2D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageDataLIC2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageDataLIC2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageDataLIC2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageDataLIC2D\nC++: vtkImageDataLIC2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageDataLIC2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageDataLIC2D\nC++: vtkImageDataLIC2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetContext", PyvtkImageDataLIC2D_SetContext, METH_VARARGS,
   (char*)"V.SetContext(vtkRenderWindow) -> int\nC++: int SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\nReturn 0 upon failure and 1 upon success.\n"},
  {(char*)"GetContext", PyvtkImageDataLIC2D_GetContext, METH_VARARGS,
   (char*)"V.GetContext() -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error is the\nOpenGL context does not support the required OpenGL extensions.\nReturn 0 upon failure and 1 upon success.\n"},
  {(char*)"SetSteps", PyvtkImageDataLIC2D_SetSteps, METH_VARARGS,
   (char*)"V.SetSteps(int)\nC++: void SetSteps(int a)\n\nNumber of steps. Initial value is 20. class invariant: Steps>0.\nIn term of visual quality, the greater the better.\n"},
  {(char*)"GetSteps", PyvtkImageDataLIC2D_GetSteps, METH_VARARGS,
   (char*)"V.GetSteps() -> int\nC++: int GetSteps()\n\nNumber of steps. Initial value is 20. class invariant: Steps>0.\nIn term of visual quality, the greater the better.\n"},
  {(char*)"SetStepSize", PyvtkImageDataLIC2D_SetStepSize, METH_VARARGS,
   (char*)"V.SetStepSize(float)\nC++: void SetStepSize(double a)\n\nStep size. Specify the step size as a unit of the cell length of\nthe input vector field. Cell lengthh is the length of the\ndiagonal of a cell. Initial value is 1.0. class invariant:\nStepSize>0.0. In term of visual quality, the smaller the better.\nThe type for the interface is double as VTK interface is double\nbut GPU only supports float. This value will be converted to\nfloat in the execution of the algorithm.\n"},
  {(char*)"GetStepSize", PyvtkImageDataLIC2D_GetStepSize, METH_VARARGS,
   (char*)"V.GetStepSize() -> float\nC++: double GetStepSize()\n\nStep size. Specify the step size as a unit of the cell length of\nthe input vector field. Cell lengthh is the length of the\ndiagonal of a cell. Initial value is 1.0. class invariant:\nStepSize>0.0. In term of visual quality, the smaller the better.\nThe type for the interface is double as VTK interface is double\nbut GPU only supports float. This value will be converted to\nfloat in the execution of the algorithm.\n"},
  {(char*)"SetMagnification", PyvtkImageDataLIC2D_SetMagnification, METH_VARARGS,
   (char*)"V.SetMagnification(int)\nC++: void SetMagnification(int a)\n\nThe the magnification factor. Default is 1\n"},
  {(char*)"GetMagnification", PyvtkImageDataLIC2D_GetMagnification, METH_VARARGS,
   (char*)"V.GetMagnification() -> int\nC++: int GetMagnification()\n\nThe the magnification factor. Default is 1\n"},
  {(char*)"GetOpenGLExtensionsSupported", PyvtkImageDataLIC2D_GetOpenGLExtensionsSupported, METH_VARARGS,
   (char*)"V.GetOpenGLExtensionsSupported() -> int\nC++: int GetOpenGLExtensionsSupported()\n\nCheck if the required OpenGL extensions / GPU are supported.\n"},
  {(char*)"TranslateInputExtent", PyvtkImageDataLIC2D_TranslateInputExtent, METH_VARARGS,
   (char*)"V.TranslateInputExtent((int, ...), (int, ...), [int, ...])\nC++: void TranslateInputExtent(const int *inExt,\n    const int *inWholeExtent, int *outExt)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageDataLIC2D_StaticNew()
{
  return vtkImageDataLIC2D::New();
}

PyObject *PyVTKClass_vtkImageDataLIC2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageDataLIC2D_StaticNew,
    PyvtkImageDataLIC2D_Methods,
    "vtkImageDataLIC2D", modulename,
    NULL, NULL,
    PyvtkImageDataLIC2D_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageDataLIC2D_Doc()
{
  static const char *docstring[] = {
    "vtkImageDataLIC2D\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "GPU implementation of a Line Integral Convolution, a technique for\n imaging  vector fields.\n\n\n The input on port 0 is an vtkImageData with extents of a 2D image.\nIt needs\n a vector field on point data. This filter only works on point\nvectors. One\n can use a vtkCellDataToPointData filter to convert cell vectors to\npoint\n vectors.\n\n\n Port 1 is a special port for customized noise input. It is an\nopti",
    "onal port.\n If noise input is not specified, then the filter using\nvtkImageNoiseSource to\n generate a 128x128 noise texture.\n\nSee Also:\n\n\n vtkSurfaceLICPainter vtkLineIntegralConvolution2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageDataLIC2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDataLIC2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageDataLIC2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

