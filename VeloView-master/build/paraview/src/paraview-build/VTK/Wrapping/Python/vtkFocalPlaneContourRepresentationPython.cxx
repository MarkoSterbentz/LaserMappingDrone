// python wrapper for vtkFocalPlaneContourRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFocalPlaneContourRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFocalPlaneContourRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFocalPlaneContourRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkContourRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkContourRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkContourRepresentationNew
#endif

static const char **PyvtkFocalPlaneContourRepresentation_Doc();


static PyObject *
PyvtkFocalPlaneContourRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFocalPlaneContourRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFocalPlaneContourRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFocalPlaneContourRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFocalPlaneContourRepresentation::NewInstance());

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
PyvtkFocalPlaneContourRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFocalPlaneContourRepresentation *tempr = vtkFocalPlaneContourRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_GetIntermediatePointWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermediatePointWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  int temp0;
  int temp1;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetIntermediatePointWorldPosition(temp0, temp1, temp2) :
      op->vtkFocalPlaneContourRepresentation::GetIntermediatePointWorldPosition(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_GetIntermediatePointDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermediatePointDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  int temp0;
  int temp1;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetIntermediatePointDisplayPosition(temp0, temp1, temp2) :
      op->vtkFocalPlaneContourRepresentation::GetIntermediatePointDisplayPosition(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_GetNthNodeDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNthNodeDisplayPosition(temp0, temp1) :
      op->vtkFocalPlaneContourRepresentation::GetNthNodeDisplayPosition(temp0, temp1));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_GetNthNodeWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNthNodeWorldPosition(temp0, temp1) :
      op->vtkFocalPlaneContourRepresentation::GetNthNodeWorldPosition(temp0, temp1));

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_UpdateContourWorldPositionsBasedOnDisplayPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateContourWorldPositionsBasedOnDisplayPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateContourWorldPositionsBasedOnDisplayPositions();
      }
    else
      {
      op->vtkFocalPlaneContourRepresentation::UpdateContourWorldPositionsBasedOnDisplayPositions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_UpdateContour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateContour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->UpdateContour() :
      op->vtkFocalPlaneContourRepresentation::UpdateContour());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_UpdateLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UpdateLines(temp0);
      }
    else
      {
      op->vtkFocalPlaneContourRepresentation::UpdateLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFocalPlaneContourRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkFocalPlaneContourRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkFocalPlaneContourRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkFocalPlaneContourRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFocalPlaneContourRepresentation\nC++: vtkFocalPlaneContourRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkFocalPlaneContourRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFocalPlaneContourRepresentation\nC++: vtkFocalPlaneContourRepresentation *SafeDownCast(\n    vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"GetIntermediatePointWorldPosition", PyvtkFocalPlaneContourRepresentation_GetIntermediatePointWorldPosition, METH_VARARGS,
   (char*)"V.GetIntermediatePointWorldPosition(int, int, [float, float,\n    float]) -> int\nC++: virtual int GetIntermediatePointWorldPosition(int n, int idx,\n     double point[3])\n\nGet the world position of the intermediate point at index idx\nbetween nodes n and (n+1) (or n and 0 if n is the last node and\nthe loop is closed). Returns 1 on success or 0 if n or idx are\nout of range.\n"},
  {(char*)"GetIntermediatePointDisplayPosition", PyvtkFocalPlaneContourRepresentation_GetIntermediatePointDisplayPosition, METH_VARARGS,
   (char*)"V.GetIntermediatePointDisplayPosition(int, int, [float, float,\n    float]) -> int\nC++: virtual int GetIntermediatePointDisplayPosition(int n,\n    int idx, double point[3])\n\nGet the world position of the intermediate point at index idx\nbetween nodes n and (n+1) (or n and 0 if n is the last node and\nthe loop is closed). Returns 1 on success or 0 if n or idx are\nout of range.\n"},
  {(char*)"GetNthNodeDisplayPosition", PyvtkFocalPlaneContourRepresentation_GetNthNodeDisplayPosition, METH_VARARGS,
   (char*)"V.GetNthNodeDisplayPosition(int, [float, float]) -> int\nC++: virtual int GetNthNodeDisplayPosition(int n, double pos[2])\n\nGet the nth node's display position. Will return 1 on success, or\n0 if there are not at least (n+1) nodes (0 based counting).\n"},
  {(char*)"GetNthNodeWorldPosition", PyvtkFocalPlaneContourRepresentation_GetNthNodeWorldPosition, METH_VARARGS,
   (char*)"V.GetNthNodeWorldPosition(int, [float, float, float]) -> int\nC++: virtual int GetNthNodeWorldPosition(int n, double pos[3])\n\nGet the nth node's world position. Will return 1 on success, or 0\nif there are not at least (n+1) nodes (0 based counting).\n"},
  {(char*)"UpdateContourWorldPositionsBasedOnDisplayPositions", PyvtkFocalPlaneContourRepresentation_UpdateContourWorldPositionsBasedOnDisplayPositions, METH_VARARGS,
   (char*)"V.UpdateContourWorldPositionsBasedOnDisplayPositions()\nC++: virtual void UpdateContourWorldPositionsBasedOnDisplayPositions(\n    )\n\nThe class maintains its true contour locations based on display\nco-ords This method syncs the world co-ords data structure with\nthe display co-ords.\n"},
  {(char*)"UpdateContour", PyvtkFocalPlaneContourRepresentation_UpdateContour, METH_VARARGS,
   (char*)"V.UpdateContour() -> int\nC++: virtual int UpdateContour()\n\nThe method must be called whenever the contour needs to be\nupdated, usually from RenderOpaqueGeometry()\n"},
  {(char*)"UpdateLines", PyvtkFocalPlaneContourRepresentation_UpdateLines, METH_VARARGS,
   (char*)"V.UpdateLines(int)\nC++: virtual void UpdateLines(int index)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkFocalPlaneContourRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkFocalPlaneContourRepresentation_Methods,
    "vtkFocalPlaneContourRepresentation", modulename,
    NULL, NULL,
    PyvtkFocalPlaneContourRepresentation_Doc(),
    PyVTKClass_vtkContourRepresentationNew(modulename));
  return cls;
}

const char **PyvtkFocalPlaneContourRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkFocalPlaneContourRepresentation - represent a contour drawn on the\n\n",
    "Superclass: vtkContourRepresentation\n\n",
    "The contour will stay on the focal plane irrespective of camera\nposition/orientation changes. The class was written in order to be\nable to draw contours on a volume widget and have the contours\noverlayed on the focal plane in order to do contour segmentation. The\nsuperclass, vtkContourRepresentation handles contours that are drawn\nin actual world position co-ordinates, so they would rotate with th",
    "e\ncamera position/ orientation changes\n\nSee Also:\n\nvtkContourWidget vtkHandleRepresentation vtkContourRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFocalPlaneContourRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFocalPlaneContourRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFocalPlaneContourRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

