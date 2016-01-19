// python wrapper for vtkKdTreeManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkKdTreeManager.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkKdTreeManager(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkKdTreeManagerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkKdTreeManager_Doc();


static PyObject *
PyvtkKdTreeManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkKdTreeManager::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKdTreeManager::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkKdTreeManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKdTreeManager::NewInstance());

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
PyvtkKdTreeManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkKdTreeManager *tempr = vtkKdTreeManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeManager_AddDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->AddDataObject(temp0);
      }
    else
      {
      op->vtkKdTreeManager::AddDataObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeManager_RemoveAllDataObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllDataObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllDataObjects();
      }
    else
      {
      op->vtkKdTreeManager::RemoveAllDataObjects();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeManager_SetStructuredDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStructuredDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  vtkExtentTranslator *temp0 = NULL;
  int temp1[6];
  const int size1 = 6;
  double temp2[3];
  const int size2 = 3;
  double temp3[3];
  const int size3 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkExtentTranslator") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    if (ap.IsBound())
      {
      op->SetStructuredDataInformation(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkKdTreeManager::SetStructuredDataInformation(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeManager_SetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

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
      op->vtkKdTreeManager::SetKdTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeManager_GetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPKdTree *tempr = (ap.IsBound() ?
      op->GetKdTree() :
      op->vtkKdTreeManager::GetKdTree());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeManager_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

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
      op->vtkKdTreeManager::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeManager_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkKdTreeManager::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreeManager_GenerateKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeManager *op = static_cast<vtkKdTreeManager *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateKdTree();
      }
    else
      {
      op->vtkKdTreeManager::GenerateKdTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkKdTreeManager_Methods[] = {
  {(char*)"GetClassName", PyvtkKdTreeManager_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkKdTreeManager_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkKdTreeManager_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkKdTreeManager\nC++: vtkKdTreeManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkKdTreeManager_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkKdTreeManager\nC++: vtkKdTreeManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddDataObject", PyvtkKdTreeManager_AddDataObject, METH_VARARGS,
   (char*)"V.AddDataObject(vtkDataObject)\nC++: void AddDataObject(vtkDataObject *)\n\nAdd data objects.\n"},
  {(char*)"RemoveAllDataObjects", PyvtkKdTreeManager_RemoveAllDataObjects, METH_VARARGS,
   (char*)"V.RemoveAllDataObjects()\nC++: void RemoveAllDataObjects()\n\nAdd data objects.\n"},
  {(char*)"SetStructuredDataInformation", PyvtkKdTreeManager_SetStructuredDataInformation, METH_VARARGS,
   (char*)"V.SetStructuredDataInformation(vtkExtentTranslator, (int, int,\n    int, int, int, int), (float, float, float), (float, float,\n    float))\nC++: void SetStructuredDataInformation(\n    vtkExtentTranslator *translator, const int whole_extent[6],\n    const double origin[3], const double spacing[3])\n\nSet the optional extent translator to use to get aid in building\nthe KdTree.\n"},
  {(char*)"SetKdTree", PyvtkKdTreeManager_SetKdTree, METH_VARARGS,
   (char*)"V.SetKdTree(vtkPKdTree)\nC++: void SetKdTree(vtkPKdTree *)\n\nGet/Set the KdTree managed by this manager.\n"},
  {(char*)"GetKdTree", PyvtkKdTreeManager_GetKdTree, METH_VARARGS,
   (char*)"V.GetKdTree() -> vtkPKdTree\nC++: vtkPKdTree *GetKdTree()\n\nGet/Set the KdTree managed by this manager.\n"},
  {(char*)"SetNumberOfPieces", PyvtkKdTreeManager_SetNumberOfPieces, METH_VARARGS,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int a)\n\nGet/Set the number of pieces. Passed to the vtkKdTreeGenerator\nwhen SetStructuredDataInformation() is used with non-empty\ntranslator.\n"},
  {(char*)"GetNumberOfPieces", PyvtkKdTreeManager_GetNumberOfPieces, METH_VARARGS,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nGet/Set the number of pieces. Passed to the vtkKdTreeGenerator\nwhen SetStructuredDataInformation() is used with non-empty\ntranslator.\n"},
  {(char*)"GenerateKdTree", PyvtkKdTreeManager_GenerateKdTree, METH_VARARGS,
   (char*)"V.GenerateKdTree()\nC++: void GenerateKdTree()\n\nRebuilds the KdTree.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkKdTreeManager_StaticNew()
{
  return vtkKdTreeManager::New();
}

PyObject *PyVTKClass_vtkKdTreeManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkKdTreeManager_StaticNew,
    PyvtkKdTreeManager_Methods,
    "vtkKdTreeManager", modulename,
    NULL, NULL,
    PyvtkKdTreeManager_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkKdTreeManager_Doc()
{
  static const char *docstring[] = {
    "vtkKdTreeManager - class used to generate KdTree from unstructured or\n\n",
    "Superclass: vtkObject\n\n",
    "ParaView needs to build a KdTree when ordered compositing. The KdTree\nis either built using the all data in the pipeline when on structure\ndata is present, or using the partitions provided by the structure\ndata's extent translator. This class manages this logic. When\nstructure data's extent translator is to be used, it simply uses\nvtkKdTreeGenerator. Otherwise, it lets the vtkPKdTree build the\nopt",
    "imal partitioning for the data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkKdTreeManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkKdTreeManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkKdTreeManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

