// python wrapper for vtkPVEnSightMasterServerTranslator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVEnSightMasterServerTranslator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVEnSightMasterServerTranslator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVEnSightMasterServerTranslatorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExtentTranslatorNew
extern "C" { PyObject *PyVTKClass_vtkExtentTranslatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtentTranslatorNew
#endif

static const char **PyvtkPVEnSightMasterServerTranslator_Doc();


static PyObject *
PyvtkPVEnSightMasterServerTranslator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerTranslator *op = static_cast<vtkPVEnSightMasterServerTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVEnSightMasterServerTranslator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerTranslator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerTranslator *op = static_cast<vtkPVEnSightMasterServerTranslator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVEnSightMasterServerTranslator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerTranslator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerTranslator *op = static_cast<vtkPVEnSightMasterServerTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVEnSightMasterServerTranslator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVEnSightMasterServerTranslator::NewInstance());

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
PyvtkPVEnSightMasterServerTranslator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVEnSightMasterServerTranslator *tempr = vtkPVEnSightMasterServerTranslator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerTranslator_GetProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerTranslator *op = static_cast<vtkPVEnSightMasterServerTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetProcessId() :
      op->vtkPVEnSightMasterServerTranslator::GetProcessId());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerTranslator_SetProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerTranslator *op = static_cast<vtkPVEnSightMasterServerTranslator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessId(temp0);
      }
    else
      {
      op->vtkPVEnSightMasterServerTranslator::SetProcessId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVEnSightMasterServerTranslator_PieceToExtentThreadSafe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtentThreadSafe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnSightMasterServerTranslator *op = static_cast<vtkPVEnSightMasterServerTranslator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int *temp3 = NULL;
  int *save3 = NULL;
  int small3[8];
  int size3 = 0;
  int *temp4 = NULL;
  int *save4 = NULL;
  int small4[8];
  int size4 = 0;
  int temp5;
  int temp6;
  PyObject *result = NULL;

  if (op)
    {
    size3 = ap.GetArgSize(3);
    temp3 = small3;
    if (size3 > 4)
      {
      temp3 = new int[2*size3];
      }
    save3 = &temp3[size3];
    size4 = ap.GetArgSize(4);
    temp4 = small4;
    if (size4 > 4)
      {
      temp4 = new int[2*size4];
      }
    save4 = &temp4[size4];
    }

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->PieceToExtentThreadSafe(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkPVEnSightMasterServerTranslator::PieceToExtentThreadSafe(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }
  if (temp4 && temp4 != small4)
    {
    delete [] temp4;
    }

  return result;
}

static PyMethodDef PyvtkPVEnSightMasterServerTranslator_Methods[] = {
  {(char*)"GetClassName", PyvtkPVEnSightMasterServerTranslator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVEnSightMasterServerTranslator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVEnSightMasterServerTranslator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVEnSightMasterServerTranslator\nC++: vtkPVEnSightMasterServerTranslator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVEnSightMasterServerTranslator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVEnSightMasterServerTranslator\nC++: vtkPVEnSightMasterServerTranslator *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"GetProcessId", PyvtkPVEnSightMasterServerTranslator_GetProcessId, METH_VARARGS,
   (char*)"V.GetProcessId() -> int\nC++: int GetProcessId()\n\nGet/Set the piece that should provide the data.  All other pieces\nshould provide empty data.\n"},
  {(char*)"SetProcessId", PyvtkPVEnSightMasterServerTranslator_SetProcessId, METH_VARARGS,
   (char*)"V.SetProcessId(int)\nC++: void SetProcessId(int a)\n\nGet/Set the piece that should provide the data.  All other pieces\nshould provide empty data.\n"},
  {(char*)"PieceToExtentThreadSafe", PyvtkPVEnSightMasterServerTranslator_PieceToExtentThreadSafe, METH_VARARGS,
   (char*)"V.PieceToExtentThreadSafe(int, int, int, [int, ...], [int, ...],\n    int, int) -> int\nC++: int PieceToExtentThreadSafe(int piece, int numPieces,\n    int ghostLevel, int *wholeExtent, int *resultExtent,\n    int splitMode, int byPoints)\n\nTranslates the piece matching ProcessId to the whole extent, and\nall other pieces to empty.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVEnSightMasterServerTranslator_StaticNew()
{
  return vtkPVEnSightMasterServerTranslator::New();
}

PyObject *PyVTKClass_vtkPVEnSightMasterServerTranslatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVEnSightMasterServerTranslator_StaticNew,
    PyvtkPVEnSightMasterServerTranslator_Methods,
    "vtkPVEnSightMasterServerTranslator", modulename,
    NULL, NULL,
    PyvtkPVEnSightMasterServerTranslator_Doc(),
    PyVTKClass_vtkExtentTranslatorNew(modulename));
  return cls;
}

const char **PyvtkPVEnSightMasterServerTranslator_Doc()
{
  static const char *docstring[] = {
    "vtkPVEnSightMasterServerTranslator - \n\n",
    "Superclass: vtkExtentTranslator\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVEnSightMasterServerTranslator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVEnSightMasterServerTranslatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVEnSightMasterServerTranslator", o) != 0)
    {
    Py_DECREF(o);
    }

}

