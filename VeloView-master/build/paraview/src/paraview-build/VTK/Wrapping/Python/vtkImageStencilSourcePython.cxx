// python wrapper for vtkImageStencilSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageStencilSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageStencilSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageStencilSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageStencilAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageStencilAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageStencilAlgorithmNew
#endif

static const char **PyvtkImageStencilSource_Doc();


static PyObject *
PyvtkImageStencilSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageStencilSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageStencilSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageStencilSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageStencilSource::NewInstance());

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
PyvtkImageStencilSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageStencilSource *tempr = vtkImageStencilSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilSource_SetInformationInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformationInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInformationInput(temp0);
      }
    else
      {
      op->vtkImageStencilSource::SetInformationInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilSource_GetInformationInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInformationInput() :
      op->vtkImageStencilSource::GetInformationInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilSource_SetOutputOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetOutputOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageStencilSource::SetOutputOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageStencilSource_SetOutputOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutputOrigin(temp0);
      }
    else
      {
      op->vtkImageStencilSource::SetOutputOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageStencilSource_SetOutputOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageStencilSource_SetOutputOrigin_s1(self, args);
    case 1:
      return PyvtkImageStencilSource_SetOutputOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputOrigin");
  return NULL;
}



static PyObject *
PyvtkImageStencilSource_GetOutputOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOutputOrigin() :
      op->vtkImageStencilSource::GetOutputOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilSource_SetOutputSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetOutputSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageStencilSource::SetOutputSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageStencilSource_SetOutputSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutputSpacing(temp0);
      }
    else
      {
      op->vtkImageStencilSource::SetOutputSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageStencilSource_SetOutputSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageStencilSource_SetOutputSpacing_s1(self, args);
    case 1:
      return PyvtkImageStencilSource_SetOutputSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputSpacing");
  return NULL;
}



static PyObject *
PyvtkImageStencilSource_GetOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetOutputSpacing() :
      op->vtkImageStencilSource::GetOutputSpacing());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilSource_SetOutputWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetOutputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageStencilSource::SetOutputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageStencilSource_SetOutputWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutputWholeExtent(temp0);
      }
    else
      {
      op->vtkImageStencilSource::SetOutputWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageStencilSource_SetOutputWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkImageStencilSource_SetOutputWholeExtent_s1(self, args);
    case 1:
      return PyvtkImageStencilSource_SetOutputWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputWholeExtent");
  return NULL;
}



static PyObject *
PyvtkImageStencilSource_GetOutputWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetOutputWholeExtent() :
      op->vtkImageStencilSource::GetOutputWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilSource_ReportReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  vtkGarbageCollector *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGarbageCollector"))
    {
    if (ap.IsBound())
      {
      op->ReportReferences(temp0);
      }
    else
      {
      op->vtkImageStencilSource::ReportReferences(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageStencilSource_Methods[] = {
  {(char*)"GetClassName", PyvtkImageStencilSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageStencilSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageStencilSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageStencilSource\nC++: vtkImageStencilSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageStencilSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageStencilSource\nC++: vtkImageStencilSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInformationInput", PyvtkImageStencilSource_SetInformationInput, METH_VARARGS,
   (char*)"V.SetInformationInput(vtkImageData)\nC++: virtual void SetInformationInput(vtkImageData *)\n\nSet a vtkImageData that has the Spacing, Origin, and WholeExtent\nthat will be used for the stencil.  This input should be set to\nthe image that you wish to apply the stencil to.  If you use this\nmethod, then any values set with the SetOutputSpacing,\nSetOutputOrigin, and SetOutputWholeExtent methods will be\nignored.\n"},
  {(char*)"GetInformationInput", PyvtkImageStencilSource_GetInformationInput, METH_VARARGS,
   (char*)"V.GetInformationInput() -> vtkImageData\nC++: vtkImageData *GetInformationInput()\n\nSet a vtkImageData that has the Spacing, Origin, and WholeExtent\nthat will be used for the stencil.  This input should be set to\nthe image that you wish to apply the stencil to.  If you use this\nmethod, then any values set with the SetOutputSpacing,\nSetOutputOrigin, and SetOutputWholeExtent methods will be\nignored.\n"},
  {(char*)"SetOutputOrigin", PyvtkImageStencilSource_SetOutputOrigin, METH_VARARGS,
   (char*)"V.SetOutputOrigin(float, float, float)\nC++: void SetOutputOrigin(double, double, double)\nV.SetOutputOrigin((float, float, float))\nC++: void SetOutputOrigin(double a[3])\n\n"},
  {(char*)"GetOutputOrigin", PyvtkImageStencilSource_GetOutputOrigin, METH_VARARGS,
   (char*)"V.GetOutputOrigin() -> (float, float, float)\nC++: double *GetOutputOrigin()\n\n"},
  {(char*)"SetOutputSpacing", PyvtkImageStencilSource_SetOutputSpacing, METH_VARARGS,
   (char*)"V.SetOutputSpacing(float, float, float)\nC++: void SetOutputSpacing(double, double, double)\nV.SetOutputSpacing((float, float, float))\nC++: void SetOutputSpacing(double a[3])\n\n"},
  {(char*)"GetOutputSpacing", PyvtkImageStencilSource_GetOutputSpacing, METH_VARARGS,
   (char*)"V.GetOutputSpacing() -> (float, float, float)\nC++: double *GetOutputSpacing()\n\n"},
  {(char*)"SetOutputWholeExtent", PyvtkImageStencilSource_SetOutputWholeExtent, METH_VARARGS,
   (char*)"V.SetOutputWholeExtent(int, int, int, int, int, int)\nC++: void SetOutputWholeExtent(int, int, int, int, int, int)\nV.SetOutputWholeExtent((int, int, int, int, int, int))\nC++: void SetOutputWholeExtent(int a[6])\n\n"},
  {(char*)"GetOutputWholeExtent", PyvtkImageStencilSource_GetOutputWholeExtent, METH_VARARGS,
   (char*)"V.GetOutputWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetOutputWholeExtent()\n\n"},
  {(char*)"ReportReferences", PyvtkImageStencilSource_ReportReferences, METH_VARARGS,
   (char*)"V.ReportReferences(vtkGarbageCollector)\nC++: virtual void ReportReferences(vtkGarbageCollector *)\n\nReport object referenced by instances of this class.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageStencilSource_StaticNew()
{
  return vtkImageStencilSource::New();
}

PyObject *PyVTKClass_vtkImageStencilSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageStencilSource_StaticNew,
    PyvtkImageStencilSource_Methods,
    "vtkImageStencilSource", modulename,
    NULL, NULL,
    PyvtkImageStencilSource_Doc(),
    PyVTKClass_vtkImageStencilAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageStencilSource_Doc()
{
  static const char *docstring[] = {
    "vtkImageStencilSource - generate an image stencil\n\n",
    "Superclass: vtkImageStencilAlgorithm\n\n",
    "vtkImageStencilSource is a superclass for filters that generate image\nstencils.  Given a clipping object such as a vtkImplicitFunction, it\nwill set up a list of clipping extents for each x-row through the\nimage data.  The extents for each x-row can be retrieved via the\nGetNextExtent() method after the extent lists have been built with\nthe BuildExtents() method.  For large images, using clipping ex",
    "tents\nis much more memory efficient (and slightly more time-efficient) than\nbuilding a mask.  This class can be subclassed to allow clipping with\nobjects other than vtkImplicitFunction.\n\nSee Also:\n\nvtkImplicitFunction vtkImageStencil vtkPolyDataToImageStencil\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageStencilSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageStencilSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageStencilSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

