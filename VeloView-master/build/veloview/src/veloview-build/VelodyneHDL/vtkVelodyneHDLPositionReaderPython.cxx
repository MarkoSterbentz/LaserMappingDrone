// python wrapper for vtkVelodyneHDLPositionReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkStdString.h"
#include "vtkVelodyneHDLPositionReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVelodyneHDLPositionReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVelodyneHDLPositionReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkVelodyneHDLPositionReader_Doc();


static PyObject *
PyvtkVelodyneHDLPositionReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLPositionReader *op = static_cast<vtkVelodyneHDLPositionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVelodyneHDLPositionReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLPositionReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLPositionReader *op = static_cast<vtkVelodyneHDLPositionReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVelodyneHDLPositionReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLPositionReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLPositionReader *op = static_cast<vtkVelodyneHDLPositionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVelodyneHDLPositionReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVelodyneHDLPositionReader::NewInstance());

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
PyvtkVelodyneHDLPositionReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVelodyneHDLPositionReader *tempr = vtkVelodyneHDLPositionReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLPositionReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLPositionReader *op = static_cast<vtkVelodyneHDLPositionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetFileName() :
      &op->vtkVelodyneHDLPositionReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLPositionReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLPositionReader *op = static_cast<vtkVelodyneHDLPositionReader *>(vp);

  std::string temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkVelodyneHDLPositionReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLPositionReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLPositionReader *op = static_cast<vtkVelodyneHDLPositionReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkVelodyneHDLPositionReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVelodyneHDLPositionReader_GetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVelodyneHDLPositionReader *op = static_cast<vtkVelodyneHDLPositionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVelodyneTransformInterpolator *tempr = (ap.IsBound() ?
      op->GetInterpolator() :
      op->vtkVelodyneHDLPositionReader::GetInterpolator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVelodyneHDLPositionReader_Methods[] = {
  {(char*)"GetClassName", PyvtkVelodyneHDLPositionReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVelodyneHDLPositionReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVelodyneHDLPositionReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVelodyneHDLPositionReader\nC++: vtkVelodyneHDLPositionReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVelodyneHDLPositionReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVelodyneHDLPositionReader\nC++: vtkVelodyneHDLPositionReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkVelodyneHDLPositionReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: const std::string &GetFileName()\n\n"},
  {(char*)"SetFileName", PyvtkVelodyneHDLPositionReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(const std::string &filename)\n\n"},
  {(char*)"CanReadFile", PyvtkVelodyneHDLPositionReader_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *fname)\n\n"},
  {(char*)"GetInterpolator", PyvtkVelodyneHDLPositionReader_GetInterpolator, METH_VARARGS,
   (char*)"V.GetInterpolator() -> vtkVelodyneTransformInterpolator\nC++: vtkVelodyneTransformInterpolator *GetInterpolator()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVelodyneHDLPositionReader_StaticNew()
{
  return vtkVelodyneHDLPositionReader::New();
}

PyObject *PyVTKClass_vtkVelodyneHDLPositionReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVelodyneHDLPositionReader_StaticNew,
    PyvtkVelodyneHDLPositionReader_Methods,
    "vtkVelodyneHDLPositionReader", modulename,
    NULL, NULL,
    PyvtkVelodyneHDLPositionReader_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVelodyneHDLPositionReader_Doc()
{
  static const char *docstring[] = {
    "vtkVelodyneHDLPositionReader - class for reading Velodyne HDL data\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVelodyneHDLPositionReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVelodyneHDLPositionReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVelodyneHDLPositionReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

