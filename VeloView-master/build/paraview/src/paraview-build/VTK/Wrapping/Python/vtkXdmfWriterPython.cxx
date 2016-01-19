// python wrapper for vtkXdmfWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXdmfWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXdmfWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXdmfWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkXdmfWriter_Doc();


static PyObject *
PyvtkXdmfWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXdmfWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXdmfWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXdmfWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXdmfWriter::NewInstance());

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
PyvtkXdmfWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXdmfWriter *tempr = vtkXdmfWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInputData(temp0);
      }
    else
      {
      op->vtkXdmfWriter::SetInputData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

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
      op->vtkXdmfWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkXdmfWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetHeavyDataFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeavyDataFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeavyDataFileName(temp0);
      }
    else
      {
      op->vtkXdmfWriter::SetHeavyDataFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_GetHeavyDataFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeavyDataFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetHeavyDataFileName() :
      op->vtkXdmfWriter::GetHeavyDataFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetHeavyDataGroupName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeavyDataGroupName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeavyDataGroupName(temp0);
      }
    else
      {
      op->vtkXdmfWriter::SetHeavyDataGroupName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_GetHeavyDataGroupName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeavyDataGroupName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetHeavyDataGroupName() :
      op->vtkXdmfWriter::GetHeavyDataGroupName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkXdmfWriter::Write());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetLightDataLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightDataLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLightDataLimit(temp0);
      }
    else
      {
      op->vtkXdmfWriter::SetLightDataLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_GetLightDataLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightDataLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetLightDataLimit() :
      op->vtkXdmfWriter::GetLightDataLimit());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteAllTimeSteps(temp0);
      }
    else
      {
      op->vtkXdmfWriter::SetWriteAllTimeSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_GetWriteAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriteAllTimeSteps() :
      op->vtkXdmfWriter::GetWriteAllTimeSteps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_WriteAllTimeStepsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteAllTimeStepsOn();
      }
    else
      {
      op->vtkXdmfWriter::WriteAllTimeStepsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_WriteAllTimeStepsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAllTimeStepsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteAllTimeStepsOff();
      }
    else
      {
      op->vtkXdmfWriter::WriteAllTimeStepsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPiece(temp0);
      }
    else
      {
      op->vtkXdmfWriter::SetPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXdmfWriter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXdmfWriter *op = static_cast<vtkXdmfWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPieces(temp0);
      }
    else
      {
      op->vtkXdmfWriter::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXdmfWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXdmfWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXdmfWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXdmfWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXdmfWriter\nC++: vtkXdmfWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXdmfWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXdmfWriter\nC++: vtkXdmfWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInputData", PyvtkXdmfWriter_SetInputData, METH_VARARGS,
   (char*)"V.SetInputData(vtkDataObject)\nC++: virtual void SetInputData(vtkDataObject *dobj)\n\nSet the input data set.\n"},
  {(char*)"SetFileName", PyvtkXdmfWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet or get the file name of the xdmf file.\n"},
  {(char*)"GetFileName", PyvtkXdmfWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet or get the file name of the xdmf file.\n"},
  {(char*)"SetHeavyDataFileName", PyvtkXdmfWriter_SetHeavyDataFileName, METH_VARARGS,
   (char*)"V.SetHeavyDataFileName(string)\nC++: void SetHeavyDataFileName(char *)\n\nSet or get the file name of the hdf5 file. Note that if the File\nname is not specified, then the group name is ignore\n"},
  {(char*)"GetHeavyDataFileName", PyvtkXdmfWriter_GetHeavyDataFileName, METH_VARARGS,
   (char*)"V.GetHeavyDataFileName() -> string\nC++: char *GetHeavyDataFileName()\n\nSet or get the file name of the hdf5 file. Note that if the File\nname is not specified, then the group name is ignore\n"},
  {(char*)"SetHeavyDataGroupName", PyvtkXdmfWriter_SetHeavyDataGroupName, METH_VARARGS,
   (char*)"V.SetHeavyDataGroupName(string)\nC++: void SetHeavyDataGroupName(char *)\n\nSet or get the group name into which data will be written it may\ncontain nested groups as in \"/Proc0/Block0\"\n"},
  {(char*)"GetHeavyDataGroupName", PyvtkXdmfWriter_GetHeavyDataGroupName, METH_VARARGS,
   (char*)"V.GetHeavyDataGroupName() -> string\nC++: char *GetHeavyDataGroupName()\n\nSet or get the group name into which data will be written it may\ncontain nested groups as in \"/Proc0/Block0\"\n"},
  {(char*)"Write", PyvtkXdmfWriter_Write, METH_VARARGS,
   (char*)"V.Write() -> int\nC++: virtual int Write()\n\nWrite data to output. Method executes subclasses WriteData()\nmethod, as well as StartMethod() and EndMethod() methods. Returns\n1 on success and 0 on failure.\n"},
  {(char*)"SetLightDataLimit", PyvtkXdmfWriter_SetLightDataLimit, METH_VARARGS,
   (char*)"V.SetLightDataLimit(int)\nC++: void SetLightDataLimit(int a)\n\nTopology Geometry and Attribute arrays smaller than this are\nwritten in line into the XML. Default is 100.\n"},
  {(char*)"GetLightDataLimit", PyvtkXdmfWriter_GetLightDataLimit, METH_VARARGS,
   (char*)"V.GetLightDataLimit() -> int\nC++: int GetLightDataLimit()\n\nTopology Geometry and Attribute arrays smaller than this are\nwritten in line into the XML. Default is 100.\n"},
  {(char*)"SetWriteAllTimeSteps", PyvtkXdmfWriter_SetWriteAllTimeSteps, METH_VARARGS,
   (char*)"V.SetWriteAllTimeSteps(int)\nC++: void SetWriteAllTimeSteps(int a)\n\n"},
  {(char*)"GetWriteAllTimeSteps", PyvtkXdmfWriter_GetWriteAllTimeSteps, METH_VARARGS,
   (char*)"V.GetWriteAllTimeSteps() -> int\nC++: int GetWriteAllTimeSteps()\n\n"},
  {(char*)"WriteAllTimeStepsOn", PyvtkXdmfWriter_WriteAllTimeStepsOn, METH_VARARGS,
   (char*)"V.WriteAllTimeStepsOn()\nC++: void WriteAllTimeStepsOn()\n\n"},
  {(char*)"WriteAllTimeStepsOff", PyvtkXdmfWriter_WriteAllTimeStepsOff, METH_VARARGS,
   (char*)"V.WriteAllTimeStepsOff()\nC++: void WriteAllTimeStepsOff()\n\n"},
  {(char*)"SetPiece", PyvtkXdmfWriter_SetPiece, METH_VARARGS,
   (char*)"V.SetPiece(int)\nC++: void SetPiece(int a)\n\nCalled in parallel runs to identify the portion this process is\nresponsible for TODO: respect this\n"},
  {(char*)"SetNumberOfPieces", PyvtkXdmfWriter_SetNumberOfPieces, METH_VARARGS,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int a)\n\nCalled in parallel runs to identify the portion this process is\nresponsible for TODO: respect this\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXdmfWriter_StaticNew()
{
  return vtkXdmfWriter::New();
}

PyObject *PyVTKClass_vtkXdmfWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXdmfWriter_StaticNew,
    PyvtkXdmfWriter_Methods,
    "vtkXdmfWriter", modulename,
    NULL, NULL,
    PyvtkXdmfWriter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkXdmfWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXdmfWriter - write eXtensible Data Model and Format files\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "vtkXdmfWriter converts vtkDataObjects to XDMF format. This is\nintended to replace vtkXdmfWriter, which is not up to date with the\ncapabilities of the newer XDMF2 library. This writer understands\nVTK's composite data types and produces full trees in the output XDMF\nfiles.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXdmfWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXdmfWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXdmfWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

