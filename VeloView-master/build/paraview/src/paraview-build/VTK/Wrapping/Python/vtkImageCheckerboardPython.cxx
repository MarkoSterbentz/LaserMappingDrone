// python wrapper for vtkImageCheckerboard
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageCheckerboard.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageCheckerboard(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageCheckerboardNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageCheckerboard_Doc();


static PyObject *
PyvtkImageCheckerboard_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageCheckerboard::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCheckerboard_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageCheckerboard::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCheckerboard_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageCheckerboard *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageCheckerboard::NewInstance());

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
PyvtkImageCheckerboard_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageCheckerboard *tempr = vtkImageCheckerboard::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCheckerboard_SetNumberOfDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfDivisions(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageCheckerboard::SetNumberOfDivisions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCheckerboard_SetNumberOfDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfDivisions(temp0);
      }
    else
      {
      op->vtkImageCheckerboard::SetNumberOfDivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCheckerboard_SetNumberOfDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageCheckerboard_SetNumberOfDivisions_s1(self, args);
    case 1:
      return PyvtkImageCheckerboard_SetNumberOfDivisions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfDivisions");
  return NULL;
}



static PyObject *
PyvtkImageCheckerboard_GetNumberOfDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetNumberOfDivisions() :
      op->vtkImageCheckerboard::GetNumberOfDivisions());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCheckerboard_SetInput1Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput1Data(temp0);
      }
    else
      {
      op->vtkImageCheckerboard::SetInput1Data(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCheckerboard_SetInput2Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCheckerboard *op = static_cast<vtkImageCheckerboard *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput2Data(temp0);
      }
    else
      {
      op->vtkImageCheckerboard::SetInput2Data(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageCheckerboard_Methods[] = {
  {(char*)"GetClassName", PyvtkImageCheckerboard_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageCheckerboard_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageCheckerboard_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageCheckerboard\nC++: vtkImageCheckerboard *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageCheckerboard_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageCheckerboard\nC++: vtkImageCheckerboard *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfDivisions", PyvtkImageCheckerboard_SetNumberOfDivisions, METH_VARARGS,
   (char*)"V.SetNumberOfDivisions(int, int, int)\nC++: void SetNumberOfDivisions(int, int, int)\nV.SetNumberOfDivisions((int, int, int))\nC++: void SetNumberOfDivisions(int a[3])\n\n"},
  {(char*)"GetNumberOfDivisions", PyvtkImageCheckerboard_GetNumberOfDivisions, METH_VARARGS,
   (char*)"V.GetNumberOfDivisions() -> (int, int, int)\nC++: int *GetNumberOfDivisions()\n\nSet/Get the number of divisions along each axis.\n"},
  {(char*)"SetInput1Data", PyvtkImageCheckerboard_SetInput1Data, METH_VARARGS,
   (char*)"V.SetInput1Data(vtkDataObject)\nC++: virtual void SetInput1Data(vtkDataObject *in)\n\nSet the two inputs to this filter\n"},
  {(char*)"SetInput2Data", PyvtkImageCheckerboard_SetInput2Data, METH_VARARGS,
   (char*)"V.SetInput2Data(vtkDataObject)\nC++: virtual void SetInput2Data(vtkDataObject *in)\n\nSet the two inputs to this filter\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageCheckerboard_StaticNew()
{
  return vtkImageCheckerboard::New();
}

PyObject *PyVTKClass_vtkImageCheckerboardNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageCheckerboard_StaticNew,
    PyvtkImageCheckerboard_Methods,
    "vtkImageCheckerboard", modulename,
    NULL, NULL,
    PyvtkImageCheckerboard_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageCheckerboard_Doc()
{
  static const char *docstring[] = {
    "vtkImageCheckerboard - show two images at once using a checkboard\npattern\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageCheckerboard displays two images as one using a checkerboard\n pattern. This filter can be used to compare two images. The\n checkerboard pattern is controlled by the NumberOfDivisions\n ivar. This controls the number of checkerboard divisions in the\nwhole\n extent of the image.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageCheckerboard(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageCheckerboardNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageCheckerboard", o) != 0)
    {
    Py_DECREF(o);
    }

}

