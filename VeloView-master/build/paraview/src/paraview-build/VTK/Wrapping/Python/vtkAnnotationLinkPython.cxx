// python wrapper for vtkAnnotationLink
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAnnotationLink.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAnnotationLink(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAnnotationLinkNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAnnotationLayersAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAnnotationLayersAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAnnotationLayersAlgorithmNew
#endif

static const char **PyvtkAnnotationLink_Doc();


static PyObject *
PyvtkAnnotationLink_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAnnotationLink::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLink_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnnotationLink::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLink_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAnnotationLink *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnnotationLink::NewInstance());

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
PyvtkAnnotationLink_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAnnotationLink *tempr = vtkAnnotationLink::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLink_GetAnnotationLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAnnotationLayers *tempr = (ap.IsBound() ?
      op->GetAnnotationLayers() :
      op->vtkAnnotationLink::GetAnnotationLayers());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLink_SetAnnotationLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  vtkAnnotationLayers *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLayers"))
    {
    if (ap.IsBound())
      {
      op->SetAnnotationLayers(temp0);
      }
    else
      {
      op->vtkAnnotationLink::SetAnnotationLayers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLink_SetCurrentSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  vtkSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
    {
    if (ap.IsBound())
      {
      op->SetCurrentSelection(temp0);
      }
    else
      {
      op->vtkAnnotationLink::SetCurrentSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLink_GetCurrentSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetCurrentSelection() :
      op->vtkAnnotationLink::GetCurrentSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLink_AddDomainMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDomainMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  vtkTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
    {
    if (ap.IsBound())
      {
      op->AddDomainMap(temp0);
      }
    else
      {
      op->vtkAnnotationLink::AddDomainMap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLink_RemoveDomainMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDomainMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  vtkTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
    {
    if (ap.IsBound())
      {
      op->RemoveDomainMap(temp0);
      }
    else
      {
      op->vtkAnnotationLink::RemoveDomainMap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLink_RemoveAllDomainMaps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllDomainMaps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllDomainMaps();
      }
    else
      {
      op->vtkAnnotationLink::RemoveAllDomainMaps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLink_GetNumberOfDomainMaps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDomainMaps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDomainMaps() :
      op->vtkAnnotationLink::GetNumberOfDomainMaps());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLink_GetDomainMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDomainMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetDomainMap(temp0) :
      op->vtkAnnotationLink::GetDomainMap(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLink_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAnnotationLink::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAnnotationLink_Methods[] = {
  {(char*)"GetClassName", PyvtkAnnotationLink_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAnnotationLink_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAnnotationLink_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAnnotationLink\nC++: vtkAnnotationLink *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAnnotationLink_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAnnotationLink\nC++: vtkAnnotationLink *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetAnnotationLayers", PyvtkAnnotationLink_GetAnnotationLayers, METH_VARARGS,
   (char*)"V.GetAnnotationLayers() -> vtkAnnotationLayers\nC++: vtkAnnotationLayers *GetAnnotationLayers()\n\nThe annotations to be shared.\n"},
  {(char*)"SetAnnotationLayers", PyvtkAnnotationLink_SetAnnotationLayers, METH_VARARGS,
   (char*)"V.SetAnnotationLayers(vtkAnnotationLayers)\nC++: virtual void SetAnnotationLayers(vtkAnnotationLayers *layers)\n\nThe annotations to be shared.\n"},
  {(char*)"SetCurrentSelection", PyvtkAnnotationLink_SetCurrentSelection, METH_VARARGS,
   (char*)"V.SetCurrentSelection(vtkSelection)\nC++: virtual void SetCurrentSelection(vtkSelection *sel)\n\nSet or get the current selection in the annotation layers.\n"},
  {(char*)"GetCurrentSelection", PyvtkAnnotationLink_GetCurrentSelection, METH_VARARGS,
   (char*)"V.GetCurrentSelection() -> vtkSelection\nC++: virtual vtkSelection *GetCurrentSelection()\n\nSet or get the current selection in the annotation layers.\n"},
  {(char*)"AddDomainMap", PyvtkAnnotationLink_AddDomainMap, METH_VARARGS,
   (char*)"V.AddDomainMap(vtkTable)\nC++: void AddDomainMap(vtkTable *map)\n\nThe domain mappings.\n"},
  {(char*)"RemoveDomainMap", PyvtkAnnotationLink_RemoveDomainMap, METH_VARARGS,
   (char*)"V.RemoveDomainMap(vtkTable)\nC++: void RemoveDomainMap(vtkTable *map)\n\nThe domain mappings.\n"},
  {(char*)"RemoveAllDomainMaps", PyvtkAnnotationLink_RemoveAllDomainMaps, METH_VARARGS,
   (char*)"V.RemoveAllDomainMaps()\nC++: void RemoveAllDomainMaps()\n\nThe domain mappings.\n"},
  {(char*)"GetNumberOfDomainMaps", PyvtkAnnotationLink_GetNumberOfDomainMaps, METH_VARARGS,
   (char*)"V.GetNumberOfDomainMaps() -> int\nC++: int GetNumberOfDomainMaps()\n\nThe domain mappings.\n"},
  {(char*)"GetDomainMap", PyvtkAnnotationLink_GetDomainMap, METH_VARARGS,
   (char*)"V.GetDomainMap(int) -> vtkTable\nC++: vtkTable *GetDomainMap(int i)\n\nThe domain mappings.\n"},
  {(char*)"GetMTime", PyvtkAnnotationLink_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nGet the mtime of this object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAnnotationLink_StaticNew()
{
  return vtkAnnotationLink::New();
}

PyObject *PyVTKClass_vtkAnnotationLinkNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAnnotationLink_StaticNew,
    PyvtkAnnotationLink_Methods,
    "vtkAnnotationLink", modulename,
    NULL, NULL,
    PyvtkAnnotationLink_Doc(),
    PyVTKClass_vtkAnnotationLayersAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAnnotationLink_Doc()
{
  static const char *docstring[] = {
    "vtkAnnotationLink - An algorithm for linking annotations among objects\n\n",
    "Superclass: vtkAnnotationLayersAlgorithm\n\n",
    "vtkAnnotationLink is a simple source filter which outputs the\nvtkAnnotationLayers object stored internally.  Multiple objects may\nshare the same annotation link filter and connect it to an internal\npipeline so that if one object changes the annotation set, it will be\npulled into all the other objects when their pipelines update.\n\nThe shared vtkAnnotationLayers object (a collection of annotations)\n",
    "is shallow copied to output port 0.\n\nvtkAnnotationLink can also store a set of domain maps. A domain map\nis simply a table associating values between domains. The domain of\neach column is defined by the array name of the column. The domain\nmaps are sent to a multi-block dataset in output port 1.\n\nOutput ports 0 and 1 can be set as input ports 0 and 1 to\nvtkConvertSelectionDomain, which can use the",
    " domain maps to convert\nthe domains of selections in the vtkAnnotationLayers to match a\nparticular data object (set as port 2 on vtkConvertSelectionDomain).\n\nThe shared vtkAnnotationLayers object also stores a \"current\nselection\" normally interpreted as the interactive selection of an\napplication. As a convenience, this selection is sent to output port\n2 so that it can be connected to pipelines re",
    "quiring a vtkSelection.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAnnotationLink(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAnnotationLinkNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAnnotationLink", o) != 0)
    {
    Py_DECREF(o);
    }

}

