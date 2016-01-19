// python wrapper for vtkImageClip
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageClip.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageClip(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageClipNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageClip_Doc();


static PyObject *
PyvtkImageClip_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageClip *op = static_cast<vtkImageClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageClip::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageClip_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageClip *op = static_cast<vtkImageClip *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageClip::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageClip_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageClip *op = static_cast<vtkImageClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageClip *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageClip::NewInstance());

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
PyvtkImageClip_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageClip *tempr = vtkImageClip::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageClip_SetOutputWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageClip *op = static_cast<vtkImageClip *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  vtkInformation *temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkInformation")))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetOutputWholeExtent(temp0, temp1);
      }
    else
      {
      op->vtkImageClip::SetOutputWholeExtent(temp0, temp1);
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
PyvtkImageClip_SetOutputWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageClip *op = static_cast<vtkImageClip *>(vp);

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
      op->vtkImageClip::SetOutputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageClip_SetOutputWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
      return PyvtkImageClip_SetOutputWholeExtent_s1(self, args);
    case 6:
      return PyvtkImageClip_SetOutputWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputWholeExtent");
  return NULL;
}



static PyObject *
PyvtkImageClip_GetOutputWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageClip *op = static_cast<vtkImageClip *>(vp);

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
      op->vtkImageClip::GetOutputWholeExtent(temp0);
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
PyvtkImageClip_GetOutputWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageClip *op = static_cast<vtkImageClip *>(vp);

  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetOutputWholeExtent() :
      op->vtkImageClip::GetOutputWholeExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageClip_GetOutputWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageClip_GetOutputWholeExtent_s1(self, args);
    case 0:
      return PyvtkImageClip_GetOutputWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputWholeExtent");
  return NULL;
}



static PyObject *
PyvtkImageClip_ResetOutputWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageClip *op = static_cast<vtkImageClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetOutputWholeExtent();
      }
    else
      {
      op->vtkImageClip::ResetOutputWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageClip_SetClipData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageClip *op = static_cast<vtkImageClip *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClipData(temp0);
      }
    else
      {
      op->vtkImageClip::SetClipData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageClip_GetClipData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageClip *op = static_cast<vtkImageClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetClipData() :
      op->vtkImageClip::GetClipData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageClip_ClipDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageClip *op = static_cast<vtkImageClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClipDataOn();
      }
    else
      {
      op->vtkImageClip::ClipDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageClip_ClipDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageClip *op = static_cast<vtkImageClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClipDataOff();
      }
    else
      {
      op->vtkImageClip::ClipDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageClip_Methods[] = {
  {(char*)"GetClassName", PyvtkImageClip_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageClip_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageClip_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageClip\nC++: vtkImageClip *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageClip_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageClip\nC++: vtkImageClip *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOutputWholeExtent", PyvtkImageClip_SetOutputWholeExtent, METH_VARARGS,
   (char*)"V.SetOutputWholeExtent([int, int, int, int, int, int],\n    vtkInformation)\nC++: void SetOutputWholeExtent(int extent[6],\n    vtkInformation *outInfo=0)\nV.SetOutputWholeExtent(int, int, int, int, int, int)\nC++: void SetOutputWholeExtent(int minX, int maxX, int minY,\n    int maxY, int minZ, int maxZ)\n\nThe whole extent of the output has to be set explicitly.\n"},
  {(char*)"GetOutputWholeExtent", PyvtkImageClip_GetOutputWholeExtent, METH_VARARGS,
   (char*)"V.GetOutputWholeExtent([int, int, int, int, int, int])\nC++: void GetOutputWholeExtent(int extent[6])\nV.GetOutputWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetOutputWholeExtent()\n\nThe whole extent of the output has to be set explicitly.\n"},
  {(char*)"ResetOutputWholeExtent", PyvtkImageClip_ResetOutputWholeExtent, METH_VARARGS,
   (char*)"V.ResetOutputWholeExtent()\nC++: void ResetOutputWholeExtent()\n\n"},
  {(char*)"SetClipData", PyvtkImageClip_SetClipData, METH_VARARGS,
   (char*)"V.SetClipData(int)\nC++: void SetClipData(int a)\n\nBy default, ClipData is off, and only the WholeExtent is\nmodified. the data's extent may actually be larger.  When this\nflag is on, the data extent will be no more than the\nOutputWholeExtent.\n"},
  {(char*)"GetClipData", PyvtkImageClip_GetClipData, METH_VARARGS,
   (char*)"V.GetClipData() -> int\nC++: int GetClipData()\n\nBy default, ClipData is off, and only the WholeExtent is\nmodified. the data's extent may actually be larger.  When this\nflag is on, the data extent will be no more than the\nOutputWholeExtent.\n"},
  {(char*)"ClipDataOn", PyvtkImageClip_ClipDataOn, METH_VARARGS,
   (char*)"V.ClipDataOn()\nC++: void ClipDataOn()\n\nBy default, ClipData is off, and only the WholeExtent is\nmodified. the data's extent may actually be larger.  When this\nflag is on, the data extent will be no more than the\nOutputWholeExtent.\n"},
  {(char*)"ClipDataOff", PyvtkImageClip_ClipDataOff, METH_VARARGS,
   (char*)"V.ClipDataOff()\nC++: void ClipDataOff()\n\nBy default, ClipData is off, and only the WholeExtent is\nmodified. the data's extent may actually be larger.  When this\nflag is on, the data extent will be no more than the\nOutputWholeExtent.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageClip_StaticNew()
{
  return vtkImageClip::New();
}

PyObject *PyVTKClass_vtkImageClipNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageClip_StaticNew,
    PyvtkImageClip_Methods,
    "vtkImageClip", modulename,
    NULL, NULL,
    PyvtkImageClip_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageClip_Doc()
{
  static const char *docstring[] = {
    "vtkImageClip - Reduces the image extent of the input.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageClip  will make an image smaller.  The output must have an\nimage extent which is the subset of the input.  The filter has two\nmodes of operation: 1: By default, the data is not copied in this\nfilter. Only the whole extent is modified. 2: If ClipDataOn is set,\nthen you will get no more that the clipped extent.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageClip(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageClipNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageClip", o) != 0)
    {
    Py_DECREF(o);
    }

}

