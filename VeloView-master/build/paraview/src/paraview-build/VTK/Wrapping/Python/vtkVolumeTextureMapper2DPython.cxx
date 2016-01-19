// python wrapper for vtkVolumeTextureMapper2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVolumeTextureMapper2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVolumeTextureMapper2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVolumeTextureMapper2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkVolumeTextureMapperNew
extern "C" { PyObject *PyVTKClass_vtkVolumeTextureMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeTextureMapperNew
#endif

static const char **PyvtkVolumeTextureMapper2D_Doc();


static PyObject *
PyvtkVolumeTextureMapper2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVolumeTextureMapper2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeTextureMapper2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeTextureMapper2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeTextureMapper2D::NewInstance());

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
PyvtkVolumeTextureMapper2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVolumeTextureMapper2D *tempr = vtkVolumeTextureMapper2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_SetTargetTextureSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetTextureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTargetTextureSize(temp0, temp1);
      }
    else
      {
      op->vtkVolumeTextureMapper2D::SetTargetTextureSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeTextureMapper2D_SetTargetTextureSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetTextureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTargetTextureSize(temp0);
      }
    else
      {
      op->vtkVolumeTextureMapper2D::SetTargetTextureSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeTextureMapper2D_SetTargetTextureSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVolumeTextureMapper2D_SetTargetTextureSize_s1(self, args);
    case 1:
      return PyvtkVolumeTextureMapper2D_SetTargetTextureSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTargetTextureSize");
  return NULL;
}



static PyObject *
PyvtkVolumeTextureMapper2D_GetTargetTextureSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetTextureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTargetTextureSize() :
      op->vtkVolumeTextureMapper2D::GetTargetTextureSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_SetMaximumNumberOfPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfPlanes(temp0);
      }
    else
      {
      op->vtkVolumeTextureMapper2D::SetMaximumNumberOfPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_GetMaximumNumberOfPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPlanes() :
      op->vtkVolumeTextureMapper2D::GetMaximumNumberOfPlanes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_SetMaximumStorageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumStorageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumStorageSize(temp0);
      }
    else
      {
      op->vtkVolumeTextureMapper2D::SetMaximumStorageSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_GetMaximumStorageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumStorageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumStorageSize() :
      op->vtkVolumeTextureMapper2D::GetMaximumStorageSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

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
      op->vtkVolumeTextureMapper2D::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_RenderQuads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderQuads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  int temp0;
  float *temp1 = NULL;
  float *save1 = NULL;
  float small1[8];
  int size1 = 0;
  float *temp2 = NULL;
  float *save2 = NULL;
  float small2[8];
  int size2 = 0;
  unsigned char *temp3 = NULL;
  unsigned char *save3 = NULL;
  unsigned char small3[8];
  int size3 = 0;
  int temp4[2];
  int save4[2];
  const int size4 = 2;
  int temp5;
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
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new float[2*size2];
      }
    save2 = &temp2[size2];
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new unsigned char[2*size3];
      }
    save3 = &temp3[size3];
    }

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      op->RenderQuads(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkVolumeTextureMapper2D::RenderQuads(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
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

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }
  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }
  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_GetInternalSkipFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalSkipFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInternalSkipFactor() :
      op->vtkVolumeTextureMapper2D::GetInternalSkipFactor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_GetAxisTextureSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTextureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetAxisTextureSize() :
      op->vtkVolumeTextureMapper2D::GetAxisTextureSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_GetSaveTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSaveTextures() :
      op->vtkVolumeTextureMapper2D::GetSaveTextures());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeTextureMapper2D_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeTextureMapper2D *op = static_cast<vtkVolumeTextureMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetTexture() :
      op->vtkVolumeTextureMapper2D::GetTexture());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeTextureMapper2D_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeTextureMapper2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeTextureMapper2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeTextureMapper2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVolumeTextureMapper2D\nC++: vtkVolumeTextureMapper2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeTextureMapper2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeTextureMapper2D\nC++: vtkVolumeTextureMapper2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTargetTextureSize", PyvtkVolumeTextureMapper2D_SetTargetTextureSize, METH_VARARGS,
   (char*)"V.SetTargetTextureSize(int, int)\nC++: void SetTargetTextureSize(int, int)\nV.SetTargetTextureSize((int, int))\nC++: void SetTargetTextureSize(int a[2])\n\n"},
  {(char*)"GetTargetTextureSize", PyvtkVolumeTextureMapper2D_GetTargetTextureSize, METH_VARARGS,
   (char*)"V.GetTargetTextureSize() -> (int, int)\nC++: int *GetTargetTextureSize()\n\n"},
  {(char*)"SetMaximumNumberOfPlanes", PyvtkVolumeTextureMapper2D_SetMaximumNumberOfPlanes, METH_VARARGS,
   (char*)"V.SetMaximumNumberOfPlanes(int)\nC++: void SetMaximumNumberOfPlanes(int a)\n\nThis is the maximum number of planes that will be created for\ntexture mapping the volume. If the volume has more voxels than\nthis along the viewing direction, then planes of the volume will\nbe skipped to ensure that this maximum is not violated. A skip\nfactor is used, and is incremented until the maximum condition is\nsatisfied.\n"},
  {(char*)"GetMaximumNumberOfPlanes", PyvtkVolumeTextureMapper2D_GetMaximumNumberOfPlanes, METH_VARARGS,
   (char*)"V.GetMaximumNumberOfPlanes() -> int\nC++: int GetMaximumNumberOfPlanes()\n\nThis is the maximum number of planes that will be created for\ntexture mapping the volume. If the volume has more voxels than\nthis along the viewing direction, then planes of the volume will\nbe skipped to ensure that this maximum is not violated. A skip\nfactor is used, and is incremented until the maximum condition is\nsatisfied.\n"},
  {(char*)"SetMaximumStorageSize", PyvtkVolumeTextureMapper2D_SetMaximumStorageSize, METH_VARARGS,
   (char*)"V.SetMaximumStorageSize(int)\nC++: void SetMaximumStorageSize(int a)\n\nThis is the maximum size of saved textures in bytes. If this size\nis large enough to hold the RGBA textures for all three\ndirections (XxYxZx3x4 is the approximate value - it is actually a\nbit larger due to wasted space in the textures) then the textures\nwill be saved.\n"},
  {(char*)"GetMaximumStorageSize", PyvtkVolumeTextureMapper2D_GetMaximumStorageSize, METH_VARARGS,
   (char*)"V.GetMaximumStorageSize() -> int\nC++: int GetMaximumStorageSize()\n\nThis is the maximum size of saved textures in bytes. If this size\nis large enough to hold the RGBA textures for all three\ndirections (XxYxZx3x4 is the approximate value - it is actually a\nbit larger due to wasted space in the textures) then the textures\nwill be saved.\n"},
  {(char*)"Render", PyvtkVolumeTextureMapper2D_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *, vtkVolume *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {(char*)"RenderQuads", PyvtkVolumeTextureMapper2D_RenderQuads, METH_VARARGS,
   (char*)"V.RenderQuads(int, [float, ...], [float, ...], [int, ...], [int,\n    int], int)\nC++: virtual void RenderQuads(int count, float *v, float *t,\n    unsigned char *texture, int size[2], int reverseFlag)\n\n"},
  {(char*)"GetInternalSkipFactor", PyvtkVolumeTextureMapper2D_GetInternalSkipFactor, METH_VARARGS,
   (char*)"V.GetInternalSkipFactor() -> int\nC++: int GetInternalSkipFactor()\n\nMade public only for access from the templated method. Not a\nvtkGetMacro to avoid the PrintSelf defect.\n"},
  {(char*)"GetAxisTextureSize", PyvtkVolumeTextureMapper2D_GetAxisTextureSize, METH_VARARGS,
   (char*)"V.GetAxisTextureSize() -> (int, ...)\nC++: int *GetAxisTextureSize()\n\n"},
  {(char*)"GetSaveTextures", PyvtkVolumeTextureMapper2D_GetSaveTextures, METH_VARARGS,
   (char*)"V.GetSaveTextures() -> int\nC++: int GetSaveTextures()\n\n"},
  {(char*)"GetTexture", PyvtkVolumeTextureMapper2D_GetTexture, METH_VARARGS,
   (char*)"V.GetTexture() -> (int, ...)\nC++: unsigned char *GetTexture()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeTextureMapper2D_StaticNew()
{
  return vtkVolumeTextureMapper2D::New();
}

PyObject *PyVTKClass_vtkVolumeTextureMapper2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeTextureMapper2D_StaticNew,
    PyvtkVolumeTextureMapper2D_Methods,
    "vtkVolumeTextureMapper2D", modulename,
    NULL, NULL,
    PyvtkVolumeTextureMapper2D_Doc(),
    PyVTKClass_vtkVolumeTextureMapperNew(modulename));
  return cls;
}

const char **PyvtkVolumeTextureMapper2D_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeTextureMapper2D - Abstract class for a volume mapper\n\n",
    "Superclass: vtkVolumeTextureMapper\n\n",
    "vtkVolumeTextureMapper2D renders a volume using 2D texture mapping.\n\nSee Also:\n\nvtkVolumeMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeTextureMapper2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeTextureMapper2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeTextureMapper2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

