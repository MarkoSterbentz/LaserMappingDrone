// python wrapper for vtkContext2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRect.h"
#include "vtkStdString.h"
#include "vtkUnicodeString.h"
#include "vtkContext2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkContext2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkContext2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkContext2D_Doc();


static PyObject *
PyvtkContext2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkContext2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContext2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContext2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContext2D::NewInstance());

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
PyvtkContext2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkContext2D *tempr = vtkContext2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkContextDevice2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContextDevice2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Begin(temp0) :
      op->vtkContext2D::Begin(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_GetDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContextDevice2D *tempr = (ap.IsBound() ?
      op->GetDevice() :
      op->vtkContext2D::GetDevice());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->End() :
      op->vtkContext2D::End());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_GetBufferIdMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBufferIdMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetBufferIdMode() :
      op->vtkContext2D::GetBufferIdMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_BufferIdModeBegin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferIdModeBegin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkAbstractContextBufferId *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextBufferId"))
    {
    if (ap.IsBound())
      {
      op->BufferIdModeBegin(temp0);
      }
    else
      {
      op->vtkContext2D::BufferIdModeBegin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_BufferIdModeEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferIdModeEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BufferIdModeEnd();
      }
    else
      {
      op->vtkContext2D::BufferIdModeEnd();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_DrawLine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->DrawLine(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkContext2D::DrawLine(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawLine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0[4];
  float save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->DrawLine(temp0);
      }
    else
      {
      op->vtkContext2D::DrawLine(temp0);
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
PyvtkContext2D_DrawLine_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
    {
    if (ap.IsBound())
      {
      op->DrawLine(temp0);
      }
    else
      {
      op->vtkContext2D::DrawLine(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContext2D_DrawLine_Methods[] = {
  {NULL, PyvtkContext2D_DrawLine_s2, METH_VARARGS,
   (char*)"@O *f"},
  {NULL, PyvtkContext2D_DrawLine_s3, METH_VARARGS,
   (char*)"@O *vtkPoints2D"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkContext2D_DrawLine(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContext2D_DrawLine_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkContext2D_DrawLine_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DrawLine");
  return NULL;
}



static PyObject *
PyvtkContext2D_DrawPoly_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  float *temp1 = NULL;
  float *save1 = NULL;
  float small1[8];
  int size1 = 0;
  int temp2;
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
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new float[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->DrawPoly(temp0, temp1, temp2);
      }
    else
      {
      op->vtkContext2D::DrawPoly(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPoly_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
    {
    if (ap.IsBound())
      {
      op->DrawPoly(temp0);
      }
    else
      {
      op->vtkContext2D::DrawPoly(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPoly_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  int temp1;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->DrawPoly(temp0, temp1);
      }
    else
      {
      op->vtkContext2D::DrawPoly(temp0, temp1);
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
PyvtkContext2D_DrawPoly_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  int temp1;
  unsigned char *temp2 = NULL;
  unsigned char *save2 = NULL;
  unsigned char small2[8];
  int size2 = 0;
  int temp3;
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
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new unsigned char[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->DrawPoly(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkContext2D::DrawPoly(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPoly(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkContext2D_DrawPoly_s1(self, args);
    case 1:
      return PyvtkContext2D_DrawPoly_s2(self, args);
    case 2:
      return PyvtkContext2D_DrawPoly_s3(self, args);
    case 4:
      return PyvtkContext2D_DrawPoly_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DrawPoly");
  return NULL;
}



static PyObject *
PyvtkContext2D_DrawPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->DrawPoint(temp0, temp1);
      }
    else
      {
      op->vtkContext2D::DrawPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_DrawPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  float *temp1 = NULL;
  float *save1 = NULL;
  float small1[8];
  int size1 = 0;
  int temp2;
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
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new float[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->DrawPoints(temp0, temp1, temp2);
      }
    else
      {
      op->vtkContext2D::DrawPoints(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
    {
    if (ap.IsBound())
      {
      op->DrawPoints(temp0);
      }
    else
      {
      op->vtkContext2D::DrawPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPoints_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  int temp1;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->DrawPoints(temp0, temp1);
      }
    else
      {
      op->vtkContext2D::DrawPoints(temp0, temp1);
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
PyvtkContext2D_DrawPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkContext2D_DrawPoints_s1(self, args);
    case 1:
      return PyvtkContext2D_DrawPoints_s2(self, args);
    case 2:
      return PyvtkContext2D_DrawPoints_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DrawPoints");
  return NULL;
}



static PyObject *
PyvtkContext2D_DrawPointSprites_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPointSprites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkImageData *temp0 = NULL;
  vtkPoints2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkPoints2D"))
    {
    if (ap.IsBound())
      {
      op->DrawPointSprites(temp0, temp1);
      }
    else
      {
      op->vtkContext2D::DrawPointSprites(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPointSprites_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPointSprites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkImageData *temp0 = NULL;
  vtkPoints2D *temp1 = NULL;
  vtkUnsignedCharArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkPoints2D") &&
      ap.GetVTKObject(temp2, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->DrawPointSprites(temp0, temp1, temp2);
      }
    else
      {
      op->vtkContext2D::DrawPointSprites(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPointSprites_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPointSprites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkImageData *temp0 = NULL;
  float *temp1 = NULL;
  float *save1 = NULL;
  float small1[8];
  int size1 = 0;
  int temp2;
  unsigned char *temp3 = NULL;
  unsigned char *save3 = NULL;
  unsigned char small3[8];
  int size3 = 0;
  int temp4;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new float[2*size1];
      }
    save1 = &temp1[size1];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new unsigned char[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->DrawPointSprites(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkContext2D::DrawPointSprites(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPointSprites_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPointSprites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkImageData *temp0 = NULL;
  float *temp1 = NULL;
  float *save1 = NULL;
  float small1[8];
  int size1 = 0;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new float[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->DrawPointSprites(temp0, temp1, temp2);
      }
    else
      {
      op->vtkContext2D::DrawPointSprites(temp0, temp1, temp2);
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

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyMethodDef PyvtkContext2D_DrawPointSprites_Methods[] = {
  {NULL, PyvtkContext2D_DrawPointSprites_s2, METH_VARARGS,
   (char*)"@OOO *vtkImageData *vtkPoints2D *vtkUnsignedCharArray"},
  {NULL, PyvtkContext2D_DrawPointSprites_s4, METH_VARARGS,
   (char*)"@OOi *vtkImageData *f"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkContext2D_DrawPointSprites(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContext2D_DrawPointSprites_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkContext2D_DrawPointSprites_s1(self, args);
    case 5:
      return PyvtkContext2D_DrawPointSprites_s3(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DrawPointSprites");
  return NULL;
}



static PyObject *
PyvtkContext2D_DrawMarkers_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  int temp0;
  bool temp1 = false;
  float *temp2 = NULL;
  float *save2 = NULL;
  float small2[8];
  int size2 = 0;
  int temp3;
  unsigned char *temp4 = NULL;
  unsigned char *save4 = NULL;
  unsigned char small4[8];
  int size4 = 0;
  int temp5;
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
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      op->DrawMarkers(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkContext2D::DrawMarkers(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
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
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawMarkers_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  int temp0;
  bool temp1 = false;
  float *temp2 = NULL;
  float *save2 = NULL;
  float small2[8];
  int size2 = 0;
  int temp3;
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

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->DrawMarkers(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkContext2D::DrawMarkers(temp0, temp1, temp2, temp3);
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
PyvtkContext2D_DrawMarkers_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  int temp0;
  bool temp1 = false;
  vtkPoints2D *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPoints2D"))
    {
    if (ap.IsBound())
      {
      op->DrawMarkers(temp0, temp1, temp2);
      }
    else
      {
      op->vtkContext2D::DrawMarkers(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawMarkers_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  int temp0;
  bool temp1 = false;
  vtkPoints2D *temp2 = NULL;
  vtkUnsignedCharArray *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPoints2D") &&
      ap.GetVTKObject(temp3, "vtkUnsignedCharArray"))
    {
    if (ap.IsBound())
      {
      op->DrawMarkers(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkContext2D::DrawMarkers(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContext2D_DrawMarkers_Methods[] = {
  {NULL, PyvtkContext2D_DrawMarkers_s2, METH_VARARGS,
   (char*)"@iOOi bool *f"},
  {NULL, PyvtkContext2D_DrawMarkers_s4, METH_VARARGS,
   (char*)"@iOOO bool *vtkPoints2D *vtkUnsignedCharArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkContext2D_DrawMarkers(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContext2D_DrawMarkers_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkContext2D_DrawMarkers_s1(self, args);
    case 3:
      return PyvtkContext2D_DrawMarkers_s3(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DrawMarkers");
  return NULL;
}



static PyObject *
PyvtkContext2D_DrawRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->DrawRect(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkContext2D::DrawRect(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_DrawQuad_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
  float temp6;
  float temp7;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    if (ap.IsBound())
      {
      op->DrawQuad(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkContext2D::DrawQuad(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawQuad_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

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
      op->DrawQuad(temp0);
      }
    else
      {
      op->vtkContext2D::DrawQuad(temp0);
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
PyvtkContext2D_DrawQuad(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 8:
      return PyvtkContext2D_DrawQuad_s1(self, args);
    case 1:
      return PyvtkContext2D_DrawQuad_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DrawQuad");
  return NULL;
}



static PyObject *
PyvtkContext2D_DrawQuadStrip_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawQuadStrip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
    {
    if (ap.IsBound())
      {
      op->DrawQuadStrip(temp0);
      }
    else
      {
      op->vtkContext2D::DrawQuadStrip(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawQuadStrip_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawQuadStrip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  int temp1;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->DrawQuadStrip(temp0, temp1);
      }
    else
      {
      op->vtkContext2D::DrawQuadStrip(temp0, temp1);
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
PyvtkContext2D_DrawQuadStrip(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkContext2D_DrawQuadStrip_s1(self, args);
    case 2:
      return PyvtkContext2D_DrawQuadStrip_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DrawQuadStrip");
  return NULL;
}



static PyObject *
PyvtkContext2D_DrawPolygon_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  float *temp1 = NULL;
  float *save1 = NULL;
  float small1[8];
  int size1 = 0;
  int temp2;
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
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new float[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->DrawPolygon(temp0, temp1, temp2);
      }
    else
      {
      op->vtkContext2D::DrawPolygon(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
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

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPolygon_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
    {
    if (ap.IsBound())
      {
      op->DrawPolygon(temp0);
      }
    else
      {
      op->vtkContext2D::DrawPolygon(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawPolygon_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  int temp1;
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

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->DrawPolygon(temp0, temp1);
      }
    else
      {
      op->vtkContext2D::DrawPolygon(temp0, temp1);
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
PyvtkContext2D_DrawPolygon(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkContext2D_DrawPolygon_s1(self, args);
    case 1:
      return PyvtkContext2D_DrawPolygon_s2(self, args);
    case 2:
      return PyvtkContext2D_DrawPolygon_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DrawPolygon");
  return NULL;
}



static PyObject *
PyvtkContext2D_DrawEllipse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->DrawEllipse(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkContext2D::DrawEllipse(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_DrawWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->DrawWedge(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkContext2D::DrawWedge(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_DrawEllipseWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipseWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
  float temp6;
  float temp7;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    if (ap.IsBound())
      {
      op->DrawEllipseWedge(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkContext2D::DrawEllipseWedge(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_DrawArc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawArc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->DrawArc(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkContext2D::DrawArc(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_DrawEllipticArc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipticArc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->DrawEllipticArc(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkContext2D::DrawEllipticArc(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_DrawImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  vtkImageData *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->DrawImage(temp0, temp1, temp2);
      }
    else
      {
      op->vtkContext2D::DrawImage(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  vtkImageData *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->DrawImage(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkContext2D::DrawImage(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawImage_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkRectf *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkImageData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf") &&
      ap.GetVTKObject(temp1, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->DrawImage(*temp0, temp1);
      }
    else
      {
      op->vtkContext2D::DrawImage(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkContext2D_DrawImage(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkContext2D_DrawImage_s1(self, args);
    case 4:
      return PyvtkContext2D_DrawImage_s2(self, args);
    case 2:
      return PyvtkContext2D_DrawImage_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DrawImage");
  return NULL;
}



static PyObject *
PyvtkContext2D_DrawStringRect_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawStringRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = NULL;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints2D") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->DrawStringRect(temp0, temp1);
      }
    else
      {
      op->vtkContext2D::DrawStringRect(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawStringRect_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawStringRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = NULL;
  vtkUnicodeString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints2D") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->DrawStringRect(temp0, temp1);
      }
    else
      {
      op->vtkContext2D::DrawStringRect(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContext2D_DrawStringRect_Methods[] = {
  {NULL, PyvtkContext2D_DrawStringRect_s1, METH_VARARGS,
   (char*)"@Os *vtkPoints2D"},
  {NULL, PyvtkContext2D_DrawStringRect_s2, METH_VARARGS,
   (char*)"@OO *vtkPoints2D unicode"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkContext2D_DrawStringRect(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContext2D_DrawStringRect_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DrawStringRect");
  return NULL;
}



static PyObject *
PyvtkContext2D_DrawString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = NULL;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints2D") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->DrawString(temp0, temp1);
      }
    else
      {
      op->vtkContext2D::DrawString(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  vtkStdString temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->DrawString(temp0, temp1, temp2);
      }
    else
      {
      op->vtkContext2D::DrawString(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawString_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = NULL;
  vtkUnicodeString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints2D") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->DrawString(temp0, temp1);
      }
    else
      {
      op->vtkContext2D::DrawString(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawString_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  vtkUnicodeString temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->DrawString(temp0, temp1, temp2);
      }
    else
      {
      op->vtkContext2D::DrawString(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContext2D_DrawString_Methods[] = {
  {NULL, PyvtkContext2D_DrawString_s1, METH_VARARGS,
   (char*)"@Os *vtkPoints2D"},
  {NULL, PyvtkContext2D_DrawString_s2, METH_VARARGS,
   (char*)"@ffs"},
  {NULL, PyvtkContext2D_DrawString_s3, METH_VARARGS,
   (char*)"@OO *vtkPoints2D unicode"},
  {NULL, PyvtkContext2D_DrawString_s4, METH_VARARGS,
   (char*)"@ffO unicode"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkContext2D_DrawString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContext2D_DrawString_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DrawString");
  return NULL;
}



static PyObject *
PyvtkContext2D_ComputeStringBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkStdString temp0;
  vtkPoints2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPoints2D"))
    {
    if (ap.IsBound())
      {
      op->ComputeStringBounds(temp0, temp1);
      }
    else
      {
      op->vtkContext2D::ComputeStringBounds(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_ComputeStringBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkStdString temp0;
  float temp1[4];
  float save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->ComputeStringBounds(temp0, temp1);
      }
    else
      {
      op->vtkContext2D::ComputeStringBounds(temp0, temp1);
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
PyvtkContext2D_ComputeStringBounds_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkUnicodeString temp0;
  vtkPoints2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPoints2D"))
    {
    if (ap.IsBound())
      {
      op->ComputeStringBounds(temp0, temp1);
      }
    else
      {
      op->vtkContext2D::ComputeStringBounds(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_ComputeStringBounds_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkUnicodeString temp0;
  float temp1[4];
  float save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->ComputeStringBounds(temp0, temp1);
      }
    else
      {
      op->vtkContext2D::ComputeStringBounds(temp0, temp1);
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

static PyMethodDef PyvtkContext2D_ComputeStringBounds_Methods[] = {
  {NULL, PyvtkContext2D_ComputeStringBounds_s1, METH_VARARGS,
   (char*)"@sO *vtkPoints2D"},
  {NULL, PyvtkContext2D_ComputeStringBounds_s2, METH_VARARGS,
   (char*)"@sO *f"},
  {NULL, PyvtkContext2D_ComputeStringBounds_s3, METH_VARARGS,
   (char*)"@OO unicode *vtkPoints2D"},
  {NULL, PyvtkContext2D_ComputeStringBounds_s4, METH_VARARGS,
   (char*)"@OO unicode *f"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkContext2D_ComputeStringBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContext2D_ComputeStringBounds_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeStringBounds");
  return NULL;
}



static PyObject *
PyvtkContext2D_ComputeFontSizeForBoundedString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeFontSizeForBoundedString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkStdString temp0;
  float temp1;
  float temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->ComputeFontSizeForBoundedString(temp0, temp1, temp2) :
      op->vtkContext2D::ComputeFontSizeForBoundedString(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_DrawMathTextString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMathTextString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = NULL;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints2D") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->DrawMathTextString(temp0, temp1);
      }
    else
      {
      op->vtkContext2D::DrawMathTextString(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawMathTextString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMathTextString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  vtkStdString temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->DrawMathTextString(temp0, temp1, temp2);
      }
    else
      {
      op->vtkContext2D::DrawMathTextString(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawMathTextString_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMathTextString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPoints2D *temp0 = NULL;
  vtkStdString temp1;
  vtkStdString temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints2D") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->DrawMathTextString(temp0, temp1, temp2);
      }
    else
      {
      op->vtkContext2D::DrawMathTextString(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContext2D_DrawMathTextString_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMathTextString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  float temp0;
  float temp1;
  vtkStdString temp2;
  vtkStdString temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->DrawMathTextString(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkContext2D::DrawMathTextString(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContext2D_DrawMathTextString_Methods[] = {
  {NULL, PyvtkContext2D_DrawMathTextString_s2, METH_VARARGS,
   (char*)"@ffs"},
  {NULL, PyvtkContext2D_DrawMathTextString_s3, METH_VARARGS,
   (char*)"@Oss *vtkPoints2D"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkContext2D_DrawMathTextString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContext2D_DrawMathTextString_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkContext2D_DrawMathTextString_s1(self, args);
    case 4:
      return PyvtkContext2D_DrawMathTextString_s4(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DrawMathTextString");
  return NULL;
}



static PyObject *
PyvtkContext2D_MathTextIsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MathTextIsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->MathTextIsSupported() :
      op->vtkContext2D::MathTextIsSupported());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_ApplyPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkPen *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
    {
    if (ap.IsBound())
      {
      op->ApplyPen(temp0);
      }
    else
      {
      op->vtkContext2D::ApplyPen(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkContext2D::GetPen());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_ApplyBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkBrush *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBrush"))
    {
    if (ap.IsBound())
      {
      op->ApplyBrush(temp0);
      }
    else
      {
      op->vtkContext2D::ApplyBrush(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_GetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetBrush() :
      op->vtkContext2D::GetBrush());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_ApplyTextProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTextProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->ApplyTextProp(temp0);
      }
    else
      {
      op->vtkContext2D::ApplyTextProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_GetTextProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProp() :
      op->vtkContext2D::GetTextProp());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkTransform2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform2D"))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkContext2D::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransform2D *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkContext2D::GetTransform());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_AppendTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkTransform2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform2D"))
    {
    if (ap.IsBound())
      {
      op->AppendTransform(temp0);
      }
    else
      {
      op->vtkContext2D::AppendTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_PushMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PushMatrix();
      }
    else
      {
      op->vtkContext2D::PushMatrix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_PopMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PopMatrix();
      }
    else
      {
      op->vtkContext2D::PopMatrix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_ApplyId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ApplyId(temp0);
      }
    else
      {
      op->vtkContext2D::ApplyId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_FloatToInt(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FloatToInt");

  float temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkContext2D::FloatToInt(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_GetContext3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkContext3D *tempr = (ap.IsBound() ?
      op->GetContext3D() :
      op->vtkContext2D::GetContext3D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContext2D_SetContext3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext2D *op = static_cast<vtkContext2D *>(vp);

  vtkContext3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext3D"))
    {
    if (ap.IsBound())
      {
      op->SetContext3D(temp0);
      }
    else
      {
      op->vtkContext2D::SetContext3D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContext2D_Methods[] = {
  {(char*)"GetClassName", PyvtkContext2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContext2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContext2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkContext2D\nC++: vtkContext2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkContext2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkContext2D\nC++: vtkContext2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Begin", PyvtkContext2D_Begin, METH_VARARGS,
   (char*)"V.Begin(vtkContextDevice2D) -> bool\nC++: bool Begin(vtkContextDevice2D *device)\n\nBegin painting on a vtkContextDevice2D, no painting can occur\nbefore this call has been made. Only one painter is allowed at a\ntime on any given paint device. Returns true if successful,\notherwise false.\n"},
  {(char*)"GetDevice", PyvtkContext2D_GetDevice, METH_VARARGS,
   (char*)"V.GetDevice() -> vtkContextDevice2D\nC++: vtkContextDevice2D *GetDevice()\n\n"},
  {(char*)"End", PyvtkContext2D_End, METH_VARARGS,
   (char*)"V.End() -> bool\nC++: bool End()\n\nEnds painting on the device, you would not usually need to call\nthis as it should be called by the destructor. Returns true if\nthe painter is no longer active, otherwise false.\n"},
  {(char*)"GetBufferIdMode", PyvtkContext2D_GetBufferIdMode, METH_VARARGS,
   (char*)"V.GetBufferIdMode() -> bool\nC++: bool GetBufferIdMode()\n\nTell if the context is in BufferId creation mode. Initial value\nis false.\n"},
  {(char*)"BufferIdModeBegin", PyvtkContext2D_BufferIdModeBegin, METH_VARARGS,
   (char*)"V.BufferIdModeBegin(vtkAbstractContextBufferId)\nC++: void BufferIdModeBegin(vtkAbstractContextBufferId *bufferId)\n\nStart BufferId creation Mode.\n\\pre not_yet: !GetBufferIdMode()\n\\pre bufferId_exists: bufferId!=0\n\\post started: GetBufferIdMode()\n"},
  {(char*)"BufferIdModeEnd", PyvtkContext2D_BufferIdModeEnd, METH_VARARGS,
   (char*)"V.BufferIdModeEnd()\nC++: void BufferIdModeEnd()\n\nFinalize BufferId creation Mode. It makes sure that the content\nof the bufferId passed in argument of BufferIdModeBegin() is\ncorrectly set.\n\\pre started: GetBufferIdMode()\n\\post done: !GetBufferIdMode()\n"},
  {(char*)"DrawLine", PyvtkContext2D_DrawLine, METH_VARARGS,
   (char*)"V.DrawLine(float, float, float, float)\nC++: void DrawLine(float x1, float y1, float x2, float y2)\nV.DrawLine([float, float, float, float])\nC++: void DrawLine(float p[4])\nV.DrawLine(vtkPoints2D)\nC++: void DrawLine(vtkPoints2D *points)\n\nDraw a line between the specified points.\n"},
  {(char*)"DrawPoly", PyvtkContext2D_DrawPoly, METH_VARARGS,
   (char*)"V.DrawPoly([float, ...], [float, ...], int)\nC++: void DrawPoly(float *x, float *y, int n)\nV.DrawPoly(vtkPoints2D)\nC++: void DrawPoly(vtkPoints2D *points)\nV.DrawPoly([float, ...], int)\nC++: void DrawPoly(float *points, int n)\nV.DrawPoly([float, ...], int, [int, ...], int)\nC++: void DrawPoly(float *points, int n, unsigned char *colors,\n    int nc_comps)\n\nDraw a poly line between the specified points.\n"},
  {(char*)"DrawPoint", PyvtkContext2D_DrawPoint, METH_VARARGS,
   (char*)"V.DrawPoint(float, float)\nC++: void DrawPoint(float x, float y)\n\nDraw a point at the supplied x and y coordinate\n"},
  {(char*)"DrawPoints", PyvtkContext2D_DrawPoints, METH_VARARGS,
   (char*)"V.DrawPoints([float, ...], [float, ...], int)\nC++: void DrawPoints(float *x, float *y, int n)\nV.DrawPoints(vtkPoints2D)\nC++: void DrawPoints(vtkPoints2D *points)\nV.DrawPoints([float, ...], int)\nC++: void DrawPoints(float *points, int n)\n\nDraw the specified number of points using the x and y arrays\nsupplied\n"},
  {(char*)"DrawPointSprites", PyvtkContext2D_DrawPointSprites, METH_VARARGS,
   (char*)"V.DrawPointSprites(vtkImageData, vtkPoints2D)\nC++: void DrawPointSprites(vtkImageData *sprite,\n    vtkPoints2D *points)\nV.DrawPointSprites(vtkImageData, vtkPoints2D,\n    vtkUnsignedCharArray)\nC++: void DrawPointSprites(vtkImageData *sprite,\n    vtkPoints2D *points, vtkUnsignedCharArray *colors)\nV.DrawPointSprites(vtkImageData, [float, ...], int, [int, ...],\n    int)\nC++: void DrawPointSprites(vtkImageData *sprite, float *points,\n    int n, unsigned char *colors, int nc_comps)\nV.DrawPointSprites(vtkImageData, [float, ...], int)\nC++: void DrawPointSprites(vtkImageData *sprite, float *points,\n    int n)\n\nDraw a series of point sprites, images centred at the points\nsupplied. The supplied vtkImageData is the sprite to be drawn,\nonly squares will be drawn and the size is set using\nSetPointSize.\n"},
  {(char*)"DrawMarkers", PyvtkContext2D_DrawMarkers, METH_VARARGS,
   (char*)"V.DrawMarkers(int, bool, [float, ...], int, [int, ...], int)\nC++: virtual void DrawMarkers(int shape, bool highlight,\n    float *points, int n, unsigned char *colors, int nc_comps)\nV.DrawMarkers(int, bool, [float, ...], int)\nC++: virtual void DrawMarkers(int shape, bool highlight,\n    float *points, int n)\nV.DrawMarkers(int, bool, vtkPoints2D)\nC++: virtual void DrawMarkers(int shape, bool highlight,\n    vtkPoints2D *points)\nV.DrawMarkers(int, bool, vtkPoints2D, vtkUnsignedCharArray)\nC++: virtual void DrawMarkers(int shape, bool highlight,\n    vtkPoints2D *points, vtkUnsignedCharArray *colors)\n\nDraw a series of markers centered at the points supplied. The\nshape argument controls the marker shape, and can be one of\n- VTK_MARKER_CROSS\n- VTK_MARKER_PLUS\n- VTK_MARKER_SQUARE\n- VTK_MARKER_CIRCLE\n- VTK_MARKER_DIAMOND Marker size is determined by the current pen\nwidth.\n\\param colors is an optional array of colors.\n\\param nc_comps is the number of components for the color.\n"},
  {(char*)"DrawRect", PyvtkContext2D_DrawRect, METH_VARARGS,
   (char*)"V.DrawRect(float, float, float, float)\nC++: void DrawRect(float x, float y, float w, float h)\n\nDraw a rectangle with origin at x, y and width w, height h\n"},
  {(char*)"DrawQuad", PyvtkContext2D_DrawQuad, METH_VARARGS,
   (char*)"V.DrawQuad(float, float, float, float, float, float, float, float)\nC++: void DrawQuad(float x1, float y1, float x2, float y2,\n    float x3, float y3, float x4, float y4)\nV.DrawQuad([float, ...])\nC++: void DrawQuad(float *p)\n\nDraw a quadrilateral at the specified points (4 points, 8 floats\nin x, y).\n"},
  {(char*)"DrawQuadStrip", PyvtkContext2D_DrawQuadStrip, METH_VARARGS,
   (char*)"V.DrawQuadStrip(vtkPoints2D)\nC++: void DrawQuadStrip(vtkPoints2D *points)\nV.DrawQuadStrip([float, ...], int)\nC++: void DrawQuadStrip(float *p, int n)\n\nDraw a strip of quads\n"},
  {(char*)"DrawPolygon", PyvtkContext2D_DrawPolygon, METH_VARARGS,
   (char*)"V.DrawPolygon([float, ...], [float, ...], int)\nC++: void DrawPolygon(float *x, float *y, int n)\nV.DrawPolygon(vtkPoints2D)\nC++: void DrawPolygon(vtkPoints2D *points)\nV.DrawPolygon([float, ...], int)\nC++: void DrawPolygon(float *points, int n)\n\nDraw a polygon specified specified by the points using the x and\ny arrays supplied\n"},
  {(char*)"DrawEllipse", PyvtkContext2D_DrawEllipse, METH_VARARGS,
   (char*)"V.DrawEllipse(float, float, float, float)\nC++: void DrawEllipse(float x, float y, float rx, float ry)\n\nDraw an ellipse with center at x, y and radii rx, ry.\n\\pre positive_rx: rx>=0\n\\pre positive_ry: ry>=0\n"},
  {(char*)"DrawWedge", PyvtkContext2D_DrawWedge, METH_VARARGS,
   (char*)"V.DrawWedge(float, float, float, float, float, float)\nC++: void DrawWedge(float x, float y, float outRadius,\n    float inRadius, float startAngle, float stopAngle)\n\nDraw a circular wedge with center at x, y, outer radius\noutRadius, inner radius inRadius between angles startAngle and\nstopAngle (expressed in degrees).\n\\pre positive_outRadius: outRadius>=0\n\\pre positive_inRadius: inRadius>=0\n\\pre ordered_radii: inRadius<=outRadius\n"},
  {(char*)"DrawEllipseWedge", PyvtkContext2D_DrawEllipseWedge, METH_VARARGS,
   (char*)"V.DrawEllipseWedge(float, float, float, float, float, float,\n    float, float)\nC++: void DrawEllipseWedge(float x, float y, float outRx,\n    float outRy, float inRx, float inRy, float startAngle,\n    float stopAngle)\n\nDraw an elliptic wedge with center at x, y, outer radii outRx,\noutRy, inner radii inRx, inRy between angles startAngle and\nstopAngle (expressed in degrees).\n\\pre positive_outRx: outRx>=0\n\\pre positive_outRy: outRy>=0\n\\pre positive_inRx: inRx>=0\n\\pre positive_inRy: inRy>=0\n\\pre ordered_rx: inRx<=outRx\n\\pre ordered_ry: inRy<=outRy\n"},
  {(char*)"DrawArc", PyvtkContext2D_DrawArc, METH_VARARGS,
   (char*)"V.DrawArc(float, float, float, float, float)\nC++: void DrawArc(float x, float y, float r, float startAngle,\n    float stopAngle)\n\nDraw a circular arc with center at x,y with radius r between\nangles startAngle and stopAngle (expressed in degrees).\n\\pre positive_radius: r>=0\n"},
  {(char*)"DrawEllipticArc", PyvtkContext2D_DrawEllipticArc, METH_VARARGS,
   (char*)"V.DrawEllipticArc(float, float, float, float, float, float)\nC++: void DrawEllipticArc(float x, float y, float rX, float rY,\n    float startAngle, float stopAngle)\n\nDraw an elliptic arc with center at x,y with radii rX and rY\nbetween angles startAngle and stopAngle (expressed in degrees).\n\\pre positive_rX: rX>=0\n\\pre positive_rY: rY>=0\n"},
  {(char*)"DrawImage", PyvtkContext2D_DrawImage, METH_VARARGS,
   (char*)"V.DrawImage(float, float, vtkImageData)\nC++: void DrawImage(float x, float y, vtkImageData *image)\nV.DrawImage(float, float, float, vtkImageData)\nC++: void DrawImage(float x, float y, float scale,\n    vtkImageData *image)\nV.DrawImage(vtkRectf, vtkImageData)\nC++: void DrawImage(const vtkRectf &pos, vtkImageData *image)\n\nDraw the supplied image at the given x, y location (bottom\ncorner).\n"},
  {(char*)"DrawStringRect", PyvtkContext2D_DrawStringRect, METH_VARARGS,
   (char*)"V.DrawStringRect(vtkPoints2D, string)\nC++: void DrawStringRect(vtkPoints2D *rect,\n    const vtkStdString &string)\nV.DrawStringRect(vtkPoints2D, unicode)\nC++: void DrawStringRect(vtkPoints2D *rect,\n    const vtkUnicodeString &string)\n\nDraw some text to the screen in a bounding rectangle with the\nalignment of the text properties respecting the rectangle. The\npoints should be supplied as bottom corner (x, y), width, height.\n"},
  {(char*)"DrawString", PyvtkContext2D_DrawString, METH_VARARGS,
   (char*)"V.DrawString(vtkPoints2D, string)\nC++: void DrawString(vtkPoints2D *point,\n    const vtkStdString &string)\nV.DrawString(float, float, string)\nC++: void DrawString(float x, float y, const vtkStdString &string)\nV.DrawString(vtkPoints2D, unicode)\nC++: void DrawString(vtkPoints2D *point,\n    const vtkUnicodeString &string)\nV.DrawString(float, float, unicode)\nC++: void DrawString(float x, float y,\n    const vtkUnicodeString &string)\n\nDraw some text to the screen.\n"},
  {(char*)"ComputeStringBounds", PyvtkContext2D_ComputeStringBounds, METH_VARARGS,
   (char*)"V.ComputeStringBounds(string, vtkPoints2D)\nC++: void ComputeStringBounds(const vtkStdString &string,\n    vtkPoints2D *bounds)\nV.ComputeStringBounds(string, [float, float, float, float])\nC++: void ComputeStringBounds(const vtkStdString &string,\n    float bounds[4])\nV.ComputeStringBounds(unicode, vtkPoints2D)\nC++: void ComputeStringBounds(const vtkUnicodeString &string,\n    vtkPoints2D *bounds)\nV.ComputeStringBounds(unicode, [float, float, float, float])\nC++: void ComputeStringBounds(const vtkUnicodeString &string,\n    float bounds[4])\n\nCompute the bounds of the supplied string. The bounds will be\ncopied to the supplied bounds variable, the first two elements\nare the bottom corner of the string, and the second two elements\nare the width and height of the bounding box.\n"},
  {(char*)"ComputeFontSizeForBoundedString", PyvtkContext2D_ComputeFontSizeForBoundedString, METH_VARARGS,
   (char*)"V.ComputeFontSizeForBoundedString(string, float, float) -> int\nC++: int ComputeFontSizeForBoundedString(\n    const vtkStdString &string, float width, float height)\n\nCalculate the largest possible font size where the supplied\nstring will fit within the specified bounds.  In addition to\nbeing returned, this font size is also used to update the\nvtkTextProperty used by this object. NOTE: text rotation is\nignored for the purposes of this function.\n"},
  {(char*)"DrawMathTextString", PyvtkContext2D_DrawMathTextString, METH_VARARGS,
   (char*)"V.DrawMathTextString(vtkPoints2D, string)\nC++: void DrawMathTextString(vtkPoints2D *point,\n    const vtkStdString &string)\nV.DrawMathTextString(float, float, string)\nC++: void DrawMathTextString(float x, float y,\n    const vtkStdString &string)\nV.DrawMathTextString(vtkPoints2D, string, string)\nC++: void DrawMathTextString(vtkPoints2D *point,\n    const vtkStdString &string, const vtkStdString &fallback)\nV.DrawMathTextString(float, float, string, string)\nC++: void DrawMathTextString(float x, float y,\n    const vtkStdString &string, const vtkStdString &fallback)\n\nDraw a MathText formatted equation to the screen. See\nhttp://matplotlib.sourceforge.net/users/mathtext.html for more\ninformation. MathText requires matplotlib and python, and the\nvtkMatplotlib module must be enabled manually during build\nconfiguration. This method will do nothing but print a warning if\nvtkMathTextUtilities::GetInstance() returns NULL.\n"},
  {(char*)"MathTextIsSupported", PyvtkContext2D_MathTextIsSupported, METH_VARARGS,
   (char*)"V.MathTextIsSupported() -> bool\nC++: bool MathTextIsSupported()\n\nReturn true if MathText rendering available on the current\ndevice.\n"},
  {(char*)"ApplyPen", PyvtkContext2D_ApplyPen, METH_VARARGS,
   (char*)"V.ApplyPen(vtkPen)\nC++: void ApplyPen(vtkPen *pen)\n\nApply the supplied pen which controls the outlines of shapes, as\nwell as lines, points and related primitives. This makes a deep\ncopy of the vtkPen object in the vtkContext2D, it does not hold a\npointer to the supplied object.\n"},
  {(char*)"GetPen", PyvtkContext2D_GetPen, METH_VARARGS,
   (char*)"V.GetPen() -> vtkPen\nC++: vtkPen *GetPen()\n\nGet the pen which controls the outlines of shapes, as well as\nlines, points and related primitives. This object can be modified\nand the changes will be reflected in subsequent drawing\noperations.\n"},
  {(char*)"ApplyBrush", PyvtkContext2D_ApplyBrush, METH_VARARGS,
   (char*)"V.ApplyBrush(vtkBrush)\nC++: void ApplyBrush(vtkBrush *brush)\n\nApply the supplied brush which controls the outlines of shapes,\nas well as lines, points and related primitives. This makes a\ndeep copy of the vtkBrush object in the vtkContext2D, it does not\nhold a pointer to the supplied object.\n"},
  {(char*)"GetBrush", PyvtkContext2D_GetBrush, METH_VARARGS,
   (char*)"V.GetBrush() -> vtkBrush\nC++: vtkBrush *GetBrush()\n\nGet the pen which controls the outlines of shapes as well as\nlines, points and related primitives.\n"},
  {(char*)"ApplyTextProp", PyvtkContext2D_ApplyTextProp, METH_VARARGS,
   (char*)"V.ApplyTextProp(vtkTextProperty)\nC++: void ApplyTextProp(vtkTextProperty *prop)\n\nApply the supplied text property which controls how text is\nrendered. This makes a deep copy of the vtkTextProperty object in\nthe vtkContext2D, it does not hold a pointer to the supplied\nobject.\n"},
  {(char*)"GetTextProp", PyvtkContext2D_GetTextProp, METH_VARARGS,
   (char*)"V.GetTextProp() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProp()\n\nGet the text properties object for the vtkContext2D.\n"},
  {(char*)"SetTransform", PyvtkContext2D_SetTransform, METH_VARARGS,
   (char*)"V.SetTransform(vtkTransform2D)\nC++: void SetTransform(vtkTransform2D *transform)\n\nSet the transform for the context, the underlying device will use\nthe matrix of the transform. Note, this is set immediately, later\nchanges to the matrix will have no effect until it is set again.\n"},
  {(char*)"GetTransform", PyvtkContext2D_GetTransform, METH_VARARGS,
   (char*)"V.GetTransform() -> vtkTransform2D\nC++: vtkTransform2D *GetTransform()\n\nCompute the current transform applied to the context.\n"},
  {(char*)"AppendTransform", PyvtkContext2D_AppendTransform, METH_VARARGS,
   (char*)"V.AppendTransform(vtkTransform2D)\nC++: void AppendTransform(vtkTransform2D *transform)\n\nAppend the transform for the context, the underlying device will\nuse the matrix of the transform. Note, this is set immediately,\nlater changes to the matrix will have no effect until it is set\nagain. The matrix of the transform will multiply the current\ncontext transform.\n"},
  {(char*)"PushMatrix", PyvtkContext2D_PushMatrix, METH_VARARGS,
   (char*)"V.PushMatrix()\nC++: void PushMatrix()\n\nPush/pop the transformation matrix for the painter (sets the\nunderlying matrix for the device when available).\n"},
  {(char*)"PopMatrix", PyvtkContext2D_PopMatrix, METH_VARARGS,
   (char*)"V.PopMatrix()\nC++: void PopMatrix()\n\nPush/pop the transformation matrix for the painter (sets the\nunderlying matrix for the device when available).\n"},
  {(char*)"ApplyId", PyvtkContext2D_ApplyId, METH_VARARGS,
   (char*)"V.ApplyId(int)\nC++: void ApplyId(vtkIdType id)\n\nApply id as a color.\n"},
  {(char*)"FloatToInt", PyvtkContext2D_FloatToInt, METH_VARARGS | METH_STATIC,
   (char*)"V.FloatToInt(float) -> int\nC++: static int FloatToInt(float x)\n\nFloat to int conversion, performs truncation but with a rounding\ntolerance for float values that are within 1/256 of their closest\ninteger.\n"},
  {(char*)"GetContext3D", PyvtkContext2D_GetContext3D, METH_VARARGS,
   (char*)"V.GetContext3D() -> vtkContext3D\nC++: vtkContext3D *GetContext3D()\n\nGet the vtkContext3D device, in order to do some 3D rendering.\nThis API is very experimental, and may be moved around.\n"},
  {(char*)"SetContext3D", PyvtkContext2D_SetContext3D, METH_VARARGS,
   (char*)"V.SetContext3D(vtkContext3D)\nC++: virtual void SetContext3D(vtkContext3D *context)\n\nGet the vtkContext3D device, in order to do some 3D rendering.\nThis API is very experimental, and may be moved around.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkContext2D_StaticNew()
{
  return vtkContext2D::New();
}

PyObject *PyVTKClass_vtkContext2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkContext2D_StaticNew,
    PyvtkContext2D_Methods,
    "vtkContext2D", modulename,
    NULL, NULL,
    PyvtkContext2D_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkContext2D_Doc()
{
  static const char *docstring[] = {
    "vtkContext2D - Class for drawing 2D primitives to a graphical context.\n\n",
    "Superclass: vtkObject\n\n",
    "This defines the interface for drawing onto a 2D context. The context\nmust be set up with a vtkContextDevice2D derived class that provides\nthe functions to facilitate the low level calls to the context.\nCurrently only an OpenGL based device is provided, but this could be\nextended in the future.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContext2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContext2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContext2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

