// python wrapper for vtkAnnotationLayers
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAnnotationLayers.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAnnotationLayers(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAnnotationLayersNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkAnnotationLayers_Doc();


static PyObject *
PyvtkAnnotationLayers_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAnnotationLayers::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnnotationLayers::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAnnotationLayers *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnnotationLayers::NewInstance());

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
PyvtkAnnotationLayers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAnnotationLayers *tempr = vtkAnnotationLayers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_SetCurrentAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  vtkAnnotation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotation"))
    {
    if (ap.IsBound())
      {
      op->SetCurrentAnnotation(temp0);
      }
    else
      {
      op->vtkAnnotationLayers::SetCurrentAnnotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_GetCurrentAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAnnotation *tempr = (ap.IsBound() ?
      op->GetCurrentAnnotation() :
      op->vtkAnnotationLayers::GetCurrentAnnotation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_SetCurrentSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

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
      op->vtkAnnotationLayers::SetCurrentSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_GetCurrentSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetCurrentSelection() :
      op->vtkAnnotationLayers::GetCurrentSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_GetNumberOfAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfAnnotations() :
      op->vtkAnnotationLayers::GetNumberOfAnnotations());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_GetAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkAnnotation *tempr = (ap.IsBound() ?
      op->GetAnnotation(temp0) :
      op->vtkAnnotationLayers::GetAnnotation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_AddAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  vtkAnnotation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotation"))
    {
    if (ap.IsBound())
      {
      op->AddAnnotation(temp0);
      }
    else
      {
      op->vtkAnnotationLayers::AddAnnotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_RemoveAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  vtkAnnotation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotation"))
    {
    if (ap.IsBound())
      {
      op->RemoveAnnotation(temp0);
      }
    else
      {
      op->vtkAnnotationLayers::RemoveAnnotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkAnnotationLayers::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkAnnotationLayers::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkAnnotationLayers::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotationLayers_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkAnnotationLayers *tempr = vtkAnnotationLayers::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAnnotationLayers_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkAnnotationLayers *tempr = vtkAnnotationLayers::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAnnotationLayers_GetData_Methods[] = {
  {NULL, PyvtkAnnotationLayers_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkAnnotationLayers_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAnnotationLayers_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAnnotationLayers_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkAnnotationLayers_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkAnnotationLayers_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLayers *op = static_cast<vtkAnnotationLayers *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAnnotationLayers::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAnnotationLayers_Methods[] = {
  {(char*)"GetClassName", PyvtkAnnotationLayers_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAnnotationLayers_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAnnotationLayers_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAnnotationLayers\nC++: vtkAnnotationLayers *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAnnotationLayers_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAnnotationLayers\nC++: vtkAnnotationLayers *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCurrentAnnotation", PyvtkAnnotationLayers_SetCurrentAnnotation, METH_VARARGS,
   (char*)"V.SetCurrentAnnotation(vtkAnnotation)\nC++: virtual void SetCurrentAnnotation(vtkAnnotation *ann)\n\nThe current annotation associated with this annotation link.\n"},
  {(char*)"GetCurrentAnnotation", PyvtkAnnotationLayers_GetCurrentAnnotation, METH_VARARGS,
   (char*)"V.GetCurrentAnnotation() -> vtkAnnotation\nC++: vtkAnnotation *GetCurrentAnnotation()\n\nThe current annotation associated with this annotation link.\n"},
  {(char*)"SetCurrentSelection", PyvtkAnnotationLayers_SetCurrentSelection, METH_VARARGS,
   (char*)"V.SetCurrentSelection(vtkSelection)\nC++: virtual void SetCurrentSelection(vtkSelection *sel)\n\nThe current selection associated with this annotation link. This\nis simply the selection contained in the current annotation.\n"},
  {(char*)"GetCurrentSelection", PyvtkAnnotationLayers_GetCurrentSelection, METH_VARARGS,
   (char*)"V.GetCurrentSelection() -> vtkSelection\nC++: virtual vtkSelection *GetCurrentSelection()\n\nThe current selection associated with this annotation link. This\nis simply the selection contained in the current annotation.\n"},
  {(char*)"GetNumberOfAnnotations", PyvtkAnnotationLayers_GetNumberOfAnnotations, METH_VARARGS,
   (char*)"V.GetNumberOfAnnotations() -> int\nC++: unsigned int GetNumberOfAnnotations()\n\nThe number of annotations in a specific layer.\n"},
  {(char*)"GetAnnotation", PyvtkAnnotationLayers_GetAnnotation, METH_VARARGS,
   (char*)"V.GetAnnotation(int) -> vtkAnnotation\nC++: vtkAnnotation *GetAnnotation(unsigned int idx)\n\nRetrieve an annotation from a layer.\n"},
  {(char*)"AddAnnotation", PyvtkAnnotationLayers_AddAnnotation, METH_VARARGS,
   (char*)"V.AddAnnotation(vtkAnnotation)\nC++: void AddAnnotation(vtkAnnotation *ann)\n\nAdd an annotation to a layer.\n"},
  {(char*)"RemoveAnnotation", PyvtkAnnotationLayers_RemoveAnnotation, METH_VARARGS,
   (char*)"V.RemoveAnnotation(vtkAnnotation)\nC++: void RemoveAnnotation(vtkAnnotation *ann)\n\nRemove an annotation from a layer.\n"},
  {(char*)"Initialize", PyvtkAnnotationLayers_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nInitialize the data structure to an empty state.\n"},
  {(char*)"ShallowCopy", PyvtkAnnotationLayers_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *other)\n\nCopy data from another data object into this one which references\nthe same member annotations.\n"},
  {(char*)"DeepCopy", PyvtkAnnotationLayers_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *other)\n\nCopy data from another data object into this one, performing a\ndeep copy of member annotations.\n"},
  {(char*)"GetData", PyvtkAnnotationLayers_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkAnnotationLayers\nC++: static vtkAnnotationLayers *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkAnnotationLayers\nC++: static vtkAnnotationLayers *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve a vtkAnnotationLayers stored inside an information\nobject.\n"},
  {(char*)"GetMTime", PyvtkAnnotationLayers_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nThe modified time for this object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAnnotationLayers_StaticNew()
{
  return vtkAnnotationLayers::New();
}

PyObject *PyVTKClass_vtkAnnotationLayersNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAnnotationLayers_StaticNew,
    PyvtkAnnotationLayers_Methods,
    "vtkAnnotationLayers", modulename,
    NULL, NULL,
    PyvtkAnnotationLayers_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkAnnotationLayers_Doc()
{
  static const char *docstring[] = {
    "vtkAnnotationLayers - Stores a ordered collection of annotation sets\n\n",
    "Superclass: vtkDataObject\n\n",
    "vtkAnnotationLayers stores a vector of annotation layers. Each layer\nmay contain any number of vtkAnnotation objects. The ordering of the\nlayers introduces a prioritization of annotations. Annotations in\nhigher layers may obscure annotations in lower layers.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAnnotationLayers(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAnnotationLayersNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAnnotationLayers", o) != 0)
    {
    Py_DECREF(o);
    }

}

