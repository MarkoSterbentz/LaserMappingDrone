// python wrapper for vtkBSplineTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBSplineTransform.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBSplineTransform(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBSplineTransformNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWarpTransformNew
extern "C" { PyObject *PyVTKClass_vtkWarpTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkWarpTransformNew
#endif

static const char **PyvtkBSplineTransform_Doc();


static PyObject *
PyvtkBSplineTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBSplineTransform::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBSplineTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBSplineTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBSplineTransform::NewInstance());

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
PyvtkBSplineTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBSplineTransform *tempr = vtkBSplineTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_SetCoefficientConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoefficientConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetCoefficientConnection(temp0);
      }
    else
      {
      op->vtkBSplineTransform::SetCoefficientConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_SetCoefficientData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoefficientData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetCoefficientData(temp0);
      }
    else
      {
      op->vtkBSplineTransform::SetCoefficientData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_GetCoefficientData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoefficientData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetCoefficientData() :
      op->vtkBSplineTransform::GetCoefficientData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_SetDisplacementScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplacementScale(temp0);
      }
    else
      {
      op->vtkBSplineTransform::SetDisplacementScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_GetDisplacementScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementScale() :
      op->vtkBSplineTransform::GetDisplacementScale());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_SetBorderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorderMode(temp0);
      }
    else
      {
      op->vtkBSplineTransform::SetBorderMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_GetBorderModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorderModeMinValue() :
      op->vtkBSplineTransform::GetBorderModeMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_GetBorderModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorderModeMaxValue() :
      op->vtkBSplineTransform::GetBorderModeMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_SetBorderModeToEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBorderModeToEdge();
      }
    else
      {
      op->vtkBSplineTransform::SetBorderModeToEdge();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_SetBorderModeToZero(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToZero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBorderModeToZero();
      }
    else
      {
      op->vtkBSplineTransform::SetBorderModeToZero();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_SetBorderModeToZeroAtBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToZeroAtBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBorderModeToZeroAtBorder();
      }
    else
      {
      op->vtkBSplineTransform::SetBorderModeToZeroAtBorder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_GetBorderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorderMode() :
      op->vtkBSplineTransform::GetBorderMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_GetBorderModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetBorderModeAsString() :
      op->vtkBSplineTransform::GetBorderModeAsString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSplineTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkBSplineTransform::MakeTransform());

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
PyvtkBSplineTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSplineTransform *op = static_cast<vtkBSplineTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkBSplineTransform::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBSplineTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkBSplineTransform_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBSplineTransform_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBSplineTransform_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBSplineTransform\nC++: vtkBSplineTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBSplineTransform_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBSplineTransform\nC++: vtkBSplineTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCoefficientConnection", PyvtkBSplineTransform_SetCoefficientConnection, METH_VARARGS,
   (char*)"V.SetCoefficientConnection(vtkAlgorithmOutput)\nC++: virtual void SetCoefficientConnection(vtkAlgorithmOutput *)\n\nSet/Get the coefficient grid for the b-spline transform. The\nvtkBSplineTransform class will never modify the data. Note that\nSetCoefficientData() does not setup a pipeline connection whereas\nSetCoefficientConnection does.\n"},
  {(char*)"SetCoefficientData", PyvtkBSplineTransform_SetCoefficientData, METH_VARARGS,
   (char*)"V.SetCoefficientData(vtkImageData)\nC++: virtual void SetCoefficientData(vtkImageData *)\n\nSet/Get the coefficient grid for the b-spline transform. The\nvtkBSplineTransform class will never modify the data. Note that\nSetCoefficientData() does not setup a pipeline connection whereas\nSetCoefficientConnection does.\n"},
  {(char*)"GetCoefficientData", PyvtkBSplineTransform_GetCoefficientData, METH_VARARGS,
   (char*)"V.GetCoefficientData() -> vtkImageData\nC++: virtual vtkImageData *GetCoefficientData()\n\nSet/Get the coefficient grid for the b-spline transform. The\nvtkBSplineTransform class will never modify the data. Note that\nSetCoefficientData() does not setup a pipeline connection whereas\nSetCoefficientConnection does.\n"},
  {(char*)"SetDisplacementScale", PyvtkBSplineTransform_SetDisplacementScale, METH_VARARGS,
   (char*)"V.SetDisplacementScale(float)\nC++: void SetDisplacementScale(double a)\n\nSet/Get a scale to apply to the transformation.\n"},
  {(char*)"GetDisplacementScale", PyvtkBSplineTransform_GetDisplacementScale, METH_VARARGS,
   (char*)"V.GetDisplacementScale() -> float\nC++: double GetDisplacementScale()\n\nSet/Get a scale to apply to the transformation.\n"},
  {(char*)"SetBorderMode", PyvtkBSplineTransform_SetBorderMode, METH_VARARGS,
   (char*)"V.SetBorderMode(int)\nC++: void SetBorderMode(int)\n\nSet/Get the border mode, to alter behavior at the edge of the\ngrid. The Edge mode allows the displacement to converge to the\nedge coefficient past the boundary, which is similar to the\nbehavior of the vtkGridTransform. The Zero mode allows the\ndisplacement to smoothly converge to zero two node-spacings past\nthe boundary, which is useful when you want to create a localized\ntransform. The ZeroAtBorder mode sacrifices smoothness to further\nlocalize the transform to just one node-spacing past the\nboundary.\n"},
  {(char*)"GetBorderModeMinValue", PyvtkBSplineTransform_GetBorderModeMinValue, METH_VARARGS,
   (char*)"V.GetBorderModeMinValue() -> int\nC++: int GetBorderModeMinValue()\n\nSet/Get the border mode, to alter behavior at the edge of the\ngrid. The Edge mode allows the displacement to converge to the\nedge coefficient past the boundary, which is similar to the\nbehavior of the vtkGridTransform. The Zero mode allows the\ndisplacement to smoothly converge to zero two node-spacings past\nthe boundary, which is useful when you want to create a localized\ntransform. The ZeroAtBorder mode sacrifices smoothness to further\nlocalize the transform to just one node-spacing past the\nboundary.\n"},
  {(char*)"GetBorderModeMaxValue", PyvtkBSplineTransform_GetBorderModeMaxValue, METH_VARARGS,
   (char*)"V.GetBorderModeMaxValue() -> int\nC++: int GetBorderModeMaxValue()\n\nSet/Get the border mode, to alter behavior at the edge of the\ngrid. The Edge mode allows the displacement to converge to the\nedge coefficient past the boundary, which is similar to the\nbehavior of the vtkGridTransform. The Zero mode allows the\ndisplacement to smoothly converge to zero two node-spacings past\nthe boundary, which is useful when you want to create a localized\ntransform. The ZeroAtBorder mode sacrifices smoothness to further\nlocalize the transform to just one node-spacing past the\nboundary.\n"},
  {(char*)"SetBorderModeToEdge", PyvtkBSplineTransform_SetBorderModeToEdge, METH_VARARGS,
   (char*)"V.SetBorderModeToEdge()\nC++: void SetBorderModeToEdge()\n\nSet/Get the border mode, to alter behavior at the edge of the\ngrid. The Edge mode allows the displacement to converge to the\nedge coefficient past the boundary, which is similar to the\nbehavior of the vtkGridTransform. The Zero mode allows the\ndisplacement to smoothly converge to zero two node-spacings past\nthe boundary, which is useful when you want to create a localized\ntransform. The ZeroAtBorder mode sacrifices smoothness to further\nlocalize the transform to just one node-spacing past the\nboundary.\n"},
  {(char*)"SetBorderModeToZero", PyvtkBSplineTransform_SetBorderModeToZero, METH_VARARGS,
   (char*)"V.SetBorderModeToZero()\nC++: void SetBorderModeToZero()\n\nSet/Get the border mode, to alter behavior at the edge of the\ngrid. The Edge mode allows the displacement to converge to the\nedge coefficient past the boundary, which is similar to the\nbehavior of the vtkGridTransform. The Zero mode allows the\ndisplacement to smoothly converge to zero two node-spacings past\nthe boundary, which is useful when you want to create a localized\ntransform. The ZeroAtBorder mode sacrifices smoothness to further\nlocalize the transform to just one node-spacing past the\nboundary.\n"},
  {(char*)"SetBorderModeToZeroAtBorder", PyvtkBSplineTransform_SetBorderModeToZeroAtBorder, METH_VARARGS,
   (char*)"V.SetBorderModeToZeroAtBorder()\nC++: void SetBorderModeToZeroAtBorder()\n\nSet/Get the border mode, to alter behavior at the edge of the\ngrid. The Edge mode allows the displacement to converge to the\nedge coefficient past the boundary, which is similar to the\nbehavior of the vtkGridTransform. The Zero mode allows the\ndisplacement to smoothly converge to zero two node-spacings past\nthe boundary, which is useful when you want to create a localized\ntransform. The ZeroAtBorder mode sacrifices smoothness to further\nlocalize the transform to just one node-spacing past the\nboundary.\n"},
  {(char*)"GetBorderMode", PyvtkBSplineTransform_GetBorderMode, METH_VARARGS,
   (char*)"V.GetBorderMode() -> int\nC++: int GetBorderMode()\n\nSet/Get the border mode, to alter behavior at the edge of the\ngrid. The Edge mode allows the displacement to converge to the\nedge coefficient past the boundary, which is similar to the\nbehavior of the vtkGridTransform. The Zero mode allows the\ndisplacement to smoothly converge to zero two node-spacings past\nthe boundary, which is useful when you want to create a localized\ntransform. The ZeroAtBorder mode sacrifices smoothness to further\nlocalize the transform to just one node-spacing past the\nboundary.\n"},
  {(char*)"GetBorderModeAsString", PyvtkBSplineTransform_GetBorderModeAsString, METH_VARARGS,
   (char*)"V.GetBorderModeAsString() -> string\nC++: const char *GetBorderModeAsString()\n\nSet/Get the border mode, to alter behavior at the edge of the\ngrid. The Edge mode allows the displacement to converge to the\nedge coefficient past the boundary, which is similar to the\nbehavior of the vtkGridTransform. The Zero mode allows the\ndisplacement to smoothly converge to zero two node-spacings past\nthe boundary, which is useful when you want to create a localized\ntransform. The ZeroAtBorder mode sacrifices smoothness to further\nlocalize the transform to just one node-spacing past the\nboundary.\n"},
  {(char*)"MakeTransform", PyvtkBSplineTransform_MakeTransform, METH_VARARGS,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform()\n\nMake another transform of the same type.\n"},
  {(char*)"GetMTime", PyvtkBSplineTransform_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the MTime.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBSplineTransform_StaticNew()
{
  return vtkBSplineTransform::New();
}

PyObject *PyVTKClass_vtkBSplineTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBSplineTransform_StaticNew,
    PyvtkBSplineTransform_Methods,
    "vtkBSplineTransform", modulename,
    NULL, NULL,
    PyvtkBSplineTransform_Doc(),
    PyVTKClass_vtkWarpTransformNew(modulename));
  return cls;
}

const char **PyvtkBSplineTransform_Doc()
{
  static const char *docstring[] = {
    "vtkBSplineTransform - a cubic b-spline deformation transformation\n\n",
    "Superclass: vtkWarpTransform\n\n",
    "vtkBSplineTransform computes a cubic b-spline transformation from a\ngrid of b-spline coefficients.\n\nCaveats:\n\nThe inverse grid transform is calculated using an iterative method,\nand is several times more expensive than the forward transform.\n\nSee Also:\n\nvtkGeneralTransform vtkTransformToGrid vtkImageBSplineCoefficients\n\nThanks:\n\nThis class was written by David Gobbi at the Seaman Family MR\nResearc",
    "h Centre, Foothills Medical Centre, Calgary, Alberta. DG Gobbi\nand YP Starreveld, \"Uniform B-Splines for the VTK Imaging Pipeline,\"\nVTK Journal, 2011, http://hdl.handle.net/10380/3252\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBSplineTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBSplineTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBSplineTransform", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_BSPLINE_EDGE", 0 },
        { "VTK_BSPLINE_ZERO", 1 },
        { "VTK_BSPLINE_ZERO_AT_BORDER", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

