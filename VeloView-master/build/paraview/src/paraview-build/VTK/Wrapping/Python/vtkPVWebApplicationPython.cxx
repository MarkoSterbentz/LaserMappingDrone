// python wrapper for vtkPVWebApplication
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVWebApplication.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVWebApplication(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVWebApplicationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVWebApplication_Doc();


static PyObject *
PyvtkPVWebApplication_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVWebApplication::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVWebApplication::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVWebApplication *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVWebApplication::NewInstance());

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
PyvtkPVWebApplication_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVWebApplication *tempr = vtkPVWebApplication::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_SetImageEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageEncoding(temp0);
      }
    else
      {
      op->vtkPVWebApplication::SetImageEncoding(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetImageEncodingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageEncodingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageEncodingMinValue() :
      op->vtkPVWebApplication::GetImageEncodingMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetImageEncodingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageEncodingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageEncodingMaxValue() :
      op->vtkPVWebApplication::GetImageEncodingMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetImageEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageEncoding() :
      op->vtkPVWebApplication::GetImageEncoding());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_SetImageCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageCompression(temp0);
      }
    else
      {
      op->vtkPVWebApplication::SetImageCompression(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetImageCompressionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageCompressionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageCompressionMinValue() :
      op->vtkPVWebApplication::GetImageCompressionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetImageCompressionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageCompressionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageCompressionMaxValue() :
      op->vtkPVWebApplication::GetImageCompressionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetImageCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageCompression() :
      op->vtkPVWebApplication::GetImageCompression());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  int temp1 = 100;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->StillRender(temp0, temp1) :
      op->vtkPVWebApplication::StillRender(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  int temp1 = 50;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->InteractiveRender(temp0, temp1) :
      op->vtkPVWebApplication::InteractiveRender(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_StillRenderToString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRenderToString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  unsigned long temp1 = 0;
  int temp2 = 100;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    const char *tempr = (ap.IsBound() ?
      op->StillRenderToString(temp0, temp1, temp2) :
      op->vtkPVWebApplication::StillRenderToString(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetHasImagesBeingProcessed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasImagesBeingProcessed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
    {
    bool tempr = (ap.IsBound() ?
      op->GetHasImagesBeingProcessed(temp0) :
      op->vtkPVWebApplication::GetHasImagesBeingProcessed(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_HandleInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  vtkWebInteractionEvent *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      ap.GetVTKObject(temp1, "vtkWebInteractionEvent"))
    {
    bool tempr = (ap.IsBound() ?
      op->HandleInteractionEvent(temp0, temp1) :
      op->vtkPVWebApplication::HandleInteractionEvent(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_InvalidateCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
    {
    if (ap.IsBound())
      {
      op->InvalidateCache(temp0);
      }
    else
      {
      op->vtkPVWebApplication::InvalidateCache(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetLastStillRenderToStringMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastStillRenderToStringMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetLastStillRenderToStringMTime() :
      op->vtkPVWebApplication::GetLastStillRenderToStringMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetWebGLSceneMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWebGLSceneMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetWebGLSceneMetaData(temp0) :
      op->vtkPVWebApplication::GetWebGLSceneMetaData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVWebApplication_GetWebGLBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWebGLBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVWebApplication *op = static_cast<vtkPVWebApplication *>(vp);

  vtkSMViewProxy *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetWebGLBinaryData(temp0, temp1, temp2) :
      op->vtkPVWebApplication::GetWebGLBinaryData(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVWebApplication_Methods[] = {
  {(char*)"GetClassName", PyvtkPVWebApplication_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVWebApplication_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVWebApplication_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVWebApplication\nC++: vtkPVWebApplication *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVWebApplication_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVWebApplication\nC++: vtkPVWebApplication *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetImageEncoding", PyvtkPVWebApplication_SetImageEncoding, METH_VARARGS,
   (char*)"V.SetImageEncoding(int)\nC++: void SetImageEncoding(int)\n\nSet the encoding to be used for rendered images.\n"},
  {(char*)"GetImageEncodingMinValue", PyvtkPVWebApplication_GetImageEncodingMinValue, METH_VARARGS,
   (char*)"V.GetImageEncodingMinValue() -> int\nC++: int GetImageEncodingMinValue()\n\nSet the encoding to be used for rendered images.\n"},
  {(char*)"GetImageEncodingMaxValue", PyvtkPVWebApplication_GetImageEncodingMaxValue, METH_VARARGS,
   (char*)"V.GetImageEncodingMaxValue() -> int\nC++: int GetImageEncodingMaxValue()\n\nSet the encoding to be used for rendered images.\n"},
  {(char*)"GetImageEncoding", PyvtkPVWebApplication_GetImageEncoding, METH_VARARGS,
   (char*)"V.GetImageEncoding() -> int\nC++: int GetImageEncoding()\n\nSet the encoding to be used for rendered images.\n"},
  {(char*)"SetImageCompression", PyvtkPVWebApplication_SetImageCompression, METH_VARARGS,
   (char*)"V.SetImageCompression(int)\nC++: void SetImageCompression(int)\n\nSet the compression to be used for rendered images.\n"},
  {(char*)"GetImageCompressionMinValue", PyvtkPVWebApplication_GetImageCompressionMinValue, METH_VARARGS,
   (char*)"V.GetImageCompressionMinValue() -> int\nC++: int GetImageCompressionMinValue()\n\nSet the compression to be used for rendered images.\n"},
  {(char*)"GetImageCompressionMaxValue", PyvtkPVWebApplication_GetImageCompressionMaxValue, METH_VARARGS,
   (char*)"V.GetImageCompressionMaxValue() -> int\nC++: int GetImageCompressionMaxValue()\n\nSet the compression to be used for rendered images.\n"},
  {(char*)"GetImageCompression", PyvtkPVWebApplication_GetImageCompression, METH_VARARGS,
   (char*)"V.GetImageCompression() -> int\nC++: int GetImageCompression()\n\nSet the compression to be used for rendered images.\n"},
  {(char*)"StillRender", PyvtkPVWebApplication_StillRender, METH_VARARGS,
   (char*)"V.StillRender(vtkSMViewProxy, int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *StillRender(vtkSMViewProxy *view,\n    int quality=100)\n\nRender a view and obtain the rendered image.\n"},
  {(char*)"InteractiveRender", PyvtkPVWebApplication_InteractiveRender, METH_VARARGS,
   (char*)"V.InteractiveRender(vtkSMViewProxy, int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *InteractiveRender(vtkSMViewProxy *view,\n     int quality=50)\n\nRender a view and obtain the rendered image.\n"},
  {(char*)"StillRenderToString", PyvtkPVWebApplication_StillRenderToString, METH_VARARGS,
   (char*)"V.StillRenderToString(vtkSMViewProxy, int, int) -> string\nC++: const char *StillRenderToString(vtkSMViewProxy *view,\n    unsigned long time=0, int quality=100)\n\nRender a view and obtain the rendered image.\n"},
  {(char*)"GetHasImagesBeingProcessed", PyvtkPVWebApplication_GetHasImagesBeingProcessed, METH_VARARGS,
   (char*)"V.GetHasImagesBeingProcessed(vtkSMViewProxy) -> bool\nC++: bool GetHasImagesBeingProcessed(vtkSMViewProxy *)\n\nStillRenderToString() need not necessary returns the most\nrecently rendered image. Use this method to get whether there are\nany pending images being processed concurrently.\n"},
  {(char*)"HandleInteractionEvent", PyvtkPVWebApplication_HandleInteractionEvent, METH_VARARGS,
   (char*)"V.HandleInteractionEvent(vtkSMViewProxy, vtkWebInteractionEvent)\n    -> bool\nC++: bool HandleInteractionEvent(vtkSMViewProxy *view,\n    vtkWebInteractionEvent *event)\n\nCommunicate mouse interaction to a view. Returns true if the\ninteraction changed the view state, otherwise returns false.\n"},
  {(char*)"InvalidateCache", PyvtkPVWebApplication_InvalidateCache, METH_VARARGS,
   (char*)"V.InvalidateCache(vtkSMViewProxy)\nC++: void InvalidateCache(vtkSMViewProxy *view)\n\nInvalidate view cache\n"},
  {(char*)"GetLastStillRenderToStringMTime", PyvtkPVWebApplication_GetLastStillRenderToStringMTime, METH_VARARGS,
   (char*)"V.GetLastStillRenderToStringMTime() -> int\nC++: unsigned long GetLastStillRenderToStringMTime()\n\nReturn the MTime of the last array exported by\nStillRenderToString.\n"},
  {(char*)"GetWebGLSceneMetaData", PyvtkPVWebApplication_GetWebGLSceneMetaData, METH_VARARGS,
   (char*)"V.GetWebGLSceneMetaData(vtkSMViewProxy) -> string\nC++: const char *GetWebGLSceneMetaData(vtkSMViewProxy *view)\n\nReturn the Meta data description of the input scene in JSON\nformat. This is using the vtkWebGLExporter to parse the scene.\nNOTE: This should be called before getting the webGL binary data.\n"},
  {(char*)"GetWebGLBinaryData", PyvtkPVWebApplication_GetWebGLBinaryData, METH_VARARGS,
   (char*)"V.GetWebGLBinaryData(vtkSMViewProxy, string, int) -> string\nC++: const char *GetWebGLBinaryData(vtkSMViewProxy *view,\n    const char *id, int partIndex)\n\nReturn the binary data given the part index and the webGL object\npiece id in the scene.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVWebApplication_StaticNew()
{
  return vtkPVWebApplication::New();
}

PyObject *PyVTKClass_vtkPVWebApplicationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVWebApplication_StaticNew,
    PyvtkPVWebApplication_Methods,
    "vtkPVWebApplication", modulename,
    NULL, NULL,
    PyvtkPVWebApplication_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 5; c++)
      {
      static const struct { const char *name; int value; }
        constants[5] = {
          { "ENCODING_NONE", vtkPVWebApplication::ENCODING_NONE },
          { "ENCODING_BASE64", vtkPVWebApplication::ENCODING_BASE64 },
          { "COMPRESSION_NONE", vtkPVWebApplication::COMPRESSION_NONE },
          { "COMPRESSION_PNG", vtkPVWebApplication::COMPRESSION_PNG },
          { "COMPRESSION_JPEG", vtkPVWebApplication::COMPRESSION_JPEG },
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

const char **PyvtkPVWebApplication_Doc()
{
  static const char *docstring[] = {
    "vtkPVWebApplication - defines ParaViewWeb application interface.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVWebApplication defines the core interface for a ParaViewWeb\napplication. This exposes methods that make it easier to manage views\nand rendered images from views.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVWebApplication(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVWebApplicationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVWebApplication", o) != 0)
    {
    Py_DECREF(o);
    }

}

