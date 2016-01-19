// python wrapper for vtkApplanixPositionReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkApplanixPositionReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkApplanixPositionReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkApplanixPositionReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkApplanixPositionReader_Doc();


static PyObject *
PyvtkApplanixPositionReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplanixPositionReader *op = static_cast<vtkApplanixPositionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkApplanixPositionReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplanixPositionReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplanixPositionReader *op = static_cast<vtkApplanixPositionReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkApplanixPositionReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplanixPositionReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplanixPositionReader *op = static_cast<vtkApplanixPositionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkApplanixPositionReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkApplanixPositionReader::NewInstance());

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
PyvtkApplanixPositionReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkApplanixPositionReader *tempr = vtkApplanixPositionReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplanixPositionReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplanixPositionReader *op = static_cast<vtkApplanixPositionReader *>(vp);

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
      op->vtkApplanixPositionReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplanixPositionReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplanixPositionReader *op = static_cast<vtkApplanixPositionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkApplanixPositionReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplanixPositionReader_SetBaseYaw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseYaw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplanixPositionReader *op = static_cast<vtkApplanixPositionReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBaseYaw(temp0);
      }
    else
      {
      op->vtkApplanixPositionReader::SetBaseYaw(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplanixPositionReader_GetBaseYaw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseYaw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplanixPositionReader *op = static_cast<vtkApplanixPositionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBaseYaw() :
      op->vtkApplanixPositionReader::GetBaseYaw());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplanixPositionReader_SetBaseRoll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseRoll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplanixPositionReader *op = static_cast<vtkApplanixPositionReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBaseRoll(temp0);
      }
    else
      {
      op->vtkApplanixPositionReader::SetBaseRoll(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplanixPositionReader_GetBaseRoll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseRoll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplanixPositionReader *op = static_cast<vtkApplanixPositionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBaseRoll() :
      op->vtkApplanixPositionReader::GetBaseRoll());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplanixPositionReader_SetBasePitch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBasePitch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplanixPositionReader *op = static_cast<vtkApplanixPositionReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBasePitch(temp0);
      }
    else
      {
      op->vtkApplanixPositionReader::SetBasePitch(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplanixPositionReader_GetBasePitch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBasePitch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplanixPositionReader *op = static_cast<vtkApplanixPositionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetBasePitch() :
      op->vtkApplanixPositionReader::GetBasePitch());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplanixPositionReader_SetTimeOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplanixPositionReader *op = static_cast<vtkApplanixPositionReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeOffset(temp0);
      }
    else
      {
      op->vtkApplanixPositionReader::SetTimeOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplanixPositionReader_GetTimeOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplanixPositionReader *op = static_cast<vtkApplanixPositionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetTimeOffset() :
      op->vtkApplanixPositionReader::GetTimeOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplanixPositionReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplanixPositionReader *op = static_cast<vtkApplanixPositionReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkApplanixPositionReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplanixPositionReader_GetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplanixPositionReader *op = static_cast<vtkApplanixPositionReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVelodyneTransformInterpolator *tempr = (ap.IsBound() ?
      op->GetInterpolator() :
      op->vtkApplanixPositionReader::GetInterpolator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkApplanixPositionReader_Methods[] = {
  {(char*)"GetClassName", PyvtkApplanixPositionReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkApplanixPositionReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkApplanixPositionReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkApplanixPositionReader\nC++: vtkApplanixPositionReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkApplanixPositionReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkApplanixPositionReader\nC++: vtkApplanixPositionReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkApplanixPositionReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\n"},
  {(char*)"GetFileName", PyvtkApplanixPositionReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\n"},
  {(char*)"SetBaseYaw", PyvtkApplanixPositionReader_SetBaseYaw, METH_VARARGS,
   (char*)"V.SetBaseYaw(float)\nC++: void SetBaseYaw(double a)\n\nSet/Get the \"base\" yaw orientation of the GPS sensor. The value\nis subtracted from the reported yaw to get actual yaw.\n"},
  {(char*)"GetBaseYaw", PyvtkApplanixPositionReader_GetBaseYaw, METH_VARARGS,
   (char*)"V.GetBaseYaw() -> float\nC++: double GetBaseYaw()\n\nSet/Get the \"base\" yaw orientation of the GPS sensor. The value\nis subtracted from the reported yaw to get actual yaw.\n"},
  {(char*)"SetBaseRoll", PyvtkApplanixPositionReader_SetBaseRoll, METH_VARARGS,
   (char*)"V.SetBaseRoll(float)\nC++: void SetBaseRoll(double a)\n\nSet/Get the \"base\" roll orientation of the GPS sensor. The value\nis subtracted from the reported roll to get actual roll.\n"},
  {(char*)"GetBaseRoll", PyvtkApplanixPositionReader_GetBaseRoll, METH_VARARGS,
   (char*)"V.GetBaseRoll() -> float\nC++: double GetBaseRoll()\n\nSet/Get the \"base\" roll orientation of the GPS sensor. The value\nis subtracted from the reported roll to get actual roll.\n"},
  {(char*)"SetBasePitch", PyvtkApplanixPositionReader_SetBasePitch, METH_VARARGS,
   (char*)"V.SetBasePitch(float)\nC++: void SetBasePitch(double a)\n\nSet/Get the \"base\" pitch orientation of the GPS sensor. The value\nis subtracted from the reported pitch to get actual pitch.\n"},
  {(char*)"GetBasePitch", PyvtkApplanixPositionReader_GetBasePitch, METH_VARARGS,
   (char*)"V.GetBasePitch() -> float\nC++: double GetBasePitch()\n\nSet/Get the \"base\" pitch orientation of the GPS sensor. The value\nis subtracted from the reported pitch to get actual pitch.\n"},
  {(char*)"SetTimeOffset", PyvtkApplanixPositionReader_SetTimeOffset, METH_VARARGS,
   (char*)"V.SetTimeOffset(float)\nC++: void SetTimeOffset(double a)\n\nSet/Get the time offset adjustment to apply to the time values.\nThis is meant to correct the offset between GPS time (as provided\nby the Applanix sensor) and UTC time (as used by the Velodyne\nsensor).\n"},
  {(char*)"GetTimeOffset", PyvtkApplanixPositionReader_GetTimeOffset, METH_VARARGS,
   (char*)"V.GetTimeOffset() -> float\nC++: double GetTimeOffset()\n\nSet/Get the time offset adjustment to apply to the time values.\nThis is meant to correct the offset between GPS time (as provided\nby the Applanix sensor) and UTC time (as used by the Velodyne\nsensor).\n"},
  {(char*)"CanReadFile", PyvtkApplanixPositionReader_CanReadFile, METH_VARARGS,
   (char*)"V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *fname)\n\n"},
  {(char*)"GetInterpolator", PyvtkApplanixPositionReader_GetInterpolator, METH_VARARGS,
   (char*)"V.GetInterpolator() -> vtkVelodyneTransformInterpolator\nC++: vtkVelodyneTransformInterpolator *GetInterpolator()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkApplanixPositionReader_StaticNew()
{
  return vtkApplanixPositionReader::New();
}

PyObject *PyVTKClass_vtkApplanixPositionReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkApplanixPositionReader_StaticNew,
    PyvtkApplanixPositionReader_Methods,
    "vtkApplanixPositionReader", modulename,
    NULL, NULL,
    PyvtkApplanixPositionReader_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkApplanixPositionReader_Doc()
{
  static const char *docstring[] = {
    "vtkApplanixPositionReader - class for reading Applanix data\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkApplanixPositionReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkApplanixPositionReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkApplanixPositionReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

