// python wrapper for vtkDistancePolyDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDistancePolyDataFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDistancePolyDataFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDistancePolyDataFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkDistancePolyDataFilter_Doc();


static PyObject *
PyvtkDistancePolyDataFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDistancePolyDataFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDistancePolyDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDistancePolyDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDistancePolyDataFilter::NewInstance());

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
PyvtkDistancePolyDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDistancePolyDataFilter *tempr = vtkDistancePolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_SetSignedDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSignedDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSignedDistance(temp0);
      }
    else
      {
      op->vtkDistancePolyDataFilter::SetSignedDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_GetSignedDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSignedDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSignedDistance() :
      op->vtkDistancePolyDataFilter::GetSignedDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_SignedDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SignedDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SignedDistanceOn();
      }
    else
      {
      op->vtkDistancePolyDataFilter::SignedDistanceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_SignedDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SignedDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SignedDistanceOff();
      }
    else
      {
      op->vtkDistancePolyDataFilter::SignedDistanceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_SetNegateDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNegateDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNegateDistance(temp0);
      }
    else
      {
      op->vtkDistancePolyDataFilter::SetNegateDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_GetNegateDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNegateDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNegateDistance() :
      op->vtkDistancePolyDataFilter::GetNegateDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_NegateDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NegateDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NegateDistanceOn();
      }
    else
      {
      op->vtkDistancePolyDataFilter::NegateDistanceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_NegateDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NegateDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NegateDistanceOff();
      }
    else
      {
      op->vtkDistancePolyDataFilter::NegateDistanceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_SetComputeSecondDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeSecondDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeSecondDistance(temp0);
      }
    else
      {
      op->vtkDistancePolyDataFilter::SetComputeSecondDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_GetComputeSecondDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeSecondDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeSecondDistance() :
      op->vtkDistancePolyDataFilter::GetComputeSecondDistance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_ComputeSecondDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSecondDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeSecondDistanceOn();
      }
    else
      {
      op->vtkDistancePolyDataFilter::ComputeSecondDistanceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_ComputeSecondDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSecondDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeSecondDistanceOff();
      }
    else
      {
      op->vtkDistancePolyDataFilter::ComputeSecondDistanceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_GetSecondDistanceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondDistanceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSecondDistanceOutput() :
      op->vtkDistancePolyDataFilter::GetSecondDistanceOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDistancePolyDataFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkDistancePolyDataFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDistancePolyDataFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDistancePolyDataFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDistancePolyDataFilter\nC++: vtkDistancePolyDataFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDistancePolyDataFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDistancePolyDataFilter\nC++: vtkDistancePolyDataFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSignedDistance", PyvtkDistancePolyDataFilter_SetSignedDistance, METH_VARARGS,
   (char*)"V.SetSignedDistance(int)\nC++: void SetSignedDistance(int a)\n\nEnable/disable computation of the signed distance between the\nfirst poly data and the second poly data. Defaults to on.\n"},
  {(char*)"GetSignedDistance", PyvtkDistancePolyDataFilter_GetSignedDistance, METH_VARARGS,
   (char*)"V.GetSignedDistance() -> int\nC++: int GetSignedDistance()\n\nEnable/disable computation of the signed distance between the\nfirst poly data and the second poly data. Defaults to on.\n"},
  {(char*)"SignedDistanceOn", PyvtkDistancePolyDataFilter_SignedDistanceOn, METH_VARARGS,
   (char*)"V.SignedDistanceOn()\nC++: void SignedDistanceOn()\n\nEnable/disable computation of the signed distance between the\nfirst poly data and the second poly data. Defaults to on.\n"},
  {(char*)"SignedDistanceOff", PyvtkDistancePolyDataFilter_SignedDistanceOff, METH_VARARGS,
   (char*)"V.SignedDistanceOff()\nC++: void SignedDistanceOff()\n\nEnable/disable computation of the signed distance between the\nfirst poly data and the second poly data. Defaults to on.\n"},
  {(char*)"SetNegateDistance", PyvtkDistancePolyDataFilter_SetNegateDistance, METH_VARARGS,
   (char*)"V.SetNegateDistance(int)\nC++: void SetNegateDistance(int a)\n\nEnable/disable negation of the distance values. Defaults to off.\nHas no effect if SignedDistance is off.\n"},
  {(char*)"GetNegateDistance", PyvtkDistancePolyDataFilter_GetNegateDistance, METH_VARARGS,
   (char*)"V.GetNegateDistance() -> int\nC++: int GetNegateDistance()\n\nEnable/disable negation of the distance values. Defaults to off.\nHas no effect if SignedDistance is off.\n"},
  {(char*)"NegateDistanceOn", PyvtkDistancePolyDataFilter_NegateDistanceOn, METH_VARARGS,
   (char*)"V.NegateDistanceOn()\nC++: void NegateDistanceOn()\n\nEnable/disable negation of the distance values. Defaults to off.\nHas no effect if SignedDistance is off.\n"},
  {(char*)"NegateDistanceOff", PyvtkDistancePolyDataFilter_NegateDistanceOff, METH_VARARGS,
   (char*)"V.NegateDistanceOff()\nC++: void NegateDistanceOff()\n\nEnable/disable negation of the distance values. Defaults to off.\nHas no effect if SignedDistance is off.\n"},
  {(char*)"SetComputeSecondDistance", PyvtkDistancePolyDataFilter_SetComputeSecondDistance, METH_VARARGS,
   (char*)"V.SetComputeSecondDistance(int)\nC++: void SetComputeSecondDistance(int a)\n\nEnable/disable computation of a second output poly data with the\ndistance from the first poly data at each point. Defaults to on.\n"},
  {(char*)"GetComputeSecondDistance", PyvtkDistancePolyDataFilter_GetComputeSecondDistance, METH_VARARGS,
   (char*)"V.GetComputeSecondDistance() -> int\nC++: int GetComputeSecondDistance()\n\nEnable/disable computation of a second output poly data with the\ndistance from the first poly data at each point. Defaults to on.\n"},
  {(char*)"ComputeSecondDistanceOn", PyvtkDistancePolyDataFilter_ComputeSecondDistanceOn, METH_VARARGS,
   (char*)"V.ComputeSecondDistanceOn()\nC++: void ComputeSecondDistanceOn()\n\nEnable/disable computation of a second output poly data with the\ndistance from the first poly data at each point. Defaults to on.\n"},
  {(char*)"ComputeSecondDistanceOff", PyvtkDistancePolyDataFilter_ComputeSecondDistanceOff, METH_VARARGS,
   (char*)"V.ComputeSecondDistanceOff()\nC++: void ComputeSecondDistanceOff()\n\nEnable/disable computation of a second output poly data with the\ndistance from the first poly data at each point. Defaults to on.\n"},
  {(char*)"GetSecondDistanceOutput", PyvtkDistancePolyDataFilter_GetSecondDistanceOutput, METH_VARARGS,
   (char*)"V.GetSecondDistanceOutput() -> vtkPolyData\nC++: vtkPolyData *GetSecondDistanceOutput()\n\nGet the second output, which is a copy of the second input with\nan additional distance scalar field. Note this will return a\nvalid data object only after this->Update() is called.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDistancePolyDataFilter_StaticNew()
{
  return vtkDistancePolyDataFilter::New();
}

PyObject *PyVTKClass_vtkDistancePolyDataFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDistancePolyDataFilter_StaticNew,
    PyvtkDistancePolyDataFilter_Methods,
    "vtkDistancePolyDataFilter", modulename,
    NULL, NULL,
    PyvtkDistancePolyDataFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDistancePolyDataFilter_Doc()
{
  static const char *docstring[] = {
    "vtkDistancePolyDataFilter\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "Computes the signed distance from one vtkPolyData to another. The\nsigned distance to the second input is computed at every point in the\nfirst input using vtkImplicitPolyDataDistance. Optionally, the signed\ndistance to the first input at every point in the second input can be\ncomputed. This may be enabled by calling ComputeSecondDistanceOn().\n\nIf the signed distance is not desired, the unsigned dis",
    "tance can be\ncomputed by calling SignedDistanceOff(). The signed distance field\nmay be negated by calling NegateDistanceOn();\n\nThis code was contributed in the VTK Journal paper: \"Boolean Operations on Surfaces in VTK Without External\nLibraries\" by Cory Quammen, Chris Weigle C., Russ Taylor\nhttp://hdl.handle.net/10380/3262\nhttp://www.midasjournal.org/browse/publication/797\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDistancePolyDataFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDistancePolyDataFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDistancePolyDataFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

