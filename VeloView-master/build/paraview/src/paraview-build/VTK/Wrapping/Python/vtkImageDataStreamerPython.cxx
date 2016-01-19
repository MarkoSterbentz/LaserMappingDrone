// python wrapper for vtkImageDataStreamer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkImageDataStreamer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageDataStreamer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageDataStreamerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageDataStreamer_Doc();


static PyObject *
PyvtkImageDataStreamer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageDataStreamer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDataStreamer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageDataStreamer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDataStreamer::NewInstance());

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
PyvtkImageDataStreamer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageDataStreamer *tempr = vtkImageDataStreamer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_SetNumberOfStreamDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfStreamDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfStreamDivisions(temp0);
      }
    else
      {
      op->vtkImageDataStreamer::SetNumberOfStreamDivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_GetNumberOfStreamDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStreamDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfStreamDivisions() :
      op->vtkImageDataStreamer::GetNumberOfStreamDivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkImageDataStreamer::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageDataStreamer_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Update(temp0);
      }
    else
      {
      op->vtkImageDataStreamer::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageDataStreamer_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageDataStreamer_Update_s1(self, args);
    case 1:
      return PyvtkImageDataStreamer_Update_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return NULL;
}



static PyObject *
PyvtkImageDataStreamer_UpdateWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateWholeExtent();
      }
    else
      {
      op->vtkImageDataStreamer::UpdateWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_SetExtentTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  vtkExtentTranslator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExtentTranslator"))
    {
    if (ap.IsBound())
      {
      op->SetExtentTranslator(temp0);
      }
    else
      {
      op->vtkImageDataStreamer::SetExtentTranslator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDataStreamer_GetExtentTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataStreamer *op = static_cast<vtkImageDataStreamer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtentTranslator *tempr = (ap.IsBound() ?
      op->GetExtentTranslator() :
      op->vtkImageDataStreamer::GetExtentTranslator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageDataStreamer_Methods[] = {
  {(char*)"GetClassName", PyvtkImageDataStreamer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageDataStreamer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageDataStreamer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageDataStreamer\nC++: vtkImageDataStreamer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageDataStreamer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageDataStreamer\nC++: vtkImageDataStreamer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfStreamDivisions", PyvtkImageDataStreamer_SetNumberOfStreamDivisions, METH_VARARGS,
   (char*)"V.SetNumberOfStreamDivisions(int)\nC++: void SetNumberOfStreamDivisions(int a)\n\nSet how many pieces to divide the input into. void\nSetNumberOfStreamDivisions(int num); int\nGetNumberOfStreamDivisions();\n"},
  {(char*)"GetNumberOfStreamDivisions", PyvtkImageDataStreamer_GetNumberOfStreamDivisions, METH_VARARGS,
   (char*)"V.GetNumberOfStreamDivisions() -> int\nC++: int GetNumberOfStreamDivisions()\n\nSet how many pieces to divide the input into. void\nSetNumberOfStreamDivisions(int num); int\nGetNumberOfStreamDivisions();\n"},
  {(char*)"Update", PyvtkImageDataStreamer_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\nV.Update(int)\nC++: virtual void Update(int port)\n\n"},
  {(char*)"UpdateWholeExtent", PyvtkImageDataStreamer_UpdateWholeExtent, METH_VARARGS,
   (char*)"V.UpdateWholeExtent()\nC++: virtual void UpdateWholeExtent()\n\n"},
  {(char*)"SetExtentTranslator", PyvtkImageDataStreamer_SetExtentTranslator, METH_VARARGS,
   (char*)"V.SetExtentTranslator(vtkExtentTranslator)\nC++: virtual void SetExtentTranslator(vtkExtentTranslator *)\n\nGet the extent translator that will be used to split the requests\n"},
  {(char*)"GetExtentTranslator", PyvtkImageDataStreamer_GetExtentTranslator, METH_VARARGS,
   (char*)"V.GetExtentTranslator() -> vtkExtentTranslator\nC++: vtkExtentTranslator *GetExtentTranslator()\n\nGet the extent translator that will be used to split the requests\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageDataStreamer_StaticNew()
{
  return vtkImageDataStreamer::New();
}

PyObject *PyVTKClass_vtkImageDataStreamerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageDataStreamer_StaticNew,
    PyvtkImageDataStreamer_Methods,
    "vtkImageDataStreamer", modulename,
    NULL, NULL,
    PyvtkImageDataStreamer_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageDataStreamer_Doc()
{
  static const char *docstring[] = {
    "vtkImageDataStreamer - Initiates streaming on image data.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "To satisfy a request, this filter calls update on its input many\ntimes with smaller update extents.  All processing up stream streams\nsmaller pieces.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageDataStreamer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDataStreamerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageDataStreamer", o) != 0)
    {
    Py_DECREF(o);
    }

}

