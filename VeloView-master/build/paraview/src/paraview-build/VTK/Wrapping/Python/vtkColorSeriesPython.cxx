// python wrapper for vtkColorSeries
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkColor.h"
#include "vtkColorSeries.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkColorSeries(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkColorSeriesNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkColorSeries_Doc();

#ifndef DECLARED_PyvtkColorSeries_ColorSchemes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColorSeries_ColorSchemes_Type;
#define DECLARED_PyvtkColorSeries_ColorSchemes_Type
#endif

PyTypeObject PyvtkColorSeries_ColorSchemes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ColorSchemes", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkColorSeries_ColorSchemes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkColorSeries_ColorSchemes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}

#ifndef DECLARED_PyvtkColorSeries_LUTMode_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkColorSeries_LUTMode_Type;
#define DECLARED_PyvtkColorSeries_LUTMode_Type
#endif

PyTypeObject PyvtkColorSeries_LUTMode_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"LUTMode", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkColorSeries_LUTMode_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkColorSeries_LUTMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkColorSeries_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkColorSeries::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkColorSeries::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkColorSeries *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkColorSeries::NewInstance());

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
PyvtkColorSeries_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkColorSeries *tempr = vtkColorSeries::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_SetColorScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorScheme(temp0);
      }
    else
      {
      op->vtkColorSeries::SetColorScheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_SetColorSchemeByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSchemeByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->SetColorSchemeByName(temp0) :
      op->vtkColorSeries::SetColorSchemeByName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_GetNumberOfColorSchemes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorSchemes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColorSchemes() :
      op->vtkColorSeries::GetNumberOfColorSchemes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_GetColorSchemeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSchemeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetColorSchemeName() :
      op->vtkColorSeries::GetColorSchemeName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_SetColorSchemeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSchemeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorSchemeName(temp0);
      }
    else
      {
      op->vtkColorSeries::SetColorSchemeName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_GetColorScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetColorScheme() :
      op->vtkColorSeries::GetColorScheme());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_GetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColors() :
      op->vtkColorSeries::GetNumberOfColors());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_SetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfColors(temp0);
      }
    else
      {
      op->vtkColorSeries::SetNumberOfColors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor3ub tempr = (ap.IsBound() ?
      op->GetColor(temp0) :
      op->vtkColorSeries::GetColor(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3ub");
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_GetColorRepeating(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorRepeating");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkColor3ub tempr = (ap.IsBound() ?
      op->GetColorRepeating(temp0) :
      op->vtkColorSeries::GetColorRepeating(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3ub");
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  vtkColor3ub *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor3ub"))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, *temp1);
      }
    else
      {
      op->vtkColorSeries::SetColor(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkColorSeries_AddColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkColor3ub *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3ub"))
    {
    if (ap.IsBound())
      {
      op->AddColor(*temp0);
      }
    else
      {
      op->vtkColorSeries::AddColor(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkColorSeries_InsertColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  vtkColor3ub *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor3ub"))
    {
    if (ap.IsBound())
      {
      op->InsertColor(temp0, *temp1);
      }
    else
      {
      op->vtkColorSeries::InsertColor(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkColorSeries_RemoveColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveColor(temp0);
      }
    else
      {
      op->vtkColorSeries::RemoveColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_ClearColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearColors();
      }
    else
      {
      op->vtkColorSeries::ClearColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkColorSeries *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorSeries"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkColorSeries::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_BuildLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  vtkLookupTable *temp0 = NULL;
  int temp1 = vtkColorSeries::CATEGORICAL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkLookupTable") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->BuildLookupTable(temp0, temp1);
      }
    else
      {
      op->vtkColorSeries::BuildLookupTable(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorSeries_CreateLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorSeries *op = static_cast<vtkColorSeries *>(vp);

  int temp0 = vtkColorSeries::CATEGORICAL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->CreateLookupTable(temp0) :
      op->vtkColorSeries::CreateLookupTable(temp0));

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

static PyMethodDef PyvtkColorSeries_Methods[] = {
  {(char*)"GetClassName", PyvtkColorSeries_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkColorSeries_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkColorSeries_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkColorSeries\nC++: vtkColorSeries *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkColorSeries_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkColorSeries\nC++: vtkColorSeries *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetColorScheme", PyvtkColorSeries_SetColorScheme, METH_VARARGS,
   (char*)"V.SetColorScheme(int)\nC++: virtual void SetColorScheme(int scheme)\n\nSet the color scheme that should be used. The variant of this\nfunction that takes an integer should pass a number from those in\nthe enum, or a value returned by the string variant. The variant\nthat accepts a string returns the integer index of the resulting\npalette (whether it already existed or is newly-created).\n"},
  {(char*)"SetColorSchemeByName", PyvtkColorSeries_SetColorSchemeByName, METH_VARARGS,
   (char*)"V.SetColorSchemeByName(string) -> int\nC++: virtual int SetColorSchemeByName(\n    const vtkStdString &schemeName)\n\nSet the color scheme that should be used. The variant of this\nfunction that takes an integer should pass a number from those in\nthe enum, or a value returned by the string variant. The variant\nthat accepts a string returns the integer index of the resulting\npalette (whether it already existed or is newly-created).\n"},
  {(char*)"GetNumberOfColorSchemes", PyvtkColorSeries_GetNumberOfColorSchemes, METH_VARARGS,
   (char*)"V.GetNumberOfColorSchemes() -> int\nC++: int GetNumberOfColorSchemes()\n\nReturn the number of schemes currently defined.\n"},
  {(char*)"GetColorSchemeName", PyvtkColorSeries_GetColorSchemeName, METH_VARARGS,
   (char*)"V.GetColorSchemeName() -> string\nC++: virtual vtkStdString GetColorSchemeName()\n\nGet the color scheme that is currently being used.\n"},
  {(char*)"SetColorSchemeName", PyvtkColorSeries_SetColorSchemeName, METH_VARARGS,
   (char*)"V.SetColorSchemeName(string)\nC++: virtual void SetColorSchemeName(const vtkStdString &scheme)\n\nSet the name of the current color scheme\n"},
  {(char*)"GetColorScheme", PyvtkColorSeries_GetColorScheme, METH_VARARGS,
   (char*)"V.GetColorScheme() -> int\nC++: virtual int GetColorScheme()\n\nReturn the ID of the color scheme currently in use.\n"},
  {(char*)"GetNumberOfColors", PyvtkColorSeries_GetNumberOfColors, METH_VARARGS,
   (char*)"V.GetNumberOfColors() -> int\nC++: virtual int GetNumberOfColors()\n\nGet the number of colors available in the current color scheme.\n"},
  {(char*)"SetNumberOfColors", PyvtkColorSeries_SetNumberOfColors, METH_VARARGS,
   (char*)"V.SetNumberOfColors(int)\nC++: virtual void SetNumberOfColors(int numColors)\n\nSet the number of colors to be stored in a non-default color\nscheme. Calling this function on a predefined color scheme will\ncause the scheme to be duplicated to a new custom scheme.\n"},
  {(char*)"GetColor", PyvtkColorSeries_GetColor, METH_VARARGS,
   (char*)"V.GetColor(int) -> vtkColor3ub\nC++: vtkColor3ub GetColor(int index)\n\nGet the color at the specified index. If the index is out of\nrange then black will be returned.\n"},
  {(char*)"GetColorRepeating", PyvtkColorSeries_GetColorRepeating, METH_VARARGS,
   (char*)"V.GetColorRepeating(int) -> vtkColor3ub\nC++: vtkColor3ub GetColorRepeating(int index)\n\nGet the color at the specified index. If the index is out of\nrange then the call wraps around, i.e. uses the mod operator.\n"},
  {(char*)"SetColor", PyvtkColorSeries_SetColor, METH_VARARGS,
   (char*)"V.SetColor(int, vtkColor3ub)\nC++: virtual void SetColor(int index, const vtkColor3ub &color)\n\nSet the color at the specified index. Does nothing if the index\nis out of range.\n"},
  {(char*)"AddColor", PyvtkColorSeries_AddColor, METH_VARARGS,
   (char*)"V.AddColor(vtkColor3ub)\nC++: virtual void AddColor(const vtkColor3ub &color)\n\nAdds the color to the end of the list.\n"},
  {(char*)"InsertColor", PyvtkColorSeries_InsertColor, METH_VARARGS,
   (char*)"V.InsertColor(int, vtkColor3ub)\nC++: virtual void InsertColor(int index, const vtkColor3ub &color)\n\nInserts the color at the specified index in the list.\n"},
  {(char*)"RemoveColor", PyvtkColorSeries_RemoveColor, METH_VARARGS,
   (char*)"V.RemoveColor(int)\nC++: virtual void RemoveColor(int index)\n\nRemoves the color at the specified index in the list.\n"},
  {(char*)"ClearColors", PyvtkColorSeries_ClearColors, METH_VARARGS,
   (char*)"V.ClearColors()\nC++: virtual void ClearColors()\n\nClears the list of colors.\n"},
  {(char*)"DeepCopy", PyvtkColorSeries_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkColorSeries)\nC++: virtual void DeepCopy(vtkColorSeries *chartColors)\n\nMake a deep copy of the supplied object.\n"},
  {(char*)"BuildLookupTable", PyvtkColorSeries_BuildLookupTable, METH_VARARGS,
   (char*)"V.BuildLookupTable(vtkLookupTable, int)\nC++: void BuildLookupTable(vtkLookupTable *lkup,\n    int lutIndexing=vtkColorSeries::CATEGORICAL)\n\nPopulate a lookup table with all the colors in the current\nscheme.\n\nThe default behavior is to return categorical data. Set\nlutIndexing to ORDINAL to return ordinal data. Any other value\nfor lutIndexing is treated as CATEGORICAL.\n"},
  {(char*)"CreateLookupTable", PyvtkColorSeries_CreateLookupTable, METH_VARARGS,
   (char*)"V.CreateLookupTable(int) -> vtkLookupTable\nC++: vtkLookupTable *CreateLookupTable(\n    int lutIndexing=vtkColorSeries::CATEGORICAL)\n\nCreate a new lookup table with all the colors in the current\nscheme.\n\nThe caller is responsible for deleting the table after use.\n\nThe default behavior is to return categorical data. Set\nlutIndexing to ORDINAL to return ordinal data. Any other value\nfor lutIndexing is treated as CATEGORICAL.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkColorSeries_StaticNew()
{
  return vtkColorSeries::New();
}

PyObject *PyVTKClass_vtkColorSeriesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkColorSeries_StaticNew,
    PyvtkColorSeries_Methods,
    "vtkColorSeries", modulename,
    NULL, NULL,
    PyvtkColorSeries_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkColorSeries_ColorSchemes_Type);
    PyvtkColorSeries_ColorSchemes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkColorSeries_ColorSchemes_Type;
    if (o && PyDict_SetItemString(d, (char *)"ColorSchemes", o) != 0)
      {
      Py_DECREF(o);
      }

    PyType_Ready(&PyvtkColorSeries_LUTMode_Type);
    PyvtkColorSeries_LUTMode_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkColorSeries_LUTMode_Type;
    if (o && PyDict_SetItemString(d, (char *)"LUTMode", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 63; c++)
      {
      typedef vtkColorSeries::ColorSchemes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[63] = {
          { "SPECTRUM", vtkColorSeries::SPECTRUM },
          { "WARM", vtkColorSeries::WARM },
          { "COOL", vtkColorSeries::COOL },
          { "BLUES", vtkColorSeries::BLUES },
          { "WILD_FLOWER", vtkColorSeries::WILD_FLOWER },
          { "CITRUS", vtkColorSeries::CITRUS },
          { "BREWER_DIVERGING_PURPLE_ORANGE_11", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_11 },
          { "BREWER_DIVERGING_PURPLE_ORANGE_10", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_10 },
          { "BREWER_DIVERGING_PURPLE_ORANGE_9", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_9 },
          { "BREWER_DIVERGING_PURPLE_ORANGE_8", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_8 },
          { "BREWER_DIVERGING_PURPLE_ORANGE_7", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_7 },
          { "BREWER_DIVERGING_PURPLE_ORANGE_6", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_6 },
          { "BREWER_DIVERGING_PURPLE_ORANGE_5", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_5 },
          { "BREWER_DIVERGING_PURPLE_ORANGE_4", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_4 },
          { "BREWER_DIVERGING_PURPLE_ORANGE_3", vtkColorSeries::BREWER_DIVERGING_PURPLE_ORANGE_3 },
          { "BREWER_DIVERGING_SPECTRAL_11", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_11 },
          { "BREWER_DIVERGING_SPECTRAL_10", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_10 },
          { "BREWER_DIVERGING_SPECTRAL_9", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_9 },
          { "BREWER_DIVERGING_SPECTRAL_8", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_8 },
          { "BREWER_DIVERGING_SPECTRAL_7", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_7 },
          { "BREWER_DIVERGING_SPECTRAL_6", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_6 },
          { "BREWER_DIVERGING_SPECTRAL_5", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_5 },
          { "BREWER_DIVERGING_SPECTRAL_4", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_4 },
          { "BREWER_DIVERGING_SPECTRAL_3", vtkColorSeries::BREWER_DIVERGING_SPECTRAL_3 },
          { "BREWER_DIVERGING_BROWN_BLUE_GREEN_11", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_11 },
          { "BREWER_DIVERGING_BROWN_BLUE_GREEN_10", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_10 },
          { "BREWER_DIVERGING_BROWN_BLUE_GREEN_9", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_9 },
          { "BREWER_DIVERGING_BROWN_BLUE_GREEN_8", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_8 },
          { "BREWER_DIVERGING_BROWN_BLUE_GREEN_7", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_7 },
          { "BREWER_DIVERGING_BROWN_BLUE_GREEN_6", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_6 },
          { "BREWER_DIVERGING_BROWN_BLUE_GREEN_5", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_5 },
          { "BREWER_DIVERGING_BROWN_BLUE_GREEN_4", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_4 },
          { "BREWER_DIVERGING_BROWN_BLUE_GREEN_3", vtkColorSeries::BREWER_DIVERGING_BROWN_BLUE_GREEN_3 },
          { "BREWER_SEQUENTIAL_BLUE_GREEN_9", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_9 },
          { "BREWER_SEQUENTIAL_BLUE_GREEN_8", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_8 },
          { "BREWER_SEQUENTIAL_BLUE_GREEN_7", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_7 },
          { "BREWER_SEQUENTIAL_BLUE_GREEN_6", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_6 },
          { "BREWER_SEQUENTIAL_BLUE_GREEN_5", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_5 },
          { "BREWER_SEQUENTIAL_BLUE_GREEN_4", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_4 },
          { "BREWER_SEQUENTIAL_BLUE_GREEN_3", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_GREEN_3 },
          { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_9", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_9 },
          { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_8", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_8 },
          { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_7", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_7 },
          { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_6", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_6 },
          { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_5", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_5 },
          { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_4", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_4 },
          { "BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_3", vtkColorSeries::BREWER_SEQUENTIAL_YELLOW_ORANGE_BROWN_3 },
          { "BREWER_SEQUENTIAL_BLUE_PURPLE_9", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_9 },
          { "BREWER_SEQUENTIAL_BLUE_PURPLE_8", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_8 },
          { "BREWER_SEQUENTIAL_BLUE_PURPLE_7", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_7 },
          { "BREWER_SEQUENTIAL_BLUE_PURPLE_6", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_6 },
          { "BREWER_SEQUENTIAL_BLUE_PURPLE_5", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_5 },
          { "BREWER_SEQUENTIAL_BLUE_PURPLE_4", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_4 },
          { "BREWER_SEQUENTIAL_BLUE_PURPLE_3", vtkColorSeries::BREWER_SEQUENTIAL_BLUE_PURPLE_3 },
          { "BREWER_QUALITATIVE_ACCENT", vtkColorSeries::BREWER_QUALITATIVE_ACCENT },
          { "BREWER_QUALITATIVE_DARK2", vtkColorSeries::BREWER_QUALITATIVE_DARK2 },
          { "BREWER_QUALITATIVE_SET2", vtkColorSeries::BREWER_QUALITATIVE_SET2 },
          { "BREWER_QUALITATIVE_PASTEL2", vtkColorSeries::BREWER_QUALITATIVE_PASTEL2 },
          { "BREWER_QUALITATIVE_PASTEL1", vtkColorSeries::BREWER_QUALITATIVE_PASTEL1 },
          { "BREWER_QUALITATIVE_SET1", vtkColorSeries::BREWER_QUALITATIVE_SET1 },
          { "BREWER_QUALITATIVE_PAIRED", vtkColorSeries::BREWER_QUALITATIVE_PAIRED },
          { "BREWER_QUALITATIVE_SET3", vtkColorSeries::BREWER_QUALITATIVE_SET3 },
          { "CUSTOM", vtkColorSeries::CUSTOM },
        };

      o = PyvtkColorSeries_ColorSchemes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    for (int c = 0; c < 2; c++)
      {
      typedef vtkColorSeries::LUTMode cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[2] = {
          { "ORDINAL", vtkColorSeries::ORDINAL },
          { "CATEGORICAL", vtkColorSeries::CATEGORICAL },
        };

      o = PyvtkColorSeries_LUTMode_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkColorSeries_Doc()
{
  static const char *docstring[] = {
    "vtkColorSeries - stores a list of colors.\n\n",
    "Superclass: vtkObject\n\n",
    "The vtkColorSeries stores palettes of colors. There are several\ndefault palettes (or schemes) available and functions to control\nseveral aspects of what colors are returned. In essence a color\nscheme is set and then the number of colors and individual color\nvalues may be requested.\n\nIt is also possible to add schemes beyond the default palettes.\nWhenever SetColorScheme is called with a string for ",
    "which no palette\nalready exists, a new, empty palette is created. You may then use\nSetNumberOfColors and SetColor to populate the palette. You may not\nextend default palettes by calling functions that alter a scheme; if\ncalled while a predefined palette is in use, they will create a new\nnon-default scheme and populate it with the current palette before\ncontinuing.\n\nThe \"Brewer\" palettes are courte",
    "sy of Cynthia A. Brewer (Dept. of\nGeography, Pennsylvania State University) and present under the\nApache License. See the source code for details.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkColorSeries(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkColorSeriesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColorSeries", o) != 0)
    {
    Py_DECREF(o);
    }

}

