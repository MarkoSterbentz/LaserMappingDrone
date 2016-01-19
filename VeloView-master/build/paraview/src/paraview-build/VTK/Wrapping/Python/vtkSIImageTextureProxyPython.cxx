// python wrapper for vtkSIImageTextureProxy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIImageTextureProxy.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIImageTextureProxy(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIImageTextureProxyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSISourceProxyNew
extern "C" { PyObject *PyVTKClass_vtkSISourceProxyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSISourceProxyNew
#endif

static const char **PyvtkSIImageTextureProxy_Doc();


static PyObject *
PyvtkSIImageTextureProxy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIImageTextureProxy *op = static_cast<vtkSIImageTextureProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIImageTextureProxy::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIImageTextureProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIImageTextureProxy *op = static_cast<vtkSIImageTextureProxy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIImageTextureProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIImageTextureProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIImageTextureProxy *op = static_cast<vtkSIImageTextureProxy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIImageTextureProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIImageTextureProxy::NewInstance());

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
PyvtkSIImageTextureProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIImageTextureProxy *tempr = vtkSIImageTextureProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIImageTextureProxy_Methods[] = {
  {(char*)"GetClassName", PyvtkSIImageTextureProxy_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIImageTextureProxy_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIImageTextureProxy_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIImageTextureProxy\nC++: vtkSIImageTextureProxy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIImageTextureProxy_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSIImageTextureProxy\nC++: vtkSIImageTextureProxy *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIImageTextureProxy_StaticNew()
{
  return vtkSIImageTextureProxy::New();
}

PyObject *PyVTKClass_vtkSIImageTextureProxyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIImageTextureProxy_StaticNew,
    PyvtkSIImageTextureProxy_Methods,
    "vtkSIImageTextureProxy", modulename,
    NULL, NULL,
    PyvtkSIImageTextureProxy_Doc(),
    PyVTKClass_vtkSISourceProxyNew(modulename));
  return cls;
}

const char **PyvtkSIImageTextureProxy_Doc()
{
  static const char *docstring[] = {
    "vtkSIImageTextureProxy - proxy for a vtkTexture.\n\n",
    "Superclass: vtkSISourceProxy\n\n",
    "Combines vtkTexture and vtkNetworkImageSource. This makes it simple\nfor applications to create textures from image files where the image\nfile is present on only one process, say client, but is needed for\nrendering on the render server and the data server.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIImageTextureProxy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIImageTextureProxyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIImageTextureProxy", o) != 0)
    {
    Py_DECREF(o);
    }

}

