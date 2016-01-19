// python wrapper for vtkPVMultiSliceView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVMultiSliceView.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVMultiSliceView(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVMultiSliceViewNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVRenderViewNew
extern "C" { PyObject *PyVTKClass_vtkPVRenderViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVRenderViewNew
#endif

static const char **PyvtkPVMultiSliceView_Doc();


static PyObject *
PyvtkPVMultiSliceView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVMultiSliceView::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVMultiSliceView::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVMultiSliceView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVMultiSliceView::NewInstance());

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
PyvtkPVMultiSliceView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVMultiSliceView *tempr = vtkPVMultiSliceView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPVMultiSliceView::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetNumberOfXSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfXSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfXSlices(temp0);
      }
    else
      {
      op->vtkPVMultiSliceView::SetNumberOfXSlices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetXSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetXSlices(temp0);
      }
    else
      {
      op->vtkPVMultiSliceView::SetXSlices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetNumberOfYSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfYSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfYSlices(temp0);
      }
    else
      {
      op->vtkPVMultiSliceView::SetNumberOfYSlices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetYSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetYSlices(temp0);
      }
    else
      {
      op->vtkPVMultiSliceView::SetYSlices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetNumberOfZSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfZSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfZSlices(temp0);
      }
    else
      {
      op->vtkPVMultiSliceView::SetNumberOfZSlices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetZSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetZSlices(temp0);
      }
    else
      {
      op->vtkPVMultiSliceView::SetZSlices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_GetDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetDataBounds(temp0);
      }
    else
      {
      op->vtkPVMultiSliceView::GetDataBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_GetXAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetXAxisLabel() :
      op->vtkPVMultiSliceView::GetXAxisLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_GetYAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetYAxisLabel() :
      op->vtkPVMultiSliceView::GetYAxisLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_GetZAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetZAxisLabel() :
      op->vtkPVMultiSliceView::GetZAxisLabel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetAxisTitle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetAxisTitle");

  vtkInformation *temp0 = NULL;
  int temp1;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkPVMultiSliceView::SetAxisTitle(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetDataBounds(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDataBounds");

  vtkInformation *temp0 = NULL;
  double temp1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
    {
    vtkPVMultiSliceView::SetDataBounds(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVMultiSliceView_SetModelTransformationMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelTransformationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiSliceView *op = static_cast<vtkPVMultiSliceView *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetModelTransformationMatrix(temp0);
      }
    else
      {
      op->vtkPVMultiSliceView::SetModelTransformationMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVMultiSliceView_Methods[] = {
  {(char*)"GetClassName", PyvtkPVMultiSliceView_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVMultiSliceView_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVMultiSliceView_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVMultiSliceView\nC++: vtkPVMultiSliceView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVMultiSliceView_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVMultiSliceView\nC++: vtkPVMultiSliceView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkPVMultiSliceView_Update, METH_VARARGS,
   (char*)"V.Update()\nC++: virtual void Update()\n\n"},
  {(char*)"SetNumberOfXSlices", PyvtkPVMultiSliceView_SetNumberOfXSlices, METH_VARARGS,
   (char*)"V.SetNumberOfXSlices(int)\nC++: void SetNumberOfXSlices(unsigned int count)\n\n\n"},
  {(char*)"SetXSlices", PyvtkPVMultiSliceView_SetXSlices, METH_VARARGS,
   (char*)"V.SetXSlices((float, ...))\nC++: void SetXSlices(const double *values)\n\n\n"},
  {(char*)"SetNumberOfYSlices", PyvtkPVMultiSliceView_SetNumberOfYSlices, METH_VARARGS,
   (char*)"V.SetNumberOfYSlices(int)\nC++: void SetNumberOfYSlices(unsigned int count)\n\n\n"},
  {(char*)"SetYSlices", PyvtkPVMultiSliceView_SetYSlices, METH_VARARGS,
   (char*)"V.SetYSlices((float, ...))\nC++: void SetYSlices(const double *values)\n\n\n"},
  {(char*)"SetNumberOfZSlices", PyvtkPVMultiSliceView_SetNumberOfZSlices, METH_VARARGS,
   (char*)"V.SetNumberOfZSlices(int)\nC++: void SetNumberOfZSlices(unsigned int count)\n\n\n"},
  {(char*)"SetZSlices", PyvtkPVMultiSliceView_SetZSlices, METH_VARARGS,
   (char*)"V.SetZSlices((float, ...))\nC++: void SetZSlices(const double *values)\n\n\n"},
  {(char*)"GetDataBounds", PyvtkPVMultiSliceView_GetDataBounds, METH_VARARGS,
   (char*)"V.GetDataBounds([float, float, float, float, float, float])\nC++: void GetDataBounds(double bounds[6])\n\n"},
  {(char*)"GetXAxisLabel", PyvtkPVMultiSliceView_GetXAxisLabel, METH_VARARGS,
   (char*)"V.GetXAxisLabel() -> string\nC++: const char *GetXAxisLabel()\n\n"},
  {(char*)"GetYAxisLabel", PyvtkPVMultiSliceView_GetYAxisLabel, METH_VARARGS,
   (char*)"V.GetYAxisLabel() -> string\nC++: const char *GetYAxisLabel()\n\n"},
  {(char*)"GetZAxisLabel", PyvtkPVMultiSliceView_GetZAxisLabel, METH_VARARGS,
   (char*)"V.GetZAxisLabel() -> string\nC++: const char *GetZAxisLabel()\n\n"},
  {(char*)"SetAxisTitle", PyvtkPVMultiSliceView_SetAxisTitle, METH_VARARGS | METH_STATIC,
   (char*)"V.SetAxisTitle(vtkInformation, int, string)\nC++: static void SetAxisTitle(vtkInformation *info, int axis,\n    const char *title)\n\n"},
  {(char*)"SetDataBounds", PyvtkPVMultiSliceView_SetDataBounds, METH_VARARGS | METH_STATIC,
   (char*)"V.SetDataBounds(vtkInformation, (float, float, float, float,\n    float, float))\nC++: static void SetDataBounds(vtkInformation *info,\n    const double bounds[6])\n\n"},
  {(char*)"SetModelTransformationMatrix", PyvtkPVMultiSliceView_SetModelTransformationMatrix, METH_VARARGS,
   (char*)"V.SetModelTransformationMatrix(vtkMatrix4x4)\nC++: void SetModelTransformationMatrix(vtkMatrix4x4 *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVMultiSliceView_StaticNew()
{
  return vtkPVMultiSliceView::New();
}

PyObject *PyVTKClass_vtkPVMultiSliceViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVMultiSliceView_StaticNew,
    PyvtkPVMultiSliceView_Methods,
    "vtkPVMultiSliceView", modulename,
    NULL, NULL,
    PyvtkPVMultiSliceView_Doc(),
    PyVTKClass_vtkPVRenderViewNew(modulename));
  return cls;
}

const char **PyvtkPVMultiSliceView_Doc()
{
  static const char *docstring[] = {
    "vtkPVMultiSliceView\n\n",
    "Superclass: vtkPVRenderView\n\n",
    "vtkPVMultiSliceView extends vtkPVRenderView but add meta-data\ninformations used by SliceRepresentation as a data model.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVMultiSliceView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVMultiSliceViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVMultiSliceView", o) != 0)
    {
    Py_DECREF(o);
    }

}

