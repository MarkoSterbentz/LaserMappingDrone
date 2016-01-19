// python wrapper for vtkCommandOptionsXMLParser
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCommandOptionsXMLParser.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCommandOptionsXMLParser(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCommandOptionsXMLParserNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLParserNew
extern "C" { PyObject *PyVTKClass_vtkXMLParserNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLParserNew
#endif

static const char **PyvtkCommandOptionsXMLParser_Doc();


static PyObject *
PyvtkCommandOptionsXMLParser_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptionsXMLParser *op = static_cast<vtkCommandOptionsXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCommandOptionsXMLParser::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommandOptionsXMLParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptionsXMLParser *op = static_cast<vtkCommandOptionsXMLParser *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCommandOptionsXMLParser::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommandOptionsXMLParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptionsXMLParser *op = static_cast<vtkCommandOptionsXMLParser *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCommandOptionsXMLParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCommandOptionsXMLParser::NewInstance());

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
PyvtkCommandOptionsXMLParser_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCommandOptionsXMLParser *tempr = vtkCommandOptionsXMLParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommandOptionsXMLParser_AddBooleanArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBooleanArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptionsXMLParser *op = static_cast<vtkCommandOptionsXMLParser *>(vp);

  char *temp0 = NULL;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->AddBooleanArgument(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCommandOptionsXMLParser::AddBooleanArgument(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkCommandOptionsXMLParser_AddArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptionsXMLParser *op = static_cast<vtkCommandOptionsXMLParser *>(vp);

  char *temp0 = NULL;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->AddArgument(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCommandOptionsXMLParser::AddArgument(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkCommandOptionsXMLParser_SetPVOptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPVOptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptionsXMLParser *op = static_cast<vtkCommandOptionsXMLParser *>(vp);

  vtkCommandOptions *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommandOptions"))
    {
    if (ap.IsBound())
      {
      op->SetPVOptions(temp0);
      }
    else
      {
      op->vtkCommandOptionsXMLParser::SetPVOptions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCommandOptionsXMLParser_Methods[] = {
  {(char*)"GetClassName", PyvtkCommandOptionsXMLParser_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCommandOptionsXMLParser_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCommandOptionsXMLParser_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCommandOptionsXMLParser\nC++: vtkCommandOptionsXMLParser *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCommandOptionsXMLParser_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCommandOptionsXMLParser\nC++: vtkCommandOptionsXMLParser *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddBooleanArgument", PyvtkCommandOptionsXMLParser_AddBooleanArgument, METH_VARARGS,
   (char*)"V.AddBooleanArgument(string, [int, ...], int)\nC++: void AddBooleanArgument(const char *longarg, int *var,\n    int type=0)\n\nAdd arguments to the xml parser.  These should be the long\narguments from the vtkCommandOptions class of the form\n--foo, and pass in the variable that needs to be set with the\n    value.\n"},
  {(char*)"AddArgument", PyvtkCommandOptionsXMLParser_AddArgument, METH_VARARGS,
   (char*)"V.AddArgument(string, [int, ...], int)\nC++: void AddArgument(const char *longarg, int *var, int type=0)\n\nAdd arguments to the xml parser.  These should be the long\narguments from the vtkCommandOptions class of the form\n--foo, and pass in the variable that needs to be set with the\n    value.\n"},
  {(char*)"SetPVOptions", PyvtkCommandOptionsXMLParser_SetPVOptions, METH_VARARGS,
   (char*)"V.SetPVOptions(vtkCommandOptions)\nC++: void SetPVOptions(vtkCommandOptions *o)\n\nAdd arguments to the xml parser.  These should be the long\narguments from the vtkCommandOptions class of the form\n--foo, and pass in the variable that needs to be set with the\n    value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCommandOptionsXMLParser_StaticNew()
{
  return vtkCommandOptionsXMLParser::New();
}

PyObject *PyVTKClass_vtkCommandOptionsXMLParserNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCommandOptionsXMLParser_StaticNew,
    PyvtkCommandOptionsXMLParser_Methods,
    "vtkCommandOptionsXMLParser", modulename,
    NULL, NULL,
    PyvtkCommandOptionsXMLParser_Doc(),
    PyVTKClass_vtkXMLParserNew(modulename));
  return cls;
}

const char **PyvtkCommandOptionsXMLParser_Doc()
{
  static const char *docstring[] = {
    "vtkCommandOptionsXMLParser - ParaView options storage\n\n",
    "Superclass: vtkXMLParser\n\n",
    "An object of this class represents a storage for ParaView options\n\nThese options can be retrieved during run-time, set using\nconfiguration file or using Command Line Arguments.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCommandOptionsXMLParser(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCommandOptionsXMLParserNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCommandOptionsXMLParser", o) != 0)
    {
    Py_DECREF(o);
    }

}

