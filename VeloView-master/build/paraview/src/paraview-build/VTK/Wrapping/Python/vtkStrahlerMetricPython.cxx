// python wrapper for vtkStrahlerMetric
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStrahlerMetric.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStrahlerMetric(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStrahlerMetricNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAlgorithmNew
#endif

static const char **PyvtkStrahlerMetric_Doc();


static PyObject *
PyvtkStrahlerMetric_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStrahlerMetric::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStrahlerMetric::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStrahlerMetric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStrahlerMetric::NewInstance());

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
PyvtkStrahlerMetric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStrahlerMetric *tempr = vtkStrahlerMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_SetMetricArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMetricArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMetricArrayName(temp0);
      }
    else
      {
      op->vtkStrahlerMetric::SetMetricArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_SetNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalize(temp0);
      }
    else
      {
      op->vtkStrahlerMetric::SetNormalize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_GetNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNormalize() :
      op->vtkStrahlerMetric::GetNormalize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_NormalizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalizeOn();
      }
    else
      {
      op->vtkStrahlerMetric::NormalizeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_NormalizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalizeOff();
      }
    else
      {
      op->vtkStrahlerMetric::NormalizeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStrahlerMetric_GetMaxStrahler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxStrahler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStrahlerMetric *op = static_cast<vtkStrahlerMetric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    float tempr = (ap.IsBound() ?
      op->GetMaxStrahler() :
      op->vtkStrahlerMetric::GetMaxStrahler());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStrahlerMetric_Methods[] = {
  {(char*)"GetClassName", PyvtkStrahlerMetric_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStrahlerMetric_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStrahlerMetric_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStrahlerMetric\nC++: vtkStrahlerMetric *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStrahlerMetric_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStrahlerMetric\nC++: vtkStrahlerMetric *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMetricArrayName", PyvtkStrahlerMetric_SetMetricArrayName, METH_VARARGS,
   (char*)"V.SetMetricArrayName(string)\nC++: void SetMetricArrayName(char *)\n\nSet the name of the array in which the Strahler values will be\nstored within the output vertex data. Default is \"Strahler\"\n"},
  {(char*)"SetNormalize", PyvtkStrahlerMetric_SetNormalize, METH_VARARGS,
   (char*)"V.SetNormalize(int)\nC++: void SetNormalize(int a)\n\nSet/get setting of normalize flag.  If this is set, the Strahler\nvalues are scaled into the range [0..1]. Default is for\nnormalization to be OFF.\n"},
  {(char*)"GetNormalize", PyvtkStrahlerMetric_GetNormalize, METH_VARARGS,
   (char*)"V.GetNormalize() -> int\nC++: int GetNormalize()\n\nSet/get setting of normalize flag.  If this is set, the Strahler\nvalues are scaled into the range [0..1]. Default is for\nnormalization to be OFF.\n"},
  {(char*)"NormalizeOn", PyvtkStrahlerMetric_NormalizeOn, METH_VARARGS,
   (char*)"V.NormalizeOn()\nC++: void NormalizeOn()\n\nSet/get setting of normalize flag.  If this is set, the Strahler\nvalues are scaled into the range [0..1]. Default is for\nnormalization to be OFF.\n"},
  {(char*)"NormalizeOff", PyvtkStrahlerMetric_NormalizeOff, METH_VARARGS,
   (char*)"V.NormalizeOff()\nC++: void NormalizeOff()\n\nSet/get setting of normalize flag.  If this is set, the Strahler\nvalues are scaled into the range [0..1]. Default is for\nnormalization to be OFF.\n"},
  {(char*)"GetMaxStrahler", PyvtkStrahlerMetric_GetMaxStrahler, METH_VARARGS,
   (char*)"V.GetMaxStrahler() -> float\nC++: float GetMaxStrahler()\n\nGet the maximum strahler value for the tree.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStrahlerMetric_StaticNew()
{
  return vtkStrahlerMetric::New();
}

PyObject *PyVTKClass_vtkStrahlerMetricNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStrahlerMetric_StaticNew,
    PyvtkStrahlerMetric_Methods,
    "vtkStrahlerMetric", modulename,
    NULL, NULL,
    PyvtkStrahlerMetric_Doc(),
    PyVTKClass_vtkTreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkStrahlerMetric_Doc()
{
  static const char *docstring[] = {
    "vtkStrahlerMetric - compute Strahler metric for a tree\n\n",
    "Superclass: vtkTreeAlgorithm\n\n",
    "The Strahler metric is a value assigned to each vertex of a tree that\ncharacterizes the structural complexity of the sub-tree rooted at\nthat node.  The metric originated in the study of river systems, but\nhas been applied to other tree- structured systes,  Details of the\nmetric and the rationale for using it in infovis can be found in:\n\nTree Visualization and Navigation Clues for Information\nVisua",
    "lization, I. Herman, M. Delest, and G. Melancon, Computer\nGraphics Forum, Vol 17(2), Blackwell, 1998.\n\nThe input tree is copied to the output, but with a new array added to\nthe output vertex data.\n\nThanks:\n\nThanks to David Duke from the University of Leeds for providing this\nimplementation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStrahlerMetric(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStrahlerMetricNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStrahlerMetric", o) != 0)
    {
    Py_DECREF(o);
    }

}

