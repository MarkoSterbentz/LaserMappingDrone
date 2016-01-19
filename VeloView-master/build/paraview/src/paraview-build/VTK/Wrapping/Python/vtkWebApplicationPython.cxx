// python wrapper for vtkWebApplication
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkWebApplication.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWebApplication(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWebApplicationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkWebApplication_Doc();


static PyObject *
PyvtkWebApplication_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWebApplication::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebApplication::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWebApplication *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebApplication::NewInstance());

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
PyvtkWebApplication_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWebApplication *tempr = vtkWebApplication::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_SetImageEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

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
      op->vtkWebApplication::SetImageEncoding(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_GetImageEncodingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageEncodingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageEncodingMinValue() :
      op->vtkWebApplication::GetImageEncodingMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_GetImageEncodingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageEncodingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageEncodingMaxValue() :
      op->vtkWebApplication::GetImageEncodingMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_GetImageEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageEncoding() :
      op->vtkWebApplication::GetImageEncoding());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_SetImageCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

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
      op->vtkWebApplication::SetImageCompression(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_GetImageCompressionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageCompressionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageCompressionMinValue() :
      op->vtkWebApplication::GetImageCompressionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_GetImageCompressionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageCompressionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageCompressionMaxValue() :
      op->vtkWebApplication::GetImageCompressionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_GetImageCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetImageCompression() :
      op->vtkWebApplication::GetImageCompression());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = NULL;
  int temp1 = 100;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->StillRender(temp0, temp1) :
      op->vtkWebApplication::StillRender(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = NULL;
  int temp1 = 50;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->InteractiveRender(temp0, temp1) :
      op->vtkWebApplication::InteractiveRender(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_StillRenderToString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRenderToString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = NULL;
  unsigned long temp1 = 0;
  int temp2 = 100;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    const char *tempr = (ap.IsBound() ?
      op->StillRenderToString(temp0, temp1, temp2) :
      op->vtkWebApplication::StillRenderToString(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_GetHasImagesBeingProcessed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasImagesBeingProcessed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    bool tempr = (ap.IsBound() ?
      op->GetHasImagesBeingProcessed(temp0) :
      op->vtkWebApplication::GetHasImagesBeingProcessed(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_HandleInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = NULL;
  vtkWebInteractionEvent *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      ap.GetVTKObject(temp1, "vtkWebInteractionEvent"))
    {
    bool tempr = (ap.IsBound() ?
      op->HandleInteractionEvent(temp0, temp1) :
      op->vtkWebApplication::HandleInteractionEvent(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_InvalidateCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->InvalidateCache(temp0);
      }
    else
      {
      op->vtkWebApplication::InvalidateCache(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_GetLastStillRenderToStringMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastStillRenderToStringMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetLastStillRenderToStringMTime() :
      op->vtkWebApplication::GetLastStillRenderToStringMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_GetWebGLSceneMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWebGLSceneMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetWebGLSceneMetaData(temp0) :
      op->vtkWebApplication::GetWebGLSceneMetaData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_GetWebGLBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWebGLBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  vtkRenderWindow *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetWebGLBinaryData(temp0, temp1, temp2) :
      op->vtkWebApplication::GetWebGLBinaryData(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebApplication_GetObjectIdMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectIdMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebApplication *op = static_cast<vtkWebApplication *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkObjectIdMap *tempr = (ap.IsBound() ?
      op->GetObjectIdMap() :
      op->vtkWebApplication::GetObjectIdMap());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkWebApplication_Methods[] = {
  {(char*)"GetClassName", PyvtkWebApplication_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWebApplication_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWebApplication_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWebApplication\nC++: vtkWebApplication *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWebApplication_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWebApplication\nC++: vtkWebApplication *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetImageEncoding", PyvtkWebApplication_SetImageEncoding, METH_VARARGS,
   (char*)"V.SetImageEncoding(int)\nC++: void SetImageEncoding(int)\n\nSet the encoding to be used for rendered images.\n"},
  {(char*)"GetImageEncodingMinValue", PyvtkWebApplication_GetImageEncodingMinValue, METH_VARARGS,
   (char*)"V.GetImageEncodingMinValue() -> int\nC++: int GetImageEncodingMinValue()\n\nSet the encoding to be used for rendered images.\n"},
  {(char*)"GetImageEncodingMaxValue", PyvtkWebApplication_GetImageEncodingMaxValue, METH_VARARGS,
   (char*)"V.GetImageEncodingMaxValue() -> int\nC++: int GetImageEncodingMaxValue()\n\nSet the encoding to be used for rendered images.\n"},
  {(char*)"GetImageEncoding", PyvtkWebApplication_GetImageEncoding, METH_VARARGS,
   (char*)"V.GetImageEncoding() -> int\nC++: int GetImageEncoding()\n\nSet the encoding to be used for rendered images.\n"},
  {(char*)"SetImageCompression", PyvtkWebApplication_SetImageCompression, METH_VARARGS,
   (char*)"V.SetImageCompression(int)\nC++: void SetImageCompression(int)\n\nSet the compression to be used for rendered images.\n"},
  {(char*)"GetImageCompressionMinValue", PyvtkWebApplication_GetImageCompressionMinValue, METH_VARARGS,
   (char*)"V.GetImageCompressionMinValue() -> int\nC++: int GetImageCompressionMinValue()\n\nSet the compression to be used for rendered images.\n"},
  {(char*)"GetImageCompressionMaxValue", PyvtkWebApplication_GetImageCompressionMaxValue, METH_VARARGS,
   (char*)"V.GetImageCompressionMaxValue() -> int\nC++: int GetImageCompressionMaxValue()\n\nSet the compression to be used for rendered images.\n"},
  {(char*)"GetImageCompression", PyvtkWebApplication_GetImageCompression, METH_VARARGS,
   (char*)"V.GetImageCompression() -> int\nC++: int GetImageCompression()\n\nSet the compression to be used for rendered images.\n"},
  {(char*)"StillRender", PyvtkWebApplication_StillRender, METH_VARARGS,
   (char*)"V.StillRender(vtkRenderWindow, int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *StillRender(vtkRenderWindow *view,\n    int quality=100)\n\nRender a view and obtain the rendered image.\n"},
  {(char*)"InteractiveRender", PyvtkWebApplication_InteractiveRender, METH_VARARGS,
   (char*)"V.InteractiveRender(vtkRenderWindow, int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *InteractiveRender(\n    vtkRenderWindow *view, int quality=50)\n\nRender a view and obtain the rendered image.\n"},
  {(char*)"StillRenderToString", PyvtkWebApplication_StillRenderToString, METH_VARARGS,
   (char*)"V.StillRenderToString(vtkRenderWindow, int, int) -> string\nC++: const char *StillRenderToString(vtkRenderWindow *view,\n    unsigned long time=0, int quality=100)\n\nRender a view and obtain the rendered image.\n"},
  {(char*)"GetHasImagesBeingProcessed", PyvtkWebApplication_GetHasImagesBeingProcessed, METH_VARARGS,
   (char*)"V.GetHasImagesBeingProcessed(vtkRenderWindow) -> bool\nC++: bool GetHasImagesBeingProcessed(vtkRenderWindow *)\n\nStillRenderToString() need not necessary returns the most\nrecently rendered image. Use this method to get whether there are\nany pending images being processed concurrently.\n"},
  {(char*)"HandleInteractionEvent", PyvtkWebApplication_HandleInteractionEvent, METH_VARARGS,
   (char*)"V.HandleInteractionEvent(vtkRenderWindow, vtkWebInteractionEvent)\n    -> bool\nC++: bool HandleInteractionEvent(vtkRenderWindow *view,\n    vtkWebInteractionEvent *event)\n\nCommunicate mouse interaction to a view. Returns true if the\ninteraction changed the view state, otherwise returns false.\n"},
  {(char*)"InvalidateCache", PyvtkWebApplication_InvalidateCache, METH_VARARGS,
   (char*)"V.InvalidateCache(vtkRenderWindow)\nC++: void InvalidateCache(vtkRenderWindow *view)\n\nInvalidate view cache\n"},
  {(char*)"GetLastStillRenderToStringMTime", PyvtkWebApplication_GetLastStillRenderToStringMTime, METH_VARARGS,
   (char*)"V.GetLastStillRenderToStringMTime() -> int\nC++: unsigned long GetLastStillRenderToStringMTime()\n\nReturn the MTime of the last array exported by\nStillRenderToString.\n"},
  {(char*)"GetWebGLSceneMetaData", PyvtkWebApplication_GetWebGLSceneMetaData, METH_VARARGS,
   (char*)"V.GetWebGLSceneMetaData(vtkRenderWindow) -> string\nC++: const char *GetWebGLSceneMetaData(vtkRenderWindow *view)\n\nReturn the Meta data description of the input scene in JSON\nformat. This is using the vtkWebGLExporter to parse the scene.\nNOTE: This should be called before getting the webGL binary data.\n"},
  {(char*)"GetWebGLBinaryData", PyvtkWebApplication_GetWebGLBinaryData, METH_VARARGS,
   (char*)"V.GetWebGLBinaryData(vtkRenderWindow, string, int) -> string\nC++: const char *GetWebGLBinaryData(vtkRenderWindow *view,\n    const char *id, int partIndex)\n\nReturn the binary data given the part index and the webGL object\npiece id in the scene.\n"},
  {(char*)"GetObjectIdMap", PyvtkWebApplication_GetObjectIdMap, METH_VARARGS,
   (char*)"V.GetObjectIdMap() -> vtkObjectIdMap\nC++: vtkObjectIdMap *GetObjectIdMap()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWebApplication_StaticNew()
{
  return vtkWebApplication::New();
}

PyObject *PyVTKClass_vtkWebApplicationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWebApplication_StaticNew,
    PyvtkWebApplication_Methods,
    "vtkWebApplication", modulename,
    NULL, NULL,
    PyvtkWebApplication_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 5; c++)
      {
      static const struct { const char *name; int value; }
        constants[5] = {
          { "ENCODING_NONE", vtkWebApplication::ENCODING_NONE },
          { "ENCODING_BASE64", vtkWebApplication::ENCODING_BASE64 },
          { "COMPRESSION_NONE", vtkWebApplication::COMPRESSION_NONE },
          { "COMPRESSION_PNG", vtkWebApplication::COMPRESSION_PNG },
          { "COMPRESSION_JPEG", vtkWebApplication::COMPRESSION_JPEG },
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

const char **PyvtkWebApplication_Doc()
{
  static const char *docstring[] = {
    "vtkWebApplication - defines ParaViewWeb application interface.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkWebApplication defines the core interface for a ParaViewWeb\napplication. This exposes methods that make it easier to manage views\nand rendered images from views.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWebApplication(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWebApplicationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWebApplication", o) != 0)
    {
    Py_DECREF(o);
    }

}

