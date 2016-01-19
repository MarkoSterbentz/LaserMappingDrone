// python wrapper for vtkSelectionConverter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSelectionConverter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSelectionConverter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSelectionConverterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSelectionConverter_Doc();


static PyObject *
PyvtkSelectionConverter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionConverter *op = static_cast<vtkSelectionConverter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSelectionConverter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionConverter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionConverter *op = static_cast<vtkSelectionConverter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectionConverter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionConverter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionConverter *op = static_cast<vtkSelectionConverter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelectionConverter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectionConverter::NewInstance());

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
PyvtkSelectionConverter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSelectionConverter *tempr = vtkSelectionConverter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionConverter_Convert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Convert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionConverter *op = static_cast<vtkSelectionConverter *>(vp);

  vtkSelection *temp0 = NULL;
  vtkSelection *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkSelection") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Convert(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSelectionConverter::Convert(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSelectionConverter_Methods[] = {
  {(char*)"GetClassName", PyvtkSelectionConverter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSelectionConverter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSelectionConverter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSelectionConverter\nC++: vtkSelectionConverter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSelectionConverter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSelectionConverter\nC++: vtkSelectionConverter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Convert", PyvtkSelectionConverter_Convert, METH_VARARGS,
   (char*)"V.Convert(vtkSelection, vtkSelection, int)\nC++: void Convert(vtkSelection *input, vtkSelection *output,\n    int global_ids)\n\nConvert input selection and store it in output. Currently, the\ninput selection must be a geometry selection and the output is a\nvolume selection. If global_ids is set, then the selection is\nconverted to global ids selection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSelectionConverter_StaticNew()
{
  return vtkSelectionConverter::New();
}

PyObject *PyVTKClass_vtkSelectionConverterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSelectionConverter_StaticNew,
    PyvtkSelectionConverter_Methods,
    "vtkSelectionConverter", modulename,
    NULL, NULL,
    PyvtkSelectionConverter_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSelectionConverter_Doc()
{
  static const char *docstring[] = {
    "vtkSelectionConverter - converts one selection type to another\n\n",
    "Superclass: vtkObject\n\n",
    "vtkSelectionConverter can be used to convert from one selection type\nto another. Currently, it only supports conversion from a 'surface'\ngeometry selection to a 'volume' selection. It does this by looking\nfor a pedigree array called vtkOriginalCellIds that says what 3D cell\nproduced each selected 2D surface cell. The input selection must have\nSOURCE_ID() and ORIGINAL_SOURCE_ID() properties set. Th",
    "e SOURCE_ID()\ncorresponds to the geometry filter whereas the ORIGINAL_SOURCE_ID()\ncorresponds to the input of the geometry filter. The output selection\nwill have SOURCE_ID() corresponding to the input of the geometry\nfilter (what was ORIGINAL_SOURCE_ID()).\n\nSee Also:\n\nvtkSelection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSelectionConverter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSelectionConverterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSelectionConverter", o) != 0)
    {
    Py_DECREF(o);
    }

}

