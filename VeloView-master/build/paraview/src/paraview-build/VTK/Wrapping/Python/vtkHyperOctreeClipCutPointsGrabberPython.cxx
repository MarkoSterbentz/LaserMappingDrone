// python wrapper for vtkHyperOctreeClipCutPointsGrabber
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkHyperOctreeClipCutPointsGrabber.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkHyperOctreeClipCutPointsGrabber(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkHyperOctreeClipCutPointsGrabberNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkHyperOctreePointsGrabberNew
extern "C" { PyObject *PyVTKClass_vtkHyperOctreePointsGrabberNew(const char *); }
#define DECLARED_PyVTKClass_vtkHyperOctreePointsGrabberNew
#endif

static const char **PyvtkHyperOctreeClipCutPointsGrabber_Doc();


static PyObject *
PyvtkHyperOctreeClipCutPointsGrabber_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeClipCutPointsGrabber *op = static_cast<vtkHyperOctreeClipCutPointsGrabber *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkHyperOctreeClipCutPointsGrabber::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeClipCutPointsGrabber_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeClipCutPointsGrabber *op = static_cast<vtkHyperOctreeClipCutPointsGrabber *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperOctreeClipCutPointsGrabber::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeClipCutPointsGrabber_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeClipCutPointsGrabber *op = static_cast<vtkHyperOctreeClipCutPointsGrabber *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperOctreeClipCutPointsGrabber *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperOctreeClipCutPointsGrabber::NewInstance());

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
PyvtkHyperOctreeClipCutPointsGrabber_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkHyperOctreeClipCutPointsGrabber *tempr = vtkHyperOctreeClipCutPointsGrabber::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeClipCutPointsGrabber_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeClipCutPointsGrabber *op = static_cast<vtkHyperOctreeClipCutPointsGrabber *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimension(temp0);
      }
    else
      {
      op->vtkHyperOctreeClipCutPointsGrabber::SetDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeClipCutPointsGrabber_InitPointInsertion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeClipCutPointsGrabber *op = static_cast<vtkHyperOctreeClipCutPointsGrabber *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitPointInsertion();
      }
    else
      {
      op->vtkHyperOctreeClipCutPointsGrabber::InitPointInsertion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeClipCutPointsGrabber_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeClipCutPointsGrabber *op = static_cast<vtkHyperOctreeClipCutPointsGrabber *>(vp);

  vtkIdType temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  int temp3[3];
  int save3[3];
  const int size3 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->InsertPoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkHyperOctreeClipCutPointsGrabber::InsertPoint(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeClipCutPointsGrabber_InsertPointWithMerge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPointWithMerge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeClipCutPointsGrabber *op = static_cast<vtkHyperOctreeClipCutPointsGrabber *>(vp);

  vtkIdType temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  int temp3[3];
  int save3[3];
  const int size3 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      op->InsertPointWithMerge(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkHyperOctreeClipCutPointsGrabber::InsertPointWithMerge(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeClipCutPointsGrabber_InsertPoint2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeClipCutPointsGrabber *op = static_cast<vtkHyperOctreeClipCutPointsGrabber *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int temp1[3];
  int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InsertPoint2D(temp0, temp1);
      }
    else
      {
      op->vtkHyperOctreeClipCutPointsGrabber::InsertPoint2D(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeClipCutPointsGrabber_GetTriangulator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeClipCutPointsGrabber *op = static_cast<vtkHyperOctreeClipCutPointsGrabber *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkOrderedTriangulator *tempr = (ap.IsBound() ?
      op->GetTriangulator() :
      op->vtkHyperOctreeClipCutPointsGrabber::GetTriangulator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeClipCutPointsGrabber_GetPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeClipCutPointsGrabber *op = static_cast<vtkHyperOctreeClipCutPointsGrabber *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolygon *tempr = (ap.IsBound() ?
      op->GetPolygon() :
      op->vtkHyperOctreeClipCutPointsGrabber::GetPolygon());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperOctreeClipCutPointsGrabber_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperOctreeClipCutPointsGrabber_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperOctreeClipCutPointsGrabber_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperOctreeClipCutPointsGrabber_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkHyperOctreeClipCutPointsGrabber\nC++: vtkHyperOctreeClipCutPointsGrabber *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperOctreeClipCutPointsGrabber_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperOctreeClipCutPointsGrabber\nC++: vtkHyperOctreeClipCutPointsGrabber *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetDimension", PyvtkHyperOctreeClipCutPointsGrabber_SetDimension, METH_VARARGS,
   (char*)"V.SetDimension(int)\nC++: virtual void SetDimension(int dim)\n\nSet the dimension of the hyperoctree.\n\\pre valid_dim: (dim==2 || dim==3)\n\\post is_set: GetDimension()==dim\n"},
  {(char*)"InitPointInsertion", PyvtkHyperOctreeClipCutPointsGrabber_InitPointInsertion, METH_VARARGS,
   (char*)"V.InitPointInsertion()\nC++: virtual void InitPointInsertion()\n\nInitialize the points insertion scheme. Actually, it is just a\ntrick to initialize the IdSet from the filter. The IdSet class\ncannot be shared with the filter because it is a Pimpl. It is\nused by clip,cut and contour filters to build the points that lie\non an hyperoctant.\n\\pre only_in_3d: GetDimension()==3\n"},
  {(char*)"InsertPoint", PyvtkHyperOctreeClipCutPointsGrabber_InsertPoint, METH_VARARGS,
   (char*)"V.InsertPoint(int, [float, float, float], [float, float, float],\n    [int, int, int])\nC++: virtual void InsertPoint(vtkIdType ptId, double pt[3],\n    double pcoords[3], int ijk[3])\n\nInsert a point, assuming the point is unique and does not require\na locator. Tt does not mean it does not use a locator. It just\nmean that some implementation may skip the use of a locator.\n"},
  {(char*)"InsertPointWithMerge", PyvtkHyperOctreeClipCutPointsGrabber_InsertPointWithMerge, METH_VARARGS,
   (char*)"V.InsertPointWithMerge(int, [float, float, float], [float, float,\n    float], [int, int, int])\nC++: virtual void InsertPointWithMerge(vtkIdType ptId,\n    double pt[3], double pcoords[3], int ijk[3])\n\nInsert a point using a locator.\n"},
  {(char*)"InsertPoint2D", PyvtkHyperOctreeClipCutPointsGrabber_InsertPoint2D, METH_VARARGS,
   (char*)"V.InsertPoint2D([float, float, float], [int, int, int])\nC++: virtual void InsertPoint2D(double pt[3], int ijk[3])\n\nInsert a point in the quadtree case.\n"},
  {(char*)"GetTriangulator", PyvtkHyperOctreeClipCutPointsGrabber_GetTriangulator, METH_VARARGS,
   (char*)"V.GetTriangulator() -> vtkOrderedTriangulator\nC++: vtkOrderedTriangulator *GetTriangulator()\n\nReturn the ordered triangulator.\n"},
  {(char*)"GetPolygon", PyvtkHyperOctreeClipCutPointsGrabber_GetPolygon, METH_VARARGS,
   (char*)"V.GetPolygon() -> vtkPolygon\nC++: vtkPolygon *GetPolygon()\n\nReturn the polygon.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperOctreeClipCutPointsGrabber_StaticNew()
{
  return vtkHyperOctreeClipCutPointsGrabber::New();
}

PyObject *PyVTKClass_vtkHyperOctreeClipCutPointsGrabberNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperOctreeClipCutPointsGrabber_StaticNew,
    PyvtkHyperOctreeClipCutPointsGrabber_Methods,
    "vtkHyperOctreeClipCutPointsGrabber", modulename,
    NULL, NULL,
    PyvtkHyperOctreeClipCutPointsGrabber_Doc(),
    PyVTKClass_vtkHyperOctreePointsGrabberNew(modulename));
  return cls;
}

const char **PyvtkHyperOctreeClipCutPointsGrabber_Doc()
{
  static const char *docstring[] = {
    "vtkHyperOctreeClipCutPointsGrabber - A concrete implementation of\n\n",
    "Superclass: vtkHyperOctreePointsGrabber\n\n",
    "See Also:\n\nvtkHyperOctreeClipCut, vtkHyperOctreeClipCutClipCutPointsGrabber,\nvtkClipHyperOctree, vtkHyperOctreeClipCutCutter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperOctreeClipCutPointsGrabber(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperOctreeClipCutPointsGrabberNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperOctreeClipCutPointsGrabber", o) != 0)
    {
    Py_DECREF(o);
    }

}

