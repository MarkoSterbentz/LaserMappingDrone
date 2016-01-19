// python wrapper for vtkImageFlip
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageFlip.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageFlip(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageFlipNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageResliceNew
extern "C" { PyObject *PyVTKClass_vtkImageResliceNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageResliceNew
#endif

static const char **PyvtkImageFlip_Doc();


static PyObject *
PyvtkImageFlip_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageFlip::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFlip_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageFlip::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFlip_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageFlip *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageFlip::NewInstance());

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
PyvtkImageFlip_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageFlip *tempr = vtkImageFlip::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFlip_SetFilteredAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilteredAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilteredAxis(temp0);
      }
    else
      {
      op->vtkImageFlip::SetFilteredAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageFlip_GetFilteredAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilteredAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFilteredAxis() :
      op->vtkImageFlip::GetFilteredAxis());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFlip_SetFlipAboutOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipAboutOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlipAboutOrigin(temp0);
      }
    else
      {
      op->vtkImageFlip::SetFlipAboutOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageFlip_GetFlipAboutOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipAboutOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFlipAboutOrigin() :
      op->vtkImageFlip::GetFlipAboutOrigin());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFlip_FlipAboutOriginOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipAboutOriginOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipAboutOriginOn();
      }
    else
      {
      op->vtkImageFlip::FlipAboutOriginOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageFlip_FlipAboutOriginOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipAboutOriginOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipAboutOriginOff();
      }
    else
      {
      op->vtkImageFlip::FlipAboutOriginOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageFlip_SetFilteredAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilteredAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilteredAxes(temp0);
      }
    else
      {
      op->vtkImageFlip::SetFilteredAxes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageFlip_GetFilteredAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilteredAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFilteredAxes() :
      op->vtkImageFlip::GetFilteredAxes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFlip_SetPreserveImageExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveImageExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreserveImageExtent(temp0);
      }
    else
      {
      op->vtkImageFlip::SetPreserveImageExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageFlip_GetPreserveImageExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveImageExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPreserveImageExtent() :
      op->vtkImageFlip::GetPreserveImageExtent());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFlip_PreserveImageExtentOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveImageExtentOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreserveImageExtentOn();
      }
    else
      {
      op->vtkImageFlip::PreserveImageExtentOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageFlip_PreserveImageExtentOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveImageExtentOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreserveImageExtentOff();
      }
    else
      {
      op->vtkImageFlip::PreserveImageExtentOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageFlip_Methods[] = {
  {(char*)"GetClassName", PyvtkImageFlip_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageFlip_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageFlip_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageFlip\nC++: vtkImageFlip *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageFlip_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageFlip\nC++: vtkImageFlip *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFilteredAxis", PyvtkImageFlip_SetFilteredAxis, METH_VARARGS,
   (char*)"V.SetFilteredAxis(int)\nC++: void SetFilteredAxis(int a)\n\nSpecify which axis will be flipped.  This must be an integer\nbetween 0 (for x) and 2 (for z). Initial value is 0.\n"},
  {(char*)"GetFilteredAxis", PyvtkImageFlip_GetFilteredAxis, METH_VARARGS,
   (char*)"V.GetFilteredAxis() -> int\nC++: int GetFilteredAxis()\n\nSpecify which axis will be flipped.  This must be an integer\nbetween 0 (for x) and 2 (for z). Initial value is 0.\n"},
  {(char*)"SetFlipAboutOrigin", PyvtkImageFlip_SetFlipAboutOrigin, METH_VARARGS,
   (char*)"V.SetFlipAboutOrigin(int)\nC++: void SetFlipAboutOrigin(int a)\n\nBy default the image will be flipped about its center, and the\nOrigin, Spacing and Extent of the output will be identical to the\ninput.  However, if you have a coordinate system associated with\nthe image and you want to use the flip to convert +ve values\nalong one axis to -ve values (and vice versa) then you actually\nwant to flip the image about coordinate (0,0,0) instead of about\nthe center of the image.  This method will adjust the Origin of\nthe output such that the flip occurs about (0,0,0).  Note that\nthis method only changes the Origin (and hence the coordinate\nsystem) the output data: the actual pixel values are the same\nwhether or not this method is used.  Also note that the Origin in\nthis method name refers to (0,0,0) in the coordinate system\nassociated with the image, it does not refer to the Origin ivar\nthat is associated with a vtkImageData.\n"},
  {(char*)"GetFlipAboutOrigin", PyvtkImageFlip_GetFlipAboutOrigin, METH_VARARGS,
   (char*)"V.GetFlipAboutOrigin() -> int\nC++: int GetFlipAboutOrigin()\n\nBy default the image will be flipped about its center, and the\nOrigin, Spacing and Extent of the output will be identical to the\ninput.  However, if you have a coordinate system associated with\nthe image and you want to use the flip to convert +ve values\nalong one axis to -ve values (and vice versa) then you actually\nwant to flip the image about coordinate (0,0,0) instead of about\nthe center of the image.  This method will adjust the Origin of\nthe output such that the flip occurs about (0,0,0).  Note that\nthis method only changes the Origin (and hence the coordinate\nsystem) the output data: the actual pixel values are the same\nwhether or not this method is used.  Also note that the Origin in\nthis method name refers to (0,0,0) in the coordinate system\nassociated with the image, it does not refer to the Origin ivar\nthat is associated with a vtkImageData.\n"},
  {(char*)"FlipAboutOriginOn", PyvtkImageFlip_FlipAboutOriginOn, METH_VARARGS,
   (char*)"V.FlipAboutOriginOn()\nC++: void FlipAboutOriginOn()\n\nBy default the image will be flipped about its center, and the\nOrigin, Spacing and Extent of the output will be identical to the\ninput.  However, if you have a coordinate system associated with\nthe image and you want to use the flip to convert +ve values\nalong one axis to -ve values (and vice versa) then you actually\nwant to flip the image about coordinate (0,0,0) instead of about\nthe center of the image.  This method will adjust the Origin of\nthe output such that the flip occurs about (0,0,0).  Note that\nthis method only changes the Origin (and hence the coordinate\nsystem) the output data: the actual pixel values are the same\nwhether or not this method is used.  Also note that the Origin in\nthis method name refers to (0,0,0) in the coordinate system\nassociated with the image, it does not refer to the Origin ivar\nthat is associated with a vtkImageData.\n"},
  {(char*)"FlipAboutOriginOff", PyvtkImageFlip_FlipAboutOriginOff, METH_VARARGS,
   (char*)"V.FlipAboutOriginOff()\nC++: void FlipAboutOriginOff()\n\nBy default the image will be flipped about its center, and the\nOrigin, Spacing and Extent of the output will be identical to the\ninput.  However, if you have a coordinate system associated with\nthe image and you want to use the flip to convert +ve values\nalong one axis to -ve values (and vice versa) then you actually\nwant to flip the image about coordinate (0,0,0) instead of about\nthe center of the image.  This method will adjust the Origin of\nthe output such that the flip occurs about (0,0,0).  Note that\nthis method only changes the Origin (and hence the coordinate\nsystem) the output data: the actual pixel values are the same\nwhether or not this method is used.  Also note that the Origin in\nthis method name refers to (0,0,0) in the coordinate system\nassociated with the image, it does not refer to the Origin ivar\nthat is associated with a vtkImageData.\n"},
  {(char*)"SetFilteredAxes", PyvtkImageFlip_SetFilteredAxes, METH_VARARGS,
   (char*)"V.SetFilteredAxes(int)\nC++: void SetFilteredAxes(int axis)\n\nKeep the mis-named Axes variations around for compatibility with\nold scripts. Axis is singular, not plural...\n"},
  {(char*)"GetFilteredAxes", PyvtkImageFlip_GetFilteredAxes, METH_VARARGS,
   (char*)"V.GetFilteredAxes() -> int\nC++: int GetFilteredAxes()\n\nKeep the mis-named Axes variations around for compatibility with\nold scripts. Axis is singular, not plural...\n"},
  {(char*)"SetPreserveImageExtent", PyvtkImageFlip_SetPreserveImageExtent, METH_VARARGS,
   (char*)"V.SetPreserveImageExtent(int)\nC++: void SetPreserveImageExtent(int a)\n\nPreserveImageExtentOff wasn't covered by test scripts and its\nimplementation was broken.  It is deprecated now and it has no\neffect (i.e. the ImageExtent is always preserved).\n"},
  {(char*)"GetPreserveImageExtent", PyvtkImageFlip_GetPreserveImageExtent, METH_VARARGS,
   (char*)"V.GetPreserveImageExtent() -> int\nC++: int GetPreserveImageExtent()\n\nPreserveImageExtentOff wasn't covered by test scripts and its\nimplementation was broken.  It is deprecated now and it has no\neffect (i.e. the ImageExtent is always preserved).\n"},
  {(char*)"PreserveImageExtentOn", PyvtkImageFlip_PreserveImageExtentOn, METH_VARARGS,
   (char*)"V.PreserveImageExtentOn()\nC++: void PreserveImageExtentOn()\n\nPreserveImageExtentOff wasn't covered by test scripts and its\nimplementation was broken.  It is deprecated now and it has no\neffect (i.e. the ImageExtent is always preserved).\n"},
  {(char*)"PreserveImageExtentOff", PyvtkImageFlip_PreserveImageExtentOff, METH_VARARGS,
   (char*)"V.PreserveImageExtentOff()\nC++: void PreserveImageExtentOff()\n\nPreserveImageExtentOff wasn't covered by test scripts and its\nimplementation was broken.  It is deprecated now and it has no\neffect (i.e. the ImageExtent is always preserved).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageFlip_StaticNew()
{
  return vtkImageFlip::New();
}

PyObject *PyVTKClass_vtkImageFlipNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageFlip_StaticNew,
    PyvtkImageFlip_Methods,
    "vtkImageFlip", modulename,
    NULL, NULL,
    PyvtkImageFlip_Doc(),
    PyVTKClass_vtkImageResliceNew(modulename));
  return cls;
}

const char **PyvtkImageFlip_Doc()
{
  static const char *docstring[] = {
    "vtkImageFlip - This flips an axis of an image. Right becomes left ...\n\n",
    "Superclass: vtkImageReslice\n\n",
    "vtkImageFlip will reflect the data along the filtered axis.  This\nfilter is actually a thin wrapper around vtkImageReslice.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageFlip(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageFlipNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageFlip", o) != 0)
    {
    Py_DECREF(o);
    }

}

