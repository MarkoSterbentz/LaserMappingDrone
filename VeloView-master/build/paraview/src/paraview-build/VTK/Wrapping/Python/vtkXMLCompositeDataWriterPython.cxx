// python wrapper for vtkXMLCompositeDataWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkXMLCompositeDataWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLCompositeDataWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLCompositeDataWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLWriterNew
#endif

static const char **PyvtkXMLCompositeDataWriter_Doc();


static PyObject *
PyvtkXMLCompositeDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataWriter *op = static_cast<vtkXMLCompositeDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLCompositeDataWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataWriter *op = static_cast<vtkXMLCompositeDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLCompositeDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataWriter *op = static_cast<vtkXMLCompositeDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLCompositeDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLCompositeDataWriter::NewInstance());

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
PyvtkXMLCompositeDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLCompositeDataWriter *tempr = vtkXMLCompositeDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataWriter *op = static_cast<vtkXMLCompositeDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLCompositeDataWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataWriter *op = static_cast<vtkXMLCompositeDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkXMLCompositeDataWriter::GetGhostLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataWriter *op = static_cast<vtkXMLCompositeDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGhostLevel(temp0);
      }
    else
      {
      op->vtkXMLCompositeDataWriter::SetGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataWriter_GetWriteMetaFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteMetaFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataWriter *op = static_cast<vtkXMLCompositeDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWriteMetaFile() :
      op->vtkXMLCompositeDataWriter::GetWriteMetaFile());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataWriter_SetWriteMetaFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteMetaFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataWriter *op = static_cast<vtkXMLCompositeDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteMetaFile(temp0);
      }
    else
      {
      op->vtkXMLCompositeDataWriter::SetWriteMetaFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLCompositeDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLCompositeDataWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLCompositeDataWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLCompositeDataWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLCompositeDataWriter\nC++: vtkXMLCompositeDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLCompositeDataWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLCompositeDataWriter\nC++: vtkXMLCompositeDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLCompositeDataWriter_GetDefaultFileExtension, METH_VARARGS,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: virtual const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {(char*)"GetGhostLevel", PyvtkXMLCompositeDataWriter_GetGhostLevel, METH_VARARGS,
   (char*)"V.GetGhostLevel() -> int\nC++: int GetGhostLevel()\n\nGet/Set the number of ghost levels to be written.\n"},
  {(char*)"SetGhostLevel", PyvtkXMLCompositeDataWriter_SetGhostLevel, METH_VARARGS,
   (char*)"V.SetGhostLevel(int)\nC++: void SetGhostLevel(int a)\n\nGet/Set the number of ghost levels to be written.\n"},
  {(char*)"GetWriteMetaFile", PyvtkXMLCompositeDataWriter_GetWriteMetaFile, METH_VARARGS,
   (char*)"V.GetWriteMetaFile() -> int\nC++: int GetWriteMetaFile()\n\nGet/Set whether this instance will write the meta-file.\n"},
  {(char*)"SetWriteMetaFile", PyvtkXMLCompositeDataWriter_SetWriteMetaFile, METH_VARARGS,
   (char*)"V.SetWriteMetaFile(int)\nC++: virtual void SetWriteMetaFile(int flag)\n\nGet/Set whether this instance will write the meta-file.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLCompositeDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLCompositeDataWriter_Methods,
    "vtkXMLCompositeDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLCompositeDataWriter_Doc(),
    PyVTKClass_vtkXMLWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLCompositeDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLCompositeDataWriter - Writer for multi-group datasets\n\n",
    "Superclass: vtkXMLWriter\n\n",
    "vtkXMLCompositeDataWriter writes (serially) the VTK XML multi-group,\nmulti-block hierarchical and hierarchical box files. XML multi-group\ndata files are meta-files that point to a list of serial VTK XML\nfiles.\n\nSee Also:\n\nvtkXMLPCompositeDataWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLCompositeDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLCompositeDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLCompositeDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

