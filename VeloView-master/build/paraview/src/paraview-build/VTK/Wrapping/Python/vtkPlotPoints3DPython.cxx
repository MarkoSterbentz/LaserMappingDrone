// python wrapper for vtkPlotPoints3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPlotPoints3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPlotPoints3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPlotPoints3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPlot3DNew
extern "C" { PyObject *PyVTKClass_vtkPlot3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlot3DNew
#endif

static const char **PyvtkPlotPoints3D_Doc();


static PyObject *
PyvtkPlotPoints3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints3D *op = static_cast<vtkPlotPoints3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPlotPoints3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints3D *op = static_cast<vtkPlotPoints3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotPoints3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints3D *op = static_cast<vtkPlotPoints3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlotPoints3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotPoints3D::NewInstance());

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
PyvtkPlotPoints3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPlotPoints3D *tempr = vtkPlotPoints3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints3D_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints3D *op = static_cast<vtkPlotPoints3D *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotPoints3D::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotPoints3D_Methods[] = {
  {(char*)"GetClassName", PyvtkPlotPoints3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlotPoints3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlotPoints3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPlotPoints3D\nC++: vtkPlotPoints3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlotPoints3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlotPoints3D\nC++: vtkPlotPoints3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Paint", PyvtkPlotPoints3D_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the XY plot, called whenever the chart needs to\nbe drawn\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlotPoints3D_StaticNew()
{
  return vtkPlotPoints3D::New();
}

PyObject *PyVTKClass_vtkPlotPoints3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlotPoints3D_StaticNew,
    PyvtkPlotPoints3D_Methods,
    "vtkPlotPoints3D", modulename,
    NULL, NULL,
    PyvtkPlotPoints3D_Doc(),
    PyVTKClass_vtkPlot3DNew(modulename));
  return cls;
}

const char **PyvtkPlotPoints3D_Doc()
{
  static const char *docstring[] = {
    "vtkPlotPoints3D - 3D scatter plot.\n\n",
    "Superclass: vtkPlot3D\n\n",
    "3D scatter plot.\n\nSee Also:\n\nvtkPlotLine3D vtkPlotPoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlotPoints3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotPoints3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlotPoints3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

