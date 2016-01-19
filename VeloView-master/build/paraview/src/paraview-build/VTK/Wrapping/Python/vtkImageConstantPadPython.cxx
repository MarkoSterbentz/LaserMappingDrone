// python wrapper for vtkImageConstantPad
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageConstantPad.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageConstantPad(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageConstantPadNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImagePadFilterNew
extern "C" { PyObject *PyVTKClass_vtkImagePadFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImagePadFilterNew
#endif

static const char **PyvtkImageConstantPad_Doc();


static PyObject *
PyvtkImageConstantPad_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConstantPad *op = static_cast<vtkImageConstantPad *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageConstantPad::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageConstantPad_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConstantPad *op = static_cast<vtkImageConstantPad *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageConstantPad::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageConstantPad_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConstantPad *op = static_cast<vtkImageConstantPad *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageConstantPad *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageConstantPad::NewInstance());

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
PyvtkImageConstantPad_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageConstantPad *tempr = vtkImageConstantPad::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageConstantPad_SetConstant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConstantPad *op = static_cast<vtkImageConstantPad *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConstant(temp0);
      }
    else
      {
      op->vtkImageConstantPad::SetConstant(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageConstantPad_GetConstant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConstantPad *op = static_cast<vtkImageConstantPad *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetConstant() :
      op->vtkImageConstantPad::GetConstant());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageConstantPad_Methods[] = {
  {(char*)"GetClassName", PyvtkImageConstantPad_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageConstantPad_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageConstantPad_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageConstantPad\nC++: vtkImageConstantPad *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageConstantPad_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageConstantPad\nC++: vtkImageConstantPad *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetConstant", PyvtkImageConstantPad_SetConstant, METH_VARARGS,
   (char*)"V.SetConstant(float)\nC++: void SetConstant(double a)\n\nSet/Get the pad value.\n"},
  {(char*)"GetConstant", PyvtkImageConstantPad_GetConstant, METH_VARARGS,
   (char*)"V.GetConstant() -> float\nC++: double GetConstant()\n\nSet/Get the pad value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageConstantPad_StaticNew()
{
  return vtkImageConstantPad::New();
}

PyObject *PyVTKClass_vtkImageConstantPadNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageConstantPad_StaticNew,
    PyvtkImageConstantPad_Methods,
    "vtkImageConstantPad", modulename,
    NULL, NULL,
    PyvtkImageConstantPad_Doc(),
    PyVTKClass_vtkImagePadFilterNew(modulename));
  return cls;
}

const char **PyvtkImageConstantPad_Doc()
{
  static const char *docstring[] = {
    "vtkImageConstantPad - Makes image larger by padding with constant.\n\n",
    "Superclass: vtkImagePadFilter\n\n",
    "vtkImageConstantPad changes the image extent of its input. Any pixels\noutside of the original image extent are filled with a constant value\n(default is 0.0).\n\nSee Also:\n\nvtkImageWrapPad vtkImageMirrorPad\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageConstantPad(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageConstantPadNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageConstantPad", o) != 0)
    {
    Py_DECREF(o);
    }

}

