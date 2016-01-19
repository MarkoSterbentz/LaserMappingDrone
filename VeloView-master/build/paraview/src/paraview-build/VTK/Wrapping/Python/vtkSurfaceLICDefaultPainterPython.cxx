// python wrapper for vtkSurfaceLICDefaultPainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSurfaceLICDefaultPainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSurfaceLICDefaultPainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSurfaceLICDefaultPainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDefaultPainterNew
extern "C" { PyObject *PyVTKClass_vtkDefaultPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkDefaultPainterNew
#endif

static const char **PyvtkSurfaceLICDefaultPainter_Doc();


static PyObject *
PyvtkSurfaceLICDefaultPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICDefaultPainter *op = static_cast<vtkSurfaceLICDefaultPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSurfaceLICDefaultPainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICDefaultPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICDefaultPainter *op = static_cast<vtkSurfaceLICDefaultPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSurfaceLICDefaultPainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICDefaultPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICDefaultPainter *op = static_cast<vtkSurfaceLICDefaultPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSurfaceLICDefaultPainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSurfaceLICDefaultPainter::NewInstance());

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
PyvtkSurfaceLICDefaultPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSurfaceLICDefaultPainter *tempr = vtkSurfaceLICDefaultPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICDefaultPainter_SetSurfaceLICPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceLICPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICDefaultPainter *op = static_cast<vtkSurfaceLICDefaultPainter *>(vp);

  vtkSurfaceLICPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSurfaceLICPainter"))
    {
    if (ap.IsBound())
      {
      op->SetSurfaceLICPainter(temp0);
      }
    else
      {
      op->vtkSurfaceLICDefaultPainter::SetSurfaceLICPainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICDefaultPainter_GetSurfaceLICPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceLICPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICDefaultPainter *op = static_cast<vtkSurfaceLICDefaultPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSurfaceLICPainter *tempr = (ap.IsBound() ?
      op->GetSurfaceLICPainter() :
      op->vtkSurfaceLICDefaultPainter::GetSurfaceLICPainter());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSurfaceLICDefaultPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkSurfaceLICDefaultPainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSurfaceLICDefaultPainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSurfaceLICDefaultPainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSurfaceLICDefaultPainter\nC++: vtkSurfaceLICDefaultPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSurfaceLICDefaultPainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSurfaceLICDefaultPainter\nC++: vtkSurfaceLICDefaultPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSurfaceLICPainter", PyvtkSurfaceLICDefaultPainter_SetSurfaceLICPainter, METH_VARARGS,
   (char*)"V.SetSurfaceLICPainter(vtkSurfaceLICPainter)\nC++: void SetSurfaceLICPainter(vtkSurfaceLICPainter *)\n\nGet/Set the Surface LIC painter.\n"},
  {(char*)"GetSurfaceLICPainter", PyvtkSurfaceLICDefaultPainter_GetSurfaceLICPainter, METH_VARARGS,
   (char*)"V.GetSurfaceLICPainter() -> vtkSurfaceLICPainter\nC++: vtkSurfaceLICPainter *GetSurfaceLICPainter()\n\nGet/Set the Surface LIC painter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSurfaceLICDefaultPainter_StaticNew()
{
  return vtkSurfaceLICDefaultPainter::New();
}

PyObject *PyVTKClass_vtkSurfaceLICDefaultPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSurfaceLICDefaultPainter_StaticNew,
    PyvtkSurfaceLICDefaultPainter_Methods,
    "vtkSurfaceLICDefaultPainter", modulename,
    NULL, NULL,
    PyvtkSurfaceLICDefaultPainter_Doc(),
    PyVTKClass_vtkDefaultPainterNew(modulename));
  return cls;
}

const char **PyvtkSurfaceLICDefaultPainter_Doc()
{
  static const char *docstring[] = {
    "vtkSurfaceLICDefaultPainter - vtkDefaultPainter replacement that\n\n",
    "Superclass: vtkDefaultPainter\n\n",
    "vtkSurfaceLICDefaultPainter is a vtkDefaultPainter replacement\n that inserts the vtkSurfaceLICPainter at the correct position in the\npainter\n chain.\n\nSee Also:\n\n\n vtkDefaultPainter vtkSurfaceLICPainter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSurfaceLICDefaultPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSurfaceLICDefaultPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSurfaceLICDefaultPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

