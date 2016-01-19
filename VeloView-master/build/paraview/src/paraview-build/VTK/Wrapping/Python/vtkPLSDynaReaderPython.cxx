// python wrapper for vtkPLSDynaReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPLSDynaReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPLSDynaReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPLSDynaReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkLSDynaReaderNew
extern "C" { PyObject *PyVTKClass_vtkLSDynaReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkLSDynaReaderNew
#endif

static const char **PyvtkPLSDynaReader_Doc();


static PyObject *
PyvtkPLSDynaReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLSDynaReader *op = static_cast<vtkPLSDynaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPLSDynaReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLSDynaReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLSDynaReader *op = static_cast<vtkPLSDynaReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPLSDynaReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLSDynaReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLSDynaReader *op = static_cast<vtkPLSDynaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPLSDynaReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPLSDynaReader::NewInstance());

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
PyvtkPLSDynaReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPLSDynaReader *tempr = vtkPLSDynaReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLSDynaReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLSDynaReader *op = static_cast<vtkPLSDynaReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkPLSDynaReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLSDynaReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLSDynaReader *op = static_cast<vtkPLSDynaReader *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPLSDynaReader::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLSDynaReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLSDynaReader *op = static_cast<vtkPLSDynaReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPLSDynaReader::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPLSDynaReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPLSDynaReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPLSDynaReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPLSDynaReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPLSDynaReader\nC++: vtkPLSDynaReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPLSDynaReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPLSDynaReader\nC++: vtkPLSDynaReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CanReadFile", PyvtkPLSDynaReader_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *fname)\n\nDetermine if the file can be readed with this reader.\n"},
  {(char*)"SetController", PyvtkPLSDynaReader_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/Get the communicator object. By default we use the world\ncontroller\n"},
  {(char*)"GetController", PyvtkPLSDynaReader_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet/Get the communicator object. By default we use the world\ncontroller\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPLSDynaReader_StaticNew()
{
  return vtkPLSDynaReader::New();
}

PyObject *PyVTKClass_vtkPLSDynaReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPLSDynaReader_StaticNew,
    PyvtkPLSDynaReader_Methods,
    "vtkPLSDynaReader", modulename,
    NULL, NULL,
    PyvtkPLSDynaReader_Doc(),
    PyVTKClass_vtkLSDynaReaderNew(modulename));
  return cls;
}

const char **PyvtkPLSDynaReader_Doc()
{
  static const char *docstring[] = {
    "vtkPLSDynaReader - Read LS-Dyna databases (d3plot) in parallel\n\n",
    "Superclass: vtkLSDynaReader\n\n",
    "This filter reads LS-Dyna databases in parallel.\n\nThe Set/GetFileName() routines are actually wrappers around the\nSet/GetDatabaseDirectory() members; the actual filename you choose is\nirrelevant -- only the directory name is used.  This is done in order\nto accommodate ParaView.\n\n\"Developer Notes\":\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPLSDynaReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPLSDynaReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPLSDynaReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

