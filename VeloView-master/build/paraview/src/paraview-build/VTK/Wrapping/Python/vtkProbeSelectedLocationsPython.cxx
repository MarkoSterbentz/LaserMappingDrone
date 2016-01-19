// python wrapper for vtkProbeSelectedLocations
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProbeSelectedLocations.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProbeSelectedLocations(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProbeSelectedLocationsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
extern "C" { PyObject *PyVTKClass_vtkExtractSelectionBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
#endif

static const char **PyvtkProbeSelectedLocations_Doc();


static PyObject *
PyvtkProbeSelectedLocations_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeSelectedLocations *op = static_cast<vtkProbeSelectedLocations *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProbeSelectedLocations::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeSelectedLocations_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeSelectedLocations *op = static_cast<vtkProbeSelectedLocations *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProbeSelectedLocations::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProbeSelectedLocations_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeSelectedLocations *op = static_cast<vtkProbeSelectedLocations *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProbeSelectedLocations *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProbeSelectedLocations::NewInstance());

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
PyvtkProbeSelectedLocations_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProbeSelectedLocations *tempr = vtkProbeSelectedLocations::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProbeSelectedLocations_Methods[] = {
  {(char*)"GetClassName", PyvtkProbeSelectedLocations_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProbeSelectedLocations_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProbeSelectedLocations_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProbeSelectedLocations\nC++: vtkProbeSelectedLocations *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProbeSelectedLocations_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProbeSelectedLocations\nC++: vtkProbeSelectedLocations *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProbeSelectedLocations_StaticNew()
{
  return vtkProbeSelectedLocations::New();
}

PyObject *PyVTKClass_vtkProbeSelectedLocationsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProbeSelectedLocations_StaticNew,
    PyvtkProbeSelectedLocations_Methods,
    "vtkProbeSelectedLocations", modulename,
    NULL, NULL,
    PyvtkProbeSelectedLocations_Doc(),
    PyVTKClass_vtkExtractSelectionBaseNew(modulename));
  return cls;
}

const char **PyvtkProbeSelectedLocations_Doc()
{
  static const char *docstring[] = {
    "vtkProbeSelectedLocations - similar to vtkExtractSelectedLocations\n\n",
    "Superclass: vtkExtractSelectionBase\n\n",
    "vtkProbeSelectedLocations is similar to vtkExtractSelectedLocations\nexcept that it interpolates the point attributes at the probe\nlocation. This is equivalent to the vtkProbeFilter except that the\nprobe locations are provided by a vtkSelection. The FieldType of the\ninput vtkSelection is immaterial and is ignored. The ContentType of\nthe input vtkSelection must be vtkSelection::LOCATIONS.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProbeSelectedLocations(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProbeSelectedLocationsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProbeSelectedLocations", o) != 0)
    {
    Py_DECREF(o);
    }

}

