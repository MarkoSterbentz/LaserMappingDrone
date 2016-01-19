// python wrapper for vtkSpatialRepresentationFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSpatialRepresentationFilter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSpatialRepresentationFilter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSpatialRepresentationFilterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkSpatialRepresentationFilter_Doc();


static PyObject *
PyvtkSpatialRepresentationFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSpatialRepresentationFilter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpatialRepresentationFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSpatialRepresentationFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpatialRepresentationFilter::NewInstance());

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
PyvtkSpatialRepresentationFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSpatialRepresentationFilter *tempr = vtkSpatialRepresentationFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_SetSpatialRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpatialRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  vtkLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLocator"))
    {
    if (ap.IsBound())
      {
      op->SetSpatialRepresentation(temp0);
      }
    else
      {
      op->vtkSpatialRepresentationFilter::SetSpatialRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_GetSpatialRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpatialRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkLocator *tempr = (ap.IsBound() ?
      op->GetSpatialRepresentation() :
      op->vtkSpatialRepresentationFilter::GetSpatialRepresentation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_GetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLevel() :
      op->vtkSpatialRepresentationFilter::GetMaximumLevel());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_AddLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddLevel(temp0);
      }
    else
      {
      op->vtkSpatialRepresentationFilter::AddLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_ResetLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetLevels();
      }
    else
      {
      op->vtkSpatialRepresentationFilter::ResetLevels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_SetGenerateLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateLeaves(temp0);
      }
    else
      {
      op->vtkSpatialRepresentationFilter::SetGenerateLeaves(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_GetGenerateLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateLeaves() :
      op->vtkSpatialRepresentationFilter::GetGenerateLeaves());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_GenerateLeavesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateLeavesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateLeavesOn();
      }
    else
      {
      op->vtkSpatialRepresentationFilter::GenerateLeavesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSpatialRepresentationFilter_GenerateLeavesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateLeavesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpatialRepresentationFilter *op = static_cast<vtkSpatialRepresentationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateLeavesOff();
      }
    else
      {
      op->vtkSpatialRepresentationFilter::GenerateLeavesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSpatialRepresentationFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkSpatialRepresentationFilter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSpatialRepresentationFilter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSpatialRepresentationFilter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSpatialRepresentationFilter\nC++: vtkSpatialRepresentationFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSpatialRepresentationFilter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSpatialRepresentationFilter\nC++: vtkSpatialRepresentationFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSpatialRepresentation", PyvtkSpatialRepresentationFilter_SetSpatialRepresentation, METH_VARARGS,
   (char*)"V.SetSpatialRepresentation(vtkLocator)\nC++: virtual void SetSpatialRepresentation(vtkLocator *)\n\nSet/Get the locator that will be used to generate the\nrepresentation.\n"},
  {(char*)"GetSpatialRepresentation", PyvtkSpatialRepresentationFilter_GetSpatialRepresentation, METH_VARARGS,
   (char*)"V.GetSpatialRepresentation() -> vtkLocator\nC++: vtkLocator *GetSpatialRepresentation()\n\nSet/Get the locator that will be used to generate the\nrepresentation.\n"},
  {(char*)"GetMaximumLevel", PyvtkSpatialRepresentationFilter_GetMaximumLevel, METH_VARARGS,
   (char*)"V.GetMaximumLevel() -> int\nC++: int GetMaximumLevel()\n\nGet the maximum level that is available. Populated during\nRequestData().\n"},
  {(char*)"AddLevel", PyvtkSpatialRepresentationFilter_AddLevel, METH_VARARGS,
   (char*)"V.AddLevel(int)\nC++: void AddLevel(int level)\n\nAdd a level to be computed.\n"},
  {(char*)"ResetLevels", PyvtkSpatialRepresentationFilter_ResetLevels, METH_VARARGS,
   (char*)"V.ResetLevels()\nC++: void ResetLevels()\n\nRemove all levels.\n"},
  {(char*)"SetGenerateLeaves", PyvtkSpatialRepresentationFilter_SetGenerateLeaves, METH_VARARGS,
   (char*)"V.SetGenerateLeaves(bool)\nC++: void SetGenerateLeaves(bool a)\n\nTurn on/off the generation of leaf nodes. Off by default.\n"},
  {(char*)"GetGenerateLeaves", PyvtkSpatialRepresentationFilter_GetGenerateLeaves, METH_VARARGS,
   (char*)"V.GetGenerateLeaves() -> bool\nC++: bool GetGenerateLeaves()\n\nTurn on/off the generation of leaf nodes. Off by default.\n"},
  {(char*)"GenerateLeavesOn", PyvtkSpatialRepresentationFilter_GenerateLeavesOn, METH_VARARGS,
   (char*)"V.GenerateLeavesOn()\nC++: void GenerateLeavesOn()\n\nTurn on/off the generation of leaf nodes. Off by default.\n"},
  {(char*)"GenerateLeavesOff", PyvtkSpatialRepresentationFilter_GenerateLeavesOff, METH_VARARGS,
   (char*)"V.GenerateLeavesOff()\nC++: void GenerateLeavesOff()\n\nTurn on/off the generation of leaf nodes. Off by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSpatialRepresentationFilter_StaticNew()
{
  return vtkSpatialRepresentationFilter::New();
}

PyObject *PyVTKClass_vtkSpatialRepresentationFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSpatialRepresentationFilter_StaticNew,
    PyvtkSpatialRepresentationFilter_Methods,
    "vtkSpatialRepresentationFilter", modulename,
    NULL, NULL,
    PyvtkSpatialRepresentationFilter_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSpatialRepresentationFilter_Doc()
{
  static const char *docstring[] = {
    "vtkSpatialRepresentationFilter - generate polygonal model of spatial\nsearch object (i.e., a vtkLocator)\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkSpatialRepresentationFilter generates an polygonal representation\nof a spatial search (vtkLocator) object. The representation varies\ndepending upon the nature of the spatial search object. For example,\nthe representation for vtkOBBTree is a collection of oriented\nbounding boxes. This input to this filter is a dataset of any type,\nand the output is polygonal data. You must also specify the spati",
    "al\nsearch object to use.\n\nGenerally spatial search objects are used for collision detection and\nother geometric operations, but in this filter one or more levels of\nspatial searchers can be generated to form a geometric approximation\nto the input data. This is a form of data simplification, generally\nused to accelerate the rendering process. Or, this filter can be used\nas a debugging/ visualizatio",
    "n aid for spatial search objects.\n\nThis filter can generate one or more  vtkPolyData blocks\ncorresponding to different levels in the spatial search tree. The\nblock ids range from 0 (root level) to MaximumLevel. Note that the\nblock for level \"id\" is not computed unless a AddLevel(id) method is\nissued. Thus, if you desire three levels of output (say 2,4,7), you\nwould have to invoke AddLevel(2), AddL",
    "evel(4), and AddLevel(7). If\nGenerateLeaves is set to true (off by default), all leaf nodes of the\nlocator (which may be at different levels) are computed and stored in\nblock with id MaximumLevel + 1.\n\nSee Also:\n\nvtkLocator vtkPointLocator vtkCellLocator vtkOBBTree\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSpatialRepresentationFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSpatialRepresentationFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSpatialRepresentationFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

