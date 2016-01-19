// python wrapper for vtkVolumeTextureMapper3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVolumeTextureMapper3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVolumeTextureMapper3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVolumeTextureMapper3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeMapperNew
#endif

static const char **PyvtkVolumeTextureMapper3D_Doc();


static PyObject *
PyvtkVolumeTextureMapper3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVolumeTextureMapper3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeTextureMapper3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeTextureMapper3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeTextureMapper3D::NewInstance());

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
PyvtkVolumeTextureMapper3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVolumeTextureMapper3D *tempr = vtkVolumeTextureMapper3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_SetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSampleDistance(temp0);
      }
    else
      {
      op->vtkVolumeTextureMapper3D::SetSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_GetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetSampleDistance() :
      op->vtkVolumeTextureMapper3D::GetSampleDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_GetVolumeDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetVolumeDimensions() :
      op->vtkVolumeTextureMapper3D::GetVolumeDimensions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_GetVolumeSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float *tempr = (ap.IsBound() ?
      op->GetVolumeSpacing() :
      op->vtkVolumeTextureMapper3D::GetVolumeSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_IsRenderSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRenderSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  vtkVolumeProperty *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVolumeProperty") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    int tempr = (ap.IsBound() ?
      op->IsRenderSupported(temp0, temp1) :
      op->vtkVolumeTextureMapper3D::IsRenderSupported(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_GetNumberOfPolygons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPolygons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPolygons() :
      op->vtkVolumeTextureMapper3D::GetNumberOfPolygons());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_GetActualSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetActualSampleDistance() :
      op->vtkVolumeTextureMapper3D::GetActualSampleDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkVolumeTextureMapper3D::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_GetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarComponents(temp0) :
      op->vtkVolumeTextureMapper3D::GetNumberOfScalarComponents(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_SetPreferredRenderMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreferredRenderMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreferredRenderMethod(temp0);
      }
    else
      {
      op->vtkVolumeTextureMapper3D::SetPreferredRenderMethod(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_GetPreferredRenderMethodMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreferredRenderMethodMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPreferredRenderMethodMinValue() :
      op->vtkVolumeTextureMapper3D::GetPreferredRenderMethodMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_GetPreferredRenderMethodMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreferredRenderMethodMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPreferredRenderMethodMaxValue() :
      op->vtkVolumeTextureMapper3D::GetPreferredRenderMethodMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_SetPreferredMethodToFragmentProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreferredMethodToFragmentProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPreferredMethodToFragmentProgram();
      }
    else
      {
      op->vtkVolumeTextureMapper3D::SetPreferredMethodToFragmentProgram();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_SetPreferredMethodToNVidia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreferredMethodToNVidia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPreferredMethodToNVidia();
      }
    else
      {
      op->vtkVolumeTextureMapper3D::SetPreferredMethodToNVidia();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_GetPreferredRenderMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreferredRenderMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPreferredRenderMethod() :
      op->vtkVolumeTextureMapper3D::GetPreferredRenderMethod());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_SetUseCompressedTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCompressedTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseCompressedTexture(temp0);
      }
    else
      {
      op->vtkVolumeTextureMapper3D::SetUseCompressedTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper3D_GetUseCompressedTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCompressedTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper3D *op = static_cast<vtkVolumeTextureMapper3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetUseCompressedTexture() :
      op->vtkVolumeTextureMapper3D::GetUseCompressedTexture());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeTextureMapper3D_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeTextureMapper3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeTextureMapper3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeTextureMapper3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVolumeTextureMapper3D\nC++: vtkVolumeTextureMapper3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeTextureMapper3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeTextureMapper3D\nC++: vtkVolumeTextureMapper3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSampleDistance", PyvtkVolumeTextureMapper3D_SetSampleDistance, METH_VARARGS,
   (char*)"V.SetSampleDistance(float)\nC++: void SetSampleDistance(float a)\n\nThe distance at which to space sampling planes. This may not be\nhonored for interactive renders. An interactive render is defined\nas one that has less than 1 second of allocated render time.\n"},
  {(char*)"GetSampleDistance", PyvtkVolumeTextureMapper3D_GetSampleDistance, METH_VARARGS,
   (char*)"V.GetSampleDistance() -> float\nC++: float GetSampleDistance()\n\nThe distance at which to space sampling planes. This may not be\nhonored for interactive renders. An interactive render is defined\nas one that has less than 1 second of allocated render time.\n"},
  {(char*)"GetVolumeDimensions", PyvtkVolumeTextureMapper3D_GetVolumeDimensions, METH_VARARGS,
   (char*)"V.GetVolumeDimensions() -> (int, int, int)\nC++: int *GetVolumeDimensions()\n\nThese are the dimensions of the 3D texture\n"},
  {(char*)"GetVolumeSpacing", PyvtkVolumeTextureMapper3D_GetVolumeSpacing, METH_VARARGS,
   (char*)"V.GetVolumeSpacing() -> (float, float, float)\nC++: float *GetVolumeSpacing()\n\nThis is the spacing of the 3D texture\n"},
  {(char*)"IsRenderSupported", PyvtkVolumeTextureMapper3D_IsRenderSupported, METH_VARARGS,
   (char*)"V.IsRenderSupported(vtkVolumeProperty, vtkRenderer) -> int\nC++: virtual int IsRenderSupported(vtkVolumeProperty *,\n    vtkRenderer *r)\n\nBased on hardware and properties, we may or may not be able to\nrender using 3D texture mapping. This indicates if 3D texture\nmapping is supported by the hardware, and if the other extensions\nnecessary to support the specific properties are available.\n"},
  {(char*)"GetNumberOfPolygons", PyvtkVolumeTextureMapper3D_GetNumberOfPolygons, METH_VARARGS,
   (char*)"V.GetNumberOfPolygons() -> int\nC++: int GetNumberOfPolygons()\n\nAllow access to the number of polygons used for the rendering.\n"},
  {(char*)"GetActualSampleDistance", PyvtkVolumeTextureMapper3D_GetActualSampleDistance, METH_VARARGS,
   (char*)"V.GetActualSampleDistance() -> float\nC++: float GetActualSampleDistance()\n\nAllow access to the actual sample distance used to render the\nimage.\n"},
  {(char*)"Render", PyvtkVolumeTextureMapper3D_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *, vtkVolume *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {(char*)"GetNumberOfScalarComponents", PyvtkVolumeTextureMapper3D_GetNumberOfScalarComponents, METH_VARARGS,
   (char*)"V.GetNumberOfScalarComponents(vtkImageData) -> int\nC++: int GetNumberOfScalarComponents(vtkImageData *input)\n\nReturns the number of components of the point scalar field\n"},
  {(char*)"SetPreferredRenderMethod", PyvtkVolumeTextureMapper3D_SetPreferredRenderMethod, METH_VARARGS,
   (char*)"V.SetPreferredRenderMethod(int)\nC++: void SetPreferredRenderMethod(int)\n\nSet the preferred render method. If it is supported, this one\nwill be used. Don't allow ATI_METHOD - it is not actually\nsupported.\n"},
  {(char*)"GetPreferredRenderMethodMinValue", PyvtkVolumeTextureMapper3D_GetPreferredRenderMethodMinValue, METH_VARARGS,
   (char*)"V.GetPreferredRenderMethodMinValue() -> int\nC++: int GetPreferredRenderMethodMinValue()\n\nSet the preferred render method. If it is supported, this one\nwill be used. Don't allow ATI_METHOD - it is not actually\nsupported.\n"},
  {(char*)"GetPreferredRenderMethodMaxValue", PyvtkVolumeTextureMapper3D_GetPreferredRenderMethodMaxValue, METH_VARARGS,
   (char*)"V.GetPreferredRenderMethodMaxValue() -> int\nC++: int GetPreferredRenderMethodMaxValue()\n\nSet the preferred render method. If it is supported, this one\nwill be used. Don't allow ATI_METHOD - it is not actually\nsupported.\n"},
  {(char*)"SetPreferredMethodToFragmentProgram", PyvtkVolumeTextureMapper3D_SetPreferredMethodToFragmentProgram, METH_VARARGS,
   (char*)"V.SetPreferredMethodToFragmentProgram()\nC++: void SetPreferredMethodToFragmentProgram()\n\nSet the preferred render method. If it is supported, this one\nwill be used. Don't allow ATI_METHOD - it is not actually\nsupported.\n"},
  {(char*)"SetPreferredMethodToNVidia", PyvtkVolumeTextureMapper3D_SetPreferredMethodToNVidia, METH_VARARGS,
   (char*)"V.SetPreferredMethodToNVidia()\nC++: void SetPreferredMethodToNVidia()\n\nSet the preferred render method. If it is supported, this one\nwill be used. Don't allow ATI_METHOD - it is not actually\nsupported.\n"},
  {(char*)"GetPreferredRenderMethod", PyvtkVolumeTextureMapper3D_GetPreferredRenderMethod, METH_VARARGS,
   (char*)"V.GetPreferredRenderMethod() -> int\nC++: int GetPreferredRenderMethod()\n\nSet the preferred render method. If it is supported, this one\nwill be used. Don't allow ATI_METHOD - it is not actually\nsupported.\n"},
  {(char*)"SetUseCompressedTexture", PyvtkVolumeTextureMapper3D_SetUseCompressedTexture, METH_VARARGS,
   (char*)"V.SetUseCompressedTexture(bool)\nC++: void SetUseCompressedTexture(bool a)\n\nSet/Get if the mapper use compressed textures (if supported by\nthe hardware). Initial value is false. There are two reasons to\nuse compressed textures: 1. rendering can be 4 times faster. 2.\nIt saves some VRAM. There is one reason to not use compressed\ntextures: quality may be lower than with uncompressed textures.\n"},
  {(char*)"GetUseCompressedTexture", PyvtkVolumeTextureMapper3D_GetUseCompressedTexture, METH_VARARGS,
   (char*)"V.GetUseCompressedTexture() -> bool\nC++: bool GetUseCompressedTexture()\n\nSet/Get if the mapper use compressed textures (if supported by\nthe hardware). Initial value is false. There are two reasons to\nuse compressed textures: 1. rendering can be 4 times faster. 2.\nIt saves some VRAM. There is one reason to not use compressed\ntextures: quality may be lower than with uncompressed textures.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeTextureMapper3D_StaticNew()
{
  return vtkVolumeTextureMapper3D::New();
}

PyObject *PyVTKClass_vtkVolumeTextureMapper3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeTextureMapper3D_StaticNew,
    PyvtkVolumeTextureMapper3D_Methods,
    "vtkVolumeTextureMapper3D", modulename,
    NULL, NULL,
    PyvtkVolumeTextureMapper3D_Doc(),
    PyVTKClass_vtkVolumeMapperNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "FRAGMENT_PROGRAM_METHOD", vtkVolumeTextureMapper3D::FRAGMENT_PROGRAM_METHOD },
          { "NVIDIA_METHOD", vtkVolumeTextureMapper3D::NVIDIA_METHOD },
          { "ATI_METHOD", vtkVolumeTextureMapper3D::ATI_METHOD },
          { "NO_METHOD", vtkVolumeTextureMapper3D::NO_METHOD },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkVolumeTextureMapper3D_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeTextureMapper3D - volume render with 3D texture mapping\n\n",
    "Superclass: vtkVolumeMapper\n\n",
    "vtkVolumeTextureMapper3D renders a volume using 3D texture mapping.\nThis class is actually an abstract superclass - with all the actual\nwork done by vtkOpenGLVolumeTextureMapper3D.\n\nThis mappers currently supports:\n\n- any data type as input\n- one component, or two or four non-independent components\n- composite blending\n- intermixed opaque geometry\n- multiple volumes can be rendered if they can be ",
    "sorted into\n  back-to-front order (use the vtkFrustumCoverageCuller)\n\nThis mapper does not support:\n- more than one independent component\n- maximum intensity projection\n\nInternally, this mapper will potentially change the resolution of the\ninput data. The data will be resampled to be a power of two in each\ndirection, and also no greater than 128*256*256 voxels (any aspect)\nfor one or two component",
    " data, or 128*128*256 voxels (any aspect) for\nfour component data. The limits are currently hardcoded after a check\nusing the GL_PROXY_TEXTURE3D because some graphics drivers were\nalways responding \"yes\" to the proxy call despite not being able to\nallocate that much texture memory.\n\nCurrently, calculations are computed using 8 bits per RGBA channel.\nIn the future this should be expanded to handle ",
    "newer boards that can\nsupport 15 bit float compositing.\n\nThis mapper supports two main families of graphics hardware: nvidia\nand ATI. There are two different implementations of 3D texture\nmapping used - one based on nvidia's GL_NV_texture_shader2 and\nGL_NV_register_combiners2 extension, and one based on ATI's\nGL_ATI_fragment_shader (supported also by some nvidia boards) To use\nthis class in an app",
    "lication that will run on various hardware\nconfigurations, you should have a back-up volume rendering method.\nYou should create a vtkVolumeTextureMapper3D, assign its input, make\nsure you have a current OpenGL context (you've rendered at least\nonce), then call IsRenderSupported with a vtkVolumeProperty as an\nargument. This method will return 0 if the input has more than one\nindependent component, ",
    "or if the graphics hardware does not support\nthe set of required extensions for using at least one of the two\nimplemented methods (nvidia or ati)\n\nThanks:\n\nThanks to Alexandre Gouaillard at the Megason Lab, Department of\nSystems Biology, Harvard Medical School\nhttps://wiki.med.harvard.edu/SysBio/Megason/ for the idea and initial\npatch to speed-up rendering with compressed textures.\n\nSee Also:\n\nvtk",
    "VolumeMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeTextureMapper3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeTextureMapper3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeTextureMapper3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

