// python wrapper for vtkXMLParser
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLParser.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLParser(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLParserNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkXMLParser_Doc();


static PyObject *
PyvtkXMLParser_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLParser::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLParser::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLParser::NewInstance());

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
PyvtkXMLParser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLParser *tempr = vtkXMLParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLParser_TellG(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TellG");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    long long tempr = (ap.IsBound() ?
      op->TellG() :
      op->vtkXMLParser::TellG());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLParser_SeekG(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SeekG");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  long long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SeekG(temp0);
      }
    else
      {
      op->vtkXMLParser::SeekG(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLParser_Parse_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Parse() :
      op->vtkXMLParser::Parse());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLParser_Parse_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->Parse(temp0) :
      op->vtkXMLParser::Parse(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLParser_Parse_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  char *temp0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->Parse(temp0, temp1) :
      op->vtkXMLParser::Parse(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLParser_Parse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLParser_Parse_s1(self, args);
    case 1:
      return PyvtkXMLParser_Parse_s2(self, args);
    case 2:
      return PyvtkXMLParser_Parse_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Parse");
  return NULL;
}



static PyObject *
PyvtkXMLParser_InitializeParser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeParser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->InitializeParser() :
      op->vtkXMLParser::InitializeParser());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLParser_ParseChunk(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParseChunk");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  char *temp0 = NULL;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->ParseChunk(temp0, temp1) :
      op->vtkXMLParser::ParseChunk(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLParser_CleanupParser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanupParser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->CleanupParser() :
      op->vtkXMLParser::CleanupParser());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLParser_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

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
      op->vtkXMLParser::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLParser_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkXMLParser::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLParser_SetIgnoreCharacterData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreCharacterData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIgnoreCharacterData(temp0);
      }
    else
      {
      op->vtkXMLParser::SetIgnoreCharacterData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLParser_GetIgnoreCharacterData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreCharacterData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetIgnoreCharacterData() :
      op->vtkXMLParser::GetIgnoreCharacterData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLParser_SetEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEncoding(temp0);
      }
    else
      {
      op->vtkXMLParser::SetEncoding(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLParser_GetEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLParser *op = static_cast<vtkXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetEncoding() :
      op->vtkXMLParser::GetEncoding());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLParser_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLParser_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLParser_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLParser_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLParser\nC++: vtkXMLParser *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLParser_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLParser\nC++: vtkXMLParser *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"TellG", PyvtkXMLParser_TellG, METH_VARARGS,
   (char*)"V.TellG() -> int\nC++: vtkTypeInt64 TellG()\n\nUsed by subclasses and their supporting classes.  These methods\nwrap around the tellg and seekg methods of the input stream to\nwork-around stream bugs on various platforms.\n"},
  {(char*)"SeekG", PyvtkXMLParser_SeekG, METH_VARARGS,
   (char*)"V.SeekG(int)\nC++: void SeekG(vtkTypeInt64 position)\n\nUsed by subclasses and their supporting classes.  These methods\nwrap around the tellg and seekg methods of the input stream to\nwork-around stream bugs on various platforms.\n"},
  {(char*)"Parse", PyvtkXMLParser_Parse, METH_VARARGS,
   (char*)"V.Parse() -> int\nC++: virtual int Parse()\nV.Parse(string) -> int\nC++: virtual int Parse(const char *inputString)\nV.Parse(string, int) -> int\nC++: virtual int Parse(const char *inputString,\n    unsigned int length)\n\nParse the XML input.\n"},
  {(char*)"InitializeParser", PyvtkXMLParser_InitializeParser, METH_VARARGS,
   (char*)"V.InitializeParser() -> int\nC++: virtual int InitializeParser()\n\nWhen parsing fragments of XML or streaming XML, use the following\nthree methods.  InitializeParser method initialize parser but\ndoes not perform any actual parsing.  ParseChunk parses framgent\nof XML. This has to match to what was already parsed.\nCleanupParser finishes parsing. If there were errors,\nCleanupParser will report them.\n"},
  {(char*)"ParseChunk", PyvtkXMLParser_ParseChunk, METH_VARARGS,
   (char*)"V.ParseChunk(string, int) -> int\nC++: virtual int ParseChunk(const char *inputString,\n    unsigned int length)\n\nWhen parsing fragments of XML or streaming XML, use the following\nthree methods.  InitializeParser method initialize parser but\ndoes not perform any actual parsing.  ParseChunk parses framgent\nof XML. This has to match to what was already parsed.\nCleanupParser finishes parsing. If there were errors,\nCleanupParser will report them.\n"},
  {(char*)"CleanupParser", PyvtkXMLParser_CleanupParser, METH_VARARGS,
   (char*)"V.CleanupParser() -> int\nC++: virtual int CleanupParser()\n\nWhen parsing fragments of XML or streaming XML, use the following\nthree methods.  InitializeParser method initialize parser but\ndoes not perform any actual parsing.  ParseChunk parses framgent\nof XML. This has to match to what was already parsed.\nCleanupParser finishes parsing. If there were errors,\nCleanupParser will report them.\n"},
  {(char*)"SetFileName", PyvtkXMLParser_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet and get file name.\n"},
  {(char*)"GetFileName", PyvtkXMLParser_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet and get file name.\n"},
  {(char*)"SetIgnoreCharacterData", PyvtkXMLParser_SetIgnoreCharacterData, METH_VARARGS,
   (char*)"V.SetIgnoreCharacterData(int)\nC++: void SetIgnoreCharacterData(int a)\n\nIf this is off (the default), CharacterDataHandler will be called\nto process text within XML Elements. If this is on, the text will\nbe ignored.\n"},
  {(char*)"GetIgnoreCharacterData", PyvtkXMLParser_GetIgnoreCharacterData, METH_VARARGS,
   (char*)"V.GetIgnoreCharacterData() -> int\nC++: int GetIgnoreCharacterData()\n\nIf this is off (the default), CharacterDataHandler will be called\nto process text within XML Elements. If this is on, the text will\nbe ignored.\n"},
  {(char*)"SetEncoding", PyvtkXMLParser_SetEncoding, METH_VARARGS,
   (char*)"V.SetEncoding(string)\nC++: void SetEncoding(char *)\n\nSet and get the encoding the parser should expect (NULL defaults\nto Expat's own default encoder, i.e UTF-8). This should be set\nbefore parsing (i.e. a call to Parse()) or even initializing the\nparser (i.e. a call to InitializeParser())\n"},
  {(char*)"GetEncoding", PyvtkXMLParser_GetEncoding, METH_VARARGS,
   (char*)"V.GetEncoding() -> string\nC++: char *GetEncoding()\n\nSet and get the encoding the parser should expect (NULL defaults\nto Expat's own default encoder, i.e UTF-8). This should be set\nbefore parsing (i.e. a call to Parse()) or even initializing the\nparser (i.e. a call to InitializeParser())\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLParser_StaticNew()
{
  return vtkXMLParser::New();
}

PyObject *PyVTKClass_vtkXMLParserNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLParser_StaticNew,
    PyvtkXMLParser_Methods,
    "vtkXMLParser", modulename,
    NULL, NULL,
    PyvtkXMLParser_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkXMLParser_Doc()
{
  static const char *docstring[] = {
    "vtkXMLParser - Parse XML to handle element tags and attributes.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkXMLParser reads a stream and parses XML element tags and\ncorresponding attributes.  Each element begin tag and its attributes\nare sent to the StartElement method.  Each element end tag is sent to\nthe EndElement method.  Subclasses should replace these methods to\nactually use the tags.\n\nToDo: Add commands for parsing in Tcl.:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLParser(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLParserNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLParser", o) != 0)
    {
    Py_DECREF(o);
    }

}

