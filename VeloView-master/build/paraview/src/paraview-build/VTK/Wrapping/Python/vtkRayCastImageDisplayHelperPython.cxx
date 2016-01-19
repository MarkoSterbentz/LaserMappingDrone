// python wrapper for vtkRayCastImageDisplayHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRayCastImageDisplayHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRayCastImageDisplayHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRayCastImageDisplayHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkRayCastImageDisplayHelper_Doc();


static PyObject *
PyvtkRayCastImageDisplayHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRayCastImageDisplayHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRayCastImageDisplayHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRayCastImageDisplayHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRayCastImageDisplayHelper::NewInstance());

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
PyvtkRayCastImageDisplayHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRayCastImageDisplayHelper *tempr = vtkRayCastImageDisplayHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_RenderTexture_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  vtkVolume *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  int temp2[2];
  int save2[2];
  const int size2 = 2;
  int temp3[2];
  int save3[2];
  const int size3 = 2;
  int temp4[2];
  int save4[2];
  const int size4 = 2;
  int temp5[2];
  int save5[2];
  const int size5 = 2;
  float temp6;
  unsigned char *temp7 = NULL;
  unsigned char *save7 = NULL;
  unsigned char small7[8];
  int size7 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size7 = ap.GetArgSize(7);
    temp7 = small7;
    if (size7 > 4)
      {
      temp7 = new unsigned char[2*size7];
      }
    save7 = &temp7[size7];
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetArray(temp7, size7))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);
    ap.SaveArray(temp7, save7, size7);

    op->RenderTexture(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (ap.ArrayHasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(7, temp7, size7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp7 && temp7 != small7)
    {
    delete [] temp7;
    }

  return result;
}

static PyObject *
PyvtkRayCastImageDisplayHelper_RenderTexture_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  vtkVolume *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  int temp2[2];
  int save2[2];
  const int size2 = 2;
  int temp3[2];
  int save3[2];
  const int size3 = 2;
  int temp4[2];
  int save4[2];
  const int size4 = 2;
  int temp5[2];
  int save5[2];
  const int size5 = 2;
  float temp6;
  unsigned short *temp7 = NULL;
  unsigned short *save7 = NULL;
  unsigned short small7[8];
  int size7 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size7 = ap.GetArgSize(7);
    temp7 = small7;
    if (size7 > 4)
      {
      temp7 = new unsigned short[2*size7];
      }
    save7 = &temp7[size7];
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetArray(temp7, size7))
    {
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);
    ap.SaveArray(temp5, save5, size5);
    ap.SaveArray(temp7, save7, size7);

    op->RenderTexture(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (ap.ArrayHasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(5, temp5, size5);
      }

    if (ap.ArrayHasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(7, temp7, size7);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp7 && temp7 != small7)
    {
    delete [] temp7;
    }

  return result;
}

static PyObject *
PyvtkRayCastImageDisplayHelper_RenderTexture_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  vtkVolume *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  vtkFixedPointRayCastImage *temp2 = NULL;
  float temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkFixedPointRayCastImage") &&
      ap.GetValue(temp3))
    {
    op->RenderTexture(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRayCastImageDisplayHelper_RenderTexture_Methods[] = {
  {NULL, PyvtkRayCastImageDisplayHelper_RenderTexture_s1, METH_VARARGS,
   (char*)"@OOOOOOfO *vtkVolume *vtkRenderer *i *i *i *i *b"},
  {NULL, PyvtkRayCastImageDisplayHelper_RenderTexture_s2, METH_VARARGS,
   (char*)"@OOOOOOfO *vtkVolume *vtkRenderer *i *i *i *i *H"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkRayCastImageDisplayHelper_RenderTexture(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRayCastImageDisplayHelper_RenderTexture_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkRayCastImageDisplayHelper_RenderTexture_s3(self, args);
    case 8:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RenderTexture");
  return NULL;
}



static PyObject *
PyvtkRayCastImageDisplayHelper_SetPreMultipliedColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreMultipliedColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreMultipliedColors(temp0);
      }
    else
      {
      op->vtkRayCastImageDisplayHelper::SetPreMultipliedColors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_GetPreMultipliedColorsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreMultipliedColorsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPreMultipliedColorsMinValue() :
      op->vtkRayCastImageDisplayHelper::GetPreMultipliedColorsMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_GetPreMultipliedColorsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreMultipliedColorsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPreMultipliedColorsMaxValue() :
      op->vtkRayCastImageDisplayHelper::GetPreMultipliedColorsMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_GetPreMultipliedColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreMultipliedColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPreMultipliedColors() :
      op->vtkRayCastImageDisplayHelper::GetPreMultipliedColors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_PreMultipliedColorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreMultipliedColorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreMultipliedColorsOn();
      }
    else
      {
      op->vtkRayCastImageDisplayHelper::PreMultipliedColorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_PreMultipliedColorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreMultipliedColorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreMultipliedColorsOff();
      }
    else
      {
      op->vtkRayCastImageDisplayHelper::PreMultipliedColorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_SetPixelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPixelScale(temp0);
      }
    else
      {
      op->vtkRayCastImageDisplayHelper::SetPixelScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_GetPixelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetPixelScale() :
      op->vtkRayCastImageDisplayHelper::GetPixelScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

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
      op->vtkRayCastImageDisplayHelper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRayCastImageDisplayHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkRayCastImageDisplayHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRayCastImageDisplayHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRayCastImageDisplayHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRayCastImageDisplayHelper\nC++: vtkRayCastImageDisplayHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRayCastImageDisplayHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRayCastImageDisplayHelper\nC++: vtkRayCastImageDisplayHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderTexture", PyvtkRayCastImageDisplayHelper_RenderTexture, METH_VARARGS,
   (char*)"V.RenderTexture(vtkVolume, vtkRenderer, [int, int], [int, int],\n    [int, int], [int, int], float, [int, ...])\nC++: virtual void RenderTexture(vtkVolume *vol, vtkRenderer *ren,\n    int imageMemorySize[2], int imageViewportSize[2],\n    int imageInUseSize[2], int imageOrigin[2],\n    float requestedDepth, unsigned char *image)\nV.RenderTexture(vtkVolume, vtkRenderer, [int, int], [int, int],\n    [int, int], [int, int], float, [int, ...])\nC++: virtual void RenderTexture(vtkVolume *vol, vtkRenderer *ren,\n    int imageMemorySize[2], int imageViewportSize[2],\n    int imageInUseSize[2], int imageOrigin[2],\n    float requestedDepth, unsigned short *image)\nV.RenderTexture(vtkVolume, vtkRenderer, vtkFixedPointRayCastImage,\n     float)\nC++: virtual void RenderTexture(vtkVolume *vol, vtkRenderer *ren,\n    vtkFixedPointRayCastImage *image, float requestedDepth)\n\n"},
  {(char*)"SetPreMultipliedColors", PyvtkRayCastImageDisplayHelper_SetPreMultipliedColors, METH_VARARGS,
   (char*)"V.SetPreMultipliedColors(int)\nC++: void SetPreMultipliedColors(int)\n\n"},
  {(char*)"GetPreMultipliedColorsMinValue", PyvtkRayCastImageDisplayHelper_GetPreMultipliedColorsMinValue, METH_VARARGS,
   (char*)"V.GetPreMultipliedColorsMinValue() -> int\nC++: int GetPreMultipliedColorsMinValue()\n\n"},
  {(char*)"GetPreMultipliedColorsMaxValue", PyvtkRayCastImageDisplayHelper_GetPreMultipliedColorsMaxValue, METH_VARARGS,
   (char*)"V.GetPreMultipliedColorsMaxValue() -> int\nC++: int GetPreMultipliedColorsMaxValue()\n\n"},
  {(char*)"GetPreMultipliedColors", PyvtkRayCastImageDisplayHelper_GetPreMultipliedColors, METH_VARARGS,
   (char*)"V.GetPreMultipliedColors() -> int\nC++: int GetPreMultipliedColors()\n\n"},
  {(char*)"PreMultipliedColorsOn", PyvtkRayCastImageDisplayHelper_PreMultipliedColorsOn, METH_VARARGS,
   (char*)"V.PreMultipliedColorsOn()\nC++: void PreMultipliedColorsOn()\n\n"},
  {(char*)"PreMultipliedColorsOff", PyvtkRayCastImageDisplayHelper_PreMultipliedColorsOff, METH_VARARGS,
   (char*)"V.PreMultipliedColorsOff()\nC++: void PreMultipliedColorsOff()\n\n"},
  {(char*)"SetPixelScale", PyvtkRayCastImageDisplayHelper_SetPixelScale, METH_VARARGS,
   (char*)"V.SetPixelScale(float)\nC++: void SetPixelScale(float a)\n\nSet / Get the pixel scale to be applied to the image before\ndisplay. Can be set to scale the incoming pixel values - for\nexample the fixed point mapper uses the unsigned short API but\nwith 15 bit values so needs a scale of 2.0.\n"},
  {(char*)"GetPixelScale", PyvtkRayCastImageDisplayHelper_GetPixelScale, METH_VARARGS,
   (char*)"V.GetPixelScale() -> float\nC++: float GetPixelScale()\n\nSet / Get the pixel scale to be applied to the image before\ndisplay. Can be set to scale the incoming pixel values - for\nexample the fixed point mapper uses the unsigned short API but\nwith 15 bit values so needs a scale of 2.0.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkRayCastImageDisplayHelper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nDerived class should implemen this if needed\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRayCastImageDisplayHelper_StaticNew()
{
  return vtkRayCastImageDisplayHelper::New();
}

PyObject *PyVTKClass_vtkRayCastImageDisplayHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRayCastImageDisplayHelper_StaticNew,
    PyvtkRayCastImageDisplayHelper_Methods,
    "vtkRayCastImageDisplayHelper", modulename,
    NULL, NULL,
    PyvtkRayCastImageDisplayHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkRayCastImageDisplayHelper_Doc()
{
  static const char *docstring[] = {
    "vtkRayCastImageDisplayHelper - helper class that draws the image to\nthe screen\n\n",
    "Superclass: vtkObject\n\n",
    "This is a helper class for drawing images created from ray casting on\nthe screen. This is the abstract device-independent superclass.\n\nSee Also:\n\nvtkVolumeRayCastMapper vtkUnstructuredGridVolumeRayCastMapper\nvtkOpenGLRayCastImageDisplayHelper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRayCastImageDisplayHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRayCastImageDisplayHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRayCastImageDisplayHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

