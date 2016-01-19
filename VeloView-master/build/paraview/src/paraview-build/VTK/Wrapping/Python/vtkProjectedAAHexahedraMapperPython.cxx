// python wrapper for vtkProjectedAAHexahedraMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkProjectedAAHexahedraMapper.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkProjectedAAHexahedraMapper(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkProjectedAAHexahedraMapperNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridVolumeMapperNew
#endif

static const char **PyvtkProjectedAAHexahedraMapper_Doc();


static PyObject *
PyvtkProjectedAAHexahedraMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedAAHexahedraMapper *op = static_cast<vtkProjectedAAHexahedraMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkProjectedAAHexahedraMapper::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedAAHexahedraMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedAAHexahedraMapper *op = static_cast<vtkProjectedAAHexahedraMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProjectedAAHexahedraMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedAAHexahedraMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedAAHexahedraMapper *op = static_cast<vtkProjectedAAHexahedraMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProjectedAAHexahedraMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProjectedAAHexahedraMapper::NewInstance());

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
PyvtkProjectedAAHexahedraMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkProjectedAAHexahedraMapper *tempr = vtkProjectedAAHexahedraMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedAAHexahedraMapper_SetVisibilitySort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibilitySort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedAAHexahedraMapper *op = static_cast<vtkProjectedAAHexahedraMapper *>(vp);

  vtkVisibilitySort *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVisibilitySort"))
    {
    if (ap.IsBound())
      {
      op->SetVisibilitySort(temp0);
      }
    else
      {
      op->vtkProjectedAAHexahedraMapper::SetVisibilitySort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedAAHexahedraMapper_GetVisibilitySort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibilitySort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedAAHexahedraMapper *op = static_cast<vtkProjectedAAHexahedraMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVisibilitySort *tempr = (ap.IsBound() ?
      op->GetVisibilitySort() :
      op->vtkProjectedAAHexahedraMapper::GetVisibilitySort());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedAAHexahedraMapper_IsRenderSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRenderSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedAAHexahedraMapper *op = static_cast<vtkProjectedAAHexahedraMapper *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    bool tempr = op->IsRenderSupported(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProjectedAAHexahedraMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkProjectedAAHexahedraMapper_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProjectedAAHexahedraMapper_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProjectedAAHexahedraMapper_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkProjectedAAHexahedraMapper\nC++: vtkProjectedAAHexahedraMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProjectedAAHexahedraMapper_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProjectedAAHexahedraMapper\nC++: vtkProjectedAAHexahedraMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVisibilitySort", PyvtkProjectedAAHexahedraMapper_SetVisibilitySort, METH_VARARGS,
   (char*)"V.SetVisibilitySort(vtkVisibilitySort)\nC++: virtual void SetVisibilitySort(vtkVisibilitySort *sort)\n\nAlgorithm used to sort the cells according to viewpoint of the\ncamera. Initial value is a vtkCellCenterDepthSort object.\n"},
  {(char*)"GetVisibilitySort", PyvtkProjectedAAHexahedraMapper_GetVisibilitySort, METH_VARARGS,
   (char*)"V.GetVisibilitySort() -> vtkVisibilitySort\nC++: vtkVisibilitySort *GetVisibilitySort()\n\nAlgorithm used to sort the cells according to viewpoint of the\ncamera. Initial value is a vtkCellCenterDepthSort object.\n"},
  {(char*)"IsRenderSupported", PyvtkProjectedAAHexahedraMapper_IsRenderSupported, METH_VARARGS,
   (char*)"V.IsRenderSupported(vtkRenderWindow) -> bool\nC++: virtual bool IsRenderSupported(vtkRenderWindow *w)\n\nCheck if the required OpenGL extensions are supported by the\nOpenGL context attached to the render window `w'.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProjectedAAHexahedraMapper_StaticNew()
{
  return vtkProjectedAAHexahedraMapper::New();
}

PyObject *PyVTKClass_vtkProjectedAAHexahedraMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProjectedAAHexahedraMapper_StaticNew,
    PyvtkProjectedAAHexahedraMapper_Methods,
    "vtkProjectedAAHexahedraMapper", modulename,
    NULL, NULL,
    PyvtkProjectedAAHexahedraMapper_Doc(),
    PyVTKClass_vtkUnstructuredGridVolumeMapperNew(modulename));
  return cls;
}

const char **PyvtkProjectedAAHexahedraMapper_Doc()
{
  static const char *docstring[] = {
    "vtkProjectedAAHexahedraMapper - volume mapper for axis-aligned\nhexahedra\n\n",
    "Superclass: vtkUnstructuredGridVolumeMapper\n\n",
    "High quality volume renderer for axis-aligned hexahedra\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProjectedAAHexahedraMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProjectedAAHexahedraMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProjectedAAHexahedraMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

