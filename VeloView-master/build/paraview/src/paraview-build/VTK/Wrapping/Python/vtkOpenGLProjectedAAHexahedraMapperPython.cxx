// python wrapper for vtkOpenGLProjectedAAHexahedraMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLProjectedAAHexahedraMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLProjectedAAHexahedraMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLProjectedAAHexahedraMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkProjectedAAHexahedraMapperNew
extern "C" { PyObject *PyVTKClass_vtkProjectedAAHexahedraMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkProjectedAAHexahedraMapperNew
#endif

static const char **PyvtkOpenGLProjectedAAHexahedraMapper_Doc();


static PyObject *
PyvtkOpenGLProjectedAAHexahedraMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedAAHexahedraMapper *op = static_cast<vtkOpenGLProjectedAAHexahedraMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLProjectedAAHexahedraMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedAAHexahedraMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedAAHexahedraMapper *op = static_cast<vtkOpenGLProjectedAAHexahedraMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLProjectedAAHexahedraMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedAAHexahedraMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedAAHexahedraMapper *op = static_cast<vtkOpenGLProjectedAAHexahedraMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLProjectedAAHexahedraMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLProjectedAAHexahedraMapper::NewInstance());

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
PyvtkOpenGLProjectedAAHexahedraMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLProjectedAAHexahedraMapper *tempr = vtkOpenGLProjectedAAHexahedraMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedAAHexahedraMapper_IsRenderSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRenderSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedAAHexahedraMapper *op = static_cast<vtkOpenGLProjectedAAHexahedraMapper *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    bool tempr = (ap.IsBound() ?
      op->IsRenderSupported(temp0) :
      op->vtkOpenGLProjectedAAHexahedraMapper::IsRenderSupported(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedAAHexahedraMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedAAHexahedraMapper *op = static_cast<vtkOpenGLProjectedAAHexahedraMapper *>(vp);

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
      op->vtkOpenGLProjectedAAHexahedraMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedAAHexahedraMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedAAHexahedraMapper *op = static_cast<vtkOpenGLProjectedAAHexahedraMapper *>(vp);

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
      op->vtkOpenGLProjectedAAHexahedraMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLProjectedAAHexahedraMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLProjectedAAHexahedraMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLProjectedAAHexahedraMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLProjectedAAHexahedraMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLProjectedAAHexahedraMapper\nC++: vtkOpenGLProjectedAAHexahedraMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLProjectedAAHexahedraMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLProjectedAAHexahedraMapper\nC++: vtkOpenGLProjectedAAHexahedraMapper *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"IsRenderSupported", PyvtkOpenGLProjectedAAHexahedraMapper_IsRenderSupported, METH_VARARGS,
   (char*)"V.IsRenderSupported(vtkRenderWindow) -> bool\nC++: bool IsRenderSupported(vtkRenderWindow *w)\n\nCheck if the required OpenGL extensions are supported by the\nOpenGL context attached to the render window `w'.\n"},
  {(char*)"Render", PyvtkOpenGLProjectedAAHexahedraMapper_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: void Render(vtkRenderer *renderer, vtkVolume *volume)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLProjectedAAHexahedraMapper_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *window)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLProjectedAAHexahedraMapper_StaticNew()
{
  return vtkOpenGLProjectedAAHexahedraMapper::New();
}

PyObject *PyVTKClass_vtkOpenGLProjectedAAHexahedraMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLProjectedAAHexahedraMapper_StaticNew,
    PyvtkOpenGLProjectedAAHexahedraMapper_Methods,
    "vtkOpenGLProjectedAAHexahedraMapper", modulename,
    NULL, NULL,
    PyvtkOpenGLProjectedAAHexahedraMapper_Doc(),
    PyVTKClass_vtkProjectedAAHexahedraMapperNew(modulename));
  return cls;
}

const char **PyvtkOpenGLProjectedAAHexahedraMapper_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLProjectedAAHexahedraMapper - OpenGL implementation of a\nvolume mapper for axis-aligned hexahedra\n\n",
    "Superclass: vtkProjectedAAHexahedraMapper\n\n",
    "High quality volume renderer for axis-aligned hexahedra\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLProjectedAAHexahedraMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLProjectedAAHexahedraMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLProjectedAAHexahedraMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

