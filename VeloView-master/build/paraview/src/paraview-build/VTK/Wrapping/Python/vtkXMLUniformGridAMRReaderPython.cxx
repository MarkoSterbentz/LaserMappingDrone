// python wrapper for vtkXMLUniformGridAMRReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLUniformGridAMRReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLUniformGridAMRReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLUniformGridAMRReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLCompositeDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLCompositeDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLCompositeDataReaderNew
#endif

static const char **PyvtkXMLUniformGridAMRReader_Doc();


static PyObject *
PyvtkXMLUniformGridAMRReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUniformGridAMRReader *op = static_cast<vtkXMLUniformGridAMRReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLUniformGridAMRReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUniformGridAMRReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUniformGridAMRReader *op = static_cast<vtkXMLUniformGridAMRReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLUniformGridAMRReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUniformGridAMRReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUniformGridAMRReader *op = static_cast<vtkXMLUniformGridAMRReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLUniformGridAMRReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLUniformGridAMRReader::NewInstance());

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
PyvtkXMLUniformGridAMRReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLUniformGridAMRReader *tempr = vtkXMLUniformGridAMRReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUniformGridAMRReader_SetMaximumLevelsToReadByDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLevelsToReadByDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUniformGridAMRReader *op = static_cast<vtkXMLUniformGridAMRReader *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLevelsToReadByDefault(temp0);
      }
    else
      {
      op->vtkXMLUniformGridAMRReader::SetMaximumLevelsToReadByDefault(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUniformGridAMRReader_GetMaximumLevelsToReadByDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLevelsToReadByDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUniformGridAMRReader *op = static_cast<vtkXMLUniformGridAMRReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumLevelsToReadByDefault() :
      op->vtkXMLUniformGridAMRReader::GetMaximumLevelsToReadByDefault());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLUniformGridAMRReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLUniformGridAMRReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLUniformGridAMRReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLUniformGridAMRReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLUniformGridAMRReader\nC++: vtkXMLUniformGridAMRReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLUniformGridAMRReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLUniformGridAMRReader\nC++: vtkXMLUniformGridAMRReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaximumLevelsToReadByDefault", PyvtkXMLUniformGridAMRReader_SetMaximumLevelsToReadByDefault, METH_VARARGS,
   (char*)"V.SetMaximumLevelsToReadByDefault(int)\nC++: void SetMaximumLevelsToReadByDefault(unsigned int a)\n\nThis reader supports demand-driven heavy data reading i.e.\ndownstream pipeline can request specific blocks from the AMR\nusing vtkCompositeDataPipeline::UPDATE_COMPOSITE_INDICES() key in\nRequestUpdateExtent() pass. However, when down-stream doesn't\nprovide any specific keys, the default behavior can be setup to\nread at-most N levels by default. The number of levels read can\nbe set using this method. Set this to 0 to imply no limit.\nDefault is 0.\n"},
  {(char*)"GetMaximumLevelsToReadByDefault", PyvtkXMLUniformGridAMRReader_GetMaximumLevelsToReadByDefault, METH_VARARGS,
   (char*)"V.GetMaximumLevelsToReadByDefault() -> int\nC++: unsigned int GetMaximumLevelsToReadByDefault()\n\nThis reader supports demand-driven heavy data reading i.e.\ndownstream pipeline can request specific blocks from the AMR\nusing vtkCompositeDataPipeline::UPDATE_COMPOSITE_INDICES() key in\nRequestUpdateExtent() pass. However, when down-stream doesn't\nprovide any specific keys, the default behavior can be setup to\nread at-most N levels by default. The number of levels read can\nbe set using this method. Set this to 0 to imply no limit.\nDefault is 0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLUniformGridAMRReader_StaticNew()
{
  return vtkXMLUniformGridAMRReader::New();
}

PyObject *PyVTKClass_vtkXMLUniformGridAMRReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLUniformGridAMRReader_StaticNew,
    PyvtkXMLUniformGridAMRReader_Methods,
    "vtkXMLUniformGridAMRReader", modulename,
    NULL, NULL,
    PyvtkXMLUniformGridAMRReader_Doc(),
    PyVTKClass_vtkXMLCompositeDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLUniformGridAMRReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLUniformGridAMRReader - Reader for amr datasets\n(vtkOverlappingAMR\n\n",
    "Superclass: vtkXMLCompositeDataReader\n\n",
    "vtkXMLUniformGridAMRReader reads the VTK XML data files for all types\nof amr datasets including vtkOverlappingAMR, vtkNonOverlappingAMR and\nthe legacy vtkHierarchicalBoxDataSet. The reader uses information in\nthe file to determine what type of dataset is actually being read and\ncreates the output-data object accordingly.\n\nThis reader can only read files with version 1.1 or greater. Older\nversions ",
    "can be converted to the newer versions using\nvtkXMLHierarchicalBoxDataFileConverter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLUniformGridAMRReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLUniformGridAMRReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLUniformGridAMRReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

