// python wrapper for vtkLabelSizeCalculator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLabelSizeCalculator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLabelSizeCalculator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLabelSizeCalculatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkLabelSizeCalculator_Doc();


static PyObject *
PyvtkLabelSizeCalculator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLabelSizeCalculator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelSizeCalculator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLabelSizeCalculator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelSizeCalculator::NewInstance());

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
PyvtkLabelSizeCalculator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLabelSizeCalculator *tempr = vtkLabelSizeCalculator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_SetFontProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  vtkTextProperty *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->SetFontProperty(temp0, temp1);
      }
    else
      {
      op->vtkLabelSizeCalculator::SetFontProperty(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_GetFontProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  int temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetFontProperty(temp0) :
      op->vtkLabelSizeCalculator::GetFontProperty(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_SetLabelSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelSizeArrayName(temp0);
      }
    else
      {
      op->vtkLabelSizeCalculator::SetLabelSizeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_GetLabelSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetLabelSizeArrayName() :
      op->vtkLabelSizeCalculator::GetLabelSizeArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLabelSizeCalculator_Methods[] = {
  {(char*)"GetClassName", PyvtkLabelSizeCalculator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLabelSizeCalculator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLabelSizeCalculator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLabelSizeCalculator\nC++: vtkLabelSizeCalculator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLabelSizeCalculator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLabelSizeCalculator\nC++: vtkLabelSizeCalculator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFontProperty", PyvtkLabelSizeCalculator_SetFontProperty, METH_VARARGS,
   (char*)"V.SetFontProperty(vtkTextProperty, int)\nC++: virtual void SetFontProperty(vtkTextProperty *fontProp,\n    int type=0)\n\nGet/Set the font used compute label sizes. This defaults to\n\"Arial\" at 12 points. If type is provided, it refers to the type\nof the text label provided in the optional label type array. The\ndefault type is type 0.\n"},
  {(char*)"GetFontProperty", PyvtkLabelSizeCalculator_GetFontProperty, METH_VARARGS,
   (char*)"V.GetFontProperty(int) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetFontProperty(int type=0)\n\nGet/Set the font used compute label sizes. This defaults to\n\"Arial\" at 12 points. If type is provided, it refers to the type\nof the text label provided in the optional label type array. The\ndefault type is type 0.\n"},
  {(char*)"SetLabelSizeArrayName", PyvtkLabelSizeCalculator_SetLabelSizeArrayName, METH_VARARGS,
   (char*)"V.SetLabelSizeArrayName(string)\nC++: void SetLabelSizeArrayName(char *)\n\nThe name of the output array containing text label sizes This\ndefaults to \"LabelSize\"\n"},
  {(char*)"GetLabelSizeArrayName", PyvtkLabelSizeCalculator_GetLabelSizeArrayName, METH_VARARGS,
   (char*)"V.GetLabelSizeArrayName() -> string\nC++: char *GetLabelSizeArrayName()\n\nThe name of the output array containing text label sizes This\ndefaults to \"LabelSize\"\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLabelSizeCalculator_StaticNew()
{
  return vtkLabelSizeCalculator::New();
}

PyObject *PyVTKClass_vtkLabelSizeCalculatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLabelSizeCalculator_StaticNew,
    PyvtkLabelSizeCalculator_Methods,
    "vtkLabelSizeCalculator", modulename,
    NULL, NULL,
    PyvtkLabelSizeCalculator_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkLabelSizeCalculator_Doc()
{
  static const char *docstring[] = {
    "vtkLabelSizeCalculator\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "This filter takes an input dataset, an array to process (which must\nbe a string array), and a text property. It creates a new output\narray (named \"LabelSize\" by default) with 4 components per tuple that\ncontain the width, height, horizontal offset, and descender height\n(in that order) of each string in the array.\n\nUse the inherited SelectInputArrayToProcess to indicate a string\narray. In no input ",
    "array is specified, the first of the following\nthat is a string array is used: point scalars, cell scalars, field\nscalars.\n\nThe second input array to process is an array specifying the type of\neach label. Different label types may have different font properties.\nThis array must be a vtkIntArray. Any type that does not map to a\nfont property that was set will be set to the type 0's type property.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLabelSizeCalculator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLabelSizeCalculatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLabelSizeCalculator", o) != 0)
    {
    Py_DECREF(o);
    }

}

