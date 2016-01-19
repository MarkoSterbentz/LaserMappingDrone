// python wrapper for vtkXMLHierarchicalBoxDataFileConverter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLHierarchicalBoxDataFileConverter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLHierarchicalBoxDataFileConverter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLHierarchicalBoxDataFileConverterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkXMLHierarchicalBoxDataFileConverter_Doc();


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataFileConverter *op = static_cast<vtkXMLHierarchicalBoxDataFileConverter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLHierarchicalBoxDataFileConverter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataFileConverter *op = static_cast<vtkXMLHierarchicalBoxDataFileConverter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLHierarchicalBoxDataFileConverter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataFileConverter *op = static_cast<vtkXMLHierarchicalBoxDataFileConverter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLHierarchicalBoxDataFileConverter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLHierarchicalBoxDataFileConverter::NewInstance());

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
PyvtkXMLHierarchicalBoxDataFileConverter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLHierarchicalBoxDataFileConverter *tempr = vtkXMLHierarchicalBoxDataFileConverter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_SetInputFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataFileConverter *op = static_cast<vtkXMLHierarchicalBoxDataFileConverter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputFileName(temp0);
      }
    else
      {
      op->vtkXMLHierarchicalBoxDataFileConverter::SetInputFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_GetInputFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataFileConverter *op = static_cast<vtkXMLHierarchicalBoxDataFileConverter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetInputFileName() :
      op->vtkXMLHierarchicalBoxDataFileConverter::GetInputFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_SetOutputFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataFileConverter *op = static_cast<vtkXMLHierarchicalBoxDataFileConverter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFileName(temp0);
      }
    else
      {
      op->vtkXMLHierarchicalBoxDataFileConverter::SetOutputFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_GetOutputFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataFileConverter *op = static_cast<vtkXMLHierarchicalBoxDataFileConverter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetOutputFileName() :
      op->vtkXMLHierarchicalBoxDataFileConverter::GetOutputFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataFileConverter_Convert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Convert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataFileConverter *op = static_cast<vtkXMLHierarchicalBoxDataFileConverter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->Convert() :
      op->vtkXMLHierarchicalBoxDataFileConverter::Convert());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLHierarchicalBoxDataFileConverter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLHierarchicalBoxDataFileConverter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLHierarchicalBoxDataFileConverter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLHierarchicalBoxDataFileConverter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLHierarchicalBoxDataFileConverter\nC++: vtkXMLHierarchicalBoxDataFileConverter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLHierarchicalBoxDataFileConverter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkXMLHierarchicalBoxDataFileConverter\nC++: vtkXMLHierarchicalBoxDataFileConverter *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetInputFileName", PyvtkXMLHierarchicalBoxDataFileConverter_SetInputFileName, METH_VARARGS,
   (char*)"V.SetInputFileName(string)\nC++: void SetInputFileName(char *)\n\nSet the input filename.\n"},
  {(char*)"GetInputFileName", PyvtkXMLHierarchicalBoxDataFileConverter_GetInputFileName, METH_VARARGS,
   (char*)"V.GetInputFileName() -> string\nC++: char *GetInputFileName()\n\nSet the input filename.\n"},
  {(char*)"SetOutputFileName", PyvtkXMLHierarchicalBoxDataFileConverter_SetOutputFileName, METH_VARARGS,
   (char*)"V.SetOutputFileName(string)\nC++: void SetOutputFileName(char *)\n\nSet the output filename.\n"},
  {(char*)"GetOutputFileName", PyvtkXMLHierarchicalBoxDataFileConverter_GetOutputFileName, METH_VARARGS,
   (char*)"V.GetOutputFileName() -> string\nC++: char *GetOutputFileName()\n\nSet the output filename.\n"},
  {(char*)"Convert", PyvtkXMLHierarchicalBoxDataFileConverter_Convert, METH_VARARGS,
   (char*)"V.Convert() -> bool\nC++: bool Convert()\n\nConverts the input file to new format and writes out the output\nfile.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLHierarchicalBoxDataFileConverter_StaticNew()
{
  return vtkXMLHierarchicalBoxDataFileConverter::New();
}

PyObject *PyVTKClass_vtkXMLHierarchicalBoxDataFileConverterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLHierarchicalBoxDataFileConverter_StaticNew,
    PyvtkXMLHierarchicalBoxDataFileConverter_Methods,
    "vtkXMLHierarchicalBoxDataFileConverter", modulename,
    NULL, NULL,
    PyvtkXMLHierarchicalBoxDataFileConverter_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkXMLHierarchicalBoxDataFileConverter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLHierarchicalBoxDataFileConverter - converts older *.vth, *.vthb\n\n",
    "Superclass: vtkObject\n\n",
    "vtkXMLHierarchicalBoxDataFileConverter is a utility class to convert\nv0.1 and v1.0 of the VTK XML hierarchical file format to the v1.1.\nUsers can then use vtkXMLUniformGridAMRReader to read the dataset\ninto VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLHierarchicalBoxDataFileConverter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLHierarchicalBoxDataFileConverterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLHierarchicalBoxDataFileConverter", o) != 0)
    {
    Py_DECREF(o);
    }

}

