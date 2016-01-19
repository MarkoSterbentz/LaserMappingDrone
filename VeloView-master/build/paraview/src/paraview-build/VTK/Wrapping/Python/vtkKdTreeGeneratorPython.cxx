// python wrapper for vtkKdTreeGenerator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkKdTreeGenerator.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkKdTreeGenerator(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkKdTreeGeneratorNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkKdTreeGenerator_Doc();


static PyObject *
PyvtkKdTreeGenerator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeGenerator *op = static_cast<vtkKdTreeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkKdTreeGenerator::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeGenerator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeGenerator *op = static_cast<vtkKdTreeGenerator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKdTreeGenerator::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeGenerator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeGenerator *op = static_cast<vtkKdTreeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkKdTreeGenerator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKdTreeGenerator::NewInstance());

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
PyvtkKdTreeGenerator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkKdTreeGenerator *tempr = vtkKdTreeGenerator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeGenerator_SetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeGenerator *op = static_cast<vtkKdTreeGenerator *>(vp);

  vtkPKdTree *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPKdTree"))
    {
    if (ap.IsBound())
      {
      op->SetKdTree(temp0);
      }
    else
      {
      op->vtkKdTreeGenerator::SetKdTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeGenerator_GetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeGenerator *op = static_cast<vtkKdTreeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPKdTree *tempr = (ap.IsBound() ?
      op->GetKdTree() :
      op->vtkKdTreeGenerator::GetKdTree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeGenerator_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeGenerator *op = static_cast<vtkKdTreeGenerator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPieces(temp0);
      }
    else
      {
      op->vtkKdTreeGenerator::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeGenerator_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeGenerator *op = static_cast<vtkKdTreeGenerator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkKdTreeGenerator::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeGenerator_BuildTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeGenerator *op = static_cast<vtkKdTreeGenerator *>(vp);

  vtkExtentTranslator *temp0 = NULL;
  int temp1[6];
  const int size1 = 6;
  double temp2[3];
  const int size2 = 3;
  double temp3[4];
  const int size3 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkExtentTranslator") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    bool tempr = (ap.IsBound() ?
      op->BuildTree(temp0, temp1, temp2, temp3) :
      op->vtkKdTreeGenerator::BuildTree(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkKdTreeGenerator_Methods[] = {
  {(char*)"GetClassName", PyvtkKdTreeGenerator_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkKdTreeGenerator_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkKdTreeGenerator_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkKdTreeGenerator\nC++: vtkKdTreeGenerator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkKdTreeGenerator_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkKdTreeGenerator\nC++: vtkKdTreeGenerator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetKdTree", PyvtkKdTreeGenerator_SetKdTree, METH_VARARGS,
   (char*)"V.SetKdTree(vtkPKdTree)\nC++: void SetKdTree(vtkPKdTree *)\n\nGet/Set the kdtree which is updated in BuildTree.\n"},
  {(char*)"GetKdTree", PyvtkKdTreeGenerator_GetKdTree, METH_VARARGS,
   (char*)"V.GetKdTree() -> vtkPKdTree\nC++: vtkPKdTree *GetKdTree()\n\nGet/Set the kdtree which is updated in BuildTree.\n"},
  {(char*)"SetNumberOfPieces", PyvtkKdTreeGenerator_SetNumberOfPieces, METH_VARARGS,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int a)\n\nGet/Set the number of pieces.\n"},
  {(char*)"GetNumberOfPieces", PyvtkKdTreeGenerator_GetNumberOfPieces, METH_VARARGS,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nGet/Set the number of pieces.\n"},
  {(char*)"BuildTree", PyvtkKdTreeGenerator_BuildTree, METH_VARARGS,
   (char*)"V.BuildTree(vtkExtentTranslator, (int, int, int, int, int, int), (\n    float, float, float), (float, float, float, float)) -> bool\nC++: bool BuildTree(vtkExtentTranslator *translator,\n    const int extents[6], const double origin[3],\n    const double spacing[4])\n\nBuilds the KdTree using the partitioning of the data.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkKdTreeGenerator_StaticNew()
{
  return vtkKdTreeGenerator::New();
}

PyObject *PyVTKClass_vtkKdTreeGeneratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkKdTreeGenerator_StaticNew,
    PyvtkKdTreeGenerator_Methods,
    "vtkKdTreeGenerator", modulename,
    NULL, NULL,
    PyvtkKdTreeGenerator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkKdTreeGenerator_Doc()
{
  static const char *docstring[] = {
    "vtkKdTreeGenerator - creates a vtkPKdTree using the partitioning\n\n",
    "Superclass: vtkObject\n\n",
    "vtkKdTreeGenerator is used to generate a KdTree using the\npartitioning information garnered from a vtkExtentTranslator (or\nsubclass). Since we need spatial bounds for the KdTree, we assume\nthat structured data corresponding to the vtkExtentTranslator is an\nImageData with the provided spacing and origin. The algorithm used\ncan be summarized as under:\n\\li Inputs: * Extent Translator, * Number of Pie",
    "ces\n\\li Determine the bounds for every piece/region using the extent\n    translator.\n\\li Given a set of pieces (number of pieces > 1), we iteratively\n    determine\n    the plane along which the the pieces can be split into two\n    non-intersecting non-empty groups.\n\\li If number of pieces in a set of regions = 1, then we create a\n    leaf node\n    representing that region.\n\\li If number of pieces ",
    "> 1, a new non-leaf node is creates with\n    children\n    as the subtree generated by repeating the same process on the\n    two non-intersecting, non-empty groups of pieces.\n\n\n vtkKdTreeGenerator also needs to determine the assignment of regions\nto\n the processors. Since vtkPKdTree assigns Ids to the leaf nodes in\ninorder,\n we can determine the assignment by assigning temporary ids to all\n leaf no",
    "des indication the piece number they represent and simply\n traversing the tree in inorder, and recording only the leaf\n IDs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkKdTreeGenerator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkKdTreeGeneratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkKdTreeGenerator", o) != 0)
    {
    Py_DECREF(o);
    }

}

