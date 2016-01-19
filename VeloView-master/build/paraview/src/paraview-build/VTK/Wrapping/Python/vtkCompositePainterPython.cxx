// python wrapper for vtkCompositePainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCompositePainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCompositePainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCompositePainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPainterNew
extern "C" { PyObject *PyVTKClass_vtkPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPainterNew
#endif

static const char **PyvtkCompositePainter_Doc();


static PyObject *
PyvtkCompositePainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePainter *op = static_cast<vtkCompositePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCompositePainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePainter *op = static_cast<vtkCompositePainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositePainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePainter *op = static_cast<vtkCompositePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositePainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositePainter::NewInstance());

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
PyvtkCompositePainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCompositePainter *tempr = vtkCompositePainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePainter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePainter *op = static_cast<vtkCompositePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkCompositePainter::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePainter_DISPLAY_ATTRIBUTES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DISPLAY_ATTRIBUTES");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationObjectBaseKey *tempr = vtkCompositePainter::DISPLAY_ATTRIBUTES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePainter_SetCompositeDataDisplayAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeDataDisplayAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePainter *op = static_cast<vtkCompositePainter *>(vp);

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
      op->vtkCompositePainter::SetCompositeDataDisplayAttributes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositePainter_GetCompositeDataDisplayAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataDisplayAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePainter *op = static_cast<vtkCompositePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCompositeDataDisplayAttributes *tempr = (ap.IsBound() ?
      op->GetCompositeDataDisplayAttributes() :
      op->vtkCompositePainter::GetCompositeDataDisplayAttributes());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositePainter_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositePainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositePainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositePainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCompositePainter\nC++: vtkCompositePainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositePainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositePainter\nC++: vtkCompositePainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkCompositePainter_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkDataObject\nC++: virtual vtkDataObject *GetOutput()\n\nGet the output data object from this painter. The default\nimplementation simply forwards the input data object as the\noutput.\n"},
  {(char*)"DISPLAY_ATTRIBUTES", PyvtkCompositePainter_DISPLAY_ATTRIBUTES, METH_VARARGS | METH_STATIC,
   (char*)"V.DISPLAY_ATTRIBUTES() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *DISPLAY_ATTRIBUTES()\n\nKey used to pass a vtkCompositeDataDisplayAttributes instance\ndoing the painter pipeline.\n"},
  {(char*)"SetCompositeDataDisplayAttributes", PyvtkCompositePainter_SetCompositeDataDisplayAttributes, METH_VARARGS,
   (char*)"V.SetCompositeDataDisplayAttributes(\n    vtkCompositeDataDisplayAttributes)\nC++: void SetCompositeDataDisplayAttributes(\n    vtkCompositeDataDisplayAttributes *attributes)\n\nSet/get the composite data set display attributes. If set, these\nattributes can be used by the painter to control specific\nrendering attributes on a per-block basis for a multi-block\ndataset.\n"},
  {(char*)"GetCompositeDataDisplayAttributes", PyvtkCompositePainter_GetCompositeDataDisplayAttributes, METH_VARARGS,
   (char*)"V.GetCompositeDataDisplayAttributes()\n    -> vtkCompositeDataDisplayAttributes\nC++: vtkCompositeDataDisplayAttributes *GetCompositeDataDisplayAttributes(\n    )\n\nSet/get the composite data set display attributes. If set, these\nattributes can be used by the painter to control specific\nrendering attributes on a per-block basis for a multi-block\ndataset.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositePainter_StaticNew()
{
  return vtkCompositePainter::New();
}

PyObject *PyVTKClass_vtkCompositePainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositePainter_StaticNew,
    PyvtkCompositePainter_Methods,
    "vtkCompositePainter", modulename,
    NULL, NULL,
    PyvtkCompositePainter_Doc(),
    PyVTKClass_vtkPainterNew(modulename));
  return cls;
}

const char **PyvtkCompositePainter_Doc()
{
  static const char *docstring[] = {
    "vtkCompositePainter - painter that can be inserted before any\n\n",
    "Superclass: vtkPainter\n\n",
    "vtkCompositePainter iterates over the leaves in a composite datasets.\nThis painter can also handle the case when the dataset is not a\ncomposite dataset.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositePainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositePainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositePainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

