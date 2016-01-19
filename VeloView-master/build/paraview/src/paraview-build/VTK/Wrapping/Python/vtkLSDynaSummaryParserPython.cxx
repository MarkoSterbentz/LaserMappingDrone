// python wrapper for vtkLSDynaSummaryParser
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkLSDynaSummaryParser.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkLSDynaSummaryParser(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkLSDynaSummaryParserNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLParserNew
extern "C" { PyObject *PyVTKClass_vtkXMLParserNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLParserNew
#endif

static const char **PyvtkLSDynaSummaryParser_Doc();


static PyObject *
PyvtkLSDynaSummaryParser_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaSummaryParser *op = static_cast<vtkLSDynaSummaryParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkLSDynaSummaryParser::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaSummaryParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaSummaryParser *op = static_cast<vtkLSDynaSummaryParser *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLSDynaSummaryParser::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLSDynaSummaryParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLSDynaSummaryParser *op = static_cast<vtkLSDynaSummaryParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLSDynaSummaryParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLSDynaSummaryParser::NewInstance());

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
PyvtkLSDynaSummaryParser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkLSDynaSummaryParser *tempr = vtkLSDynaSummaryParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLSDynaSummaryParser_Methods[] = {
  {(char*)"GetClassName", PyvtkLSDynaSummaryParser_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLSDynaSummaryParser_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLSDynaSummaryParser_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkLSDynaSummaryParser\nC++: vtkLSDynaSummaryParser *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLSDynaSummaryParser_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLSDynaSummaryParser\nC++: vtkLSDynaSummaryParser *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLSDynaSummaryParser_StaticNew()
{
  return vtkLSDynaSummaryParser::New();
}

PyObject *PyVTKClass_vtkLSDynaSummaryParserNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLSDynaSummaryParser_StaticNew,
    PyvtkLSDynaSummaryParser_Methods,
    "vtkLSDynaSummaryParser", modulename,
    NULL, NULL,
    PyvtkLSDynaSummaryParser_Doc(),
    PyVTKClass_vtkXMLParserNew(modulename));
  return cls;
}

const char **PyvtkLSDynaSummaryParser_Doc()
{
  static const char *docstring[] = {
    "vtkLSDynaSummaryParser\n\n",
    "Superclass: vtkXMLParser\n\n",
    "This is a helper class used by vtkLSDynaReader to read XML files.\n\nSee Also:\n\nvtkLSDynaReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLSDynaSummaryParser(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLSDynaSummaryParserNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLSDynaSummaryParser", o) != 0)
    {
    Py_DECREF(o);
    }

}

