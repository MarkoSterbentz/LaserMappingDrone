// python wrapper for vtkStructuredPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkStructuredPoints.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkStructuredPoints(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkStructuredPointsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageDataNew
extern "C" { PyObject *PyVTKClass_vtkImageDataNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageDataNew
#endif

static const char **PyvtkStructuredPoints_Doc();


static PyObject *
PyvtkStructuredPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPoints *op = static_cast<vtkStructuredPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkStructuredPoints::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPoints *op = static_cast<vtkStructuredPoints *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPoints *op = static_cast<vtkStructuredPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredPoints::NewInstance());

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
PyvtkStructuredPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkStructuredPoints *tempr = vtkStructuredPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPoints_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPoints *op = static_cast<vtkStructuredPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkStructuredPoints::GetDataObjectType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredPoints_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredPoints_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredPoints_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkStructuredPoints\nC++: vtkStructuredPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredPoints_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredPoints\nC++: vtkStructuredPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkStructuredPoints_GetDataObjectType, METH_VARARGS,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nTo simplify filter superclasses,\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredPoints_StaticNew()
{
  return vtkStructuredPoints::New();
}

PyObject *PyVTKClass_vtkStructuredPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredPoints_StaticNew,
    PyvtkStructuredPoints_Methods,
    "vtkStructuredPoints", modulename,
    NULL, NULL,
    PyvtkStructuredPoints_Doc(),
    PyVTKClass_vtkImageDataNew(modulename));
  return cls;
}

const char **PyvtkStructuredPoints_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredPoints - A subclass of ImageData.\n\n",
    "Superclass: vtkImageData\n\n",
    "StructuredPoints is a subclass of ImageData that requires the data\nextent to exactly match the update extent. Normall image data allows\nthat the data extent may be larger than the update extent.\nStructuredPoints also defines the origin differently that\nvtkImageData. For structured points the origin is the location of\nfirst point. Whereas images define the origin as the location of\npoint 0, 0, 0. I",
    "mage Origin is stored in ivar, and structured points\nhave special methods for setting/getting the origin/extents.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

