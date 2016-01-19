// python wrapper for vtkXMLHyperOctreeWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLHyperOctreeWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLHyperOctreeWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLHyperOctreeWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLWriterNew
#endif

static const char **PyvtkXMLHyperOctreeWriter_Doc();


static PyObject *
PyvtkXMLHyperOctreeWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeWriter *op = static_cast<vtkXMLHyperOctreeWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLHyperOctreeWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHyperOctreeWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeWriter *op = static_cast<vtkXMLHyperOctreeWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLHyperOctreeWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHyperOctreeWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeWriter *op = static_cast<vtkXMLHyperOctreeWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLHyperOctreeWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLHyperOctreeWriter::NewInstance());

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
PyvtkXMLHyperOctreeWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLHyperOctreeWriter *tempr = vtkXMLHyperOctreeWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHyperOctreeWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeWriter *op = static_cast<vtkXMLHyperOctreeWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkHyperOctree *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkXMLHyperOctreeWriter::GetInput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHyperOctreeWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeWriter *op = static_cast<vtkXMLHyperOctreeWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLHyperOctreeWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLHyperOctreeWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLHyperOctreeWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLHyperOctreeWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLHyperOctreeWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLHyperOctreeWriter\nC++: vtkXMLHyperOctreeWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLHyperOctreeWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLHyperOctreeWriter\nC++: vtkXMLHyperOctreeWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLHyperOctreeWriter_GetInput, METH_VARARGS,
   (char*)"V.GetInput() -> vtkHyperOctree\nC++: vtkHyperOctree *GetInput()\n\nGet/Set the writer's input.\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLHyperOctreeWriter_GetDefaultFileExtension, METH_VARARGS,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLHyperOctreeWriter_StaticNew()
{
  return vtkXMLHyperOctreeWriter::New();
}

PyObject *PyVTKClass_vtkXMLHyperOctreeWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLHyperOctreeWriter_StaticNew,
    PyvtkXMLHyperOctreeWriter_Methods,
    "vtkXMLHyperOctreeWriter", modulename,
    NULL, NULL,
    PyvtkXMLHyperOctreeWriter_Doc(),
    PyVTKClass_vtkXMLWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLHyperOctreeWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLHyperOctreeWriter - Write VTK XML HyperOctree files.\n\n",
    "Superclass: vtkXMLWriter\n\n",
    "vtkXMLHyperOctreeWriter writes the VTK XML HyperOctree file format. \nOne HyperOctree input can be written into one file in any number of\nstreamed pieces.  The standard extension for this writer's file\nformat is \"vto\".  This writer is also used to write a single piece of\nthe parallel file format.\n\nSee Also:\n\nvtkXMLPHyperOctreeWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLHyperOctreeWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLHyperOctreeWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLHyperOctreeWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

