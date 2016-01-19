// python wrapper for vtkAxisExtended
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkAxisExtended.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAxisExtended(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAxisExtendedNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAxisExtended_Doc();


static PyObject *
PyvtkAxisExtended_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAxisExtended::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxisExtended::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAxisExtended *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxisExtended::NewInstance());

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
PyvtkAxisExtended_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAxisExtended *tempr = vtkAxisExtended::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_Simplicity(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Simplicity");

  int temp0;
  int temp1;
  int temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    double tempr = vtkAxisExtended::Simplicity(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_SimplicityMax(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SimplicityMax");

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double tempr = vtkAxisExtended::SimplicityMax(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_Coverage(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Coverage");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    double tempr = vtkAxisExtended::Coverage(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_CoverageMax(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CoverageMax");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    double tempr = vtkAxisExtended::CoverageMax(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_Density(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Density");

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    double tempr = vtkAxisExtended::Density(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_DensityMax(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DensityMax");

  int temp0;
  double temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = vtkAxisExtended::DensityMax(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_FormatLegibilityScore(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FormatLegibilityScore");

  double temp0;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    double tempr = vtkAxisExtended::FormatLegibilityScore(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_FormatStringLength(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FormatStringLength");

  int temp0;
  double temp1;
  int temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = vtkAxisExtended::FormatStringLength(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_GenerateExtendedTickLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateExtendedTickLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GenerateExtendedTickLabels(temp0, temp1, temp2, temp3) :
      op->vtkAxisExtended::GenerateExtendedTickLabels(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_GetFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFontSize() :
      op->vtkAxisExtended::GetFontSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_SetFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFontSize(temp0);
      }
    else
      {
      op->vtkAxisExtended::SetFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_GetDesiredFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDesiredFontSize() :
      op->vtkAxisExtended::GetDesiredFontSize());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_SetDesiredFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDesiredFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDesiredFontSize(temp0);
      }
    else
      {
      op->vtkAxisExtended::SetDesiredFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_GetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPrecision() :
      op->vtkAxisExtended::GetPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_SetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPrecision(temp0);
      }
    else
      {
      op->vtkAxisExtended::SetPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkAxisExtended::GetLabelFormat());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelFormat(temp0);
      }
    else
      {
      op->vtkAxisExtended::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkAxisExtended::GetOrientation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientation(temp0);
      }
    else
      {
      op->vtkAxisExtended::SetOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_GetIsAxisVertical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsAxisVertical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIsAxisVertical() :
      op->vtkAxisExtended::GetIsAxisVertical());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisExtended_SetIsAxisVertical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsAxisVertical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisExtended *op = static_cast<vtkAxisExtended *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIsAxisVertical(temp0);
      }
    else
      {
      op->vtkAxisExtended::SetIsAxisVertical(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAxisExtended_Methods[] = {
  {(char*)"GetClassName", PyvtkAxisExtended_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAxisExtended_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAxisExtended_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAxisExtended\nC++: vtkAxisExtended *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAxisExtended_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAxisExtended\nC++: vtkAxisExtended *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Simplicity", PyvtkAxisExtended_Simplicity, METH_VARARGS | METH_STATIC,
   (char*)"V.Simplicity(int, int, int, float, float, float) -> float\nC++: static double Simplicity(int qIndex, int qLength, int j,\n    double lmin, double lmax, double lstep)\n\nThis method return a value to make step sizes corresponding to\nlow q and j values more preferable\n"},
  {(char*)"SimplicityMax", PyvtkAxisExtended_SimplicityMax, METH_VARARGS | METH_STATIC,
   (char*)"V.SimplicityMax(int, int, int) -> float\nC++: static double SimplicityMax(int qIndex, int qLength, int j)\n\nThis method returns the maximum possible value of simplicity\nvalue given q and j\n"},
  {(char*)"Coverage", PyvtkAxisExtended_Coverage, METH_VARARGS | METH_STATIC,
   (char*)"V.Coverage(float, float, float, float) -> float\nC++: static double Coverage(double dmin, double dmax, double lmin,\n     double lmax)\n\nThis method makes the data range approximately same as the\nlabeling range more preferable\n"},
  {(char*)"CoverageMax", PyvtkAxisExtended_CoverageMax, METH_VARARGS | METH_STATIC,
   (char*)"V.CoverageMax(float, float, float) -> float\nC++: static double CoverageMax(double dmin, double dmax,\n    double span)\n\nThis gives the maximum possible value of coverage given the step\nsize\n"},
  {(char*)"Density", PyvtkAxisExtended_Density, METH_VARARGS | METH_STATIC,
   (char*)"V.Density(int, float, float, float, float, float) -> float\nC++: static double Density(int k, double m, double dmin,\n    double dmax, double lmin, double lmax)\n\nThis method return a value to make the density of the labels\nclose to the user given value\n"},
  {(char*)"DensityMax", PyvtkAxisExtended_DensityMax, METH_VARARGS | METH_STATIC,
   (char*)"V.DensityMax(int, float) -> float\nC++: static double DensityMax(int k, double m)\n\nDerives the maximum values for density given k (number of ticks)\nand m (user given)\n"},
  {(char*)"FormatLegibilityScore", PyvtkAxisExtended_FormatLegibilityScore, METH_VARARGS | METH_STATIC,
   (char*)"V.FormatLegibilityScore(float, int) -> float\nC++: static double FormatLegibilityScore(double n, int format)\n\nThis methods return the legibility score of different formats\n"},
  {(char*)"FormatStringLength", PyvtkAxisExtended_FormatStringLength, METH_VARARGS | METH_STATIC,
   (char*)"V.FormatStringLength(int, float, int) -> int\nC++: static int FormatStringLength(int format, double n,\n    int precision)\n\nThis method returns the string length of different format\nnotations.\n"},
  {(char*)"GenerateExtendedTickLabels", PyvtkAxisExtended_GenerateExtendedTickLabels, METH_VARARGS,
   (char*)"V.GenerateExtendedTickLabels(float, float, float, float)\n    -> vtkVector3d\nC++: vtkVector3d GenerateExtendedTickLabels(double dmin,\n    double dmax, double m, double scaling)\n\nThis method implements the algorithm given in the paper The\nmethod return the minimum tick position, maximum tick position\nand the tick spacing\n"},
  {(char*)"GetFontSize", PyvtkAxisExtended_GetFontSize, METH_VARARGS,
   (char*)"V.GetFontSize() -> int\nC++: int GetFontSize()\n\nSet/Get methods for variables\n"},
  {(char*)"SetFontSize", PyvtkAxisExtended_SetFontSize, METH_VARARGS,
   (char*)"V.SetFontSize(int)\nC++: void SetFontSize(int a)\n\nSet/Get methods for variables\n"},
  {(char*)"GetDesiredFontSize", PyvtkAxisExtended_GetDesiredFontSize, METH_VARARGS,
   (char*)"V.GetDesiredFontSize() -> int\nC++: int GetDesiredFontSize()\n\n"},
  {(char*)"SetDesiredFontSize", PyvtkAxisExtended_SetDesiredFontSize, METH_VARARGS,
   (char*)"V.SetDesiredFontSize(int)\nC++: void SetDesiredFontSize(int a)\n\n"},
  {(char*)"GetPrecision", PyvtkAxisExtended_GetPrecision, METH_VARARGS,
   (char*)"V.GetPrecision() -> int\nC++: int GetPrecision()\n\n"},
  {(char*)"SetPrecision", PyvtkAxisExtended_SetPrecision, METH_VARARGS,
   (char*)"V.SetPrecision(int)\nC++: void SetPrecision(int a)\n\n"},
  {(char*)"GetLabelFormat", PyvtkAxisExtended_GetLabelFormat, METH_VARARGS,
   (char*)"V.GetLabelFormat() -> int\nC++: int GetLabelFormat()\n\n"},
  {(char*)"SetLabelFormat", PyvtkAxisExtended_SetLabelFormat, METH_VARARGS,
   (char*)"V.SetLabelFormat(int)\nC++: void SetLabelFormat(int a)\n\n"},
  {(char*)"GetOrientation", PyvtkAxisExtended_GetOrientation, METH_VARARGS,
   (char*)"V.GetOrientation() -> int\nC++: int GetOrientation()\n\n"},
  {(char*)"SetOrientation", PyvtkAxisExtended_SetOrientation, METH_VARARGS,
   (char*)"V.SetOrientation(int)\nC++: void SetOrientation(int a)\n\n"},
  {(char*)"GetIsAxisVertical", PyvtkAxisExtended_GetIsAxisVertical, METH_VARARGS,
   (char*)"V.GetIsAxisVertical() -> bool\nC++: bool GetIsAxisVertical()\n\n"},
  {(char*)"SetIsAxisVertical", PyvtkAxisExtended_SetIsAxisVertical, METH_VARARGS,
   (char*)"V.SetIsAxisVertical(bool)\nC++: void SetIsAxisVertical(bool a)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAxisExtended_StaticNew()
{
  return vtkAxisExtended::New();
}

PyObject *PyVTKClass_vtkAxisExtendedNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAxisExtended_StaticNew,
    PyvtkAxisExtended_Methods,
    "vtkAxisExtended", modulename,
    NULL, NULL,
    PyvtkAxisExtended_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAxisExtended_Doc()
{
  static const char *docstring[] = {
    "vtkAxisExtended - octree-based spatial search object to quickly\nlocate cells\n\n",
    "Superclass: vtkObject\n\n",
    "This implements the optimization based tick position calculating\nalgorithm in the paper \"An Extension of Wilkinson's Algorithm for\nPositioning Tick Labels on Axes\" by Junstin Talbot, Sharon Lin and\nPat Hanrahan\n\nCaveats:\n\nSee Also:\n\nvtkAxis\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAxisExtended(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAxisExtendedNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAxisExtended", o) != 0)
    {
    Py_DECREF(o);
    }

}

