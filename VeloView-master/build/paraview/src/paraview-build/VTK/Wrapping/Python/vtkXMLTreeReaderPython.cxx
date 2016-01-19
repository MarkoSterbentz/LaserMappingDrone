// python wrapper for vtkXMLTreeReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLTreeReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLTreeReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLTreeReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAlgorithmNew
#endif

static const char **PyvtkXMLTreeReader_Doc();


static PyObject *
PyvtkXMLTreeReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLTreeReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLTreeReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLTreeReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLTreeReader::NewInstance());

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
PyvtkXMLTreeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLTreeReader *tempr = vtkXMLTreeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkXMLTreeReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

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
      op->vtkXMLTreeReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetXMLString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetXMLString() :
      op->vtkXMLTreeReader::GetXMLString());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetXMLString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMLString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXMLString(temp0);
      }
    else
      {
      op->vtkXMLTreeReader::SetXMLString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetEdgePedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgePedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetEdgePedigreeIdArrayName() :
      op->vtkXMLTreeReader::GetEdgePedigreeIdArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetEdgePedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgePedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgePedigreeIdArrayName(temp0);
      }
    else
      {
      op->vtkXMLTreeReader::SetEdgePedigreeIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetVertexPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetVertexPedigreeIdArrayName() :
      op->vtkXMLTreeReader::GetVertexPedigreeIdArrayName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetVertexPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVertexPedigreeIdArrayName(temp0);
      }
    else
      {
      op->vtkXMLTreeReader::SetVertexPedigreeIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetGenerateEdgePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEdgePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateEdgePedigreeIds(temp0);
      }
    else
      {
      op->vtkXMLTreeReader::SetGenerateEdgePedigreeIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetGenerateEdgePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEdgePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateEdgePedigreeIds() :
      op->vtkXMLTreeReader::GetGenerateEdgePedigreeIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GenerateEdgePedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgePedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateEdgePedigreeIdsOn();
      }
    else
      {
      op->vtkXMLTreeReader::GenerateEdgePedigreeIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GenerateEdgePedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgePedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateEdgePedigreeIdsOff();
      }
    else
      {
      op->vtkXMLTreeReader::GenerateEdgePedigreeIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetGenerateVertexPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertexPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateVertexPedigreeIds(temp0);
      }
    else
      {
      op->vtkXMLTreeReader::SetGenerateVertexPedigreeIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetGenerateVertexPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertexPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateVertexPedigreeIds() :
      op->vtkXMLTreeReader::GetGenerateVertexPedigreeIds());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GenerateVertexPedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexPedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVertexPedigreeIdsOn();
      }
    else
      {
      op->vtkXMLTreeReader::GenerateVertexPedigreeIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GenerateVertexPedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexPedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVertexPedigreeIdsOff();
      }
    else
      {
      op->vtkXMLTreeReader::GenerateVertexPedigreeIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetMaskArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetMaskArrays() :
      op->vtkXMLTreeReader::GetMaskArrays());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetMaskArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskArrays(temp0);
      }
    else
      {
      op->vtkXMLTreeReader::SetMaskArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_MaskArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaskArraysOn();
      }
    else
      {
      op->vtkXMLTreeReader::MaskArraysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_MaskArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MaskArraysOff();
      }
    else
      {
      op->vtkXMLTreeReader::MaskArraysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetReadCharData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadCharData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetReadCharData() :
      op->vtkXMLTreeReader::GetReadCharData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetReadCharData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadCharData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadCharData(temp0);
      }
    else
      {
      op->vtkXMLTreeReader::SetReadCharData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_ReadCharDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCharDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadCharDataOn();
      }
    else
      {
      op->vtkXMLTreeReader::ReadCharDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_ReadCharDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCharDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadCharDataOff();
      }
    else
      {
      op->vtkXMLTreeReader::ReadCharDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_GetReadTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetReadTagName() :
      op->vtkXMLTreeReader::GetReadTagName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_SetReadTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadTagName(temp0);
      }
    else
      {
      op->vtkXMLTreeReader::SetReadTagName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_ReadTagNameOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadTagNameOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadTagNameOn();
      }
    else
      {
      op->vtkXMLTreeReader::ReadTagNameOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLTreeReader_ReadTagNameOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadTagNameOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLTreeReader *op = static_cast<vtkXMLTreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadTagNameOff();
      }
    else
      {
      op->vtkXMLTreeReader::ReadTagNameOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLTreeReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLTreeReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLTreeReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLTreeReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLTreeReader\nC++: vtkXMLTreeReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLTreeReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLTreeReader\nC++: vtkXMLTreeReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkXMLTreeReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nIf set, reads in the XML file specified.\n"},
  {(char*)"SetFileName", PyvtkXMLTreeReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nIf set, reads in the XML file specified.\n"},
  {(char*)"GetXMLString", PyvtkXMLTreeReader_GetXMLString, METH_VARARGS,
   (char*)"V.GetXMLString() -> string\nC++: char *GetXMLString()\n\nIf set, and FileName is not set, reads in the XML string.\n"},
  {(char*)"SetXMLString", PyvtkXMLTreeReader_SetXMLString, METH_VARARGS,
   (char*)"V.SetXMLString(string)\nC++: void SetXMLString(char *)\n\nIf set, and FileName is not set, reads in the XML string.\n"},
  {(char*)"GetEdgePedigreeIdArrayName", PyvtkXMLTreeReader_GetEdgePedigreeIdArrayName, METH_VARARGS,
   (char*)"V.GetEdgePedigreeIdArrayName() -> string\nC++: char *GetEdgePedigreeIdArrayName()\n\nThe name of the edge pedigree ids. Default is \"edge id\".\n"},
  {(char*)"SetEdgePedigreeIdArrayName", PyvtkXMLTreeReader_SetEdgePedigreeIdArrayName, METH_VARARGS,
   (char*)"V.SetEdgePedigreeIdArrayName(string)\nC++: void SetEdgePedigreeIdArrayName(char *)\n\nThe name of the edge pedigree ids. Default is \"edge id\".\n"},
  {(char*)"GetVertexPedigreeIdArrayName", PyvtkXMLTreeReader_GetVertexPedigreeIdArrayName, METH_VARARGS,
   (char*)"V.GetVertexPedigreeIdArrayName() -> string\nC++: char *GetVertexPedigreeIdArrayName()\n\nThe name of the vertex pedigree ids. Default is \"vertex id\".\n"},
  {(char*)"SetVertexPedigreeIdArrayName", PyvtkXMLTreeReader_SetVertexPedigreeIdArrayName, METH_VARARGS,
   (char*)"V.SetVertexPedigreeIdArrayName(string)\nC++: void SetVertexPedigreeIdArrayName(char *)\n\nThe name of the vertex pedigree ids. Default is \"vertex id\".\n"},
  {(char*)"SetGenerateEdgePedigreeIds", PyvtkXMLTreeReader_SetGenerateEdgePedigreeIds, METH_VARARGS,
   (char*)"V.SetGenerateEdgePedigreeIds(bool)\nC++: void SetGenerateEdgePedigreeIds(bool a)\n\nSet whether to use an property from the XML file as pedigree ids\n(off), or generate a new array with integer values starting at\nzero (on). Default is on.\n"},
  {(char*)"GetGenerateEdgePedigreeIds", PyvtkXMLTreeReader_GetGenerateEdgePedigreeIds, METH_VARARGS,
   (char*)"V.GetGenerateEdgePedigreeIds() -> bool\nC++: bool GetGenerateEdgePedigreeIds()\n\nSet whether to use an property from the XML file as pedigree ids\n(off), or generate a new array with integer values starting at\nzero (on). Default is on.\n"},
  {(char*)"GenerateEdgePedigreeIdsOn", PyvtkXMLTreeReader_GenerateEdgePedigreeIdsOn, METH_VARARGS,
   (char*)"V.GenerateEdgePedigreeIdsOn()\nC++: void GenerateEdgePedigreeIdsOn()\n\nSet whether to use an property from the XML file as pedigree ids\n(off), or generate a new array with integer values starting at\nzero (on). Default is on.\n"},
  {(char*)"GenerateEdgePedigreeIdsOff", PyvtkXMLTreeReader_GenerateEdgePedigreeIdsOff, METH_VARARGS,
   (char*)"V.GenerateEdgePedigreeIdsOff()\nC++: void GenerateEdgePedigreeIdsOff()\n\nSet whether to use an property from the XML file as pedigree ids\n(off), or generate a new array with integer values starting at\nzero (on). Default is on.\n"},
  {(char*)"SetGenerateVertexPedigreeIds", PyvtkXMLTreeReader_SetGenerateVertexPedigreeIds, METH_VARARGS,
   (char*)"V.SetGenerateVertexPedigreeIds(bool)\nC++: void SetGenerateVertexPedigreeIds(bool a)\n\nSet whether to use an property from the XML file as pedigree ids\n(off), or generate a new array with integer values starting at\nzero (on). Default is on.\n"},
  {(char*)"GetGenerateVertexPedigreeIds", PyvtkXMLTreeReader_GetGenerateVertexPedigreeIds, METH_VARARGS,
   (char*)"V.GetGenerateVertexPedigreeIds() -> bool\nC++: bool GetGenerateVertexPedigreeIds()\n\nSet whether to use an property from the XML file as pedigree ids\n(off), or generate a new array with integer values starting at\nzero (on). Default is on.\n"},
  {(char*)"GenerateVertexPedigreeIdsOn", PyvtkXMLTreeReader_GenerateVertexPedigreeIdsOn, METH_VARARGS,
   (char*)"V.GenerateVertexPedigreeIdsOn()\nC++: void GenerateVertexPedigreeIdsOn()\n\nSet whether to use an property from the XML file as pedigree ids\n(off), or generate a new array with integer values starting at\nzero (on). Default is on.\n"},
  {(char*)"GenerateVertexPedigreeIdsOff", PyvtkXMLTreeReader_GenerateVertexPedigreeIdsOff, METH_VARARGS,
   (char*)"V.GenerateVertexPedigreeIdsOff()\nC++: void GenerateVertexPedigreeIdsOff()\n\nSet whether to use an property from the XML file as pedigree ids\n(off), or generate a new array with integer values starting at\nzero (on). Default is on.\n"},
  {(char*)"GetMaskArrays", PyvtkXMLTreeReader_GetMaskArrays, METH_VARARGS,
   (char*)"V.GetMaskArrays() -> bool\nC++: bool GetMaskArrays()\n\nIf on, makes bit arrays for each attribute with name\n.valid.attribute_name for each attribute.  Default is off.\n"},
  {(char*)"SetMaskArrays", PyvtkXMLTreeReader_SetMaskArrays, METH_VARARGS,
   (char*)"V.SetMaskArrays(bool)\nC++: void SetMaskArrays(bool a)\n\nIf on, makes bit arrays for each attribute with name\n.valid.attribute_name for each attribute.  Default is off.\n"},
  {(char*)"MaskArraysOn", PyvtkXMLTreeReader_MaskArraysOn, METH_VARARGS,
   (char*)"V.MaskArraysOn()\nC++: void MaskArraysOn()\n\nIf on, makes bit arrays for each attribute with name\n.valid.attribute_name for each attribute.  Default is off.\n"},
  {(char*)"MaskArraysOff", PyvtkXMLTreeReader_MaskArraysOff, METH_VARARGS,
   (char*)"V.MaskArraysOff()\nC++: void MaskArraysOff()\n\nIf on, makes bit arrays for each attribute with name\n.valid.attribute_name for each attribute.  Default is off.\n"},
  {(char*)"GetReadCharData", PyvtkXMLTreeReader_GetReadCharData, METH_VARARGS,
   (char*)"V.GetReadCharData() -> bool\nC++: bool GetReadCharData()\n\nIf on, stores the XML character data (i.e. textual data between\ntags) into an array named CharDataField, otherwise this field is\nskipped. Default is off.\n"},
  {(char*)"SetReadCharData", PyvtkXMLTreeReader_SetReadCharData, METH_VARARGS,
   (char*)"V.SetReadCharData(bool)\nC++: void SetReadCharData(bool a)\n\nIf on, stores the XML character data (i.e. textual data between\ntags) into an array named CharDataField, otherwise this field is\nskipped. Default is off.\n"},
  {(char*)"ReadCharDataOn", PyvtkXMLTreeReader_ReadCharDataOn, METH_VARARGS,
   (char*)"V.ReadCharDataOn()\nC++: void ReadCharDataOn()\n\nIf on, stores the XML character data (i.e. textual data between\ntags) into an array named CharDataField, otherwise this field is\nskipped. Default is off.\n"},
  {(char*)"ReadCharDataOff", PyvtkXMLTreeReader_ReadCharDataOff, METH_VARARGS,
   (char*)"V.ReadCharDataOff()\nC++: void ReadCharDataOff()\n\nIf on, stores the XML character data (i.e. textual data between\ntags) into an array named CharDataField, otherwise this field is\nskipped. Default is off.\n"},
  {(char*)"GetReadTagName", PyvtkXMLTreeReader_GetReadTagName, METH_VARARGS,
   (char*)"V.GetReadTagName() -> bool\nC++: bool GetReadTagName()\n\nIf on, stores the XML tag name data in a field called .tagname\notherwise this field is skipped. Default is on.\n"},
  {(char*)"SetReadTagName", PyvtkXMLTreeReader_SetReadTagName, METH_VARARGS,
   (char*)"V.SetReadTagName(bool)\nC++: void SetReadTagName(bool a)\n\nIf on, stores the XML tag name data in a field called .tagname\notherwise this field is skipped. Default is on.\n"},
  {(char*)"ReadTagNameOn", PyvtkXMLTreeReader_ReadTagNameOn, METH_VARARGS,
   (char*)"V.ReadTagNameOn()\nC++: void ReadTagNameOn()\n\nIf on, stores the XML tag name data in a field called .tagname\notherwise this field is skipped. Default is on.\n"},
  {(char*)"ReadTagNameOff", PyvtkXMLTreeReader_ReadTagNameOff, METH_VARARGS,
   (char*)"V.ReadTagNameOff()\nC++: void ReadTagNameOff()\n\nIf on, stores the XML tag name data in a field called .tagname\notherwise this field is skipped. Default is on.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLTreeReader_StaticNew()
{
  return vtkXMLTreeReader::New();
}

PyObject *PyVTKClass_vtkXMLTreeReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLTreeReader_StaticNew,
    PyvtkXMLTreeReader_Methods,
    "vtkXMLTreeReader", modulename,
    NULL, NULL,
    PyvtkXMLTreeReader_Doc(),
    PyVTKClass_vtkTreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkXMLTreeReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLTreeReader - reads an XML file into a vtkTree\n\n",
    "Superclass: vtkTreeAlgorithm\n\n",
    "vtkXMLTreeReader parses an XML file and uses the nesting structure of\nthe XML tags to generate a tree.  Node attributes are assigned to\nnode arrays, and the special arrays .tagname and .chardata contain\nthe tag type and the text internal to the tag, respectively.  The\narrays are of type vtkStringArray.  There is an array for each\nattribute type in the XML file, even if it appears in only one tag. ",
    "\nIf an attribute is missing from a tag, its value is the empty string.\n\nIf MaskArrays is on (the default is off), the filter will\nadditionally make bit arrays whose names are prepended with \".valid.\"\nwhich are 1 if the element contains that attribute, and 0 otherwise.\n\nFor example, the XML file containing the text:\n\n&lt;node name=\"jeff\" age=\"26\"&gt;\n  this is text in jeff's node\n  &lt;node name=\"j",
    "oe\"&gt;\n    &lt;node name=\"al\" initials=\"amb\" other=\"something\"/&gt;\n    &lt;node name=\"dave\" age=\"30\"/&gt;\n  &lt;/node&gt;\n  &lt;node name=\"lisa\"&gt;this is text in lisa's node&lt;/node&gt;\n  &lt;node name=\"darlene\" age=\"29\"/&gt; &lt;/node&gt; \n\nwould be parsed into a tree with the following node IDs and\nstructure:\n\n0 (jeff) - children: 1 (joe), 4 (lisa), 5 (darlene) 1 (joe)  -\nchildren: 2 (al), ",
    "3 (dave) 2 (al) 3 (dave) 4 (lisa) 5 (darlene) \n\nand the node data arrays would be as follows:\n\nname      initials  other     age       .tagname  .chardata\n----------------------------------------------------------------------\n    -------------------------- jeff      (empty)   (empty)   26      \n  node     \"  this is text in jeff's node\\n  \\n  \\n  \\n\" joe      \n    (empty)   (empty)   (empty)    no",
    "de     \"\\n    \\n    \\n  \" al    \n   amb       something (empty)    node     (empty) dave      (empty) \n (empty)   30         node     (empty) lisa      (empty)   (empty)  \n    (empty)    node     \"this is text in lisa's node\" darlene  \n    (empty)   (empty)   29         node     (empty) \n\nThere would also be the following bit arrays if MaskArrays is on:\n\n.valid.name   .valid.initials   .valid.othe",
    "r   .valid.age\n--------------------------------------------------------- 1          \n  0                 0              1 1             0                \n    0              0 1             1                 1              0\n    1             0                 0              1 1             0 \n               0              0 1             0                 0    \n         1 \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLTreeReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLTreeReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLTreeReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

