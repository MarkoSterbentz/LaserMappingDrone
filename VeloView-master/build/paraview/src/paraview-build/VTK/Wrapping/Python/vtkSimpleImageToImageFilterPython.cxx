// python wrapper for vtkSimpleImageToImageFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSimpleImageToImageFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSimpleImageToImageFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSimpleImageToImageFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkSimpleImageToImageFilter_Doc();


static PyObject *
PyvtkSimpleImageToImageFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleImageToImageFilter *op = static_cast<vtkSimpleImageToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSimpleImageToImageFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleImageToImageFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleImageToImageFilter *op = static_cast<vtkSimpleImageToImageFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSimpleImageToImageFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleImageToImageFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleImageToImageFilter *op = static_cast<vtkSimpleImageToImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSimpleImageToImageFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSimpleImageToImageFilter::NewInstance());

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
PyvtkSimpleImageToImageFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSimpleImageToImageFilter *tempr = vtkSimpleImageToImageFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSimpleImageToImageFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkSimpleImageToImageFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSimpleImageToImageFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSimpleImageToImageFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSimpleImageToImageFilter\nC++: vtkSimpleImageToImageFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSimpleImageToImageFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSimpleImageToImageFilter\nC++: vtkSimpleImageToImageFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSimpleImageToImageFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSimpleImageToImageFilter_Methods,
    "vtkSimpleImageToImageFilter", modulename,
    NULL, NULL,
    PyvtkSimpleImageToImageFilter_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSimpleImageToImageFilter_Doc()
{
  static const char *docstring[] = {
    "vtkSimpleImageToImageFilter - Generic image filter with one input.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkSimpleImageToImageFilter is a filter which aims to avoid much of\nthe complexity associated with vtkImageAlgorithm (i.e. support for\npieces, multi-threaded operation). If you need to write a simple\nimage-image filter which operates on the whole input, use this as the\nsuperclass. The subclass has to provide only an execute method which\ntakes input and output as arguments. Memory allocation is han",
    "dled in\nvtkSimpleImageToImageFilter. Also, you are guaranteed to have a valid\ninput in the Execute(input, output) method. By default, this filter\nrequests it's input's whole extent and copies the input's information\n(spacing, whole extent etc...) to the output. If the output's setup\nis different (for example, if it performs some sort of sub-sampling),\nExecuteInformation has to be overwritten. As a",
    "n example of how this\ncan be done, you can look at vtkImageShrink3D::ExecuteInformation.\nFor a complete example which uses templates to support generic data\ntypes, see vtkSimpleImageToImageFilter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSimpleImageToImageFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSimpleImageToImageFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSimpleImageToImageFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

