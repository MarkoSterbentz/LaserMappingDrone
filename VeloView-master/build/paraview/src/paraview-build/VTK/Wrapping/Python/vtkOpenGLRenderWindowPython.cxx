// python wrapper for vtkOpenGLRenderWindow
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLRenderWindow.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLRenderWindow(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLRenderWindowNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRenderWindowNew
extern "C" { PyObject *PyVTKClass_vtkRenderWindowNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderWindowNew
#endif

static const char **PyvtkOpenGLRenderWindow_Doc();


static PyObject *
PyvtkOpenGLRenderWindow_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLRenderWindow::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLRenderWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLRenderWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLRenderWindow::NewInstance());

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
PyvtkOpenGLRenderWindow_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLRenderWindow *tempr = vtkOpenGLRenderWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_SetGlobalMaximumNumberOfMultiSamples(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalMaximumNumberOfMultiSamples");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkOpenGLRenderWindow::SetGlobalMaximumNumberOfMultiSamples(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetGlobalMaximumNumberOfMultiSamples(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalMaximumNumberOfMultiSamples");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    int tempr = vtkOpenGLRenderWindow::GetGlobalMaximumNumberOfMultiSamples();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_StereoUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StereoUpdate();
      }
    else
      {
      op->vtkOpenGLRenderWindow::StereoUpdate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetPixelData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::GetPixelData(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkUnsignedCharArray *temp5 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkUnsignedCharArray"))
    {
    int tempr = (ap.IsBound() ?
      op->GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkOpenGLRenderWindow::GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetPixelData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkOpenGLRenderWindow_GetPixelData_s1(self, args);
    case 6:
      return PyvtkOpenGLRenderWindow_GetPixelData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPixelData");
  return NULL;
}



static PyObject *
PyvtkOpenGLRenderWindow_SetPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  unsigned char *temp4 = NULL;
  unsigned char *save4 = NULL;
  unsigned char small4[8];
  int size4 = 0;
  int temp5;
  PyObject *result = NULL;

  if (op)
    {
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new unsigned char[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkOpenGLRenderWindow::SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_SetPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = NULL;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetValue(temp5))
    {
    int tempr = (ap.IsBound() ?
      op->SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkOpenGLRenderWindow::SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_SetPixelData_Methods[] = {
  {NULL, PyvtkOpenGLRenderWindow_SetPixelData_s1, METH_VARARGS,
   (char*)"@iiiiOi *b"},
  {NULL, PyvtkOpenGLRenderWindow_SetPixelData_s2, METH_VARARGS,
   (char*)"@iiiiOi *vtkUnsignedCharArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkOpenGLRenderWindow_SetPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_SetPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPixelData");
  return NULL;
}



static PyObject *
PyvtkOpenGLRenderWindow_GetRGBAPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    float *tempr = (ap.IsBound() ?
      op->GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetRGBAPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkFloatArray *temp5 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkFloatArray"))
    {
    int tempr = (ap.IsBound() ?
      op->GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkOpenGLRenderWindow::GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetRGBAPixelData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkOpenGLRenderWindow_GetRGBAPixelData_s1(self, args);
    case 6:
      return PyvtkOpenGLRenderWindow_GetRGBAPixelData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBAPixelData");
  return NULL;
}



static PyObject *
PyvtkOpenGLRenderWindow_SetRGBAPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  float *temp4 = NULL;
  float *save4 = NULL;
  float small4[8];
  int size4 = 0;
  int temp5;
  int temp6 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new float[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
    {
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkOpenGLRenderWindow::SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_SetRGBAPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = NULL;
  int temp5;
  int temp6 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
    {
    int tempr = (ap.IsBound() ?
      op->SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkOpenGLRenderWindow::SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_SetRGBAPixelData_Methods[] = {
  {NULL, PyvtkOpenGLRenderWindow_SetRGBAPixelData_s1, METH_VARARGS,
   (char*)"@iiiiOi|i *f"},
  {NULL, PyvtkOpenGLRenderWindow_SetRGBAPixelData_s2, METH_VARARGS,
   (char*)"@iiiiOi|i *vtkFloatArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkOpenGLRenderWindow_SetRGBAPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_SetRGBAPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
    case 7:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRGBAPixelData");
  return NULL;
}



static PyObject *
PyvtkOpenGLRenderWindow_ReleaseRGBAPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->ReleaseRGBAPixelData(temp0);
      }
    else
      {
      op->vtkOpenGLRenderWindow::ReleaseRGBAPixelData(temp0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkUnsignedCharArray *temp5 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkUnsignedCharArray"))
    {
    int tempr = (ap.IsBound() ?
      op->GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkOpenGLRenderWindow::GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetRGBACharPixelData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s1(self, args);
    case 6:
      return PyvtkOpenGLRenderWindow_GetRGBACharPixelData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBACharPixelData");
  return NULL;
}



static PyObject *
PyvtkOpenGLRenderWindow_SetRGBACharPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  unsigned char *temp4 = NULL;
  unsigned char *save4 = NULL;
  unsigned char small4[8];
  int size4 = 0;
  int temp5;
  int temp6 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new unsigned char[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
    {
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkOpenGLRenderWindow::SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_SetRGBACharPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = NULL;
  int temp5;
  int temp6 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
    {
    int tempr = (ap.IsBound() ?
      op->SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkOpenGLRenderWindow::SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_SetRGBACharPixelData_Methods[] = {
  {NULL, PyvtkOpenGLRenderWindow_SetRGBACharPixelData_s1, METH_VARARGS,
   (char*)"@iiiiOi|i *b"},
  {NULL, PyvtkOpenGLRenderWindow_SetRGBACharPixelData_s2, METH_VARARGS,
   (char*)"@iiiiOi|i *vtkUnsignedCharArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkOpenGLRenderWindow_SetRGBACharPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_SetRGBACharPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
    case 7:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRGBACharPixelData");
  return NULL;
}



static PyObject *
PyvtkOpenGLRenderWindow_GetZbufferData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    float *tempr = (ap.IsBound() ?
      op->GetZbufferData(temp0, temp1, temp2, temp3) :
      op->vtkOpenGLRenderWindow::GetZbufferData(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetZbufferData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  float *temp4 = NULL;
  float *save4 = NULL;
  float small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new float[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::GetZbufferData(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_GetZbufferData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray"))
    {
    int tempr = (ap.IsBound() ?
      op->GetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::GetZbufferData(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_GetZbufferData_Methods[] = {
  {NULL, PyvtkOpenGLRenderWindow_GetZbufferData_s2, METH_VARARGS,
   (char*)"@iiiiO *f"},
  {NULL, PyvtkOpenGLRenderWindow_GetZbufferData_s3, METH_VARARGS,
   (char*)"@iiiiO *vtkFloatArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkOpenGLRenderWindow_GetZbufferData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_GetZbufferData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkOpenGLRenderWindow_GetZbufferData_s1(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetZbufferData");
  return NULL;
}



static PyObject *
PyvtkOpenGLRenderWindow_SetZbufferData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  float *temp4 = NULL;
  float *save4 = NULL;
  float small4[8];
  int size4 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new float[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->SetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::SetZbufferData(temp0, temp1, temp2, temp3, temp4));

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkOpenGLRenderWindow_SetZbufferData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray"))
    {
    int tempr = (ap.IsBound() ?
      op->SetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLRenderWindow::SetZbufferData(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_SetZbufferData_Methods[] = {
  {NULL, PyvtkOpenGLRenderWindow_SetZbufferData_s1, METH_VARARGS,
   (char*)"@iiiiO *f"},
  {NULL, PyvtkOpenGLRenderWindow_SetZbufferData_s2, METH_VARARGS,
   (char*)"@iiiiO *vtkFloatArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkOpenGLRenderWindow_SetZbufferData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRenderWindow_SetZbufferData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetZbufferData");
  return NULL;
}



static PyObject *
PyvtkOpenGLRenderWindow_GetDepthBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDepthBufferSize() :
      op->vtkOpenGLRenderWindow::GetDepthBufferSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetColorBufferSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorBufferSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetColorBufferSizes(temp0) :
      op->vtkOpenGLRenderWindow::GetColorBufferSizes(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_OpenGLInit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenGLInit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OpenGLInit();
      }
    else
      {
      op->vtkOpenGLRenderWindow::OpenGLInit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_OpenGLInitState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenGLInitState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OpenGLInitState();
      }
    else
      {
      op->vtkOpenGLRenderWindow::OpenGLInitState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_OpenGLInitContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenGLInitContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OpenGLInitContext();
      }
    else
      {
      op->vtkOpenGLRenderWindow::OpenGLInitContext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetBackLeftBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackLeftBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBackLeftBuffer() :
      op->vtkOpenGLRenderWindow::GetBackLeftBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetBackRightBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackRightBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBackRightBuffer() :
      op->vtkOpenGLRenderWindow::GetBackRightBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetFrontLeftBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontLeftBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFrontLeftBuffer() :
      op->vtkOpenGLRenderWindow::GetFrontLeftBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetFrontRightBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontRightBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFrontRightBuffer() :
      op->vtkOpenGLRenderWindow::GetFrontRightBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetBackBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBackBuffer() :
      op->vtkOpenGLRenderWindow::GetBackBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFrontBuffer() :
      op->vtkOpenGLRenderWindow::GetFrontBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkOpenGLRenderWindow_CheckGraphicError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckGraphicError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CheckGraphicError();
      }
    else
      {
      op->vtkOpenGLRenderWindow::CheckGraphicError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkOpenGLRenderWindow_HasGraphicError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasGraphicError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->HasGraphicError() :
      op->vtkOpenGLRenderWindow::HasGraphicError());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkOpenGLRenderWindow_GetLastGraphicErrorString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastGraphicErrorString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetLastGraphicErrorString() :
      op->vtkOpenGLRenderWindow::GetLastGraphicErrorString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif


static PyObject *
PyvtkOpenGLRenderWindow_GetContextCreationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextCreationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetContextCreationTime() :
      op->vtkOpenGLRenderWindow::GetContextCreationTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetExtensionManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtensionManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLExtensionManager *tempr = (ap.IsBound() ?
      op->GetExtensionManager() :
      op->vtkOpenGLRenderWindow::GetExtensionManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetHardwareSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHardwareSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLHardwareSupport *tempr = (ap.IsBound() ?
      op->GetHardwareSupport() :
      op->vtkOpenGLRenderWindow::GetHardwareSupport());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_GetTextureUnitManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureUnitManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextureUnitManager *tempr = (ap.IsBound() ?
      op->GetTextureUnitManager() :
      op->vtkOpenGLRenderWindow::GetTextureUnitManager());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderWindow_WaitForCompletion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForCompletion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderWindow *op = static_cast<vtkOpenGLRenderWindow *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WaitForCompletion();
      }
    else
      {
      op->vtkOpenGLRenderWindow::WaitForCompletion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderWindow_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLRenderWindow_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLRenderWindow_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLRenderWindow_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLRenderWindow\nC++: vtkOpenGLRenderWindow *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLRenderWindow_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLRenderWindow\nC++: vtkOpenGLRenderWindow *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGlobalMaximumNumberOfMultiSamples", PyvtkOpenGLRenderWindow_SetGlobalMaximumNumberOfMultiSamples, METH_VARARGS | METH_STATIC,
   (char*)"V.SetGlobalMaximumNumberOfMultiSamples(int)\nC++: static void SetGlobalMaximumNumberOfMultiSamples(int val)\n\nSet/Get the maximum number of multisamples\n"},
  {(char*)"GetGlobalMaximumNumberOfMultiSamples", PyvtkOpenGLRenderWindow_GetGlobalMaximumNumberOfMultiSamples, METH_VARARGS | METH_STATIC,
   (char*)"V.GetGlobalMaximumNumberOfMultiSamples() -> int\nC++: static int GetGlobalMaximumNumberOfMultiSamples()\n\nSet/Get the maximum number of multisamples\n"},
  {(char*)"StereoUpdate", PyvtkOpenGLRenderWindow_StereoUpdate, METH_VARARGS,
   (char*)"V.StereoUpdate()\nC++: virtual void StereoUpdate()\n\nUpdate system if needed due to stereo rendering.\n"},
  {(char*)"GetPixelData", PyvtkOpenGLRenderWindow_GetPixelData, METH_VARARGS,
   (char*)"V.GetPixelData(int, int, int, int, int) -> (int, ...)\nC++: virtual unsigned char *GetPixelData(int x, int y, int x2,\n    int y2, int front)\nV.GetPixelData(int, int, int, int, int, vtkUnsignedCharArray)\n    -> int\nC++: virtual int GetPixelData(int x, int y, int x2, int y2,\n    int front, vtkUnsignedCharArray *data)\n\nSet/Get the pixel data of an image, transmitted as RGBRGB...\n"},
  {(char*)"SetPixelData", PyvtkOpenGLRenderWindow_SetPixelData, METH_VARARGS,
   (char*)"V.SetPixelData(int, int, int, int, [int, ...], int) -> int\nC++: virtual int SetPixelData(int x, int y, int x2, int y2,\n    unsigned char *data, int front)\nV.SetPixelData(int, int, int, int, vtkUnsignedCharArray, int)\n    -> int\nC++: virtual int SetPixelData(int x, int y, int x2, int y2,\n    vtkUnsignedCharArray *data, int front)\n\nSet/Get the pixel data of an image, transmitted as RGBRGB...\n"},
  {(char*)"GetRGBAPixelData", PyvtkOpenGLRenderWindow_GetRGBAPixelData, METH_VARARGS,
   (char*)"V.GetRGBAPixelData(int, int, int, int, int) -> (float, ...)\nC++: virtual float *GetRGBAPixelData(int x, int y, int x2, int y2,\n     int front)\nV.GetRGBAPixelData(int, int, int, int, int, vtkFloatArray) -> int\nC++: virtual int GetRGBAPixelData(int x, int y, int x2, int y2,\n    int front, vtkFloatArray *data)\n\nSet/Get the pixel data of an image, transmitted as RGBARGBA...\n"},
  {(char*)"SetRGBAPixelData", PyvtkOpenGLRenderWindow_SetRGBAPixelData, METH_VARARGS,
   (char*)"V.SetRGBAPixelData(int, int, int, int, [float, ...], int, int)\n    -> int\nC++: virtual int SetRGBAPixelData(int x, int y, int x2, int y2,\n    float *data, int front, int blend=0)\nV.SetRGBAPixelData(int, int, int, int, vtkFloatArray, int, int)\n    -> int\nC++: virtual int SetRGBAPixelData(int x, int y, int x2, int y2,\n    vtkFloatArray *data, int front, int blend=0)\n\nSet/Get the pixel data of an image, transmitted as RGBARGBA...\n"},
  {(char*)"ReleaseRGBAPixelData", PyvtkOpenGLRenderWindow_ReleaseRGBAPixelData, METH_VARARGS,
   (char*)"V.ReleaseRGBAPixelData([float, ...])\nC++: virtual void ReleaseRGBAPixelData(float *data)\n\nSet/Get the pixel data of an image, transmitted as RGBARGBA...\n"},
  {(char*)"GetRGBACharPixelData", PyvtkOpenGLRenderWindow_GetRGBACharPixelData, METH_VARARGS,
   (char*)"V.GetRGBACharPixelData(int, int, int, int, int) -> (int, ...)\nC++: virtual unsigned char *GetRGBACharPixelData(int x, int y,\n    int x2, int y2, int front)\nV.GetRGBACharPixelData(int, int, int, int, int,\n    vtkUnsignedCharArray) -> int\nC++: virtual int GetRGBACharPixelData(int x, int y, int x2,\n    int y2, int front, vtkUnsignedCharArray *data)\n\nSet/Get the pixel data of an image, transmitted as RGBARGBA...\n"},
  {(char*)"SetRGBACharPixelData", PyvtkOpenGLRenderWindow_SetRGBACharPixelData, METH_VARARGS,
   (char*)"V.SetRGBACharPixelData(int, int, int, int, [int, ...], int, int)\n    -> int\nC++: virtual int SetRGBACharPixelData(int x, int y, int x2,\n    int y2, unsigned char *data, int front, int blend=0)\nV.SetRGBACharPixelData(int, int, int, int, vtkUnsignedCharArray,\n    int, int) -> int\nC++: virtual int SetRGBACharPixelData(int x, int y, int x2,\n    int y2, vtkUnsignedCharArray *data, int front, int blend=0)\n\nSet/Get the pixel data of an image, transmitted as RGBARGBA...\n"},
  {(char*)"GetZbufferData", PyvtkOpenGLRenderWindow_GetZbufferData, METH_VARARGS,
   (char*)"V.GetZbufferData(int, int, int, int) -> (float, ...)\nC++: virtual float *GetZbufferData(int x1, int y1, int x2, int y2)\nV.GetZbufferData(int, int, int, int, [float, ...]) -> int\nC++: virtual int GetZbufferData(int x1, int y1, int x2, int y2,\n    float *z)\nV.GetZbufferData(int, int, int, int, vtkFloatArray) -> int\nC++: virtual int GetZbufferData(int x1, int y1, int x2, int y2,\n    vtkFloatArray *z)\n\nSet/Get the zbuffer data from an image\n"},
  {(char*)"SetZbufferData", PyvtkOpenGLRenderWindow_SetZbufferData, METH_VARARGS,
   (char*)"V.SetZbufferData(int, int, int, int, [float, ...]) -> int\nC++: virtual int SetZbufferData(int x1, int y1, int x2, int y2,\n    float *buffer)\nV.SetZbufferData(int, int, int, int, vtkFloatArray) -> int\nC++: virtual int SetZbufferData(int x1, int y1, int x2, int y2,\n    vtkFloatArray *buffer)\n\nSet/Get the zbuffer data from an image\n"},
  {(char*)"GetDepthBufferSize", PyvtkOpenGLRenderWindow_GetDepthBufferSize, METH_VARARGS,
   (char*)"V.GetDepthBufferSize() -> int\nC++: int GetDepthBufferSize()\n\nGet the size of the depth buffer.\n"},
  {(char*)"GetColorBufferSizes", PyvtkOpenGLRenderWindow_GetColorBufferSizes, METH_VARARGS,
   (char*)"V.GetColorBufferSizes([int, ...]) -> int\nC++: int GetColorBufferSizes(int *rgba)\n\nGet the size of the color buffer. Returns 0 if not able to\ndetermine otherwise sets R G B and A into buffer.\n"},
  {(char*)"OpenGLInit", PyvtkOpenGLRenderWindow_OpenGLInit, METH_VARARGS,
   (char*)"V.OpenGLInit()\nC++: virtual void OpenGLInit()\n\nInitialize OpenGL for this window.\n"},
  {(char*)"OpenGLInitState", PyvtkOpenGLRenderWindow_OpenGLInitState, METH_VARARGS,
   (char*)"V.OpenGLInitState()\nC++: virtual void OpenGLInitState()\n\n"},
  {(char*)"OpenGLInitContext", PyvtkOpenGLRenderWindow_OpenGLInitContext, METH_VARARGS,
   (char*)"V.OpenGLInitContext()\nC++: virtual void OpenGLInitContext()\n\n"},
  {(char*)"GetBackLeftBuffer", PyvtkOpenGLRenderWindow_GetBackLeftBuffer, METH_VARARGS,
   (char*)"V.GetBackLeftBuffer() -> int\nC++: unsigned int GetBackLeftBuffer()\n\nReturn the OpenGL name of the back left buffer. It is\nGL_BACK_LEFT if GL is bound to the window-system-provided\nframebuffer. It is vtkgl::COLOR_ATTACHMENT0_EXT if GL is bound to\nan application-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {(char*)"GetBackRightBuffer", PyvtkOpenGLRenderWindow_GetBackRightBuffer, METH_VARARGS,
   (char*)"V.GetBackRightBuffer() -> int\nC++: unsigned int GetBackRightBuffer()\n\nReturn the OpenGL name of the back right buffer. It is\nGL_BACK_RIGHT if GL is bound to the window-system-provided\nframebuffer. It is vtkgl::COLOR_ATTACHMENT0_EXT+1 if GL is bound\nto an application-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {(char*)"GetFrontLeftBuffer", PyvtkOpenGLRenderWindow_GetFrontLeftBuffer, METH_VARARGS,
   (char*)"V.GetFrontLeftBuffer() -> int\nC++: unsigned int GetFrontLeftBuffer()\n\nReturn the OpenGL name of the front left buffer. It is\nGL_FRONT_LEFT if GL is bound to the window-system-provided\nframebuffer. It is vtkgl::COLOR_ATTACHMENT0_EXT if GL is bound to\nan application-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {(char*)"GetFrontRightBuffer", PyvtkOpenGLRenderWindow_GetFrontRightBuffer, METH_VARARGS,
   (char*)"V.GetFrontRightBuffer() -> int\nC++: unsigned int GetFrontRightBuffer()\n\nReturn the OpenGL name of the front right buffer. It is\nGL_FRONT_RIGHT if GL is bound to the window-system-provided\nframebuffer. It is vtkgl::COLOR_ATTACHMENT0_EXT+1 if GL is bound\nto an application-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {(char*)"GetBackBuffer", PyvtkOpenGLRenderWindow_GetBackBuffer, METH_VARARGS,
   (char*)"V.GetBackBuffer() -> int\nC++: unsigned int GetBackBuffer()\n\nReturn the OpenGL name of the back left buffer. It is GL_BACK if\nGL is bound to the window-system-provided framebuffer. It is\nvtkgl::COLOR_ATTACHMENT0_EXT if GL is bound to an\napplication-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
  {(char*)"GetFrontBuffer", PyvtkOpenGLRenderWindow_GetFrontBuffer, METH_VARARGS,
   (char*)"V.GetFrontBuffer() -> int\nC++: unsigned int GetFrontBuffer()\n\nReturn the OpenGL name of the front left buffer. It is GL_FRONT\nif GL is bound to the window-system-provided framebuffer. It is\nvtkgl::COLOR_ATTACHMENT0_EXT if GL is bound to an\napplication-created framebuffer object (GPU-based offscreen\nrendering) It is used by vtkOpenGLCamera.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"CheckGraphicError", PyvtkOpenGLRenderWindow_CheckGraphicError, METH_VARARGS,
   (char*)"V.CheckGraphicError()\nC++: virtual void CheckGraphicError()\n\n@deprecated Replaced by vtkOpenGLCheckErrorMacro\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"HasGraphicError", PyvtkOpenGLRenderWindow_HasGraphicError, METH_VARARGS,
   (char*)"V.HasGraphicError() -> int\nC++: virtual int HasGraphicError()\n\n@deprecated Replaced by vtkOpenGLCheckErrorMacro\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetLastGraphicErrorString", PyvtkOpenGLRenderWindow_GetLastGraphicErrorString, METH_VARARGS,
   (char*)"V.GetLastGraphicErrorString() -> string\nC++: virtual const char *GetLastGraphicErrorString()\n\n@deprecated Replaced by vtkOpenGLCheckErrorMacro\n"},
#endif
  {(char*)"GetContextCreationTime", PyvtkOpenGLRenderWindow_GetContextCreationTime, METH_VARARGS,
   (char*)"V.GetContextCreationTime() -> int\nC++: virtual unsigned long GetContextCreationTime()\n\nGet the time when the OpenGL context was created.\n"},
  {(char*)"GetExtensionManager", PyvtkOpenGLRenderWindow_GetExtensionManager, METH_VARARGS,
   (char*)"V.GetExtensionManager() -> vtkOpenGLExtensionManager\nC++: vtkOpenGLExtensionManager *GetExtensionManager()\n\nReturns the extension manager. A new one will be created if one\nhasn't already been set up.\n"},
  {(char*)"GetHardwareSupport", PyvtkOpenGLRenderWindow_GetHardwareSupport, METH_VARARGS,
   (char*)"V.GetHardwareSupport() -> vtkOpenGLHardwareSupport\nC++: vtkOpenGLHardwareSupport *GetHardwareSupport()\n\nReturns an Hardware Support object. A new one will be created if\none hasn't already been set up.\n"},
  {(char*)"GetTextureUnitManager", PyvtkOpenGLRenderWindow_GetTextureUnitManager, METH_VARARGS,
   (char*)"V.GetTextureUnitManager() -> vtkTextureUnitManager\nC++: vtkTextureUnitManager *GetTextureUnitManager()\n\nReturns its texture unit manager object. A new one will be\ncreated if one hasn't already been set up.\n"},
  {(char*)"WaitForCompletion", PyvtkOpenGLRenderWindow_WaitForCompletion, METH_VARARGS,
   (char*)"V.WaitForCompletion()\nC++: virtual void WaitForCompletion()\n\nBlock the thread until the actual rendering is finished(). Useful\nfor measurement only.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkOpenGLRenderWindowNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkOpenGLRenderWindow_Methods,
    "vtkOpenGLRenderWindow", modulename,
    NULL, NULL,
    PyvtkOpenGLRenderWindow_Doc(),
    PyVTKClass_vtkRenderWindowNew(modulename));
  return cls;
}

const char **PyvtkOpenGLRenderWindow_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLRenderWindow - OpenGL rendering window\n\n",
    "Superclass: vtkRenderWindow\n\n",
    "vtkOpenGLRenderWindow is a concrete implementation of the abstract\nclass vtkRenderWindow. vtkOpenGLRenderer interfaces to the OpenGL\ngraphics library. Application programmers should normally use\nvtkRenderWindow instead of the OpenGL specific version.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLRenderWindow(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLRenderWindowNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLRenderWindow", o) != 0)
    {
    Py_DECREF(o);
    }

}

