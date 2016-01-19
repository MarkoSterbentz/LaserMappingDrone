// python wrapper for vtkPVGL2PSExporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVGL2PSExporter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVGL2PSExporter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVGL2PSExporterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkGL2PSExporterNew
extern "C" { PyObject *PyVTKClass_vtkGL2PSExporterNew(const char *); }
#define DECLARED_PyVTKClass_vtkGL2PSExporterNew
#endif

static const char **PyvtkPVGL2PSExporter_Doc();


static PyObject *
PyvtkPVGL2PSExporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVGL2PSExporter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVGL2PSExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVGL2PSExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVGL2PSExporter::NewInstance());

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
PyvtkPVGL2PSExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVGL2PSExporter *tempr = vtkPVGL2PSExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

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
      op->vtkPVGL2PSExporter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkPVGL2PSExporter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_SetExcludeCubeAxesActorsFromRasterization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExcludeCubeAxesActorsFromRasterization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExcludeCubeAxesActorsFromRasterization(temp0);
      }
    else
      {
      op->vtkPVGL2PSExporter::SetExcludeCubeAxesActorsFromRasterization(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_GetExcludeCubeAxesActorsFromRasterization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExcludeCubeAxesActorsFromRasterization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetExcludeCubeAxesActorsFromRasterization() :
      op->vtkPVGL2PSExporter::GetExcludeCubeAxesActorsFromRasterization());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_ExcludeCubeAxesActorsFromRasterizationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExcludeCubeAxesActorsFromRasterizationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExcludeCubeAxesActorsFromRasterizationOn();
      }
    else
      {
      op->vtkPVGL2PSExporter::ExcludeCubeAxesActorsFromRasterizationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVGL2PSExporter_ExcludeCubeAxesActorsFromRasterizationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExcludeCubeAxesActorsFromRasterizationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVGL2PSExporter *op = static_cast<vtkPVGL2PSExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExcludeCubeAxesActorsFromRasterizationOff();
      }
    else
      {
      op->vtkPVGL2PSExporter::ExcludeCubeAxesActorsFromRasterizationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVGL2PSExporter_Methods[] = {
  {(char*)"GetClassName", PyvtkPVGL2PSExporter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVGL2PSExporter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVGL2PSExporter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVGL2PSExporter\nC++: vtkPVGL2PSExporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVGL2PSExporter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVGL2PSExporter\nC++: vtkPVGL2PSExporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkPVGL2PSExporter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(const char *a)\n\nSet/Get the name of the output file.\n"},
  {(char*)"GetFileName", PyvtkPVGL2PSExporter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: const char *GetFileName()\n\nSet/Get the name of the output file.\n"},
  {(char*)"SetExcludeCubeAxesActorsFromRasterization", PyvtkPVGL2PSExporter_SetExcludeCubeAxesActorsFromRasterization, METH_VARARGS,
   (char*)"V.SetExcludeCubeAxesActorsFromRasterization(int)\nC++: void SetExcludeCubeAxesActorsFromRasterization(int a)\n\nIf Write3DPropsAsRasterImage is true, add all instances of\nvtkCubeAxesActors to the RenderExclusions.\n"},
  {(char*)"GetExcludeCubeAxesActorsFromRasterization", PyvtkPVGL2PSExporter_GetExcludeCubeAxesActorsFromRasterization, METH_VARARGS,
   (char*)"V.GetExcludeCubeAxesActorsFromRasterization() -> int\nC++: int GetExcludeCubeAxesActorsFromRasterization()\n\nIf Write3DPropsAsRasterImage is true, add all instances of\nvtkCubeAxesActors to the RenderExclusions.\n"},
  {(char*)"ExcludeCubeAxesActorsFromRasterizationOn", PyvtkPVGL2PSExporter_ExcludeCubeAxesActorsFromRasterizationOn, METH_VARARGS,
   (char*)"V.ExcludeCubeAxesActorsFromRasterizationOn()\nC++: void ExcludeCubeAxesActorsFromRasterizationOn()\n\nIf Write3DPropsAsRasterImage is true, add all instances of\nvtkCubeAxesActors to the RenderExclusions.\n"},
  {(char*)"ExcludeCubeAxesActorsFromRasterizationOff", PyvtkPVGL2PSExporter_ExcludeCubeAxesActorsFromRasterizationOff, METH_VARARGS,
   (char*)"V.ExcludeCubeAxesActorsFromRasterizationOff()\nC++: void ExcludeCubeAxesActorsFromRasterizationOff()\n\nIf Write3DPropsAsRasterImage is true, add all instances of\nvtkCubeAxesActors to the RenderExclusions.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVGL2PSExporter_StaticNew()
{
  return vtkPVGL2PSExporter::New();
}

PyObject *PyVTKClass_vtkPVGL2PSExporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVGL2PSExporter_StaticNew,
    PyvtkPVGL2PSExporter_Methods,
    "vtkPVGL2PSExporter", modulename,
    NULL, NULL,
    PyvtkPVGL2PSExporter_Doc(),
    PyVTKClass_vtkGL2PSExporterNew(modulename));
  return cls;
}

const char **PyvtkPVGL2PSExporter_Doc()
{
  static const char *docstring[] = {
    "vtkPVGL2PSExporter - ParaView wrapper for vtkGL2PS exporter.\n\n",
    "Superclass: vtkGL2PSExporter\n\n",
    "This is used to export ParaView renderings to a variety of vector\ngraphics formats.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVGL2PSExporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVGL2PSExporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVGL2PSExporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

