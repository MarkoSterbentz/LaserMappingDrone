// python wrapper for vtkVolumeRepresentationPreprocessor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVolumeRepresentationPreprocessor.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVolumeRepresentationPreprocessor(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVolumeRepresentationPreprocessorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkVolumeRepresentationPreprocessor_Doc();


static PyObject *
PyvtkVolumeRepresentationPreprocessor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRepresentationPreprocessor *op = static_cast<vtkVolumeRepresentationPreprocessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVolumeRepresentationPreprocessor::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRepresentationPreprocessor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRepresentationPreprocessor *op = static_cast<vtkVolumeRepresentationPreprocessor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeRepresentationPreprocessor::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRepresentationPreprocessor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRepresentationPreprocessor *op = static_cast<vtkVolumeRepresentationPreprocessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolumeRepresentationPreprocessor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeRepresentationPreprocessor::NewInstance());

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
PyvtkVolumeRepresentationPreprocessor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVolumeRepresentationPreprocessor *tempr = vtkVolumeRepresentationPreprocessor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRepresentationPreprocessor_SetTetrahedraOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetrahedraOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRepresentationPreprocessor *op = static_cast<vtkVolumeRepresentationPreprocessor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTetrahedraOnly(temp0);
      }
    else
      {
      op->vtkVolumeRepresentationPreprocessor::SetTetrahedraOnly(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRepresentationPreprocessor_GetTetrahedraOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTetrahedraOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRepresentationPreprocessor *op = static_cast<vtkVolumeRepresentationPreprocessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTetrahedraOnly() :
      op->vtkVolumeRepresentationPreprocessor::GetTetrahedraOnly());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRepresentationPreprocessor_SetExtractedBlockIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractedBlockIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRepresentationPreprocessor *op = static_cast<vtkVolumeRepresentationPreprocessor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtractedBlockIndex(temp0);
      }
    else
      {
      op->vtkVolumeRepresentationPreprocessor::SetExtractedBlockIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRepresentationPreprocessor_GetExtractedBlockIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractedBlockIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRepresentationPreprocessor *op = static_cast<vtkVolumeRepresentationPreprocessor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetExtractedBlockIndex() :
      op->vtkVolumeRepresentationPreprocessor::GetExtractedBlockIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeRepresentationPreprocessor_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeRepresentationPreprocessor_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeRepresentationPreprocessor_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeRepresentationPreprocessor_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVolumeRepresentationPreprocessor\nC++: vtkVolumeRepresentationPreprocessor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeRepresentationPreprocessor_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeRepresentationPreprocessor\nC++: vtkVolumeRepresentationPreprocessor *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetTetrahedraOnly", PyvtkVolumeRepresentationPreprocessor_SetTetrahedraOnly, METH_VARARGS,
   (char*)"V.SetTetrahedraOnly(int)\nC++: void SetTetrahedraOnly(int)\n\nWhen On, the internal triangle filter will cull all 1D and 2D\ncells from the output. The default is Off.\n"},
  {(char*)"GetTetrahedraOnly", PyvtkVolumeRepresentationPreprocessor_GetTetrahedraOnly, METH_VARARGS,
   (char*)"V.GetTetrahedraOnly() -> int\nC++: int GetTetrahedraOnly()\n\nWhen On, the internal triangle filter will cull all 1D and 2D\ncells from the output. The default is Off.\n"},
  {(char*)"SetExtractedBlockIndex", PyvtkVolumeRepresentationPreprocessor_SetExtractedBlockIndex, METH_VARARGS,
   (char*)"V.SetExtractedBlockIndex(int)\nC++: void SetExtractedBlockIndex(int)\n\nSets which block will be extracted for volume rendering. Ignored\nif input is not multiblock.  Default is 0.\n"},
  {(char*)"GetExtractedBlockIndex", PyvtkVolumeRepresentationPreprocessor_GetExtractedBlockIndex, METH_VARARGS,
   (char*)"V.GetExtractedBlockIndex() -> int\nC++: int GetExtractedBlockIndex()\n\nSets which block will be extracted for volume rendering. Ignored\nif input is not multiblock.  Default is 0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeRepresentationPreprocessor_StaticNew()
{
  return vtkVolumeRepresentationPreprocessor::New();
}

PyObject *PyVTKClass_vtkVolumeRepresentationPreprocessorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeRepresentationPreprocessor_StaticNew,
    PyvtkVolumeRepresentationPreprocessor_Methods,
    "vtkVolumeRepresentationPreprocessor", modulename,
    NULL, NULL,
    PyvtkVolumeRepresentationPreprocessor_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVolumeRepresentationPreprocessor_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeRepresentationPreprocessor - prepare data object for volume\nrendering\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkVolumeRepresentationPreprocessor prepares data objects for volume\nrendering.  If the data object is a data set, then the set is passed\nthrough a vtkDataSetTriangleFilter before being output as a\nvtkUnstructuredGrid.  If the data object is a multiblock dataset with\nat least one unstructured grid leaf node, then the unstructured grid\nis extracted using vtkExtractBlock before being passed to the\nv",
    "tkDataSetTriangleFilter. If the multiblock dataset contains more\nthan one unstructured grid, the ExtractedBlockIndex property may by\nset to indicate which unstructured grid to volume render.  The\nTetrahedraOnly property may be set and it will be passed to the\nvtkDataSetTriangleFilter.\n\nSee Also:\n\nvtkExtractBlock vtkTriangleFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeRepresentationPreprocessor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeRepresentationPreprocessorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeRepresentationPreprocessor", o) != 0)
    {
    Py_DECREF(o);
    }

}

