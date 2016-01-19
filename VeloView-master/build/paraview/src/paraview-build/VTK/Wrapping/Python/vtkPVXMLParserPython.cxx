// python wrapper for vtkPVXMLParser
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVXMLParser.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVXMLParser(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVXMLParserNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLParserNew
extern "C" { PyObject *PyVTKClass_vtkXMLParserNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLParserNew
#endif

static const char **PyvtkPVXMLParser_Doc();


static PyObject *
PyvtkPVXMLParser_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVXMLParser::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVXMLParser::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVXMLParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVXMLParser::NewInstance());

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
PyvtkPVXMLParser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVXMLParser *tempr = vtkPVXMLParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLParser_GetRootElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetRootElement() :
      op->vtkPVXMLParser::GetRootElement());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLParser_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

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
      op->vtkPVXMLParser::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLParser_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkPVXMLParser::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLParser_GetSuppressErrorMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuppressErrorMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSuppressErrorMessages() :
      op->vtkPVXMLParser::GetSuppressErrorMessages());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLParser_SetSuppressErrorMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuppressErrorMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSuppressErrorMessages(temp0);
      }
    else
      {
      op->vtkPVXMLParser::SetSuppressErrorMessages(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLParser_SuppressErrorMessagesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SuppressErrorMessagesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SuppressErrorMessagesOn();
      }
    else
      {
      op->vtkPVXMLParser::SuppressErrorMessagesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVXMLParser_SuppressErrorMessagesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SuppressErrorMessagesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVXMLParser *op = static_cast<vtkPVXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SuppressErrorMessagesOff();
      }
    else
      {
      op->vtkPVXMLParser::SuppressErrorMessagesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVXMLParser_Methods[] = {
  {(char*)"GetClassName", PyvtkPVXMLParser_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVXMLParser_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVXMLParser_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVXMLParser\nC++: vtkPVXMLParser *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVXMLParser_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVXMLParser\nC++: vtkPVXMLParser *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetRootElement", PyvtkPVXMLParser_GetRootElement, METH_VARARGS,
   (char*)"V.GetRootElement() -> vtkPVXMLElement\nC++: vtkPVXMLElement *GetRootElement()\n\nGet the root element from the XML document.\n"},
  {(char*)"SetFileName", PyvtkPVXMLParser_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the file from which to read the configuration.\n"},
  {(char*)"GetFileName", PyvtkPVXMLParser_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the file from which to read the configuration.\n"},
  {(char*)"GetSuppressErrorMessages", PyvtkPVXMLParser_GetSuppressErrorMessages, METH_VARARGS,
   (char*)"V.GetSuppressErrorMessages() -> int\nC++: int GetSuppressErrorMessages()\n\nIf on, then the Parse method will NOT report an error using\nvtkErrorMacro. Rather, it will just return false.  This feature\nis useful when simply checking to see if a file is a valid XML\nfile or there is otherwise a way to recover from the failed\nparse.  This flag is off by default.\n"},
  {(char*)"SetSuppressErrorMessages", PyvtkPVXMLParser_SetSuppressErrorMessages, METH_VARARGS,
   (char*)"V.SetSuppressErrorMessages(int)\nC++: void SetSuppressErrorMessages(int a)\n\nIf on, then the Parse method will NOT report an error using\nvtkErrorMacro. Rather, it will just return false.  This feature\nis useful when simply checking to see if a file is a valid XML\nfile or there is otherwise a way to recover from the failed\nparse.  This flag is off by default.\n"},
  {(char*)"SuppressErrorMessagesOn", PyvtkPVXMLParser_SuppressErrorMessagesOn, METH_VARARGS,
   (char*)"V.SuppressErrorMessagesOn()\nC++: void SuppressErrorMessagesOn()\n\nIf on, then the Parse method will NOT report an error using\nvtkErrorMacro. Rather, it will just return false.  This feature\nis useful when simply checking to see if a file is a valid XML\nfile or there is otherwise a way to recover from the failed\nparse.  This flag is off by default.\n"},
  {(char*)"SuppressErrorMessagesOff", PyvtkPVXMLParser_SuppressErrorMessagesOff, METH_VARARGS,
   (char*)"V.SuppressErrorMessagesOff()\nC++: void SuppressErrorMessagesOff()\n\nIf on, then the Parse method will NOT report an error using\nvtkErrorMacro. Rather, it will just return false.  This feature\nis useful when simply checking to see if a file is a valid XML\nfile or there is otherwise a way to recover from the failed\nparse.  This flag is off by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVXMLParser_StaticNew()
{
  return vtkPVXMLParser::New();
}

PyObject *PyVTKClass_vtkPVXMLParserNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVXMLParser_StaticNew,
    PyvtkPVXMLParser_Methods,
    "vtkPVXMLParser", modulename,
    NULL, NULL,
    PyvtkPVXMLParser_Doc(),
    PyVTKClass_vtkXMLParserNew(modulename));
  return cls;
}

const char **PyvtkPVXMLParser_Doc()
{
  static const char *docstring[] = {
    "vtkPVXMLParser parses ParaView XML configuration files.\n\n",
    "Superclass: vtkXMLParser\n\n",
    "This is a subclass of vtkXMLParser that constructs a representation\nof parsed XML using vtkPVXMLElement.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVXMLParser(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVXMLParserNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVXMLParser", o) != 0)
    {
    Py_DECREF(o);
    }

}

