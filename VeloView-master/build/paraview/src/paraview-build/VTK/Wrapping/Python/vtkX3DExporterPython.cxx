// python wrapper for vtkX3DExporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkX3DExporter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkX3DExporter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkX3DExporterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExporterNew
extern "C" { PyObject *PyVTKClass_vtkExporterNew(const char *); }
#define DECLARED_PyVTKClass_vtkExporterNew
#endif

static const char **PyvtkX3DExporter_Doc();


static PyObject *
PyvtkX3DExporter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkX3DExporter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkX3DExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkX3DExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkX3DExporter::NewInstance());

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
PyvtkX3DExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkX3DExporter *tempr = vtkX3DExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

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
      op->vtkX3DExporter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkX3DExporter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_SetSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSpeed(temp0);
      }
    else
      {
      op->vtkX3DExporter::SetSpeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetSpeed() :
      op->vtkX3DExporter::GetSpeed());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_SetBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBinary(temp0);
      }
    else
      {
      op->vtkX3DExporter::SetBinary(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetBinaryMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBinaryMinValue() :
      op->vtkX3DExporter::GetBinaryMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetBinaryMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBinaryMaxValue() :
      op->vtkX3DExporter::GetBinaryMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_BinaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryOn();
      }
    else
      {
      op->vtkX3DExporter::BinaryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_BinaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryOff();
      }
    else
      {
      op->vtkX3DExporter::BinaryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBinary() :
      op->vtkX3DExporter::GetBinary());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_SetFastest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFastest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFastest(temp0);
      }
    else
      {
      op->vtkX3DExporter::SetFastest(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetFastestMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastestMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFastestMinValue() :
      op->vtkX3DExporter::GetFastestMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetFastestMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastestMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFastestMaxValue() :
      op->vtkX3DExporter::GetFastestMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_FastestOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastestOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FastestOn();
      }
    else
      {
      op->vtkX3DExporter::FastestOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_FastestOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastestOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FastestOff();
      }
    else
      {
      op->vtkX3DExporter::FastestOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetFastest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFastest() :
      op->vtkX3DExporter::GetFastest());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteToOutputString(temp0);
      }
    else
      {
      op->vtkX3DExporter::SetWriteToOutputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkX3DExporter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOn();
      }
    else
      {
      op->vtkX3DExporter::WriteToOutputStringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOff();
      }
    else
      {
      op->vtkX3DExporter::WriteToOutputStringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetOutputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputStringLength() :
      op->vtkX3DExporter::GetOutputStringLength());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetOutputString() :
      op->vtkX3DExporter::GetOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_GetBinaryOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryOutputString() :
      op->vtkX3DExporter::GetBinaryOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkX3DExporter_RegisterAndGetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterAndGetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporter *op = static_cast<vtkX3DExporter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->RegisterAndGetOutputString() :
      op->vtkX3DExporter::RegisterAndGetOutputString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkX3DExporter_Methods[] = {
  {(char*)"GetClassName", PyvtkX3DExporter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkX3DExporter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkX3DExporter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkX3DExporter\nC++: vtkX3DExporter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkX3DExporter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkX3DExporter\nC++: vtkX3DExporter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkX3DExporter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet/Get the output file name.\n"},
  {(char*)"GetFileName", PyvtkX3DExporter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet/Get the output file name.\n"},
  {(char*)"SetSpeed", PyvtkX3DExporter_SetSpeed, METH_VARARGS,
   (char*)"V.SetSpeed(float)\nC++: void SetSpeed(double a)\n\nSpecify the Speed of navigation. Default is 4.\n"},
  {(char*)"GetSpeed", PyvtkX3DExporter_GetSpeed, METH_VARARGS,
   (char*)"V.GetSpeed() -> float\nC++: double GetSpeed()\n\nSpecify the Speed of navigation. Default is 4.\n"},
  {(char*)"SetBinary", PyvtkX3DExporter_SetBinary, METH_VARARGS,
   (char*)"V.SetBinary(int)\nC++: void SetBinary(int)\n\nTurn on binary mode\n"},
  {(char*)"GetBinaryMinValue", PyvtkX3DExporter_GetBinaryMinValue, METH_VARARGS,
   (char*)"V.GetBinaryMinValue() -> int\nC++: int GetBinaryMinValue()\n\nTurn on binary mode\n"},
  {(char*)"GetBinaryMaxValue", PyvtkX3DExporter_GetBinaryMaxValue, METH_VARARGS,
   (char*)"V.GetBinaryMaxValue() -> int\nC++: int GetBinaryMaxValue()\n\nTurn on binary mode\n"},
  {(char*)"BinaryOn", PyvtkX3DExporter_BinaryOn, METH_VARARGS,
   (char*)"V.BinaryOn()\nC++: void BinaryOn()\n\nTurn on binary mode\n"},
  {(char*)"BinaryOff", PyvtkX3DExporter_BinaryOff, METH_VARARGS,
   (char*)"V.BinaryOff()\nC++: void BinaryOff()\n\nTurn on binary mode\n"},
  {(char*)"GetBinary", PyvtkX3DExporter_GetBinary, METH_VARARGS,
   (char*)"V.GetBinary() -> int\nC++: int GetBinary()\n\nTurn on binary mode\n"},
  {(char*)"SetFastest", PyvtkX3DExporter_SetFastest, METH_VARARGS,
   (char*)"V.SetFastest(int)\nC++: void SetFastest(int)\n\nIn binary mode use fastest instead of best compression\n"},
  {(char*)"GetFastestMinValue", PyvtkX3DExporter_GetFastestMinValue, METH_VARARGS,
   (char*)"V.GetFastestMinValue() -> int\nC++: int GetFastestMinValue()\n\nIn binary mode use fastest instead of best compression\n"},
  {(char*)"GetFastestMaxValue", PyvtkX3DExporter_GetFastestMaxValue, METH_VARARGS,
   (char*)"V.GetFastestMaxValue() -> int\nC++: int GetFastestMaxValue()\n\nIn binary mode use fastest instead of best compression\n"},
  {(char*)"FastestOn", PyvtkX3DExporter_FastestOn, METH_VARARGS,
   (char*)"V.FastestOn()\nC++: void FastestOn()\n\nIn binary mode use fastest instead of best compression\n"},
  {(char*)"FastestOff", PyvtkX3DExporter_FastestOff, METH_VARARGS,
   (char*)"V.FastestOff()\nC++: void FastestOff()\n\nIn binary mode use fastest instead of best compression\n"},
  {(char*)"GetFastest", PyvtkX3DExporter_GetFastest, METH_VARARGS,
   (char*)"V.GetFastest() -> int\nC++: int GetFastest()\n\nIn binary mode use fastest instead of best compression\n"},
  {(char*)"SetWriteToOutputString", PyvtkX3DExporter_SetWriteToOutputString, METH_VARARGS,
   (char*)"V.SetWriteToOutputString(int)\nC++: void SetWriteToOutputString(int a)\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"GetWriteToOutputString", PyvtkX3DExporter_GetWriteToOutputString, METH_VARARGS,
   (char*)"V.GetWriteToOutputString() -> int\nC++: int GetWriteToOutputString()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"WriteToOutputStringOn", PyvtkX3DExporter_WriteToOutputStringOn, METH_VARARGS,
   (char*)"V.WriteToOutputStringOn()\nC++: void WriteToOutputStringOn()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"WriteToOutputStringOff", PyvtkX3DExporter_WriteToOutputStringOff, METH_VARARGS,
   (char*)"V.WriteToOutputStringOff()\nC++: void WriteToOutputStringOff()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"GetOutputStringLength", PyvtkX3DExporter_GetOutputStringLength, METH_VARARGS,
   (char*)"V.GetOutputStringLength() -> int\nC++: int GetOutputStringLength()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {(char*)"GetOutputString", PyvtkX3DExporter_GetOutputString, METH_VARARGS,
   (char*)"V.GetOutputString() -> string\nC++: char *GetOutputString()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {(char*)"GetBinaryOutputString", PyvtkX3DExporter_GetBinaryOutputString, METH_VARARGS,
   (char*)"V.GetBinaryOutputString() -> (int, ...)\nC++: unsigned char *GetBinaryOutputString()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {(char*)"RegisterAndGetOutputString", PyvtkX3DExporter_RegisterAndGetOutputString, METH_VARARGS,
   (char*)"V.RegisterAndGetOutputString() -> string\nC++: char *RegisterAndGetOutputString()\n\nThis convenience method returns the string, sets the IVAR to\nNULL, so that the user is responsible for deleting the string. I\nam not sure what the name should be, so it may change in the\nfuture.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkX3DExporter_StaticNew()
{
  return vtkX3DExporter::New();
}

PyObject *PyVTKClass_vtkX3DExporterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkX3DExporter_StaticNew,
    PyvtkX3DExporter_Methods,
    "vtkX3DExporter", modulename,
    NULL, NULL,
    PyvtkX3DExporter_Doc(),
    PyVTKClass_vtkExporterNew(modulename));
  return cls;
}

const char **PyvtkX3DExporter_Doc()
{
  static const char *docstring[] = {
    "vtkX3DExporter - create an x3d file\n\n",
    "Superclass: vtkExporter\n\n",
    "vtkX3DExporter is a render window exporter which writes out the\nrenderered scene into an X3D file. X3D is an XML-based format for\nrepresentation 3D scenes (similar to VRML). Check out\nhttp://www.web3d.org/x3d/ for more details.\n\nThanks:\n\nX3DExporter is contributed by Christophe Mouton at EDF.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkX3DExporter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkX3DExporterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkX3DExporter", o) != 0)
    {
    Py_DECREF(o);
    }

}

