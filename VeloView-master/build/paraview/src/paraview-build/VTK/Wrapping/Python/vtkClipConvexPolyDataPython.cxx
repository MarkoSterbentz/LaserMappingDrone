// python wrapper for vtkClipConvexPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkClipConvexPolyData.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkClipConvexPolyData(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkClipConvexPolyDataNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkClipConvexPolyData_Doc();


static PyObject *
PyvtkClipConvexPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipConvexPolyData *op = static_cast<vtkClipConvexPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkClipConvexPolyData::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipConvexPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipConvexPolyData *op = static_cast<vtkClipConvexPolyData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClipConvexPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipConvexPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipConvexPolyData *op = static_cast<vtkClipConvexPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkClipConvexPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClipConvexPolyData::NewInstance());

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
PyvtkClipConvexPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkClipConvexPolyData *tempr = vtkClipConvexPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipConvexPolyData_SetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipConvexPolyData *op = static_cast<vtkClipConvexPolyData *>(vp);

  vtkPlaneCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
    {
    if (ap.IsBound())
      {
      op->SetPlanes(temp0);
      }
    else
      {
      op->vtkClipConvexPolyData::SetPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkClipConvexPolyData_GetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipConvexPolyData *op = static_cast<vtkClipConvexPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlaneCollection *tempr = (ap.IsBound() ?
      op->GetPlanes() :
      op->vtkClipConvexPolyData::GetPlanes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClipConvexPolyData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipConvexPolyData *op = static_cast<vtkClipConvexPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkClipConvexPolyData::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkClipConvexPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkClipConvexPolyData_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkClipConvexPolyData_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkClipConvexPolyData_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkClipConvexPolyData\nC++: vtkClipConvexPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkClipConvexPolyData_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkClipConvexPolyData\nC++: vtkClipConvexPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPlanes", PyvtkClipConvexPolyData_SetPlanes, METH_VARARGS,
   (char*)"V.SetPlanes(vtkPlaneCollection)\nC++: void SetPlanes(vtkPlaneCollection *planes)\n\nSet all the planes at once using a vtkPlanes implicit function.\nThis also sets the D value.\n"},
  {(char*)"GetPlanes", PyvtkClipConvexPolyData_GetPlanes, METH_VARARGS,
   (char*)"V.GetPlanes() -> vtkPlaneCollection\nC++: vtkPlaneCollection *GetPlanes()\n\nSet all the planes at once using a vtkPlanes implicit function.\nThis also sets the D value.\n"},
  {(char*)"GetMTime", PyvtkClipConvexPolyData_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long int GetMTime()\n\nRedefines this method, as this filter depends on time of its\ncomponents (planes)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkClipConvexPolyData_StaticNew()
{
  return vtkClipConvexPolyData::New();
}

PyObject *PyVTKClass_vtkClipConvexPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkClipConvexPolyData_StaticNew,
    PyvtkClipConvexPolyData_Methods,
    "vtkClipConvexPolyData", modulename,
    NULL, NULL,
    PyvtkClipConvexPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkClipConvexPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkClipConvexPolyData - clip any dataset with user-specified implicit\nfunction or input scalar data\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkClipConvexPolyData is a filter that clips a convex polydata with a\nset of planes. Its main usage is for clipping a bounding volume with\nfrustum planes (used later one in volume rendering).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkClipConvexPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkClipConvexPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkClipConvexPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

