// python wrapper for vtkOpenGLVolumeTextureMapper2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLVolumeTextureMapper2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLVolumeTextureMapper2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLVolumeTextureMapper2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkVolumeTextureMapper2DNew
extern "C" { PyObject *PyVTKClass_vtkVolumeTextureMapper2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeTextureMapper2DNew
#endif

static const char **PyvtkOpenGLVolumeTextureMapper2D_Doc();


static PyObject *
PyvtkOpenGLVolumeTextureMapper2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper2D *op = static_cast<vtkOpenGLVolumeTextureMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLVolumeTextureMapper2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLVolumeTextureMapper2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper2D *op = static_cast<vtkOpenGLVolumeTextureMapper2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLVolumeTextureMapper2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLVolumeTextureMapper2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper2D *op = static_cast<vtkOpenGLVolumeTextureMapper2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLVolumeTextureMapper2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLVolumeTextureMapper2D::NewInstance());

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
PyvtkOpenGLVolumeTextureMapper2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLVolumeTextureMapper2D *tempr = vtkOpenGLVolumeTextureMapper2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLVolumeTextureMapper2D_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper2D *op = static_cast<vtkOpenGLVolumeTextureMapper2D *>(vp);

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
      op->vtkOpenGLVolumeTextureMapper2D::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLVolumeTextureMapper2D_RenderQuads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderQuads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVolumeTextureMapper2D *op = static_cast<vtkOpenGLVolumeTextureMapper2D *>(vp);

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
      op->vtkOpenGLVolumeTextureMapper2D::RenderQuads(temp0, temp1, temp2, temp3, temp4, temp5);
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

static PyMethodDef PyvtkOpenGLVolumeTextureMapper2D_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLVolumeTextureMapper2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLVolumeTextureMapper2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLVolumeTextureMapper2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLVolumeTextureMapper2D\nC++: vtkOpenGLVolumeTextureMapper2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLVolumeTextureMapper2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLVolumeTextureMapper2D\nC++: vtkOpenGLVolumeTextureMapper2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkOpenGLVolumeTextureMapper2D_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *ren, vtkVolume *vol)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {(char*)"RenderQuads", PyvtkOpenGLVolumeTextureMapper2D_RenderQuads, METH_VARARGS,
   (char*)"V.RenderQuads(int, [float, ...], [float, ...], [int, ...], [int,\n    int], int)\nC++: void RenderQuads(int count, float *v, float *t,\n    unsigned char *texture, int size[2], int reverseFlag)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLVolumeTextureMapper2D_StaticNew()
{
  return vtkOpenGLVolumeTextureMapper2D::New();
}

PyObject *PyVTKClass_vtkOpenGLVolumeTextureMapper2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLVolumeTextureMapper2D_StaticNew,
    PyvtkOpenGLVolumeTextureMapper2D_Methods,
    "vtkOpenGLVolumeTextureMapper2D", modulename,
    NULL, NULL,
    PyvtkOpenGLVolumeTextureMapper2D_Doc(),
    PyVTKClass_vtkVolumeTextureMapper2DNew(modulename));
  return cls;
}

const char **PyvtkOpenGLVolumeTextureMapper2D_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLVolumeTextureMapper2D - Abstract class for a volume mapper\n\n",
    "Superclass: vtkVolumeTextureMapper2D\n\n",
    "vtkOpenGLVolumeTextureMapper2D renders a volume using 2D texture\nmapping.\n\nSee Also:\n\nvtkVolumeMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLVolumeTextureMapper2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLVolumeTextureMapper2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLVolumeTextureMapper2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

