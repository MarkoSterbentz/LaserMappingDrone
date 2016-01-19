// python wrapper for vtkImageButterworthHighPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageButterworthHighPass.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageButterworthHighPass(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageButterworthHighPassNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageButterworthHighPass_Doc();


static PyObject *
PyvtkImageButterworthHighPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageButterworthHighPass::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageButterworthHighPass::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageButterworthHighPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageButterworthHighPass::NewInstance());

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
PyvtkImageButterworthHighPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageButterworthHighPass *tempr = vtkImageButterworthHighPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_SetCutOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

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
      op->vtkImageButterworthHighPass::SetCutOff(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageButterworthHighPass_SetCutOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

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
      op->vtkImageButterworthHighPass::SetCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageButterworthHighPass_SetCutOff_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

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
      op->vtkImageButterworthHighPass::SetCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageButterworthHighPass_SetCutOff_Methods[] = {
  {NULL, PyvtkImageButterworthHighPass_SetCutOff_s2, METH_VARARGS,
   (char*)"@O *d"},
  {NULL, PyvtkImageButterworthHighPass_SetCutOff_s3, METH_VARARGS,
   (char*)"@d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkImageButterworthHighPass_SetCutOff(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageButterworthHighPass_SetCutOff_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageButterworthHighPass_SetCutOff_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCutOff");
  return NULL;
}



static PyObject *
PyvtkImageButterworthHighPass_SetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

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
      op->vtkImageButterworthHighPass::SetXCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_SetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

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
      op->vtkImageButterworthHighPass::SetYCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_SetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

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
      op->vtkImageButterworthHighPass::SetZCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_GetCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetCutOff() :
      op->vtkImageButterworthHighPass::GetCutOff());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_GetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetXCutOff() :
      op->vtkImageButterworthHighPass::GetXCutOff());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_GetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetYCutOff() :
      op->vtkImageButterworthHighPass::GetYCutOff());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_GetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetZCutOff() :
      op->vtkImageButterworthHighPass::GetZCutOff());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_SetOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

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
      op->vtkImageButterworthHighPass::SetOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_GetOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrder() :
      op->vtkImageButterworthHighPass::GetOrder());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageButterworthHighPass_Methods[] = {
  {(char*)"GetClassName", PyvtkImageButterworthHighPass_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageButterworthHighPass_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageButterworthHighPass_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageButterworthHighPass\nC++: vtkImageButterworthHighPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageButterworthHighPass_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageButterworthHighPass\nC++: vtkImageButterworthHighPass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCutOff", PyvtkImageButterworthHighPass_SetCutOff, METH_VARARGS,
   (char*)"V.SetCutOff(float, float, float)\nC++: void SetCutOff(double, double, double)\nV.SetCutOff((float, float, float))\nC++: void SetCutOff(double a[3])\nV.SetCutOff(float)\nC++: void SetCutOff(double v)\n\n"},
  {(char*)"SetXCutOff", PyvtkImageButterworthHighPass_SetXCutOff, METH_VARARGS,
   (char*)"V.SetXCutOff(float)\nC++: void SetXCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"SetYCutOff", PyvtkImageButterworthHighPass_SetYCutOff, METH_VARARGS,
   (char*)"V.SetYCutOff(float)\nC++: void SetYCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"SetZCutOff", PyvtkImageButterworthHighPass_SetZCutOff, METH_VARARGS,
   (char*)"V.SetZCutOff(float)\nC++: void SetZCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"GetCutOff", PyvtkImageButterworthHighPass_GetCutOff, METH_VARARGS,
   (char*)"V.GetCutOff() -> (float, float, float)\nC++: double *GetCutOff()\n\n"},
  {(char*)"GetXCutOff", PyvtkImageButterworthHighPass_GetXCutOff, METH_VARARGS,
   (char*)"V.GetXCutOff() -> float\nC++: double GetXCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"GetYCutOff", PyvtkImageButterworthHighPass_GetYCutOff, METH_VARARGS,
   (char*)"V.GetYCutOff() -> float\nC++: double GetYCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"GetZCutOff", PyvtkImageButterworthHighPass_GetZCutOff, METH_VARARGS,
   (char*)"V.GetZCutOff() -> float\nC++: double GetZCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"SetOrder", PyvtkImageButterworthHighPass_SetOrder, METH_VARARGS,
   (char*)"V.SetOrder(int)\nC++: void SetOrder(int a)\n\nThe order determines sharpness of the cutoff curve.\n"},
  {(char*)"GetOrder", PyvtkImageButterworthHighPass_GetOrder, METH_VARARGS,
   (char*)"V.GetOrder() -> int\nC++: int GetOrder()\n\nThe order determines sharpness of the cutoff curve.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageButterworthHighPass_StaticNew()
{
  return vtkImageButterworthHighPass::New();
}

PyObject *PyVTKClass_vtkImageButterworthHighPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageButterworthHighPass_StaticNew,
    PyvtkImageButterworthHighPass_Methods,
    "vtkImageButterworthHighPass", modulename,
    NULL, NULL,
    PyvtkImageButterworthHighPass_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageButterworthHighPass_Doc()
{
  static const char *docstring[] = {
    "vtkImageButterworthHighPass - Frequency domain high pass.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "This filter only works on an image after it has been converted to\nfrequency domain by a vtkImageFFT filter.  A vtkImageRFFT filter can\nbe used to convert the output back into the spatial domain.\nvtkImageButterworthHighPass  the frequency components around 0 are\nattenuated.  Input and output are in doubles, with two components\n(complex numbers). out(i, j) = 1 / (1 + pow(CutOff/Freq(i,j),\n2*Order));",
    "\n\nSee Also:\n\nvtkImageButterworthLowPass\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageButterworthHighPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageButterworthHighPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageButterworthHighPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

