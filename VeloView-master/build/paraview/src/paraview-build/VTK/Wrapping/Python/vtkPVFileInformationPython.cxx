// python wrapper for vtkPVFileInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVFileInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVFileInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVFileInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVFileInformation_Doc();

#ifndef DECLARED_PyvtkPVFileInformation_FileTypes_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkPVFileInformation_FileTypes_Type;
#define DECLARED_PyvtkPVFileInformation_FileTypes_Type
#endif

PyTypeObject PyvtkPVFileInformation_FileTypes_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"FileTypes", // tp_name
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

PyObject *PyvtkPVFileInformation_FileTypes_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVFileInformation_FileTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkPVFileInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVFileInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVFileInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVFileInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVFileInformation::NewInstance());

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
PyvtkPVFileInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVFileInformation *tempr = vtkPVFileInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->CopyFromObject(temp0);
      }
    else
      {
      op->vtkPVFileInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyToStream(temp0);
      }
    else
      {
      op->vtkPVFileInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyFromStream(temp0);
      }
    else
      {
      op->vtkPVFileInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformation_IsDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsDirectory");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = vtkPVFileInformation::IsDirectory(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPVFileInformation::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformation_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkPVFileInformation::GetName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformation_GetFullPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFullPath() :
      op->vtkPVFileInformation::GetFullPath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformation_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetType() :
      op->vtkPVFileInformation::GetType());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformation_GetHidden(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHidden");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetHidden() :
      op->vtkPVFileInformation::GetHidden());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVFileInformation_GetContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetContents() :
      op->vtkPVFileInformation::GetContents());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVFileInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVFileInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVFileInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVFileInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVFileInformation\nC++: vtkPVFileInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVFileInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVFileInformation\nC++: vtkPVFileInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyFromObject", PyvtkPVFileInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *object)\n\nTransfer information about a single object into this object. The\nobject must be a vtkPVFileInformationHelper.\n"},
  {(char*)"CopyToStream", PyvtkPVFileInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVFileInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"IsDirectory", PyvtkPVFileInformation_IsDirectory, METH_VARARGS | METH_STATIC,
   (char*)"V.IsDirectory(int) -> bool\nC++: static bool IsDirectory(int t)\n\nHelper that returns whether a FileType is a directory (DIRECTORY,\nDRIVE, NETWORK_ROOT, etc...) Or in other words, a type that we\ncan do a DirectoryListing on.\n"},
  {(char*)"Initialize", PyvtkPVFileInformation_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nInitializes the information object.\n"},
  {(char*)"GetName", PyvtkPVFileInformation_GetName, METH_VARARGS,
   (char*)"V.GetName() -> string\nC++: char *GetName()\n\nGet the name of the file/directory whose information is\nrepresented by this object.\n"},
  {(char*)"GetFullPath", PyvtkPVFileInformation_GetFullPath, METH_VARARGS,
   (char*)"V.GetFullPath() -> string\nC++: char *GetFullPath()\n\nGet the full path of the file/directory whose information is\nrepresented by this object.\n"},
  {(char*)"GetType", PyvtkPVFileInformation_GetType, METH_VARARGS,
   (char*)"V.GetType() -> int\nC++: int GetType()\n\nGet the type of this file object.\n"},
  {(char*)"GetHidden", PyvtkPVFileInformation_GetHidden, METH_VARARGS,
   (char*)"V.GetHidden() -> bool\nC++: bool GetHidden()\n\nGet the state of the hidden flag for the file/directory.\n"},
  {(char*)"GetContents", PyvtkPVFileInformation_GetContents, METH_VARARGS,
   (char*)"V.GetContents() -> vtkCollection\nC++: vtkCollection *GetContents()\n\nGet the Contents for this directory. Returns a collection with\nvtkPVFileInformation objects for the contents of this directory\nif Type = DIRECTORY or the contents of this file group if Type\n==FILE_GROUP.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVFileInformation_StaticNew()
{
  return vtkPVFileInformation::New();
}

PyObject *PyVTKClass_vtkPVFileInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVFileInformation_StaticNew,
    PyvtkPVFileInformation_Methods,
    "vtkPVFileInformation", modulename,
    NULL, NULL,
    PyvtkPVFileInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkPVFileInformation_FileTypes_Type);
    PyvtkPVFileInformation_FileTypes_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkPVFileInformation_FileTypes_Type;
    if (o && PyDict_SetItemString(d, (char *)"FileTypes", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 11; c++)
      {
      typedef vtkPVFileInformation::FileTypes cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[11] = {
          { "INVALID", vtkPVFileInformation::INVALID },
          { "SINGLE_FILE", vtkPVFileInformation::SINGLE_FILE },
          { "SINGLE_FILE_LINK", vtkPVFileInformation::SINGLE_FILE_LINK },
          { "DIRECTORY", vtkPVFileInformation::DIRECTORY },
          { "DIRECTORY_LINK", vtkPVFileInformation::DIRECTORY_LINK },
          { "FILE_GROUP", vtkPVFileInformation::FILE_GROUP },
          { "DRIVE", vtkPVFileInformation::DRIVE },
          { "NETWORK_ROOT", vtkPVFileInformation::NETWORK_ROOT },
          { "NETWORK_DOMAIN", vtkPVFileInformation::NETWORK_DOMAIN },
          { "NETWORK_SERVER", vtkPVFileInformation::NETWORK_SERVER },
          { "NETWORK_SHARE", vtkPVFileInformation::NETWORK_SHARE },
        };

      o = PyvtkPVFileInformation_FileTypes_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkPVFileInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVFileInformation - Information object that can\n\n",
    "Superclass: vtkPVInformation\n\n",
    "vtkPVFileInformation can be used to collect information about file or\ndirectory. vtkPVFileInformation can collect information from a\nvtkPVFileInformationHelper object alone.\n\nSee Also:\n\nvtkPVFileInformationHelper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVFileInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVFileInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVFileInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

