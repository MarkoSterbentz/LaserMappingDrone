// python wrapper for vtkOpenGLRayCastImageDisplayHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLRayCastImageDisplayHelper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLRayCastImageDisplayHelper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLRayCastImageDisplayHelperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRayCastImageDisplayHelperNew
extern "C" { PyObject *PyVTKClass_vtkRayCastImageDisplayHelperNew(const char *); }
#define DECLARED_PyVTKClass_vtkRayCastImageDisplayHelperNew
#endif

static const char **PyvtkOpenGLRayCastImageDisplayHelper_Doc();


static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLRayCastImageDisplayHelper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLRayCastImageDisplayHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLRayCastImageDisplayHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLRayCastImageDisplayHelper::NewInstance());

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
PyvtkOpenGLRayCastImageDisplayHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLRayCastImageDisplayHelper *tempr = vtkOpenGLRayCastImageDisplayHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

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

  if (op && ap.CheckArgCount(8) &&
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

    if (ap.IsBound())
      {
      op->RenderTexture(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkOpenGLRayCastImageDisplayHelper::RenderTexture(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

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
PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

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

  if (op && ap.CheckArgCount(8) &&
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

    if (ap.IsBound())
      {
      op->RenderTexture(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }
    else
      {
      op->vtkOpenGLRayCastImageDisplayHelper::RenderTexture(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
      }

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
PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

  vtkVolume *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  vtkFixedPointRayCastImage *temp2 = NULL;
  float temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkFixedPointRayCastImage") &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->RenderTexture(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkOpenGLRayCastImageDisplayHelper::RenderTexture(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_Methods[] = {
  {NULL, PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_s1, METH_VARARGS,
   (char*)"@OOOOOOfO *vtkVolume *vtkRenderer *i *i *i *i *b"},
  {NULL, PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_s2, METH_VARARGS,
   (char*)"@OOOOOOfO *vtkVolume *vtkRenderer *i *i *i *i *H"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_s3(self, args);
    case 8:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RenderTexture");
  return NULL;
}


static PyMethodDef PyvtkOpenGLRayCastImageDisplayHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLRayCastImageDisplayHelper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLRayCastImageDisplayHelper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLRayCastImageDisplayHelper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLRayCastImageDisplayHelper\nC++: vtkOpenGLRayCastImageDisplayHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLRayCastImageDisplayHelper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLRayCastImageDisplayHelper\nC++: vtkOpenGLRayCastImageDisplayHelper *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"RenderTexture", PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture, METH_VARARGS,
   (char*)"V.RenderTexture(vtkVolume, vtkRenderer, [int, int], [int, int],\n    [int, int], [int, int], float, [int, ...])\nC++: void RenderTexture(vtkVolume *vol, vtkRenderer *ren,\n    int imageMemorySize[2], int imageViewportSize[2],\n    int imageInUseSize[2], int imageOrigin[2],\n    float requestedDepth, unsigned char *image)\nV.RenderTexture(vtkVolume, vtkRenderer, [int, int], [int, int],\n    [int, int], [int, int], float, [int, ...])\nC++: void RenderTexture(vtkVolume *vol, vtkRenderer *ren,\n    int imageMemorySize[2], int imageViewportSize[2],\n    int imageInUseSize[2], int imageOrigin[2],\n    float requestedDepth, unsigned short *image)\nV.RenderTexture(vtkVolume, vtkRenderer, vtkFixedPointRayCastImage,\n     float)\nC++: void RenderTexture(vtkVolume *vol, vtkRenderer *ren,\n    vtkFixedPointRayCastImage *image, float requestedDepth)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLRayCastImageDisplayHelper_StaticNew()
{
  return vtkOpenGLRayCastImageDisplayHelper::New();
}

PyObject *PyVTKClass_vtkOpenGLRayCastImageDisplayHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLRayCastImageDisplayHelper_StaticNew,
    PyvtkOpenGLRayCastImageDisplayHelper_Methods,
    "vtkOpenGLRayCastImageDisplayHelper", modulename,
    NULL, NULL,
    PyvtkOpenGLRayCastImageDisplayHelper_Doc(),
    PyVTKClass_vtkRayCastImageDisplayHelperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLRayCastImageDisplayHelper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLRayCastImageDisplayHelper - OpenGL subclass that draws the\nimage to the screen\n\n",
    "Superclass: vtkRayCastImageDisplayHelper\n\n",
    "This is the concrete implementation of a ray cast image display\nhelper - a helper class responsible for drawing the image to the\nscreen.\n\nSee Also:\n\nvtkRayCastImageDisplayHelper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLRayCastImageDisplayHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLRayCastImageDisplayHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLRayCastImageDisplayHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

