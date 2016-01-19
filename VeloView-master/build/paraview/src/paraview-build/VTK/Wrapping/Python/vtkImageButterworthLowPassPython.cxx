// python wrapper for vtkImageButterworthLowPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageButterworthLowPass.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageButterworthLowPass(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageButterworthLowPassNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageButterworthLowPass_Doc();


static PyObject *
PyvtkImageButterworthLowPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageButterworthLowPass::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageButterworthLowPass::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageButterworthLowPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageButterworthLowPass::NewInstance());

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
PyvtkImageButterworthLowPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageButterworthLowPass *tempr = vtkImageButterworthLowPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_SetCutOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

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
      op->vtkImageButterworthLowPass::SetCutOff(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageButterworthLowPass_SetCutOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

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
      op->vtkImageButterworthLowPass::SetCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageButterworthLowPass_SetCutOff_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

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
      op->vtkImageButterworthLowPass::SetCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageButterworthLowPass_SetCutOff_Methods[] = {
  {NULL, PyvtkImageButterworthLowPass_SetCutOff_s2, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, PyvtkImageButterworthLowPass_SetCutOff_s3, METH_VARARGS,
   (char*)"@d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkImageButterworthLowPass_SetCutOff(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageButterworthLowPass_SetCutOff_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageButterworthLowPass_SetCutOff_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCutOff");
  return NULL;
}



static PyObject *
PyvtkImageButterworthLowPass_SetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

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
      op->vtkImageButterworthLowPass::SetXCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_SetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

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
      op->vtkImageButterworthLowPass::SetYCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_SetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

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
      op->vtkImageButterworthLowPass::SetZCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_GetCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCutOff() :
      op->vtkImageButterworthLowPass::GetCutOff());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_GetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetXCutOff() :
      op->vtkImageButterworthLowPass::GetXCutOff());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_GetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetYCutOff() :
      op->vtkImageButterworthLowPass::GetYCutOff());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_GetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetZCutOff() :
      op->vtkImageButterworthLowPass::GetZCutOff());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_SetOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrder(temp0);
      }
    else
      {
      op->vtkImageButterworthLowPass::SetOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_GetOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrder() :
      op->vtkImageButterworthLowPass::GetOrder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageButterworthLowPass_Methods[] = {
  {(char*)"GetClassName", PyvtkImageButterworthLowPass_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageButterworthLowPass_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageButterworthLowPass_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageButterworthLowPass\nC++: vtkImageButterworthLowPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageButterworthLowPass_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageButterworthLowPass\nC++: vtkImageButterworthLowPass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCutOff", PyvtkImageButterworthLowPass_SetCutOff, METH_VARARGS,
   (char*)"V.SetCutOff(float, float, float)\nC++: void SetCutOff(double, double, double)\nV.SetCutOff((float, float, float))\nC++: void SetCutOff(double a[3])\nV.SetCutOff(float)\nC++: void SetCutOff(double v)\n\n"},
  {(char*)"SetXCutOff", PyvtkImageButterworthLowPass_SetXCutOff, METH_VARARGS,
   (char*)"V.SetXCutOff(float)\nC++: void SetXCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"SetYCutOff", PyvtkImageButterworthLowPass_SetYCutOff, METH_VARARGS,
   (char*)"V.SetYCutOff(float)\nC++: void SetYCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"SetZCutOff", PyvtkImageButterworthLowPass_SetZCutOff, METH_VARARGS,
   (char*)"V.SetZCutOff(float)\nC++: void SetZCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"GetCutOff", PyvtkImageButterworthLowPass_GetCutOff, METH_VARARGS,
   (char*)"V.GetCutOff() -> (float, float, float)\nC++: double *GetCutOff()\n\n"},
  {(char*)"GetXCutOff", PyvtkImageButterworthLowPass_GetXCutOff, METH_VARARGS,
   (char*)"V.GetXCutOff() -> float\nC++: double GetXCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"GetYCutOff", PyvtkImageButterworthLowPass_GetYCutOff, METH_VARARGS,
   (char*)"V.GetYCutOff() -> float\nC++: double GetYCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"GetZCutOff", PyvtkImageButterworthLowPass_GetZCutOff, METH_VARARGS,
   (char*)"V.GetZCutOff() -> float\nC++: double GetZCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"SetOrder", PyvtkImageButterworthLowPass_SetOrder, METH_VARARGS,
   (char*)"V.SetOrder(int)\nC++: void SetOrder(int a)\n\nThe order determines sharpness of the cutoff curve.\n"},
  {(char*)"GetOrder", PyvtkImageButterworthLowPass_GetOrder, METH_VARARGS,
   (char*)"V.GetOrder() -> int\nC++: int GetOrder()\n\nThe order determines sharpness of the cutoff curve.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageButterworthLowPass_StaticNew()
{
  return vtkImageButterworthLowPass::New();
}

PyObject *PyVTKClass_vtkImageButterworthLowPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageButterworthLowPass_StaticNew,
    PyvtkImageButterworthLowPass_Methods,
    "vtkImageButterworthLowPass", modulename,
    NULL, NULL,
    PyvtkImageButterworthLowPass_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageButterworthLowPass_Doc()
{
  static const char *docstring[] = {
    "vtkImageButterworthLowPass - Frequency domain Low pass.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "This filter only works on an image after it has been converted to\nfrequency domain by a vtkImageFFT filter.  A vtkImageRFFT filter can\nbe used to convert the output back into the spatial domain.\nvtkImageButterworthLowPass  the high frequency components are\nattenuated.  Input and output are in doubles, with two components\n(complex numbers). out(i, j) = (1 + pow(CutOff/Freq(i,j), 2*Order));\n\nSee Als",
    "o:\n\nvtkImageButterworthHighPass vtkImageFFT vtkImageRFFT\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageButterworthLowPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageButterworthLowPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageButterworthLowPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

