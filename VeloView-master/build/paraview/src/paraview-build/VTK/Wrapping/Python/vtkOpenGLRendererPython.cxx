// python wrapper for vtkOpenGLRenderer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkOpenGLRenderer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkOpenGLRenderer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkOpenGLRendererNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkRendererNew
extern "C" { PyObject *PyVTKClass_vtkRendererNew(const char *); }
#define DECLARED_PyVTKClass_vtkRendererNew
#endif

static const char **PyvtkOpenGLRenderer_Doc();


static PyObject *
PyvtkOpenGLRenderer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkOpenGLRenderer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLRenderer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOpenGLRenderer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLRenderer::NewInstance());

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
PyvtkOpenGLRenderer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkOpenGLRenderer *tempr = vtkOpenGLRenderer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_DeviceRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeviceRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeviceRender();
      }
    else
      {
      op->vtkOpenGLRenderer::DeviceRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_DeviceRenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeviceRenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeviceRenderTranslucentPolygonalGeometry();
      }
    else
      {
      op->vtkOpenGLRenderer::DeviceRenderTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_ClearLights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLights();
      }
    else
      {
      op->vtkOpenGLRenderer::ClearLights();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkOpenGLRenderer::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_UpdateLights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->UpdateLights() :
      op->vtkOpenGLRenderer::UpdateLights());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetDepthPeelingHigherLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthPeelingHigherLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDepthPeelingHigherLayer() :
      op->vtkOpenGLRenderer::GetDepthPeelingHigherLayer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetShaderProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkShaderProgram2 *tempr = (ap.IsBound() ?
      op->GetShaderProgram() :
      op->vtkOpenGLRenderer::GetShaderProgram());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_SetShaderProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  vtkShaderProgram2 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram2"))
    {
    if (ap.IsBound())
      {
      op->SetShaderProgram(temp0);
      }
    else
      {
      op->vtkOpenGLRenderer::SetShaderProgram(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_SetPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  vtkRenderPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
    {
    if (ap.IsBound())
      {
      op->SetPass(temp0);
      }
    else
      {
      op->vtkOpenGLRenderer::SetPass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetPass() :
      op->vtkOpenGLRenderer::GetPass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderer_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLRenderer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLRenderer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLRenderer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkOpenGLRenderer\nC++: vtkOpenGLRenderer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLRenderer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLRenderer\nC++: vtkOpenGLRenderer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DeviceRender", PyvtkOpenGLRenderer_DeviceRender, METH_VARARGS,
   (char*)"V.DeviceRender()\nC++: void DeviceRender(void)\n\nConcrete open gl render method.\n"},
  {(char*)"DeviceRenderTranslucentPolygonalGeometry", PyvtkOpenGLRenderer_DeviceRenderTranslucentPolygonalGeometry, METH_VARARGS,
   (char*)"V.DeviceRenderTranslucentPolygonalGeometry()\nC++: virtual void DeviceRenderTranslucentPolygonalGeometry()\n\nRender translucent polygonal geometry. Default implementation\njust call UpdateTranslucentPolygonalGeometry(). Subclasses of\nvtkRenderer that can deal with depth peeling must override this\nmethod.\n"},
  {(char*)"ClearLights", PyvtkOpenGLRenderer_ClearLights, METH_VARARGS,
   (char*)"V.ClearLights()\nC++: void ClearLights(void)\n\nInternal method temporarily removes lights before reloading them\ninto graphics pipeline.\n"},
  {(char*)"Clear", PyvtkOpenGLRenderer_Clear, METH_VARARGS,
   (char*)"V.Clear()\nC++: virtual void Clear(void)\n\n"},
  {(char*)"UpdateLights", PyvtkOpenGLRenderer_UpdateLights, METH_VARARGS,
   (char*)"V.UpdateLights() -> int\nC++: int UpdateLights(void)\n\nAsk lights to load themselves into graphics pipeline.\n"},
  {(char*)"GetDepthPeelingHigherLayer", PyvtkOpenGLRenderer_GetDepthPeelingHigherLayer, METH_VARARGS,
   (char*)"V.GetDepthPeelingHigherLayer() -> int\nC++: int GetDepthPeelingHigherLayer()\n\nIs rendering at translucent geometry stage using depth peeling\nand rendering a layer other than the first one? (Boolean value)\nIf so, the uniform variables UseTexture and Texture can be set.\n(Used by vtkOpenGLProperty or vtkOpenGLTexture)\n"},
  {(char*)"GetShaderProgram", PyvtkOpenGLRenderer_GetShaderProgram, METH_VARARGS,
   (char*)"V.GetShaderProgram() -> vtkShaderProgram2\nC++: vtkShaderProgram2 *GetShaderProgram()\n\n\n"},
  {(char*)"SetShaderProgram", PyvtkOpenGLRenderer_SetShaderProgram, METH_VARARGS,
   (char*)"V.SetShaderProgram(vtkShaderProgram2)\nC++: virtual void SetShaderProgram(vtkShaderProgram2 *program)\n\n\n"},
  {(char*)"SetPass", PyvtkOpenGLRenderer_SetPass, METH_VARARGS,
   (char*)"V.SetPass(vtkRenderPass)\nC++: void SetPass(vtkRenderPass *p)\n\nSet/Get a custom render pass. Initial value is NULL.\n"},
  {(char*)"GetPass", PyvtkOpenGLRenderer_GetPass, METH_VARARGS,
   (char*)"V.GetPass() -> vtkRenderPass\nC++: vtkRenderPass *GetPass()\n\nSet/Get a custom render pass. Initial value is NULL.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLRenderer_StaticNew()
{
  return vtkOpenGLRenderer::New();
}

PyObject *PyVTKClass_vtkOpenGLRendererNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLRenderer_StaticNew,
    PyvtkOpenGLRenderer_Methods,
    "vtkOpenGLRenderer", modulename,
    NULL, NULL,
    PyvtkOpenGLRenderer_Doc(),
    PyVTKClass_vtkRendererNew(modulename));
  return cls;
}

const char **PyvtkOpenGLRenderer_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLRenderer - OpenGL renderer\n\n",
    "Superclass: vtkRenderer\n\n",
    "vtkOpenGLRenderer is a concrete implementation of the abstract class\nvtkRenderer. vtkOpenGLRenderer interfaces to the OpenGL graphics\nlibrary.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLRenderer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLRendererNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLRenderer", o) != 0)
    {
    Py_DECREF(o);
    }

}

