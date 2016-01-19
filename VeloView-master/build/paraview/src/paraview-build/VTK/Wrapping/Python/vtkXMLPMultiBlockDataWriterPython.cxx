// python wrapper for vtkXMLPMultiBlockDataWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLPMultiBlockDataWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLPMultiBlockDataWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLPMultiBlockDataWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLMultiBlockDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLMultiBlockDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLMultiBlockDataWriterNew
#endif

static const char **PyvtkXMLPMultiBlockDataWriter_Doc();


static PyObject *
PyvtkXMLPMultiBlockDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPMultiBlockDataWriter *op = static_cast<vtkXMLPMultiBlockDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLPMultiBlockDataWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPMultiBlockDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPMultiBlockDataWriter *op = static_cast<vtkXMLPMultiBlockDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPMultiBlockDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPMultiBlockDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPMultiBlockDataWriter *op = static_cast<vtkXMLPMultiBlockDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLPMultiBlockDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPMultiBlockDataWriter::NewInstance());

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
PyvtkXMLPMultiBlockDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLPMultiBlockDataWriter *tempr = vtkXMLPMultiBlockDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPMultiBlockDataWriter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPMultiBlockDataWriter *op = static_cast<vtkXMLPMultiBlockDataWriter *>(vp);

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
      op->vtkXMLPMultiBlockDataWriter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPMultiBlockDataWriter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPMultiBlockDataWriter *op = static_cast<vtkXMLPMultiBlockDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkXMLPMultiBlockDataWriter::GetController());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPMultiBlockDataWriter_SetWriteMetaFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteMetaFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPMultiBlockDataWriter *op = static_cast<vtkXMLPMultiBlockDataWriter *>(vp);

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
      op->vtkXMLPMultiBlockDataWriter::SetWriteMetaFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPMultiBlockDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPMultiBlockDataWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPMultiBlockDataWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPMultiBlockDataWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLPMultiBlockDataWriter\nC++: vtkXMLPMultiBlockDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPMultiBlockDataWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPMultiBlockDataWriter\nC++: vtkXMLPMultiBlockDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkXMLPMultiBlockDataWriter_SetController, METH_VARARGS,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nController used to communicate data type of blocks. By default,\nthe global controller is used. If you want another controller to\nbe used, set it with this. If no controller is set, only the\nlocal blocks will be written to the meta-file.\n"},
  {(char*)"GetController", PyvtkXMLPMultiBlockDataWriter_GetController, METH_VARARGS,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nController used to communicate data type of blocks. By default,\nthe global controller is used. If you want another controller to\nbe used, set it with this. If no controller is set, only the\nlocal blocks will be written to the meta-file.\n"},
  {(char*)"SetWriteMetaFile", PyvtkXMLPMultiBlockDataWriter_SetWriteMetaFile, METH_VARARGS,
   (char*)"V.SetWriteMetaFile(int)\nC++: virtual void SetWriteMetaFile(int flag)\n\nSet whether this instance will write the meta-file. WriteMetaFile\nis set to flag only on process 0 and all other processes have\nWriteMetaFile set to 0 by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPMultiBlockDataWriter_StaticNew()
{
  return vtkXMLPMultiBlockDataWriter::New();
}

PyObject *PyVTKClass_vtkXMLPMultiBlockDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPMultiBlockDataWriter_StaticNew,
    PyvtkXMLPMultiBlockDataWriter_Methods,
    "vtkXMLPMultiBlockDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLPMultiBlockDataWriter_Doc(),
    PyVTKClass_vtkXMLMultiBlockDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPMultiBlockDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPMultiBlockDataWriter - parallel writer for\n\n",
    "Superclass: vtkXMLMultiBlockDataWriter\n\n",
    "vtkXMLPCompositeDataWriter writes (in parallel or serially) the VTK\nXML multi-group, multi-block hierarchical and hierarchical box files.\nXML multi-group data files are meta-files that point to a list of\nserial VTK XML files.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPMultiBlockDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPMultiBlockDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPMultiBlockDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

