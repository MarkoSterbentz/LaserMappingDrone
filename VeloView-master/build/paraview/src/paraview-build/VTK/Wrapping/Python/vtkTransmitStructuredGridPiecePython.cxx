// python wrapper for vtkTransmitStructuredGridPiece
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTransmitStructuredGridPiece.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTransmitStructuredGridPiece(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTransmitStructuredGridPieceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTransmitStructuredDataPieceNew
extern "C" { PyObject *PyVTKClass_vtkTransmitStructuredDataPieceNew(const char *); }
#define DECLARED_PyVTKClass_vtkTransmitStructuredDataPieceNew
#endif

static const char **PyvtkTransmitStructuredGridPiece_Doc();


static PyObject *
PyvtkTransmitStructuredGridPiece_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitStructuredGridPiece *op = static_cast<vtkTransmitStructuredGridPiece *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTransmitStructuredGridPiece::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitStructuredGridPiece_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitStructuredGridPiece *op = static_cast<vtkTransmitStructuredGridPiece *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransmitStructuredGridPiece::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitStructuredGridPiece_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitStructuredGridPiece *op = static_cast<vtkTransmitStructuredGridPiece *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTransmitStructuredGridPiece *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransmitStructuredGridPiece::NewInstance());

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
PyvtkTransmitStructuredGridPiece_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTransmitStructuredGridPiece *tempr = vtkTransmitStructuredGridPiece::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTransmitStructuredGridPiece_Methods[] = {
  {(char*)"GetClassName", PyvtkTransmitStructuredGridPiece_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransmitStructuredGridPiece_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransmitStructuredGridPiece_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTransmitStructuredGridPiece\nC++: vtkTransmitStructuredGridPiece *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransmitStructuredGridPiece_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransmitStructuredGridPiece\nC++: vtkTransmitStructuredGridPiece *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransmitStructuredGridPiece_StaticNew()
{
  return vtkTransmitStructuredGridPiece::New();
}

PyObject *PyVTKClass_vtkTransmitStructuredGridPieceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransmitStructuredGridPiece_StaticNew,
    PyvtkTransmitStructuredGridPiece_Methods,
    "vtkTransmitStructuredGridPiece", modulename,
    NULL, NULL,
    PyvtkTransmitStructuredGridPiece_Doc(),
    PyVTKClass_vtkTransmitStructuredDataPieceNew(modulename));
  return cls;
}

const char **PyvtkTransmitStructuredGridPiece_Doc()
{
  static const char *docstring[] = {
    "vtkTransmitRectilinearGridPiece - Redistributes data produced\n\n",
    "Superclass: vtkTransmitStructuredDataPiece\n\n",
    "This filter can be used to redistribute data from producers that\ncan't produce data in parallel. All data is produced on first process\nand the distributed to others using the multiprocess controller.\n\nNote that this class is legacy. The superclass does all the work and\ncan be used directly instead.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransmitStructuredGridPiece(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransmitStructuredGridPieceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransmitStructuredGridPiece", o) != 0)
    {
    Py_DECREF(o);
    }

}

