// python wrapper for vtkSeedRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSeedRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSeedRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSeedRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkSeedRepresentation_Doc();


static PyObject *
PyvtkSeedRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSeedRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSeedRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSeedRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSeedRepresentation::NewInstance());

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
PyvtkSeedRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSeedRepresentation *tempr = vtkSeedRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_GetSeedWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  unsigned int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetSeedWorldPosition(temp0, temp1);
      }
    else
      {
      op->vtkSeedRepresentation::GetSeedWorldPosition(temp0, temp1);
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
PyvtkSeedRepresentation_SetSeedDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeedDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  unsigned int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetSeedDisplayPosition(temp0, temp1);
      }
    else
      {
      op->vtkSeedRepresentation::SetSeedDisplayPosition(temp0, temp1);
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
PyvtkSeedRepresentation_GetSeedDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  unsigned int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetSeedDisplayPosition(temp0, temp1);
      }
    else
      {
      op->vtkSeedRepresentation::GetSeedDisplayPosition(temp0, temp1);
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
PyvtkSeedRepresentation_GetNumberOfSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSeeds() :
      op->vtkSeedRepresentation::GetNumberOfSeeds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_SetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  vtkHandleRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHandleRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetHandleRepresentation(temp0);
      }
    else
      {
      op->vtkSeedRepresentation::SetHandleRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_GetHandleRepresentation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetHandleRepresentation(temp0) :
      op->vtkSeedRepresentation::GetHandleRepresentation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSeedRepresentation_GetHandleRepresentation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetHandleRepresentation() :
      op->vtkSeedRepresentation::GetHandleRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSeedRepresentation_GetHandleRepresentation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSeedRepresentation_GetHandleRepresentation_s1(self, args);
    case 0:
      return PyvtkSeedRepresentation_GetHandleRepresentation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetHandleRepresentation");
  return NULL;
}



static PyObject *
PyvtkSeedRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkSeedRepresentation::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkSeedRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkSeedRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkSeedRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_GetActiveHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetActiveHandle() :
      op->vtkSeedRepresentation::GetActiveHandle());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_CreateHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->CreateHandle(temp0) :
      op->vtkSeedRepresentation::CreateHandle(temp0));

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

  return result;
}


static PyObject *
PyvtkSeedRepresentation_RemoveLastHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLastHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveLastHandle();
      }
    else
      {
      op->vtkSeedRepresentation::RemoveLastHandle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_RemoveActiveHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveActiveHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveActiveHandle();
      }
    else
      {
      op->vtkSeedRepresentation::RemoveActiveHandle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_RemoveHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveHandle(temp0);
      }
    else
      {
      op->vtkSeedRepresentation::RemoveHandle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkSeedRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkSeedRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSeedRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkSeedRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkSeedRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkSeedRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSeedRepresentation\nC++: vtkSeedRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkSeedRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSeedRepresentation\nC++: vtkSeedRepresentation *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"GetSeedWorldPosition", PyvtkSeedRepresentation_GetSeedWorldPosition, METH_VARARGS,
   (char*)"V.GetSeedWorldPosition(int, [float, float, float])\nC++: virtual void GetSeedWorldPosition(unsigned int seedNum,\n    double pos[3])\n\nMethods to Set/Get the coordinates of seed points defining this\nrepresentation. Note that methods are available for both display\nand world coordinates. The seeds are accessed by a seed number.\n"},
  {(char*)"SetSeedDisplayPosition", PyvtkSeedRepresentation_SetSeedDisplayPosition, METH_VARARGS,
   (char*)"V.SetSeedDisplayPosition(int, [float, float, float])\nC++: virtual void SetSeedDisplayPosition(unsigned int seedNum,\n    double pos[3])\n\nMethods to Set/Get the coordinates of seed points defining this\nrepresentation. Note that methods are available for both display\nand world coordinates. The seeds are accessed by a seed number.\n"},
  {(char*)"GetSeedDisplayPosition", PyvtkSeedRepresentation_GetSeedDisplayPosition, METH_VARARGS,
   (char*)"V.GetSeedDisplayPosition(int, [float, float, float])\nC++: virtual void GetSeedDisplayPosition(unsigned int seedNum,\n    double pos[3])\n\nMethods to Set/Get the coordinates of seed points defining this\nrepresentation. Note that methods are available for both display\nand world coordinates. The seeds are accessed by a seed number.\n"},
  {(char*)"GetNumberOfSeeds", PyvtkSeedRepresentation_GetNumberOfSeeds, METH_VARARGS,
   (char*)"V.GetNumberOfSeeds() -> int\nC++: int GetNumberOfSeeds()\n\nReturn the number of seeds (or handles) that have been created.\n"},
  {(char*)"SetHandleRepresentation", PyvtkSeedRepresentation_SetHandleRepresentation, METH_VARARGS,
   (char*)"V.SetHandleRepresentation(vtkHandleRepresentation)\nC++: void SetHandleRepresentation(vtkHandleRepresentation *handle)\n\nThis method is used to specify the type of handle representation\nto use for the internal vtkHandleWidgets within vtkSeedWidget. \nTo use this method, create a dummy vtkHandleWidget (or subclass),\nand then invoke this method with this dummy. Then the\nvtkSeedRepresentation uses this dummy to clone vtkHandleWidgets\nof the same type. Make sure you set the handle representation\nbefore the widget is enabled.\n"},
  {(char*)"GetHandleRepresentation", PyvtkSeedRepresentation_GetHandleRepresentation, METH_VARARGS,
   (char*)"V.GetHandleRepresentation(int) -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetHandleRepresentation(\n    unsigned int num)\nV.GetHandleRepresentation() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetHandleRepresentation()\n\nGet the handle representations used for a particular seed. A side\neffect of this method is that it will create a handle\nrepresentation in the list of representations if one has not yet\nbeen created.\n"},
  {(char*)"SetTolerance", PyvtkSeedRepresentation_SetTolerance, METH_VARARGS,
   (char*)"V.SetTolerance(int)\nC++: void SetTolerance(int)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the seed points\nof the widget to be active.\n"},
  {(char*)"GetToleranceMinValue", PyvtkSeedRepresentation_GetToleranceMinValue, METH_VARARGS,
   (char*)"V.GetToleranceMinValue() -> int\nC++: int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the seed points\nof the widget to be active.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkSeedRepresentation_GetToleranceMaxValue, METH_VARARGS,
   (char*)"V.GetToleranceMaxValue() -> int\nC++: int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the seed points\nof the widget to be active.\n"},
  {(char*)"GetTolerance", PyvtkSeedRepresentation_GetTolerance, METH_VARARGS,
   (char*)"V.GetTolerance() -> int\nC++: int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the seed points\nof the widget to be active.\n"},
  {(char*)"GetActiveHandle", PyvtkSeedRepresentation_GetActiveHandle, METH_VARARGS,
   (char*)"V.GetActiveHandle() -> int\nC++: virtual int GetActiveHandle()\n\nThese are methods specific to vtkSeedRepresentation and which are\ninvoked from vtkSeedWidget.\n"},
  {(char*)"CreateHandle", PyvtkSeedRepresentation_CreateHandle, METH_VARARGS,
   (char*)"V.CreateHandle([float, float]) -> int\nC++: virtual int CreateHandle(double e[2])\n\n"},
  {(char*)"RemoveLastHandle", PyvtkSeedRepresentation_RemoveLastHandle, METH_VARARGS,
   (char*)"V.RemoveLastHandle()\nC++: virtual void RemoveLastHandle()\n\n"},
  {(char*)"RemoveActiveHandle", PyvtkSeedRepresentation_RemoveActiveHandle, METH_VARARGS,
   (char*)"V.RemoveActiveHandle()\nC++: virtual void RemoveActiveHandle()\n\n"},
  {(char*)"RemoveHandle", PyvtkSeedRepresentation_RemoveHandle, METH_VARARGS,
   (char*)"V.RemoveHandle(int)\nC++: virtual void RemoveHandle(int n)\n\nRemove the nth handle.\n"},
  {(char*)"BuildRepresentation", PyvtkSeedRepresentation_BuildRepresentation, METH_VARARGS,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"ComputeInteractionState", PyvtkSeedRepresentation_ComputeInteractionState, METH_VARARGS,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSeedRepresentation_StaticNew()
{
  return vtkSeedRepresentation::New();
}

PyObject *PyVTKClass_vtkSeedRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSeedRepresentation_StaticNew,
    PyvtkSeedRepresentation_Methods,
    "vtkSeedRepresentation", modulename,
    NULL, NULL,
    PyvtkSeedRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 2; c++)
      {
      static const struct { const char *name; int value; }
        constants[2] = {
          { "Outside", vtkSeedRepresentation::Outside },
          { "NearSeed", vtkSeedRepresentation::NearSeed },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSeedRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkSeedRepresentation - represent the vtkSeedWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "The vtkSeedRepresentation is a superclass for classes representing\nthe vtkSeedWidget. This representation consists of one or more\nhandles (vtkHandleRepresentation) which are used to place and\nmanipulate the points defining the collection of seeds.\n\nSee Also:\n\nvtkSeedWidget vtkHandleRepresentation vtkSeedRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSeedRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSeedRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSeedRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

