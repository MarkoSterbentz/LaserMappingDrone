// python wrapper for vtkCompositePolyDataMapper2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCompositePolyDataMapper2.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositePolyDataMapper2(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositePolyDataMapper2New(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPainterPolyDataMapperNew
extern "C" { PyObject *PyVTKClass_vtkPainterPolyDataMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkPainterPolyDataMapperNew
#endif

static const char **PyvtkCompositePolyDataMapper2_Doc();


static PyObject *
PyvtkCompositePolyDataMapper2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositePolyDataMapper2::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositePolyDataMapper2::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositePolyDataMapper2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositePolyDataMapper2::NewInstance());

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
PyvtkCompositePolyDataMapper2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositePolyDataMapper2 *tempr = vtkCompositePolyDataMapper2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_GetIsOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetIsOpaque() :
      op->vtkCompositePolyDataMapper2::GetIsOpaque());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetCompositeDataDisplayAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeDataDisplayAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  vtkCompositeDataDisplayAttributes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataDisplayAttributes"))
    {
    if (ap.IsBound())
      {
      op->SetCompositeDataDisplayAttributes(temp0);
      }
    else
      {
      op->vtkCompositePolyDataMapper2::SetCompositeDataDisplayAttributes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_GetCompositeDataDisplayAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataDisplayAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeDataDisplayAttributes *tempr = (ap.IsBound() ?
      op->GetCompositeDataDisplayAttributes() :
      op->vtkCompositePolyDataMapper2::GetCompositeDataDisplayAttributes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

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
      op->vtkCompositePolyDataMapper2::SetBlockVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_GetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetBlockVisibility(temp0) :
      op->vtkCompositePolyDataMapper2::GetBlockVisibility(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

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
      op->vtkCompositePolyDataMapper2::RemoveBlockVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockVisibilites(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibilites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveBlockVisibilites();
      }
    else
      {
      op->vtkCompositePolyDataMapper2::RemoveBlockVisibilites();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetBlockColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

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
      op->SetBlockColor(temp0, temp1);
      }
    else
      {
      op->vtkCompositePolyDataMapper2::SetBlockColor(temp0, temp1);
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
PyvtkCompositePolyDataMapper2_SetBlockColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetBlockColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkCompositePolyDataMapper2::SetBlockColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper2_SetBlockColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCompositePolyDataMapper2_SetBlockColor_s1(self, args);
    case 4:
      return PyvtkCompositePolyDataMapper2_SetBlockColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBlockColor");
  return NULL;
}



static PyObject *
PyvtkCompositePolyDataMapper2_GetBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double *tempr = (ap.IsBound() ?
      op->GetBlockColor(temp0) :
      op->vtkCompositePolyDataMapper2::GetBlockColor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

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
      op->vtkCompositePolyDataMapper2::RemoveBlockColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveBlockColors();
      }
    else
      {
      op->vtkCompositePolyDataMapper2::RemoveBlockColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

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
      op->vtkCompositePolyDataMapper2::SetBlockOpacity(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_GetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBlockOpacity(temp0) :
      op->vtkCompositePolyDataMapper2::GetBlockOpacity(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

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
      op->vtkCompositePolyDataMapper2::RemoveBlockOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockOpacities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveBlockOpacities();
      }
    else
      {
      op->vtkCompositePolyDataMapper2::RemoveBlockOpacities();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositePolyDataMapper2_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositePolyDataMapper2_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositePolyDataMapper2_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositePolyDataMapper2_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositePolyDataMapper2\nC++: vtkCompositePolyDataMapper2 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositePolyDataMapper2_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositePolyDataMapper2\nC++: vtkCompositePolyDataMapper2 *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetIsOpaque", PyvtkCompositePolyDataMapper2_GetIsOpaque, METH_VARARGS,
   (char*)"V.GetIsOpaque() -> bool\nC++: virtual bool GetIsOpaque()\n\nReturns if the mapper does not expect to have translucent\ngeometry. This may happen when using ScalarMode is set to not map\nscalars i.e. render the scalar array directly as colors and the\nscalar array has opacity i.e. alpha component. Note that even if\nthis method returns true, an actor may treat the geometry as\ntranslucent since a constant translucency is set on the property,\nfor example. Overridden to use the actual data and ScalarMode to\ndetermine if we have opaque geometry.\n"},
  {(char*)"SetCompositeDataDisplayAttributes", PyvtkCompositePolyDataMapper2_SetCompositeDataDisplayAttributes, METH_VARARGS,
   (char*)"V.SetCompositeDataDisplayAttributes(\n    vtkCompositeDataDisplayAttributes)\nC++: void SetCompositeDataDisplayAttributes(\n    vtkCompositeDataDisplayAttributes *attributes)\n\nSet/get the composite data set attributes.\n"},
  {(char*)"GetCompositeDataDisplayAttributes", PyvtkCompositePolyDataMapper2_GetCompositeDataDisplayAttributes, METH_VARARGS,
   (char*)"V.GetCompositeDataDisplayAttributes()\n    -> vtkCompositeDataDisplayAttributes\nC++: vtkCompositeDataDisplayAttributes *GetCompositeDataDisplayAttributes(\n    )\n\nSet/get the composite data set attributes.\n"},
  {(char*)"SetBlockVisibility", PyvtkCompositePolyDataMapper2_SetBlockVisibility, METH_VARARGS,
   (char*)"V.SetBlockVisibility(int, bool)\nC++: void SetBlockVisibility(unsigned int index, bool visible)\n\nSet/get the visibility for a block given its flat index.\n"},
  {(char*)"GetBlockVisibility", PyvtkCompositePolyDataMapper2_GetBlockVisibility, METH_VARARGS,
   (char*)"V.GetBlockVisibility(int) -> bool\nC++: bool GetBlockVisibility(unsigned int index)\n\nSet/get the visibility for a block given its flat index.\n"},
  {(char*)"RemoveBlockVisibility", PyvtkCompositePolyDataMapper2_RemoveBlockVisibility, METH_VARARGS,
   (char*)"V.RemoveBlockVisibility(int)\nC++: void RemoveBlockVisibility(unsigned int index)\n\nSet/get the visibility for a block given its flat index.\n"},
  {(char*)"RemoveBlockVisibilites", PyvtkCompositePolyDataMapper2_RemoveBlockVisibilites, METH_VARARGS,
   (char*)"V.RemoveBlockVisibilites()\nC++: void RemoveBlockVisibilites()\n\nSet/get the visibility for a block given its flat index.\n"},
  {(char*)"SetBlockColor", PyvtkCompositePolyDataMapper2_SetBlockColor, METH_VARARGS,
   (char*)"V.SetBlockColor(int, [float, float, float])\nC++: void SetBlockColor(unsigned int index, double color[3])\nV.SetBlockColor(int, float, float, float)\nC++: void SetBlockColor(unsigned int index, double r, double g,\n    double b)\n\nSet/get the color for a block given its flat index.\n"},
  {(char*)"GetBlockColor", PyvtkCompositePolyDataMapper2_GetBlockColor, METH_VARARGS,
   (char*)"V.GetBlockColor(int) -> (float, ...)\nC++: double *GetBlockColor(unsigned int index)\n\nSet/get the color for a block given its flat index.\n"},
  {(char*)"RemoveBlockColor", PyvtkCompositePolyDataMapper2_RemoveBlockColor, METH_VARARGS,
   (char*)"V.RemoveBlockColor(int)\nC++: void RemoveBlockColor(unsigned int index)\n\nSet/get the color for a block given its flat index.\n"},
  {(char*)"RemoveBlockColors", PyvtkCompositePolyDataMapper2_RemoveBlockColors, METH_VARARGS,
   (char*)"V.RemoveBlockColors()\nC++: void RemoveBlockColors()\n\nSet/get the color for a block given its flat index.\n"},
  {(char*)"SetBlockOpacity", PyvtkCompositePolyDataMapper2_SetBlockOpacity, METH_VARARGS,
   (char*)"V.SetBlockOpacity(int, float)\nC++: void SetBlockOpacity(unsigned int index, double opacity)\n\nSet/get the opacity for a block given its flat index.\n"},
  {(char*)"GetBlockOpacity", PyvtkCompositePolyDataMapper2_GetBlockOpacity, METH_VARARGS,
   (char*)"V.GetBlockOpacity(int) -> float\nC++: double GetBlockOpacity(unsigned int index)\n\nSet/get the opacity for a block given its flat index.\n"},
  {(char*)"RemoveBlockOpacity", PyvtkCompositePolyDataMapper2_RemoveBlockOpacity, METH_VARARGS,
   (char*)"V.RemoveBlockOpacity(int)\nC++: void RemoveBlockOpacity(unsigned int index)\n\nSet/get the opacity for a block given its flat index.\n"},
  {(char*)"RemoveBlockOpacities", PyvtkCompositePolyDataMapper2_RemoveBlockOpacities, METH_VARARGS,
   (char*)"V.RemoveBlockOpacities()\nC++: void RemoveBlockOpacities()\n\nSet/get the opacity for a block given its flat index.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositePolyDataMapper2_StaticNew()
{
  return vtkCompositePolyDataMapper2::New();
}

PyObject *PyVTKClass_vtkCompositePolyDataMapper2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositePolyDataMapper2_StaticNew,
    PyvtkCompositePolyDataMapper2_Methods,
    "vtkCompositePolyDataMapper2", modulename,
    NULL, NULL,
    PyvtkCompositePolyDataMapper2_Doc(),
    PyVTKClass_vtkPainterPolyDataMapperNew(modulename));
  return cls;
}

const char **PyvtkCompositePolyDataMapper2_Doc()
{
  static const char *docstring[] = {
    "vtkCompositePolyDataMapper2 - mapper for composite dataset consisting\n\n",
    "Superclass: vtkPainterPolyDataMapper\n\n",
    "vtkCompositePolyDataMapper2 is similar to vtkCompositePolyDataMapper\nexcept that instead of creating individual mapper for each block in\nthe composite dataset, it iterates over the blocks internally.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositePolyDataMapper2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositePolyDataMapper2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositePolyDataMapper2", o) != 0)
    {
    Py_DECREF(o);
    }

}

