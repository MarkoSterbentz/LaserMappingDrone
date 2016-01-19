// python wrapper for vtkImagePadFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImagePadFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImagePadFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImagePadFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImagePadFilter_Doc();


static PyObject *
PyvtkImagePadFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePadFilter *op = static_cast<vtkImagePadFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImagePadFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePadFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePadFilter *op = static_cast<vtkImagePadFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImagePadFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePadFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePadFilter *op = static_cast<vtkImagePadFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImagePadFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImagePadFilter::NewInstance());

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
PyvtkImagePadFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImagePadFilter *tempr = vtkImagePadFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePadFilter_SetOutputWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePadFilter *op = static_cast<vtkImagePadFilter *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetOutputWholeExtent(temp0);
      }
    else
      {
      op->vtkImagePadFilter::SetOutputWholeExtent(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImagePadFilter_SetOutputWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePadFilter *op = static_cast<vtkImagePadFilter *>(vp);

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
      op->vtkImagePadFilter::SetOutputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImagePadFilter_SetOutputWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImagePadFilter_SetOutputWholeExtent_s1(self, args);
    case 6:
      return PyvtkImagePadFilter_SetOutputWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputWholeExtent");
  return NULL;
}



static PyObject *
PyvtkImagePadFilter_GetOutputWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePadFilter *op = static_cast<vtkImagePadFilter *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetOutputWholeExtent(temp0);
      }
    else
      {
      op->vtkImagePadFilter::GetOutputWholeExtent(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImagePadFilter_GetOutputWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePadFilter *op = static_cast<vtkImagePadFilter *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetOutputWholeExtent() :
      op->vtkImagePadFilter::GetOutputWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImagePadFilter_GetOutputWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImagePadFilter_GetOutputWholeExtent_s1(self, args);
    case 0:
      return PyvtkImagePadFilter_GetOutputWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputWholeExtent");
  return NULL;
}



static PyObject *
PyvtkImagePadFilter_SetOutputNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePadFilter *op = static_cast<vtkImagePadFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputNumberOfScalarComponents(temp0);
      }
    else
      {
      op->vtkImagePadFilter::SetOutputNumberOfScalarComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePadFilter_GetOutputNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePadFilter *op = static_cast<vtkImagePadFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputNumberOfScalarComponents() :
      op->vtkImagePadFilter::GetOutputNumberOfScalarComponents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImagePadFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImagePadFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImagePadFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImagePadFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImagePadFilter\nC++: vtkImagePadFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImagePadFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImagePadFilter\nC++: vtkImagePadFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutputWholeExtent", PyvtkImagePadFilter_SetOutputWholeExtent, METH_VARARGS,
   (char*)"V.SetOutputWholeExtent([int, int, int, int, int, int])\nC++: void SetOutputWholeExtent(int extent[6])\nV.SetOutputWholeExtent(int, int, int, int, int, int)\nC++: void SetOutputWholeExtent(int minX, int maxX, int minY,\n    int maxY, int minZ, int maxZ)\n\nThe image extent of the output has to be set explicitly.\n"},
  {(char*)"GetOutputWholeExtent", PyvtkImagePadFilter_GetOutputWholeExtent, METH_VARARGS,
   (char*)"V.GetOutputWholeExtent([int, int, int, int, int, int])\nC++: void GetOutputWholeExtent(int extent[6])\nV.GetOutputWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetOutputWholeExtent()\n\nThe image extent of the output has to be set explicitly.\n"},
  {(char*)"SetOutputNumberOfScalarComponents", PyvtkImagePadFilter_SetOutputNumberOfScalarComponents, METH_VARARGS,
   (char*)"V.SetOutputNumberOfScalarComponents(int)\nC++: void SetOutputNumberOfScalarComponents(int a)\n\nSet/Get the number of output scalar components.\n"},
  {(char*)"GetOutputNumberOfScalarComponents", PyvtkImagePadFilter_GetOutputNumberOfScalarComponents, METH_VARARGS,
   (char*)"V.GetOutputNumberOfScalarComponents() -> int\nC++: int GetOutputNumberOfScalarComponents()\n\nSet/Get the number of output scalar components.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImagePadFilter_StaticNew()
{
  return vtkImagePadFilter::New();
}

PyObject *PyVTKClass_vtkImagePadFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImagePadFilter_StaticNew,
    PyvtkImagePadFilter_Methods,
    "vtkImagePadFilter", modulename,
    NULL, NULL,
    PyvtkImagePadFilter_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImagePadFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImagePadFilter - Super class for filters that fill in extra pixels.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImagePadFilter Changes the image extent of an image.  If the image\nextent is larger than the input image extent, the extra pixels are\nfilled by an algorithm determined by the subclass. The image extent\nof the output has to be specified.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImagePadFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImagePadFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImagePadFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

