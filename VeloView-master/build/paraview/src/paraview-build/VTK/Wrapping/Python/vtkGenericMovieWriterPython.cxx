// python wrapper for vtkGenericMovieWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericMovieWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericMovieWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericMovieWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkGenericMovieWriter_Doc();

#ifndef DECLARED_PyvtkGenericMovieWriter_MovieWriterErrorIds_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkGenericMovieWriter_MovieWriterErrorIds_Type;
#define DECLARED_PyvtkGenericMovieWriter_MovieWriterErrorIds_Type
#endif

PyTypeObject PyvtkGenericMovieWriter_MovieWriterErrorIds_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"MovieWriterErrorIds", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkGenericMovieWriter_MovieWriterErrorIds_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGenericMovieWriter_MovieWriterErrorIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkGenericMovieWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericMovieWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericMovieWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericMovieWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericMovieWriter::NewInstance());

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
PyvtkGenericMovieWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericMovieWriter *tempr = vtkGenericMovieWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

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
      op->vtkGenericMovieWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkGenericMovieWriter::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Start();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Write();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->End();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericMovieWriter *op = static_cast<vtkGenericMovieWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetError() :
      op->vtkGenericMovieWriter::GetError());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericMovieWriter_GetStringFromErrorCode(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromErrorCode");

  unsigned long temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = vtkGenericMovieWriter::GetStringFromErrorCode(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericMovieWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericMovieWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericMovieWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericMovieWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericMovieWriter\nC++: vtkGenericMovieWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericMovieWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericMovieWriter\nC++: vtkGenericMovieWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkGenericMovieWriter_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of avi file.\n"},
  {(char*)"GetFileName", PyvtkGenericMovieWriter_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of avi file.\n"},
  {(char*)"Start", PyvtkGenericMovieWriter_Start, METH_VARARGS,
   (char*)"V.Start()\nC++: virtual void Start()\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {(char*)"Write", PyvtkGenericMovieWriter_Write, METH_VARARGS,
   (char*)"V.Write()\nC++: virtual void Write()\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {(char*)"End", PyvtkGenericMovieWriter_End, METH_VARARGS,
   (char*)"V.End()\nC++: virtual void End()\n\nThese methods start writing an Movie file, write a frame to the\nfile and then end the writing process.\n"},
  {(char*)"GetError", PyvtkGenericMovieWriter_GetError, METH_VARARGS,
   (char*)"V.GetError() -> int\nC++: int GetError()\n\nWas there an error on the last write performed?\n"},
  {(char*)"GetStringFromErrorCode", PyvtkGenericMovieWriter_GetStringFromErrorCode, METH_VARARGS | METH_STATIC,
   (char*)"V.GetStringFromErrorCode(int) -> string\nC++: static const char *GetStringFromErrorCode(\n    unsigned long event)\n\nConverts vtkErrorCodes and vtkGenericMovieWriter errors to\nstrings.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGenericMovieWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGenericMovieWriter_Methods,
    "vtkGenericMovieWriter", modulename,
    NULL, NULL,
    PyvtkGenericMovieWriter_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkGenericMovieWriter_MovieWriterErrorIds_Type);
    PyvtkGenericMovieWriter_MovieWriterErrorIds_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkGenericMovieWriter_MovieWriterErrorIds_Type;
    if (o && PyDict_SetItemString(d, (char *)"MovieWriterErrorIds", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 6; c++)
      {
      typedef vtkGenericMovieWriter::MovieWriterErrorIds cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[6] = {
          { "UserError", vtkGenericMovieWriter::UserError },
          { "InitError", vtkGenericMovieWriter::InitError },
          { "NoInputError", vtkGenericMovieWriter::NoInputError },
          { "CanNotCompress", vtkGenericMovieWriter::CanNotCompress },
          { "CanNotFormat", vtkGenericMovieWriter::CanNotFormat },
          { "ChangedResolutionError", vtkGenericMovieWriter::ChangedResolutionError },
        };

      o = PyvtkGenericMovieWriter_MovieWriterErrorIds_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkGenericMovieWriter_Doc()
{
  static const char *docstring[] = {
    "vtkGenericMovieWriter - an abstract movie writer class.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkGenericMovieWriter is the abstract base class for several movie\nwriters. The input type is a vtkImageData. The Start() method will\nopen and create the file, the Write() method will output a frame to\nthe file (i.e. the contents of the vtkImageData), End() will finalize\nand close the file.\n\nSee Also:\n\nvtkAVIWriter vtkMPEG2Writer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericMovieWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericMovieWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericMovieWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

