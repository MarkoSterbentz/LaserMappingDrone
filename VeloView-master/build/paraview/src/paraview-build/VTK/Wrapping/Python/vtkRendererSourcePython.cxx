// python wrapper for vtkRendererSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkRendererSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRendererSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRendererSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkRendererSource_Doc();


static PyObject *
PyvtkRendererSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRendererSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRendererSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRendererSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRendererSource::NewInstance());

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
PyvtkRendererSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRendererSource *tempr = vtkRendererSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkRendererSource::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkRendererSource::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkRendererSource::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_SetWholeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWholeWindow(temp0);
      }
    else
      {
      op->vtkRendererSource::SetWholeWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_GetWholeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWholeWindow() :
      op->vtkRendererSource::GetWholeWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_WholeWindowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WholeWindowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WholeWindowOn();
      }
    else
      {
      op->vtkRendererSource::WholeWindowOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_WholeWindowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WholeWindowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WholeWindowOff();
      }
    else
      {
      op->vtkRendererSource::WholeWindowOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_SetRenderFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderFlag(temp0);
      }
    else
      {
      op->vtkRendererSource::SetRenderFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_GetRenderFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetRenderFlag() :
      op->vtkRendererSource::GetRenderFlag());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_RenderFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderFlagOn();
      }
    else
      {
      op->vtkRendererSource::RenderFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_RenderFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderFlagOff();
      }
    else
      {
      op->vtkRendererSource::RenderFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_SetDepthValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepthValues(temp0);
      }
    else
      {
      op->vtkRendererSource::SetDepthValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_GetDepthValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDepthValues() :
      op->vtkRendererSource::GetDepthValues());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_DepthValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DepthValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DepthValuesOn();
      }
    else
      {
      op->vtkRendererSource::DepthValuesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_DepthValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DepthValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DepthValuesOff();
      }
    else
      {
      op->vtkRendererSource::DepthValuesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_SetDepthValuesInScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthValuesInScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepthValuesInScalars(temp0);
      }
    else
      {
      op->vtkRendererSource::SetDepthValuesInScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_GetDepthValuesInScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthValuesInScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDepthValuesInScalars() :
      op->vtkRendererSource::GetDepthValuesInScalars());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_DepthValuesInScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DepthValuesInScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DepthValuesInScalarsOn();
      }
    else
      {
      op->vtkRendererSource::DepthValuesInScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_DepthValuesInScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DepthValuesInScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DepthValuesInScalarsOff();
      }
    else
      {
      op->vtkRendererSource::DepthValuesInScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererSource_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkRendererSource::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRendererSource_Methods[] = {
  {(char*)"GetClassName", PyvtkRendererSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRendererSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRendererSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRendererSource\nC++: vtkRendererSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRendererSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRendererSource\nC++: vtkRendererSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkRendererSource_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the Renderer.\n"},
  {(char*)"SetInput", PyvtkRendererSource_SetInput, METH_VARARGS,
   (char*)"V.SetInput(vtkRenderer)\nC++: void SetInput(vtkRenderer *)\n\nIndicates what renderer to get the pixel data from.\n"},
  {(char*)"GetInput", PyvtkRendererSource_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkRenderer\nC++: vtkRenderer *GetInput()\n\nReturns which renderer is being used as the source for the pixel\ndata.\n"},
  {(char*)"SetWholeWindow", PyvtkRendererSource_SetWholeWindow, METH_VARARGS,
   (char*)"V.SetWholeWindow(int)\nC++: void SetWholeWindow(int a)\n\nUse the entire RenderWindow as a data source or just the\nRenderer. The default is zero, just the Renderer.\n"},
  {(char*)"GetWholeWindow", PyvtkRendererSource_GetWholeWindow, METH_VARARGS,
   (char*)"V.GetWholeWindow() -> int\nC++: int GetWholeWindow()\n\nUse the entire RenderWindow as a data source or just the\nRenderer. The default is zero, just the Renderer.\n"},
  {(char*)"WholeWindowOn", PyvtkRendererSource_WholeWindowOn, METH_VARARGS,
   (char*)"V.WholeWindowOn()\nC++: void WholeWindowOn()\n\nUse the entire RenderWindow as a data source or just the\nRenderer. The default is zero, just the Renderer.\n"},
  {(char*)"WholeWindowOff", PyvtkRendererSource_WholeWindowOff, METH_VARARGS,
   (char*)"V.WholeWindowOff()\nC++: void WholeWindowOff()\n\nUse the entire RenderWindow as a data source or just the\nRenderer. The default is zero, just the Renderer.\n"},
  {(char*)"SetRenderFlag", PyvtkRendererSource_SetRenderFlag, METH_VARARGS,
   (char*)"V.SetRenderFlag(int)\nC++: void SetRenderFlag(int a)\n\nIf this flag is on, the Executing causes a render first.\n"},
  {(char*)"GetRenderFlag", PyvtkRendererSource_GetRenderFlag, METH_VARARGS,
   (char*)"V.GetRenderFlag() -> int\nC++: int GetRenderFlag()\n\nIf this flag is on, the Executing causes a render first.\n"},
  {(char*)"RenderFlagOn", PyvtkRendererSource_RenderFlagOn, METH_VARARGS,
   (char*)"V.RenderFlagOn()\nC++: void RenderFlagOn()\n\nIf this flag is on, the Executing causes a render first.\n"},
  {(char*)"RenderFlagOff", PyvtkRendererSource_RenderFlagOff, METH_VARARGS,
   (char*)"V.RenderFlagOff()\nC++: void RenderFlagOff()\n\nIf this flag is on, the Executing causes a render first.\n"},
  {(char*)"SetDepthValues", PyvtkRendererSource_SetDepthValues, METH_VARARGS,
   (char*)"V.SetDepthValues(int)\nC++: void SetDepthValues(int a)\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed\ninto a field data attributes named \"ZBuffer\" .\n"},
  {(char*)"GetDepthValues", PyvtkRendererSource_GetDepthValues, METH_VARARGS,
   (char*)"V.GetDepthValues() -> int\nC++: int GetDepthValues()\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed\ninto a field data attributes named \"ZBuffer\" .\n"},
  {(char*)"DepthValuesOn", PyvtkRendererSource_DepthValuesOn, METH_VARARGS,
   (char*)"V.DepthValuesOn()\nC++: void DepthValuesOn()\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed\ninto a field data attributes named \"ZBuffer\" .\n"},
  {(char*)"DepthValuesOff", PyvtkRendererSource_DepthValuesOff, METH_VARARGS,
   (char*)"V.DepthValuesOff()\nC++: void DepthValuesOff()\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed\ninto a field data attributes named \"ZBuffer\" .\n"},
  {(char*)"SetDepthValuesInScalars", PyvtkRendererSource_SetDepthValuesInScalars, METH_VARARGS,
   (char*)"V.SetDepthValuesInScalars(int)\nC++: void SetDepthValuesInScalars(int a)\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed in\nthe scalars as a fourth Z component (shift and scaled to map the\nfull 0..255 range).\n"},
  {(char*)"GetDepthValuesInScalars", PyvtkRendererSource_GetDepthValuesInScalars, METH_VARARGS,
   (char*)"V.GetDepthValuesInScalars() -> int\nC++: int GetDepthValuesInScalars()\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed in\nthe scalars as a fourth Z component (shift and scaled to map the\nfull 0..255 range).\n"},
  {(char*)"DepthValuesInScalarsOn", PyvtkRendererSource_DepthValuesInScalarsOn, METH_VARARGS,
   (char*)"V.DepthValuesInScalarsOn()\nC++: void DepthValuesInScalarsOn()\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed in\nthe scalars as a fourth Z component (shift and scaled to map the\nfull 0..255 range).\n"},
  {(char*)"DepthValuesInScalarsOff", PyvtkRendererSource_DepthValuesInScalarsOff, METH_VARARGS,
   (char*)"V.DepthValuesInScalarsOff()\nC++: void DepthValuesInScalarsOff()\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed in\nthe scalars as a fourth Z component (shift and scaled to map the\nfull 0..255 range).\n"},
  {(char*)"GetOutput", PyvtkRendererSource_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkImageData\nC++: vtkImageData *GetOutput()\n\nGet the output data object for a port on this algorithm.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRendererSource_StaticNew()
{
  return vtkRendererSource::New();
}

PyObject *PyVTKClass_vtkRendererSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRendererSource_StaticNew,
    PyvtkRendererSource_Methods,
    "vtkRendererSource", modulename,
    NULL, NULL,
    PyvtkRendererSource_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRendererSource_Doc()
{
  static const char *docstring[] = {
    "vtkRendererSource - take a renderer into the pipeline\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkRendererSource is a source object that gets its input from a\nrenderer and converts it to structured points. This can then be used\nin a visualization pipeline. You must explicitly send a Modify() to\nthis object to get it to reload its data from the renderer. Consider\nusing vtkWindowToImageFilter instead of this class.\n\nThe data placed into the output is the renderer's image rgb values.\nOptionall",
    "y, you can also grab the image depth (e.g., z-buffer)\nvalues, and place then into the output (point) field data.\n\nSee Also:\n\nvtkWindowToImageFilter vtkRenderer vtkStructuredPoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRendererSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRendererSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRendererSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

