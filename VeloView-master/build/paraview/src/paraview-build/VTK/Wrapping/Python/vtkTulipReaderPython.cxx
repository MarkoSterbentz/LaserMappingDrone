// python wrapper for vtkTulipReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkTulipReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTulipReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTulipReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkUndirectedGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUndirectedGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUndirectedGraphAlgorithmNew
#endif

static const char **PyvtkTulipReader_Doc();


static PyObject *
PyvtkTulipReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTulipReader *op = static_cast<vtkTulipReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTulipReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTulipReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTulipReader *op = static_cast<vtkTulipReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTulipReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTulipReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTulipReader *op = static_cast<vtkTulipReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTulipReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTulipReader::NewInstance());

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
PyvtkTulipReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTulipReader *tempr = vtkTulipReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTulipReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTulipReader *op = static_cast<vtkTulipReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkTulipReader::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTulipReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTulipReader *op = static_cast<vtkTulipReader *>(vp);

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
      op->vtkTulipReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTulipReader_Methods[] = {
  {(char*)"GetClassName", PyvtkTulipReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTulipReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTulipReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTulipReader\nC++: vtkTulipReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTulipReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTulipReader\nC++: vtkTulipReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkTulipReader_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nThe Tulip file name.\n"},
  {(char*)"SetFileName", PyvtkTulipReader_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nThe Tulip file name.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTulipReader_StaticNew()
{
  return vtkTulipReader::New();
}

PyObject *PyVTKClass_vtkTulipReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTulipReader_StaticNew,
    PyvtkTulipReader_Methods,
    "vtkTulipReader", modulename,
    NULL, NULL,
    PyvtkTulipReader_Doc(),
    PyVTKClass_vtkUndirectedGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTulipReader_Doc()
{
  static const char *docstring[] = {
    "vtkTulipReader - Reads tulip graph files.\n\n",
    "Superclass: vtkUndirectedGraphAlgorithm\n\n",
    "vtkTulipReader reads in files in the Tulip format. Definition of the\nTulip file format can be found online at:\nhttp://tulip.labri.fr/tlpformat.php An example is the following \n(nodes 0 1 2 3 4 5 6 7 8 9) (edge 0 0 1) (edge 1 1 2) (edge 2 2 3)\n(edge 3 3 4) (edge 4 4 5) (edge 5 5 6) (edge 6 6 7) (edge 7 7 8)\n(edge 8 8 9) (edge 9 9 0) (edge 10 0 5) (edge 11 2 7) (edge 12 4 9) \nwhere \"nodes\" defines a",
    "ll the nodes ids in the graph, and \"edge\" is a\ntriple of edge id, source vertex id, and target vertex id. The graph\nis read in as undirected graph. Pedigree ids are set on the output\ngraph's vertices and edges that match the node and edge ids defined\nin the Tulip file.\n\nClusters are output as a vtkAnnotationLayers on output port 1. Each\ncluster name is used to create an annotation layer, and each ",
    "cluster\nwith that name is added to the layer as a vtkSelectionNode. Nesting\nhierarchies are treated as if they were flat. See\nvtkGraphAnnotationLayersFilter for an example of how the clusters can\nbe represented visually.\n\nNote:\n\nOnly string, int, and double properties are supported. Display\ninformation is discarded.\n\nThanks:\n\nThanks to Colin Myers, University of Leeds for extending this\nimplementa",
    "tion.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTulipReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTulipReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTulipReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

