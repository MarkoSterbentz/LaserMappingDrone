// python wrapper for vtkXMLPUniformGridAMRWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLPUniformGridAMRWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLPUniformGridAMRWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLPUniformGridAMRWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLUniformGridAMRWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLUniformGridAMRWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLUniformGridAMRWriterNew
#endif

static const char **PyvtkXMLPUniformGridAMRWriter_Doc();


static PyObject *
PyvtkXMLPUniformGridAMRWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUniformGridAMRWriter *op = static_cast<vtkXMLPUniformGridAMRWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLPUniformGridAMRWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUniformGridAMRWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUniformGridAMRWriter *op = static_cast<vtkXMLPUniformGridAMRWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPUniformGridAMRWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUniformGridAMRWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUniformGridAMRWriter *op = static_cast<vtkXMLPUniformGridAMRWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLPUniformGridAMRWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPUniformGridAMRWriter::NewInstance());

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
PyvtkXMLPUniformGridAMRWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLPUniformGridAMRWriter *tempr = vtkXMLPUniformGridAMRWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUniformGridAMRWriter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUniformGridAMRWriter *op = static_cast<vtkXMLPUniformGridAMRWriter *>(vp);

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
      op->vtkXMLPUniformGridAMRWriter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUniformGridAMRWriter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUniformGridAMRWriter *op = static_cast<vtkXMLPUniformGridAMRWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkXMLPUniformGridAMRWriter::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUniformGridAMRWriter_SetWriteMetaFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteMetaFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUniformGridAMRWriter *op = static_cast<vtkXMLPUniformGridAMRWriter *>(vp);

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
      op->vtkXMLPUniformGridAMRWriter::SetWriteMetaFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPUniformGridAMRWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPUniformGridAMRWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPUniformGridAMRWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPUniformGridAMRWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLPUniformGridAMRWriter\nC++: vtkXMLPUniformGridAMRWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPUniformGridAMRWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPUniformGridAMRWriter\nC++: vtkXMLPUniformGridAMRWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkXMLPUniformGridAMRWriter_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nController used to communicate data type of blocks. By default,\nthe global controller is used. If you want another controller to\nbe used, set it with this. If no controller is set, only the\nlocal blocks will be written to the meta-file.\n"},
  {(char*)"GetController", PyvtkXMLPUniformGridAMRWriter_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nController used to communicate data type of blocks. By default,\nthe global controller is used. If you want another controller to\nbe used, set it with this. If no controller is set, only the\nlocal blocks will be written to the meta-file.\n"},
  {(char*)"SetWriteMetaFile", PyvtkXMLPUniformGridAMRWriter_SetWriteMetaFile, METH_VARARGS,
   (char*)"V.SetWriteMetaFile(int)\nC++: virtual void SetWriteMetaFile(int flag)\n\nSet whether this instance will write the meta-file. WriteMetaFile\nis set to flag only on process 0 and all other processes have\nWriteMetaFile set to 0 by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPUniformGridAMRWriter_StaticNew()
{
  return vtkXMLPUniformGridAMRWriter::New();
}

PyObject *PyVTKClass_vtkXMLPUniformGridAMRWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPUniformGridAMRWriter_StaticNew,
    PyvtkXMLPUniformGridAMRWriter_Methods,
    "vtkXMLPUniformGridAMRWriter", modulename,
    NULL, NULL,
    PyvtkXMLPUniformGridAMRWriter_Doc(),
    PyVTKClass_vtkXMLUniformGridAMRWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPUniformGridAMRWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPUniformGridAMRWriter - parallel writer for\n\n",
    "Superclass: vtkXMLUniformGridAMRWriter\n\n",
    "vtkXMLPCompositeDataWriter writes (in parallel or serially)\nvtkUniformGridAMR and subclasses. When running in parallel all\nprocesses are expected to have the same meta-data (i.e. amr-boxes,\nstructure, etc.) however they may now have the missing data-blocks.\nThis class extends vtkXMLUniformGridAMRWriter to communicate\ninformation about data blocks to the root node so that the root node\ncan write th",
    "e XML file describing the structure correctly.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPUniformGridAMRWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPUniformGridAMRWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPUniformGridAMRWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

