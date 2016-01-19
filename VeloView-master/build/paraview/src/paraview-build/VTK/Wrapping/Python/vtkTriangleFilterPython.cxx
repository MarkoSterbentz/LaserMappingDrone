// python wrapper for vtkTriangleFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTriangleFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTriangleFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTriangleFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkTriangleFilter_Doc();


static PyObject *
PyvtkTriangleFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTriangleFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTriangleFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTriangleFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTriangleFilter::NewInstance());

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
PyvtkTriangleFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTriangleFilter *tempr = vtkTriangleFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_PassVertsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassVertsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassVertsOn();
      }
    else
      {
      op->vtkTriangleFilter::PassVertsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_PassVertsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassVertsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassVertsOff();
      }
    else
      {
      op->vtkTriangleFilter::PassVertsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_SetPassVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassVerts(temp0);
      }
    else
      {
      op->vtkTriangleFilter::SetPassVerts(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_GetPassVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassVerts() :
      op->vtkTriangleFilter::GetPassVerts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_PassLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassLinesOn();
      }
    else
      {
      op->vtkTriangleFilter::PassLinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_PassLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassLinesOff();
      }
    else
      {
      op->vtkTriangleFilter::PassLinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_SetPassLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassLines(temp0);
      }
    else
      {
      op->vtkTriangleFilter::SetPassLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTriangleFilter_GetPassLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetPassLines() :
      op->vtkTriangleFilter::GetPassLines());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTriangleFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkTriangleFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTriangleFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTriangleFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTriangleFilter\nC++: vtkTriangleFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTriangleFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTriangleFilter\nC++: vtkTriangleFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PassVertsOn", PyvtkTriangleFilter_PassVertsOn, METH_VARARGS,
   (char*)"V.PassVertsOn()\nC++: void PassVertsOn()\n\nTurn on/off passing vertices through filter (default: on). If\nthis is on, then the input vertex cells will be broken into\nindividual vertex cells (one point per cell).  If it is off, the\ninput vertex cells will be ignored.\n"},
  {(char*)"PassVertsOff", PyvtkTriangleFilter_PassVertsOff, METH_VARARGS,
   (char*)"V.PassVertsOff()\nC++: void PassVertsOff()\n\nTurn on/off passing vertices through filter (default: on). If\nthis is on, then the input vertex cells will be broken into\nindividual vertex cells (one point per cell).  If it is off, the\ninput vertex cells will be ignored.\n"},
  {(char*)"SetPassVerts", PyvtkTriangleFilter_SetPassVerts, METH_VARARGS,
   (char*)"V.SetPassVerts(int)\nC++: void SetPassVerts(int a)\n\nTurn on/off passing vertices through filter (default: on). If\nthis is on, then the input vertex cells will be broken into\nindividual vertex cells (one point per cell).  If it is off, the\ninput vertex cells will be ignored.\n"},
  {(char*)"GetPassVerts", PyvtkTriangleFilter_GetPassVerts, METH_VARARGS,
   (char*)"V.GetPassVerts() -> int\nC++: int GetPassVerts()\n\nTurn on/off passing vertices through filter (default: on). If\nthis is on, then the input vertex cells will be broken into\nindividual vertex cells (one point per cell).  If it is off, the\ninput vertex cells will be ignored.\n"},
  {(char*)"PassLinesOn", PyvtkTriangleFilter_PassLinesOn, METH_VARARGS,
   (char*)"V.PassLinesOn()\nC++: void PassLinesOn()\n\nTurn on/off passing lines through filter (default: on). If this\nis on, then the input polylines will be broken into line\nsegments.  If it is off, then the input lines will be ignored and\nthe output will have no lines.\n"},
  {(char*)"PassLinesOff", PyvtkTriangleFilter_PassLinesOff, METH_VARARGS,
   (char*)"V.PassLinesOff()\nC++: void PassLinesOff()\n\nTurn on/off passing lines through filter (default: on). If this\nis on, then the input polylines will be broken into line\nsegments.  If it is off, then the input lines will be ignored and\nthe output will have no lines.\n"},
  {(char*)"SetPassLines", PyvtkTriangleFilter_SetPassLines, METH_VARARGS,
   (char*)"V.SetPassLines(int)\nC++: void SetPassLines(int a)\n\nTurn on/off passing lines through filter (default: on). If this\nis on, then the input polylines will be broken into line\nsegments.  If it is off, then the input lines will be ignored and\nthe output will have no lines.\n"},
  {(char*)"GetPassLines", PyvtkTriangleFilter_GetPassLines, METH_VARARGS,
   (char*)"V.GetPassLines() -> int\nC++: int GetPassLines()\n\nTurn on/off passing lines through filter (default: on). If this\nis on, then the input polylines will be broken into line\nsegments.  If it is off, then the input lines will be ignored and\nthe output will have no lines.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTriangleFilter_StaticNew()
{
  return vtkTriangleFilter::New();
}

PyObject *PyVTKClass_vtkTriangleFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTriangleFilter_StaticNew,
    PyvtkTriangleFilter_Methods,
    "vtkTriangleFilter", modulename,
    NULL, NULL,
    PyvtkTriangleFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTriangleFilter_Doc()
{
  static const char *docstring[] = {
    "vtkTriangleFilter - convert input polygons and strips to triangles\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkTriangleFilter generates triangles from input polygons and\ntriangle strips.  It also generates line segments from polylines\nunless PassLines is off, and generates individual vertex cells from\nvtkVertex point lists unless PassVerts is off.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTriangleFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTriangleFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTriangleFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

