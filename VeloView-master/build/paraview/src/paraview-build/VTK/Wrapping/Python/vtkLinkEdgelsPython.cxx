// python wrapper for vtkLinkEdgels
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLinkEdgels.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLinkEdgels(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLinkEdgelsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkLinkEdgels_Doc();


static PyObject *
PyvtkLinkEdgels_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLinkEdgels::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinkEdgels_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLinkEdgels::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinkEdgels_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLinkEdgels *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLinkEdgels::NewInstance());

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
PyvtkLinkEdgels_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLinkEdgels *tempr = vtkLinkEdgels::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinkEdgels_SetLinkThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinkThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLinkThreshold(temp0);
      }
    else
      {
      op->vtkLinkEdgels::SetLinkThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLinkEdgels_GetLinkThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetLinkThreshold() :
      op->vtkLinkEdgels::GetLinkThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinkEdgels_SetPhiThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPhiThreshold(temp0);
      }
    else
      {
      op->vtkLinkEdgels::SetPhiThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLinkEdgels_GetPhiThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetPhiThreshold() :
      op->vtkLinkEdgels::GetPhiThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinkEdgels_SetGradientThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGradientThreshold(temp0);
      }
    else
      {
      op->vtkLinkEdgels::SetGradientThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLinkEdgels_GetGradientThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinkEdgels *op = static_cast<vtkLinkEdgels *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetGradientThreshold() :
      op->vtkLinkEdgels::GetGradientThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLinkEdgels_Methods[] = {
  {(char*)"GetClassName", PyvtkLinkEdgels_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLinkEdgels_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLinkEdgels_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLinkEdgels\nC++: vtkLinkEdgels *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLinkEdgels_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLinkEdgels\nC++: vtkLinkEdgels *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLinkThreshold", PyvtkLinkEdgels_SetLinkThreshold, METH_VARARGS,
   (char*)"V.SetLinkThreshold(float)\nC++: void SetLinkThreshold(double a)\n\nSet/Get the threshold for Phi vs. Alpha link thresholding.\n"},
  {(char*)"GetLinkThreshold", PyvtkLinkEdgels_GetLinkThreshold, METH_VARARGS,
   (char*)"V.GetLinkThreshold() -> float\nC++: double GetLinkThreshold()\n\nSet/Get the threshold for Phi vs. Alpha link thresholding.\n"},
  {(char*)"SetPhiThreshold", PyvtkLinkEdgels_SetPhiThreshold, METH_VARARGS,
   (char*)"V.SetPhiThreshold(float)\nC++: void SetPhiThreshold(double a)\n\nSet/get the threshold for Phi vs. Phi link thresholding.\n"},
  {(char*)"GetPhiThreshold", PyvtkLinkEdgels_GetPhiThreshold, METH_VARARGS,
   (char*)"V.GetPhiThreshold() -> float\nC++: double GetPhiThreshold()\n\nSet/get the threshold for Phi vs. Phi link thresholding.\n"},
  {(char*)"SetGradientThreshold", PyvtkLinkEdgels_SetGradientThreshold, METH_VARARGS,
   (char*)"V.SetGradientThreshold(float)\nC++: void SetGradientThreshold(double a)\n\nSet/Get the threshold for image gradient thresholding.\n"},
  {(char*)"GetGradientThreshold", PyvtkLinkEdgels_GetGradientThreshold, METH_VARARGS,
   (char*)"V.GetGradientThreshold() -> float\nC++: double GetGradientThreshold()\n\nSet/Get the threshold for image gradient thresholding.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLinkEdgels_StaticNew()
{
  return vtkLinkEdgels::New();
}

PyObject *PyVTKClass_vtkLinkEdgelsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLinkEdgels_StaticNew,
    PyvtkLinkEdgels_Methods,
    "vtkLinkEdgels", modulename,
    NULL, NULL,
    PyvtkLinkEdgels_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkLinkEdgels_Doc()
{
  static const char *docstring[] = {
    "vtkLinkEdgels - links edgels together to form digital curves.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkLinkEdgels links edgels into digital curves which are then stored\nas polylines. The algorithm works one pixel at a time only looking at\nits immediate neighbors. There is a GradientThreshold that can be set\nthat eliminates any pixels with a smaller gradient value. This can be\nused as the lower threshold of a two value edgel thresholding.\n\nFor the remaining edgels, links are first tried for the f",
    "our\nconnected neighbors.  A successful neighbor will satisfy three tests.\nFirst both edgels must be above the gradient threshold. Second, the\ndifference between the orientation between the two edgels (Alpha) and\neach edgels orientation (Phi) must be less than LinkThreshold. Third,\nthe difference between the two edgels Phi values must be less than\nPhiThreshold. The most successful link is selected.",
    " The measure is\nsimply the sum of the three angle differences (actually stored as the\nsum of the cosines). If none of the four connect neighbors succeeds,\nthen the eight connect neighbors are examined using the same method.\n\nThis filter requires gradient information so you will need to use a\nvtkImageGradient at some point prior to this filter.  Typically a\nvtkNonMaximumSuppression filter is also u",
    "sed. vtkThresholdEdgels can\nbe used to complete the two value edgel thresholding as used in a\nCanny edge detector. The vtkSubpixelPositionEdgels filter can also be\nused after this filter to adjust the edgel locations.\n\nSee Also:\n\nvtkImageData vtkImageGradient vtkImageNonMaximumSuppression\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLinkEdgels(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLinkEdgelsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLinkEdgels", o) != 0)
    {
    Py_DECREF(o);
    }

}

