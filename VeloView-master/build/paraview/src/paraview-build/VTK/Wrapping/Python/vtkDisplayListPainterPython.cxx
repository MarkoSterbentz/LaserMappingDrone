// python wrapper for vtkDisplayListPainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkDisplayListPainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDisplayListPainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDisplayListPainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPainterNew
extern "C" { PyObject *PyVTKClass_vtkPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPainterNew
#endif

static const char **PyvtkDisplayListPainter_Doc();


static PyObject *
PyvtkDisplayListPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplayListPainter *op = static_cast<vtkDisplayListPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDisplayListPainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDisplayListPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplayListPainter *op = static_cast<vtkDisplayListPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDisplayListPainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDisplayListPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplayListPainter *op = static_cast<vtkDisplayListPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDisplayListPainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDisplayListPainter::NewInstance());

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
PyvtkDisplayListPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDisplayListPainter *tempr = vtkDisplayListPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDisplayListPainter_IMMEDIATE_MODE_RENDERING(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IMMEDIATE_MODE_RENDERING");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDisplayListPainter::IMMEDIATE_MODE_RENDERING();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDisplayListPainter_GetTimeToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplayListPainter *op = static_cast<vtkDisplayListPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTimeToDraw() :
      op->vtkDisplayListPainter::GetTimeToDraw());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDisplayListPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkDisplayListPainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDisplayListPainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDisplayListPainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDisplayListPainter\nC++: vtkDisplayListPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDisplayListPainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDisplayListPainter\nC++: vtkDisplayListPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IMMEDIATE_MODE_RENDERING", PyvtkDisplayListPainter_IMMEDIATE_MODE_RENDERING, METH_VARARGS | METH_STATIC,
   (char*)"V.IMMEDIATE_MODE_RENDERING() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *IMMEDIATE_MODE_RENDERING()\n\nTurn on/off flag to control whether data is rendered using\nimmediate mode or note. Immediate mode rendering tends to be\nslower but it can handle larger datasets. The default value is\nimmediate mode off. If you are having problems rendering a large\ndataset you might want to consider using immediate more\nrendering.\n"},
  {(char*)"GetTimeToDraw", PyvtkDisplayListPainter_GetTimeToDraw, METH_VARARGS,
   (char*)"V.GetTimeToDraw() -> float\nC++: virtual double GetTimeToDraw()\n\nGet the time required to draw the geometry last time it was\nrendered. Overridden to avoid adding of delegate rendering time\nwhen Display Lists are used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDisplayListPainter_StaticNew()
{
  return vtkDisplayListPainter::New();
}

PyObject *PyVTKClass_vtkDisplayListPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDisplayListPainter_StaticNew,
    PyvtkDisplayListPainter_Methods,
    "vtkDisplayListPainter", modulename,
    NULL, NULL,
    PyvtkDisplayListPainter_Doc(),
    PyVTKClass_vtkPainterNew(modulename));
  return cls;
}

const char **PyvtkDisplayListPainter_Doc()
{
  static const char *docstring[] = {
    "vtkDisplayListPainter - abstract superclass for painter that\n\n",
    "Superclass: vtkPainter\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDisplayListPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDisplayListPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDisplayListPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

