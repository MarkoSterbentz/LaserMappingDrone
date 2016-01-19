// python wrapper for vtkResliceCursorThickLineRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkResliceCursorThickLineRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkResliceCursorThickLineRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkResliceCursorThickLineRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkResliceCursorLineRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkResliceCursorLineRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkResliceCursorLineRepresentationNew
#endif

static const char **PyvtkResliceCursorThickLineRepresentation_Doc();


static PyObject *
PyvtkResliceCursorThickLineRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorThickLineRepresentation *op = static_cast<vtkResliceCursorThickLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkResliceCursorThickLineRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorThickLineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorThickLineRepresentation *op = static_cast<vtkResliceCursorThickLineRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursorThickLineRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorThickLineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorThickLineRepresentation *op = static_cast<vtkResliceCursorThickLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkResliceCursorThickLineRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursorThickLineRepresentation::NewInstance());

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
PyvtkResliceCursorThickLineRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkResliceCursorThickLineRepresentation *tempr = vtkResliceCursorThickLineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorThickLineRepresentation_CreateDefaultResliceAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultResliceAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorThickLineRepresentation *op = static_cast<vtkResliceCursorThickLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultResliceAlgorithm();
      }
    else
      {
      op->vtkResliceCursorThickLineRepresentation::CreateDefaultResliceAlgorithm();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkResliceCursorThickLineRepresentation_SetResliceParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorThickLineRepresentation *op = static_cast<vtkResliceCursorThickLineRepresentation *>(vp);

  double temp0;
  double temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetResliceParameters(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkResliceCursorThickLineRepresentation::SetResliceParameters(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkResliceCursorThickLineRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkResliceCursorThickLineRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkResliceCursorThickLineRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkResliceCursorThickLineRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkResliceCursorThickLineRepresentation\nC++: vtkResliceCursorThickLineRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkResliceCursorThickLineRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkResliceCursorThickLineRepresentation\nC++: vtkResliceCursorThickLineRepresentation *SafeDownCast(\n    vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"CreateDefaultResliceAlgorithm", PyvtkResliceCursorThickLineRepresentation_CreateDefaultResliceAlgorithm, METH_VARARGS,
   (char*)"V.CreateDefaultResliceAlgorithm()\nC++: virtual void CreateDefaultResliceAlgorithm()\n\nINTERNAL - Do not use Create the thick reformat class. This\noverrides the superclass implementation and creates a\nvtkImageSlabReslice instead of a vtkImageReslice.\n"},
  {(char*)"SetResliceParameters", PyvtkResliceCursorThickLineRepresentation_SetResliceParameters, METH_VARARGS,
   (char*)"V.SetResliceParameters(float, float, int, int)\nC++: virtual void SetResliceParameters(double outputSpacingX,\n    double outputSpacingY, int extentX, int extentY)\n\nINTERNAL - Do not use Reslice parameters which are set from\nvtkResliceCursorWidget based on user interactions.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkResliceCursorThickLineRepresentation_StaticNew()
{
  return vtkResliceCursorThickLineRepresentation::New();
}

PyObject *PyVTKClass_vtkResliceCursorThickLineRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkResliceCursorThickLineRepresentation_StaticNew,
    PyvtkResliceCursorThickLineRepresentation_Methods,
    "vtkResliceCursorThickLineRepresentation", modulename,
    NULL, NULL,
    PyvtkResliceCursorThickLineRepresentation_Doc(),
    PyVTKClass_vtkResliceCursorLineRepresentationNew(modulename));
  return cls;
}

const char **PyvtkResliceCursorThickLineRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkResliceCursorThickLineRepresentation - represents a thick slab of\nthe reslice cursor widget\n\n",
    "Superclass: vtkResliceCursorLineRepresentation\n\n",
    "This class respresents a thick reslice cursor, that can be used to\nperform interactive thick slab MPR's through data. The class\ninternally uses vtkImageSlabReslice to do its reslicing. The slab\nthickness is set interactively from the widget. The slab resolution\n(ie the number of blend points) is set as the minimum spacing along\nany dimension from the dataset.\n\nSee Also:\n\nvtkImageSlabReslice vtkRes",
    "liceCursorLineRepresentation\nvtkResliceCursorWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkResliceCursorThickLineRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkResliceCursorThickLineRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkResliceCursorThickLineRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

