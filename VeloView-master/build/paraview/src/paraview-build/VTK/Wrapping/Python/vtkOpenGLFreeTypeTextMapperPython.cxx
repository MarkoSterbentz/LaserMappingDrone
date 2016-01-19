// python wrapper for vtkOpenGLFreeTypeTextMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLFreeTypeTextMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLFreeTypeTextMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLFreeTypeTextMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTextMapperNew
extern "C" { PyObject *PyVTKClass_vtkTextMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkTextMapperNew
#endif

static const char **PyvtkOpenGLFreeTypeTextMapper_Doc();


static PyObject *
PyvtkOpenGLFreeTypeTextMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFreeTypeTextMapper *op = static_cast<vtkOpenGLFreeTypeTextMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLFreeTypeTextMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLFreeTypeTextMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFreeTypeTextMapper *op = static_cast<vtkOpenGLFreeTypeTextMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLFreeTypeTextMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLFreeTypeTextMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFreeTypeTextMapper *op = static_cast<vtkOpenGLFreeTypeTextMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLFreeTypeTextMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLFreeTypeTextMapper::NewInstance());

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
PyvtkOpenGLFreeTypeTextMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLFreeTypeTextMapper *tempr = vtkOpenGLFreeTypeTextMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLFreeTypeTextMapper_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFreeTypeTextMapper *op = static_cast<vtkOpenGLFreeTypeTextMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkOpenGLFreeTypeTextMapper::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLFreeTypeTextMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFreeTypeTextMapper *op = static_cast<vtkOpenGLFreeTypeTextMapper *>(vp);

  vtkViewport *temp0 = NULL;
  vtkActor2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->RenderOverlay(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLFreeTypeTextMapper::RenderOverlay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLFreeTypeTextMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFreeTypeTextMapper *op = static_cast<vtkOpenGLFreeTypeTextMapper *>(vp);

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
      op->vtkOpenGLFreeTypeTextMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLFreeTypeTextMapper_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFreeTypeTextMapper *op = static_cast<vtkOpenGLFreeTypeTextMapper *>(vp);

  vtkViewport *temp0 = NULL;
  int temp1[2];
  int save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetSize(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLFreeTypeTextMapper::GetSize(temp0, temp1);
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

static PyMethodDef PyvtkOpenGLFreeTypeTextMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLFreeTypeTextMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLFreeTypeTextMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLFreeTypeTextMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLFreeTypeTextMapper\nC++: vtkOpenGLFreeTypeTextMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLFreeTypeTextMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLFreeTypeTextMapper\nC++: vtkOpenGLFreeTypeTextMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInput", PyvtkOpenGLFreeTypeTextMapper_SetInput, METH_VARARGS,
   (char*)"V.SetInput(string)\nC++: void SetInput(const char *inputString)\n\n"},
  {(char*)"RenderOverlay", PyvtkOpenGLFreeTypeTextMapper_RenderOverlay, METH_VARARGS,
   (char*)"V.RenderOverlay(vtkViewport, vtkActor2D)\nC++: void RenderOverlay(vtkViewport *viewport, vtkActor2D *actor)\n\nActally draw the text.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLFreeTypeTextMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetSize", PyvtkOpenGLFreeTypeTextMapper_GetSize, METH_VARARGS,
   (char*)"V.GetSize(vtkViewport, [int, int])\nC++: virtual void GetSize(vtkViewport *viewport, int size[2])\n\nReturn the the size of the rectangle required to draw this\nmapper.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLFreeTypeTextMapper_StaticNew()
{
  return vtkOpenGLFreeTypeTextMapper::New();
}

PyObject *PyVTKClass_vtkOpenGLFreeTypeTextMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLFreeTypeTextMapper_StaticNew,
    PyvtkOpenGLFreeTypeTextMapper_Methods,
    "vtkOpenGLFreeTypeTextMapper", modulename,
    NULL, NULL,
    PyvtkOpenGLFreeTypeTextMapper_Doc(),
    PyVTKClass_vtkTextMapperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLFreeTypeTextMapper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLFreeTypeTextMapper - 2D Text annotation support\n\n",
    "Superclass: vtkTextMapper\n\n",
    "vtkOpenGLFreeTypeTextMapper provides 2D text annotation support for\nVTK using the FreeType and FTGL libraries. Normally the user should\nuse vtktextMapper which in turn will use this class.\n\nSee Also:\n\nvtkTextMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLFreeTypeTextMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLFreeTypeTextMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLFreeTypeTextMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

