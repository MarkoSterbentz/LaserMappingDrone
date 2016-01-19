// python wrapper for vtkChartHistogram2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkContextMouseEvent.h"
#include "vtkChartHistogram2D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkChartHistogram2D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkChartHistogram2DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkChartXYNew
extern "C" { PyObject *PyVTKClass_vtkChartXYNew(const char *); }
#define DECLARED_PyVTKClass_vtkChartXYNew
#endif

static const char **PyvtkChartHistogram2D_Doc();


static PyObject *
PyvtkChartHistogram2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartHistogram2D *op = static_cast<vtkChartHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkChartHistogram2D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartHistogram2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartHistogram2D *op = static_cast<vtkChartHistogram2D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartHistogram2D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartHistogram2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartHistogram2D *op = static_cast<vtkChartHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkChartHistogram2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartHistogram2D::NewInstance());

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
PyvtkChartHistogram2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkChartHistogram2D *tempr = vtkChartHistogram2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartHistogram2D_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartHistogram2D *op = static_cast<vtkChartHistogram2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkChartHistogram2D::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartHistogram2D_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartHistogram2D *op = static_cast<vtkChartHistogram2D *>(vp);

  vtkImageData *temp0 = NULL;
  vtkIdType temp1 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0, temp1);
      }
    else
      {
      op->vtkChartHistogram2D::SetInputData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartHistogram2D_SetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartHistogram2D *op = static_cast<vtkChartHistogram2D *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetTransferFunction(temp0);
      }
    else
      {
      op->vtkChartHistogram2D::SetTransferFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartHistogram2D_GetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartHistogram2D *op = static_cast<vtkChartHistogram2D *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPlot *tempr = (ap.IsBound() ?
      op->GetPlot(temp0) :
      op->vtkChartHistogram2D::GetPlot(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkChartHistogram2D_Methods[] = {
  {(char*)"GetClassName", PyvtkChartHistogram2D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChartHistogram2D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChartHistogram2D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkChartHistogram2D\nC++: vtkChartHistogram2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChartHistogram2D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChartHistogram2D\nC++: vtkChartHistogram2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkChartHistogram2D_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"SetInputData", PyvtkChartHistogram2D_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkImageData, int)\nC++: virtual void SetInputData(vtkImageData *data, vtkIdType z=0)\n\n"},
  {(char*)"SetTransferFunction", PyvtkChartHistogram2D_SetTransferFunction, METH_VARARGS,
   (char*)"V.SetTransferFunction(vtkScalarsToColors)\nC++: virtual void SetTransferFunction(\n    vtkScalarsToColors *function)\n\n"},
  {(char*)"GetPlot", PyvtkChartHistogram2D_GetPlot, METH_VARARGS,
   (char*)"V.GetPlot(int) -> vtkPlot\nC++: virtual vtkPlot *GetPlot(vtkIdType index)\n\nGet the plot at the specified index, returns null if the index is\ninvalid.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChartHistogram2D_StaticNew()
{
  return vtkChartHistogram2D::New();
}

PyObject *PyVTKClass_vtkChartHistogram2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChartHistogram2D_StaticNew,
    PyvtkChartHistogram2D_Methods,
    "vtkChartHistogram2D", modulename,
    NULL, NULL,
    PyvtkChartHistogram2D_Doc(),
    PyVTKClass_vtkChartXYNew(modulename));
  return cls;
}

const char **PyvtkChartHistogram2D_Doc()
{
  static const char *docstring[] = {
    "vtkChart2DHistogram - Chart for 2D histograms.\n\n",
    "Superclass: vtkChartXY\n\n",
    "This defines the interface for a 2D histogram chart.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChartHistogram2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChartHistogram2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChartHistogram2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

