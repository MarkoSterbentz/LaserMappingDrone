// python wrapper for vtkXMLHyperOctreeReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLHyperOctreeReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLHyperOctreeReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLHyperOctreeReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLDataReaderNew
#endif

static const char **PyvtkXMLHyperOctreeReader_Doc();


static PyObject *
PyvtkXMLHyperOctreeReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeReader *op = static_cast<vtkXMLHyperOctreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLHyperOctreeReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHyperOctreeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeReader *op = static_cast<vtkXMLHyperOctreeReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLHyperOctreeReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHyperOctreeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeReader *op = static_cast<vtkXMLHyperOctreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLHyperOctreeReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLHyperOctreeReader::NewInstance());

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
PyvtkXMLHyperOctreeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLHyperOctreeReader *tempr = vtkXMLHyperOctreeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHyperOctreeReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeReader *op = static_cast<vtkXMLHyperOctreeReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperOctree *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkXMLHyperOctreeReader::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLHyperOctreeReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeReader *op = static_cast<vtkXMLHyperOctreeReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkHyperOctree *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkXMLHyperOctreeReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLHyperOctreeReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLHyperOctreeReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLHyperOctreeReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkXMLHyperOctreeReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLHyperOctreeReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLHyperOctreeReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLHyperOctreeReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLHyperOctreeReader\nC++: vtkXMLHyperOctreeReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLHyperOctreeReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLHyperOctreeReader\nC++: vtkXMLHyperOctreeReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkXMLHyperOctreeReader_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkHyperOctree\nC++: vtkHyperOctree *GetOutput()\nV.GetOutput(int) -> vtkHyperOctree\nC++: vtkHyperOctree *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLHyperOctreeReader_StaticNew()
{
  return vtkXMLHyperOctreeReader::New();
}

PyObject *PyVTKClass_vtkXMLHyperOctreeReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLHyperOctreeReader_StaticNew,
    PyvtkXMLHyperOctreeReader_Methods,
    "vtkXMLHyperOctreeReader", modulename,
    NULL, NULL,
    PyvtkXMLHyperOctreeReader_Doc(),
    PyVTKClass_vtkXMLDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLHyperOctreeReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLHyperOctreeReader - Read VTK XML HyperOctree files.\n\n",
    "Superclass: vtkXMLDataReader\n\n",
    "vtkXMLHyperOctreeReader reads the VTK XML HyperOctree file format. \nOne rectilinear grid file can be read to produce one output. \nStreaming is supported.  The standard extension for this reader's\nfile format is \"vto\".  This reader is also used to read a single\npiece of the parallel file format.\n\nSee Also:\n\nvtkXMLPHyperOctreeReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLHyperOctreeReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLHyperOctreeReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLHyperOctreeReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

