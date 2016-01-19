// python wrapper for vtkExtractSelectedFrustum
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkExtractSelectedFrustum.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExtractSelectedFrustum(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExtractSelectedFrustumNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
extern "C" { PyObject *PyVTKClass_vtkExtractSelectionBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
#endif

static const char **PyvtkExtractSelectedFrustum_Doc();


static PyObject *
PyvtkExtractSelectedFrustum_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExtractSelectedFrustum::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelectedFrustum::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExtractSelectedFrustum *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelectedFrustum::NewInstance());

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
PyvtkExtractSelectedFrustum_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExtractSelectedFrustum *tempr = vtkExtractSelectedFrustum::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExtractSelectedFrustum::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_SetFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  vtkPlanes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
    {
    if (ap.IsBound())
      {
      op->SetFrustum(temp0);
      }
    else
      {
      op->vtkExtractSelectedFrustum::SetFrustum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_GetFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPlanes *tempr = (ap.IsBound() ?
      op->GetFrustum() :
      op->vtkExtractSelectedFrustum::GetFrustum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_CreateFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  double temp0[32];
  double save0[32];
  const int size0 = 32;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->CreateFrustum(temp0);
      }
    else
      {
      op->vtkExtractSelectedFrustum::CreateFrustum(temp0);
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
PyvtkExtractSelectedFrustum_GetClipPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetClipPoints() :
      op->vtkExtractSelectedFrustum::GetClipPoints());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldType(temp0);
      }
    else
      {
      op->vtkExtractSelectedFrustum::SetFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkExtractSelectedFrustum::GetFieldType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_SetContainingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetContainingCells(temp0);
      }
    else
      {
      op->vtkExtractSelectedFrustum::SetContainingCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_GetContainingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetContainingCells() :
      op->vtkExtractSelectedFrustum::GetContainingCells());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_OverallBoundsTest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OverallBoundsTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->OverallBoundsTest(temp0) :
      op->vtkExtractSelectedFrustum::OverallBoundsTest(temp0));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_SetShowBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowBounds(temp0);
      }
    else
      {
      op->vtkExtractSelectedFrustum::SetShowBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_GetShowBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetShowBounds() :
      op->vtkExtractSelectedFrustum::GetShowBounds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_ShowBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowBoundsOn();
      }
    else
      {
      op->vtkExtractSelectedFrustum::ShowBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_ShowBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowBoundsOff();
      }
    else
      {
      op->vtkExtractSelectedFrustum::ShowBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInsideOut(temp0);
      }
    else
      {
      op->vtkExtractSelectedFrustum::SetInsideOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkExtractSelectedFrustum::GetInsideOut());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOn();
      }
    else
      {
      op->vtkExtractSelectedFrustum::InsideOutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedFrustum_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedFrustum *op = static_cast<vtkExtractSelectedFrustum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOff();
      }
    else
      {
      op->vtkExtractSelectedFrustum::InsideOutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractSelectedFrustum_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractSelectedFrustum_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractSelectedFrustum_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractSelectedFrustum_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExtractSelectedFrustum\nC++: vtkExtractSelectedFrustum *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractSelectedFrustum_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractSelectedFrustum\nC++: vtkExtractSelectedFrustum *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMTime", PyvtkExtractSelectedFrustum_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime taking into account changes to the Frustum\n"},
  {(char*)"SetFrustum", PyvtkExtractSelectedFrustum_SetFrustum, METH_VARARGS,
   (char*)"V.SetFrustum(vtkPlanes)\nC++: virtual void SetFrustum(vtkPlanes *)\n\nSet the selection frustum. The planes object must contain six\nplanes.\n"},
  {(char*)"GetFrustum", PyvtkExtractSelectedFrustum_GetFrustum, METH_VARARGS,
   (char*)"V.GetFrustum() -> vtkPlanes\nC++: vtkPlanes *GetFrustum()\n\nSet the selection frustum. The planes object must contain six\nplanes.\n"},
  {(char*)"CreateFrustum", PyvtkExtractSelectedFrustum_CreateFrustum, METH_VARARGS,
   (char*)"V.CreateFrustum([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: void CreateFrustum(double vertices[32])\n\nGiven eight vertices, creates a frustum. each pt is x,y,z,1 in\nthe following order near lower left, far lower left near upper\nleft, far upper left near lower right, far lower right near upper\nright, far upper right\n"},
  {(char*)"GetClipPoints", PyvtkExtractSelectedFrustum_GetClipPoints, METH_VARARGS,
   (char*)"V.GetClipPoints() -> vtkPoints\nC++: vtkPoints *GetClipPoints()\n\nReturn eight points that define the selection frustum. Valid if\ncreate Frustum was used, invalid if SetFrustum was.\n"},
  {(char*)"SetFieldType", PyvtkExtractSelectedFrustum_SetFieldType, METH_VARARGS,
   (char*)"V.SetFieldType(int)\nC++: void SetFieldType(int a)\n\nSets/gets the intersection test type.\n"},
  {(char*)"GetFieldType", PyvtkExtractSelectedFrustum_GetFieldType, METH_VARARGS,
   (char*)"V.GetFieldType() -> int\nC++: int GetFieldType()\n\nSets/gets the intersection test type.\n"},
  {(char*)"SetContainingCells", PyvtkExtractSelectedFrustum_SetContainingCells, METH_VARARGS,
   (char*)"V.SetContainingCells(int)\nC++: void SetContainingCells(int a)\n\nSets/gets the intersection test type. Only meaningful when\nfieldType is vtkSelection::POINT\n"},
  {(char*)"GetContainingCells", PyvtkExtractSelectedFrustum_GetContainingCells, METH_VARARGS,
   (char*)"V.GetContainingCells() -> int\nC++: int GetContainingCells()\n\nSets/gets the intersection test type. Only meaningful when\nfieldType is vtkSelection::POINT\n"},
  {(char*)"OverallBoundsTest", PyvtkExtractSelectedFrustum_OverallBoundsTest, METH_VARARGS,
   (char*)"V.OverallBoundsTest([float, ...]) -> int\nC++: int OverallBoundsTest(double *bounds)\n\nDoes a quick test on the AABBox defined by the bounds.\n"},
  {(char*)"SetShowBounds", PyvtkExtractSelectedFrustum_SetShowBounds, METH_VARARGS,
   (char*)"V.SetShowBounds(int)\nC++: void SetShowBounds(int a)\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default.\n"},
  {(char*)"GetShowBounds", PyvtkExtractSelectedFrustum_GetShowBounds, METH_VARARGS,
   (char*)"V.GetShowBounds() -> int\nC++: int GetShowBounds()\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default.\n"},
  {(char*)"ShowBoundsOn", PyvtkExtractSelectedFrustum_ShowBoundsOn, METH_VARARGS,
   (char*)"V.ShowBoundsOn()\nC++: void ShowBoundsOn()\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default.\n"},
  {(char*)"ShowBoundsOff", PyvtkExtractSelectedFrustum_ShowBoundsOff, METH_VARARGS,
   (char*)"V.ShowBoundsOff()\nC++: void ShowBoundsOff()\n\nWhen On, this returns an unstructured grid that outlines\nselection area. Off is the default.\n"},
  {(char*)"SetInsideOut", PyvtkExtractSelectedFrustum_SetInsideOut, METH_VARARGS,
   (char*)"V.SetInsideOut(int)\nC++: void SetInsideOut(int a)\n\nWhen on, extracts cells outside the frustum instead of inside.\n"},
  {(char*)"GetInsideOut", PyvtkExtractSelectedFrustum_GetInsideOut, METH_VARARGS,
   (char*)"V.GetInsideOut() -> int\nC++: int GetInsideOut()\n\nWhen on, extracts cells outside the frustum instead of inside.\n"},
  {(char*)"InsideOutOn", PyvtkExtractSelectedFrustum_InsideOutOn, METH_VARARGS,
   (char*)"V.InsideOutOn()\nC++: void InsideOutOn()\n\nWhen on, extracts cells outside the frustum instead of inside.\n"},
  {(char*)"InsideOutOff", PyvtkExtractSelectedFrustum_InsideOutOff, METH_VARARGS,
   (char*)"V.InsideOutOff()\nC++: void InsideOutOff()\n\nWhen on, extracts cells outside the frustum instead of inside.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractSelectedFrustum_StaticNew()
{
  return vtkExtractSelectedFrustum::New();
}

PyObject *PyVTKClass_vtkExtractSelectedFrustumNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractSelectedFrustum_StaticNew,
    PyvtkExtractSelectedFrustum_Methods,
    "vtkExtractSelectedFrustum", modulename,
    NULL, NULL,
    PyvtkExtractSelectedFrustum_Doc(),
    PyVTKClass_vtkExtractSelectionBaseNew(modulename));
  return cls;
}

const char **PyvtkExtractSelectedFrustum_Doc()
{
  static const char *docstring[] = {
    "vtkExtractSelectedFrustum - Returns the portion of the input dataset\nthat\n\n",
    "Superclass: vtkExtractSelectionBase\n\n",
    "This class intersects the input DataSet with a frustum and determines\nwhich cells and points lie within the frustum. The frustum is defined\nwith a vtkPlanes containing six cutting planes. The output is a\nDataSet that is either a shallow copy of the input dataset with two\nnew \"vtkInsidedness\" attribute arrays, or a completely new\nUnstructuredGrid that contains only the cells and points of the input",
    "\nthat are inside the frustum. The PreserveTopology flag controls which\noccurs. When PreserveTopology is off this filter adds a scalar array\ncalled vtkOriginalCellIds that says what input cell produced each\noutput cell. This is an example of a Pedigree ID which helps to trace\nback results.\n\nSee Also:\n\nvtkExtractGeometry, vtkAreaPicker, vtkExtractSelection, vtkSelection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractSelectedFrustum(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractSelectedFrustumNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractSelectedFrustum", o) != 0)
    {
    Py_DECREF(o);
    }

}

