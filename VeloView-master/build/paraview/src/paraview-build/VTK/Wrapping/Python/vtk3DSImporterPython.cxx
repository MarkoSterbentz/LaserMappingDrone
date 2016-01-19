// python wrapper for vtk3DSImporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtk3DSImporter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtk3DSImporter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtk3DSImporterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImporterNew
extern "C" { PyObject *PyVTKClass_vtkImporterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImporterNew
#endif

static const char **Pyvtk3DSImporter_Doc();


static PyObject *
Pyvtk3DSImporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtk3DSImporter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtk3DSImporter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtk3DSImporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtk3DSImporter::NewInstance());

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
Pyvtk3DSImporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtk3DSImporter *tempr = vtk3DSImporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

  char *temp0 = NULL;
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
      op->vtk3DSImporter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtk3DSImporter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeNormals(temp0);
      }
    else
      {
      op->vtk3DSImporter::SetComputeNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtk3DSImporter::GetComputeNormals());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOn();
      }
    else
      {
      op->vtk3DSImporter::ComputeNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
Pyvtk3DSImporter_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DSImporter *op = static_cast<vtk3DSImporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOff();
      }
    else
      {
      op->vtk3DSImporter::ComputeNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef Pyvtk3DSImporter_Methods[] = {
  {(char*)"GetClassName", Pyvtk3DSImporter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", Pyvtk3DSImporter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", Pyvtk3DSImporter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtk3DSImporter\nC++: vtk3DSImporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", Pyvtk3DSImporter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtk3DSImporter\nC++: vtk3DSImporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", Pyvtk3DSImporter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify the name of the file to read.\n"},
  {(char*)"GetFileName", Pyvtk3DSImporter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify the name of the file to read.\n"},
  {(char*)"SetComputeNormals", Pyvtk3DSImporter_SetComputeNormals, METH_VARARGS,
   (char*)"V.SetComputeNormals(int)\nC++: void SetComputeNormals(int a)\n\nSet/Get the computation of normals. If on, imported geometry will\nbe run through vtkPolyDataNormals.\n"},
  {(char*)"GetComputeNormals", Pyvtk3DSImporter_GetComputeNormals, METH_VARARGS,
   (char*)"V.GetComputeNormals() -> int\nC++: int GetComputeNormals()\n\nSet/Get the computation of normals. If on, imported geometry will\nbe run through vtkPolyDataNormals.\n"},
  {(char*)"ComputeNormalsOn", Pyvtk3DSImporter_ComputeNormalsOn, METH_VARARGS,
   (char*)"V.ComputeNormalsOn()\nC++: void ComputeNormalsOn()\n\nSet/Get the computation of normals. If on, imported geometry will\nbe run through vtkPolyDataNormals.\n"},
  {(char*)"ComputeNormalsOff", Pyvtk3DSImporter_ComputeNormalsOff, METH_VARARGS,
   (char*)"V.ComputeNormalsOff()\nC++: void ComputeNormalsOff()\n\nSet/Get the computation of normals. If on, imported geometry will\nbe run through vtkPolyDataNormals.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *Pyvtk3DSImporter_StaticNew()
{
  return vtk3DSImporter::New();
}

PyObject *PyVTKClass_vtk3DSImporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&Pyvtk3DSImporter_StaticNew,
    Pyvtk3DSImporter_Methods,
    "vtk3DSImporter", modulename,
    NULL, NULL,
    Pyvtk3DSImporter_Doc(),
    PyVTKClass_vtkImporterNew(modulename));
  return cls;
}

const char **Pyvtk3DSImporter_Doc()
{
  static const char *docstring[] = {
    "vtk3DSImporter - imports 3D Studio files.\n\n",
    "Superclass: vtkImporter\n\n",
    "vtk3DSImporter imports 3D Studio files into vtk.\n\nSee Also:\n\nvtkImporter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtk3DSImporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtk3DSImporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtk3DSImporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

