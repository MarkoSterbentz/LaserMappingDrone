// python wrapper for vtkCompositeDataDisplayAttributes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkColor.h"
#include "vtkCompositeDataDisplayAttributes.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositeDataDisplayAttributes(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositeDataDisplayAttributesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCompositeDataDisplayAttributes_Doc();


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositeDataDisplayAttributes::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataDisplayAttributes::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeDataDisplayAttributes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataDisplayAttributes::NewInstance());

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
PyvtkCompositeDataDisplayAttributes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositeDataDisplayAttributes *tempr = vtkCompositeDataDisplayAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasBlockVisibilities() :
      op->vtkCompositeDataDisplayAttributes::HasBlockVisibilities());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBlockVisibility(temp0, temp1);
      }
    else
      {
      op->vtkCompositeDataDisplayAttributes::SetBlockVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetBlockVisibility(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockVisibility(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasBlockVisibility(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockVisibility(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveBlockVisibility(temp0);
      }
    else
      {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockVisibilites(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibilites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveBlockVisibilites();
      }
    else
      {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockVisibilites();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  unsigned int temp0;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetBlockColor(temp0, temp1);
      }
    else
      {
      op->vtkCompositeDataDisplayAttributes::SetBlockColor(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

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
      op->GetBlockColor(temp0, temp1);
      }
    else
      {
      op->vtkCompositeDataDisplayAttributes::GetBlockColor(temp0, temp1);
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
PyvtkCompositeDataDisplayAttributes_GetBlockColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor3d tempr = (ap.IsBound() ?
      op->GetBlockColor(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockColor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3d");
      }
    }

  return result;
}

static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCompositeDataDisplayAttributes_GetBlockColor_s1(self, args);
    case 1:
      return PyvtkCompositeDataDisplayAttributes_GetBlockColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBlockColor");
  return NULL;
}



static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasBlockColors() :
      op->vtkCompositeDataDisplayAttributes::HasBlockColors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasBlockColor(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockColor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveBlockColor(temp0);
      }
    else
      {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveBlockColors();
      }
    else
      {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  unsigned int temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBlockOpacity(temp0, temp1);
      }
    else
      {
      op->vtkCompositeDataDisplayAttributes::SetBlockOpacity(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBlockOpacity(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockOpacity(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockOpacities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockOpacities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasBlockOpacities() :
      op->vtkCompositeDataDisplayAttributes::HasBlockOpacities());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->HasBlockOpacity(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockOpacity(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveBlockOpacity(temp0);
      }
    else
      {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockOpacities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveBlockOpacities();
      }
    else
      {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockOpacities();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeDataDisplayAttributes_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeDataDisplayAttributes_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeDataDisplayAttributes_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeDataDisplayAttributes_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositeDataDisplayAttributes\nC++: vtkCompositeDataDisplayAttributes *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeDataDisplayAttributes_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeDataDisplayAttributes\nC++: vtkCompositeDataDisplayAttributes *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"HasBlockVisibilities", PyvtkCompositeDataDisplayAttributes_HasBlockVisibilities, METH_VARARGS,
   (char*)"V.HasBlockVisibilities() -> bool\nC++: bool HasBlockVisibilities()\n\nReturns true if any block has any block visibility is set.\n"},
  {(char*)"SetBlockVisibility", PyvtkCompositeDataDisplayAttributes_SetBlockVisibility, METH_VARARGS,
   (char*)"V.SetBlockVisibility(int, bool)\nC++: void SetBlockVisibility(unsigned int flat_index,\n    bool visible)\n\nSet/get the visibility for the block with flat_index.\n"},
  {(char*)"GetBlockVisibility", PyvtkCompositeDataDisplayAttributes_GetBlockVisibility, METH_VARARGS,
   (char*)"V.GetBlockVisibility(int) -> bool\nC++: bool GetBlockVisibility(unsigned int flat_index)\n\nSet/get the visibility for the block with flat_index.\n"},
  {(char*)"HasBlockVisibility", PyvtkCompositeDataDisplayAttributes_HasBlockVisibility, METH_VARARGS,
   (char*)"V.HasBlockVisibility(int) -> bool\nC++: bool HasBlockVisibility(unsigned int flat_index)\n\nReturns true if the block with the given flat_index has a\nvisiblity set.\n"},
  {(char*)"RemoveBlockVisibility", PyvtkCompositeDataDisplayAttributes_RemoveBlockVisibility, METH_VARARGS,
   (char*)"V.RemoveBlockVisibility(int)\nC++: void RemoveBlockVisibility(unsigned int flat_index)\n\nRemoves the block visibility flag for the block with flat_index.\n"},
  {(char*)"RemoveBlockVisibilites", PyvtkCompositeDataDisplayAttributes_RemoveBlockVisibilites, METH_VARARGS,
   (char*)"V.RemoveBlockVisibilites()\nC++: void RemoveBlockVisibilites()\n\nRemoves all block visibility flags. The effectively sets the\nvisibility for all blocks to true.\n"},
  {(char*)"SetBlockColor", PyvtkCompositeDataDisplayAttributes_SetBlockColor, METH_VARARGS,
   (char*)"V.SetBlockColor(int, (float, float, float))\nC++: void SetBlockColor(unsigned int flat_index,\n    const double color[3])\n\nSet/get the color for the block with flat_index.\n"},
  {(char*)"GetBlockColor", PyvtkCompositeDataDisplayAttributes_GetBlockColor, METH_VARARGS,
   (char*)"V.GetBlockColor(int, [float, float, float])\nC++: void GetBlockColor(unsigned int flat_index, double color[3])\nV.GetBlockColor(int) -> vtkColor3d\nC++: vtkColor3d GetBlockColor(unsigned int flat_index)\n\nSet/get the color for the block with flat_index.\n"},
  {(char*)"HasBlockColors", PyvtkCompositeDataDisplayAttributes_HasBlockColors, METH_VARARGS,
   (char*)"V.HasBlockColors() -> bool\nC++: bool HasBlockColors()\n\nReturns true if any block has any block color is set.\n"},
  {(char*)"HasBlockColor", PyvtkCompositeDataDisplayAttributes_HasBlockColor, METH_VARARGS,
   (char*)"V.HasBlockColor(int) -> bool\nC++: bool HasBlockColor(unsigned int flat_index)\n\nReturns true if the block with the given flat_index has a color.\n"},
  {(char*)"RemoveBlockColor", PyvtkCompositeDataDisplayAttributes_RemoveBlockColor, METH_VARARGS,
   (char*)"V.RemoveBlockColor(int)\nC++: void RemoveBlockColor(unsigned int flat_index)\n\nRemoves the block color for the block with flat_index.\n"},
  {(char*)"RemoveBlockColors", PyvtkCompositeDataDisplayAttributes_RemoveBlockColors, METH_VARARGS,
   (char*)"V.RemoveBlockColors()\nC++: void RemoveBlockColors()\n\nRemoves all block colors.\n"},
  {(char*)"SetBlockOpacity", PyvtkCompositeDataDisplayAttributes_SetBlockOpacity, METH_VARARGS,
   (char*)"V.SetBlockOpacity(int, float)\nC++: void SetBlockOpacity(unsigned int flat_index, double opacity)\n\nSet/get the opacity for the block with flat_index.\n"},
  {(char*)"GetBlockOpacity", PyvtkCompositeDataDisplayAttributes_GetBlockOpacity, METH_VARARGS,
   (char*)"V.GetBlockOpacity(int) -> float\nC++: double GetBlockOpacity(unsigned int flat_index)\n\nSet/get the opacity for the block with flat_index.\n"},
  {(char*)"HasBlockOpacities", PyvtkCompositeDataDisplayAttributes_HasBlockOpacities, METH_VARARGS,
   (char*)"V.HasBlockOpacities() -> bool\nC++: bool HasBlockOpacities()\n\nReturns true if any block has an opacity set.\n"},
  {(char*)"HasBlockOpacity", PyvtkCompositeDataDisplayAttributes_HasBlockOpacity, METH_VARARGS,
   (char*)"V.HasBlockOpacity(int) -> bool\nC++: bool HasBlockOpacity(unsigned int flat_index)\n\nReturns true if the block with flat_index has an opacity set.\n"},
  {(char*)"RemoveBlockOpacity", PyvtkCompositeDataDisplayAttributes_RemoveBlockOpacity, METH_VARARGS,
   (char*)"V.RemoveBlockOpacity(int)\nC++: void RemoveBlockOpacity(unsigned int flat_index)\n\nRemoves the set opacity for the block with flat_index.\n"},
  {(char*)"RemoveBlockOpacities", PyvtkCompositeDataDisplayAttributes_RemoveBlockOpacities, METH_VARARGS,
   (char*)"V.RemoveBlockOpacities()\nC++: void RemoveBlockOpacities()\n\nRemoves all block opacities.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeDataDisplayAttributes_StaticNew()
{
  return vtkCompositeDataDisplayAttributes::New();
}

PyObject *PyVTKClass_vtkCompositeDataDisplayAttributesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeDataDisplayAttributes_StaticNew,
    PyvtkCompositeDataDisplayAttributes_Methods,
    "vtkCompositeDataDisplayAttributes", modulename,
    NULL, NULL,
    PyvtkCompositeDataDisplayAttributes_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCompositeDataDisplayAttributes_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeDataDisplayAttributes - rendering attributes for a\n\n",
    "Superclass: vtkObject\n\n",
    "The vtkCompositeDataDisplayAttributes class stores display attributes\nfor individual blocks in a multi-block dataset.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeDataDisplayAttributes(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeDataDisplayAttributesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeDataDisplayAttributes", o) != 0)
    {
    Py_DECREF(o);
    }

}

