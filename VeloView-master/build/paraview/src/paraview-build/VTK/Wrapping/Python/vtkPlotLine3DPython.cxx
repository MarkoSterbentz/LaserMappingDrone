// python wrapper for vtkPlotLine3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPlotLine3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPlotLine3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPlotLine3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPlotPoints3DNew
extern "C" { PyObject *PyVTKClass_vtkPlotPoints3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotPoints3DNew
#endif

static const char **PyvtkPlotLine3D_Doc();


static PyObject *
PyvtkPlotLine3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine3D *op = static_cast<vtkPlotLine3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPlotLine3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotLine3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine3D *op = static_cast<vtkPlotLine3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotLine3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotLine3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine3D *op = static_cast<vtkPlotLine3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlotLine3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotLine3D::NewInstance());

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
PyvtkPlotLine3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPlotLine3D *tempr = vtkPlotLine3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotLine3D_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine3D *op = static_cast<vtkPlotLine3D *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotLine3D::Paint(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotLine3D_Methods[] = {
  {(char*)"GetClassName", PyvtkPlotLine3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlotLine3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlotLine3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPlotLine3D\nC++: vtkPlotLine3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlotLine3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlotLine3D\nC++: vtkPlotLine3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Paint", PyvtkPlotLine3D_Paint, METH_VARARGS,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the XYZ plot, called whenever the chart needs to\nbe drawn.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlotLine3D_StaticNew()
{
  return vtkPlotLine3D::New();
}

PyObject *PyVTKClass_vtkPlotLine3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlotLine3D_StaticNew,
    PyvtkPlotLine3D_Methods,
    "vtkPlotLine3D", modulename,
    NULL, NULL,
    PyvtkPlotLine3D_Doc(),
    PyVTKClass_vtkPlotPoints3DNew(modulename));
  return cls;
}

const char **PyvtkPlotLine3D_Doc()
{
  static const char *docstring[] = {
    "vtkPlotLine3D - Class for drawing an XYZ line plot given three\ncolumns from\n\n",
    "Superclass: vtkPlotPoints3D\n\n",
    "This class draws points with a line between them given three column\nfrom a vtkTable in a vtkChartXYZ.\n\nSee Also:\n\nvtkPlotPoints3D vtkPlotLine\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlotLine3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotLine3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlotLine3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

