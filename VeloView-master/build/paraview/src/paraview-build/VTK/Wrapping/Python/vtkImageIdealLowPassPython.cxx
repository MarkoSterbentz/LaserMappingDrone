// python wrapper for vtkImageIdealLowPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageIdealLowPass.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageIdealLowPass(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageIdealLowPassNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageIdealLowPass_Doc();


static PyObject *
PyvtkImageIdealLowPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageIdealLowPass::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageIdealLowPass::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageIdealLowPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageIdealLowPass::NewInstance());

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
PyvtkImageIdealLowPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageIdealLowPass *tempr = vtkImageIdealLowPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_SetCutOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

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
      op->SetCutOff(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageIdealLowPass::SetCutOff(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageIdealLowPass_SetCutOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCutOff(temp0);
      }
    else
      {
      op->vtkImageIdealLowPass::SetCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageIdealLowPass_SetCutOff_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCutOff(temp0);
      }
    else
      {
      op->vtkImageIdealLowPass::SetCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageIdealLowPass_SetCutOff_Methods[] = {
  {NULL, PyvtkImageIdealLowPass_SetCutOff_s2, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, PyvtkImageIdealLowPass_SetCutOff_s3, METH_VARARGS,
   (char*)"@d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkImageIdealLowPass_SetCutOff(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageIdealLowPass_SetCutOff_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageIdealLowPass_SetCutOff_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCutOff");
  return NULL;
}



static PyObject *
PyvtkImageIdealLowPass_SetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXCutOff(temp0);
      }
    else
      {
      op->vtkImageIdealLowPass::SetXCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_SetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYCutOff(temp0);
      }
    else
      {
      op->vtkImageIdealLowPass::SetYCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_SetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZCutOff(temp0);
      }
    else
      {
      op->vtkImageIdealLowPass::SetZCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_GetCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCutOff() :
      op->vtkImageIdealLowPass::GetCutOff());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_GetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetXCutOff() :
      op->vtkImageIdealLowPass::GetXCutOff());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_GetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetYCutOff() :
      op->vtkImageIdealLowPass::GetYCutOff());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealLowPass_GetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealLowPass *op = static_cast<vtkImageIdealLowPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetZCutOff() :
      op->vtkImageIdealLowPass::GetZCutOff());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageIdealLowPass_Methods[] = {
  {(char*)"GetClassName", PyvtkImageIdealLowPass_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageIdealLowPass_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageIdealLowPass_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageIdealLowPass\nC++: vtkImageIdealLowPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageIdealLowPass_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageIdealLowPass\nC++: vtkImageIdealLowPass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCutOff", PyvtkImageIdealLowPass_SetCutOff, METH_VARARGS,
   (char*)"V.SetCutOff(float, float, float)\nC++: void SetCutOff(double, double, double)\nV.SetCutOff((float, float, float))\nC++: void SetCutOff(double a[3])\nV.SetCutOff(float)\nC++: void SetCutOff(double v)\n\n"},
  {(char*)"SetXCutOff", PyvtkImageIdealLowPass_SetXCutOff, METH_VARARGS,
   (char*)"V.SetXCutOff(float)\nC++: void SetXCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"SetYCutOff", PyvtkImageIdealLowPass_SetYCutOff, METH_VARARGS,
   (char*)"V.SetYCutOff(float)\nC++: void SetYCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"SetZCutOff", PyvtkImageIdealLowPass_SetZCutOff, METH_VARARGS,
   (char*)"V.SetZCutOff(float)\nC++: void SetZCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"GetCutOff", PyvtkImageIdealLowPass_GetCutOff, METH_VARARGS,
   (char*)"V.GetCutOff() -> (float, float, float)\nC++: double *GetCutOff()\n\n"},
  {(char*)"GetXCutOff", PyvtkImageIdealLowPass_GetXCutOff, METH_VARARGS,
   (char*)"V.GetXCutOff() -> float\nC++: double GetXCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"GetYCutOff", PyvtkImageIdealLowPass_GetYCutOff, METH_VARARGS,
   (char*)"V.GetYCutOff() -> float\nC++: double GetYCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"GetZCutOff", PyvtkImageIdealLowPass_GetZCutOff, METH_VARARGS,
   (char*)"V.GetZCutOff() -> float\nC++: double GetZCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageIdealLowPass_StaticNew()
{
  return vtkImageIdealLowPass::New();
}

PyObject *PyVTKClass_vtkImageIdealLowPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageIdealLowPass_StaticNew,
    PyvtkImageIdealLowPass_Methods,
    "vtkImageIdealLowPass", modulename,
    NULL, NULL,
    PyvtkImageIdealLowPass_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageIdealLowPass_Doc()
{
  static const char *docstring[] = {
    "vtkImageIdealLowPass - Simple frequency domain band pass.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "This filter only works on an image after it has been converted to\nfrequency domain by a vtkImageFFT filter.  A vtkImageRFFT filter can\nbe used to convert the output back into the spatial domain.\nvtkImageIdealLowPass just sets a portion of the image to zero.  The\nresult is an image with a lot of ringing.  Input and Output must be\ndoubles. Dimensionality is set when the axes are set.  Defaults to 2D",
    "\non X and Y axes.\n\nSee Also:\n\nvtkImageButterworthLowPass vtkImageIdealHighPass vtkImageFFT\nvtkImageRFFT\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageIdealLowPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageIdealLowPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageIdealLowPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

