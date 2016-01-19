// python wrapper for vtkFileSequenceParser
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkFileSequenceParser.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkFileSequenceParser(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkFileSequenceParserNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkFileSequenceParser_Doc();


static PyObject *
PyvtkFileSequenceParser_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSequenceParser *op = static_cast<vtkFileSequenceParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkFileSequenceParser::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSequenceParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSequenceParser *op = static_cast<vtkFileSequenceParser *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFileSequenceParser::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSequenceParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSequenceParser *op = static_cast<vtkFileSequenceParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkFileSequenceParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFileSequenceParser::NewInstance());

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
PyvtkFileSequenceParser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkFileSequenceParser *tempr = vtkFileSequenceParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSequenceParser_ParseFileSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParseFileSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSequenceParser *op = static_cast<vtkFileSequenceParser *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    bool tempr = (ap.IsBound() ?
      op->ParseFileSequence(temp0) :
      op->vtkFileSequenceParser::ParseFileSequence(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSequenceParser_GetSequenceName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSequenceName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSequenceParser *op = static_cast<vtkFileSequenceParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetSequenceName() :
      op->vtkFileSequenceParser::GetSequenceName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFileSequenceParser_GetSequenceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSequenceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileSequenceParser *op = static_cast<vtkFileSequenceParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSequenceIndex() :
      op->vtkFileSequenceParser::GetSequenceIndex());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFileSequenceParser_Methods[] = {
  {(char*)"GetClassName", PyvtkFileSequenceParser_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFileSequenceParser_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFileSequenceParser_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkFileSequenceParser\nC++: vtkFileSequenceParser *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFileSequenceParser_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFileSequenceParser\nC++: vtkFileSequenceParser *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ParseFileSequence", PyvtkFileSequenceParser_ParseFileSequence, METH_VARARGS,
   (char*)"V.ParseFileSequence(string) -> bool\nC++: bool ParseFileSequence(char *file)\n\nExtract base file name sequence from the file. Returns true if a\nsequence is detected and sets SequenceName and SequenceIndex.\n"},
  {(char*)"GetSequenceName", PyvtkFileSequenceParser_GetSequenceName, METH_VARARGS,
   (char*)"V.GetSequenceName() -> string\nC++: char *GetSequenceName()\n\n"},
  {(char*)"GetSequenceIndex", PyvtkFileSequenceParser_GetSequenceIndex, METH_VARARGS,
   (char*)"V.GetSequenceIndex() -> int\nC++: int GetSequenceIndex()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFileSequenceParser_StaticNew()
{
  return vtkFileSequenceParser::New();
}

PyObject *PyVTKClass_vtkFileSequenceParserNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFileSequenceParser_StaticNew,
    PyvtkFileSequenceParser_Methods,
    "vtkFileSequenceParser", modulename,
    NULL, NULL,
    PyvtkFileSequenceParser_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkFileSequenceParser_Doc()
{
  static const char *docstring[] = {
    "vtkFileSequenceParser - Parses out the base file name of a file\n\n",
    "Superclass: vtkObject\n\n",
    "Given a file name (without path). I will extract the base portion of\nthe file name that is common to all the files in the sequence. It\nwill also provide the current sequence index of the provided file\nname. by several vtkPVUpdateSuppressor objects.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFileSequenceParser(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFileSequenceParserNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFileSequenceParser", o) != 0)
    {
    Py_DECREF(o);
    }

}

