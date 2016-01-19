// python wrapper for vtkPVDReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVDReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVDReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVDReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLCollectionReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLCollectionReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLCollectionReaderNew
#endif

static const char **PyvtkPVDReader_Doc();


static PyObject *
PyvtkPVDReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDReader *op = static_cast<vtkPVDReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVDReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDReader *op = static_cast<vtkPVDReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDReader *op = static_cast<vtkPVDReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDReader::NewInstance());

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
PyvtkPVDReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVDReader *tempr = vtkPVDReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDReader *op = static_cast<vtkPVDReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStep(temp0);
      }
    else
      {
      op->vtkPVDReader::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVDReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDReader *op = static_cast<vtkPVDReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkPVDReader::GetTimeStep());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVDReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDReader *op = static_cast<vtkPVDReader *>(vp);

  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkPVDReader::GetTimeStepRange());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVDReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPVDReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVDReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVDReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVDReader\nC++: vtkPVDReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVDReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVDReader\nC++: vtkPVDReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTimeStep", PyvtkPVDReader_SetTimeStep, METH_VARARGS,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(int index)\n\nGet/Set the required value for the timestep attribute.  The value\nshould be referenced by its index.  Only data sets matching this\nvalue will be read.  An out-of-range index will remove the\nrestriction.\n"},
  {(char*)"GetTimeStep", PyvtkPVDReader_GetTimeStep, METH_VARARGS,
   (char*)"V.GetTimeStep() -> int\nC++: int GetTimeStep()\n\nGet/Set the required value for the timestep attribute.  The value\nshould be referenced by its index.  Only data sets matching this\nvalue will be read.  An out-of-range index will remove the\nrestriction.\n"},
  {(char*)"GetTimeStepRange", PyvtkPVDReader_GetTimeStepRange, METH_VARARGS,
   (char*)"V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVDReader_StaticNew()
{
  return vtkPVDReader::New();
}

PyObject *PyVTKClass_vtkPVDReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVDReader_StaticNew,
    PyvtkPVDReader_Methods,
    "vtkPVDReader", modulename,
    NULL, NULL,
    PyvtkPVDReader_Doc(),
    PyVTKClass_vtkXMLCollectionReaderNew(modulename));
  return cls;
}

const char **PyvtkPVDReader_Doc()
{
  static const char *docstring[] = {
    "vtkPVDReader - ParaView-specific vtkXMLCollectionReader subclass\n\n",
    "Superclass: vtkXMLCollectionReader\n\n",
    "vtkPVDReader subclasses vtkXMLCollectionReader to add\nParaView-specific methods.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVDReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVDReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVDReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

