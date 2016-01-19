// python wrapper for vtkAnnotation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAnnotation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAnnotation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAnnotationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkAnnotation_Doc();


static PyObject *
PyvtkAnnotation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAnnotation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnnotation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAnnotation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnnotation::NewInstance());

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
PyvtkAnnotation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAnnotation *tempr = vtkAnnotation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_GetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetSelection() :
      op->vtkAnnotation::GetSelection());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  vtkSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
    {
    if (ap.IsBound())
      {
      op->SetSelection(temp0);
      }
    else
      {
      op->vtkAnnotation::SetSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    vtkAnnotation *tempr = vtkAnnotation::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAnnotation_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    vtkAnnotation *tempr = vtkAnnotation::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAnnotation_GetData_Methods[] = {
  {NULL, PyvtkAnnotation_GetData_s1, METH_VARARGS | METH_STATIC,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkAnnotation_GetData_s2, METH_VARARGS | METH_STATIC,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAnnotation_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAnnotation_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkAnnotation_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkAnnotation_LABEL(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LABEL");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationStringKey *tempr = vtkAnnotation::LABEL();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_COLOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COLOR");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkAnnotation::COLOR();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_OPACITY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "OPACITY");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleKey *tempr = vtkAnnotation::OPACITY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_ICON_INDEX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ICON_INDEX");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkAnnotation::ICON_INDEX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_ENABLE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ENABLE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkAnnotation::ENABLE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_HIDE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HIDE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkAnnotation::HIDE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDataObjectKey *tempr = vtkAnnotation::DATA();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkAnnotation::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

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
      op->vtkAnnotation::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

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
      op->vtkAnnotation::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnnotation_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotation *op = static_cast<vtkAnnotation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAnnotation::GetMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAnnotation_Methods[] = {
  {(char*)"GetClassName", PyvtkAnnotation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAnnotation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAnnotation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAnnotation\nC++: vtkAnnotation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAnnotation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAnnotation\nC++: vtkAnnotation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSelection", PyvtkAnnotation_GetSelection, METH_VARARGS,
   (char*)"V.GetSelection() -> vtkSelection\nC++: vtkSelection *GetSelection()\n\nThe selection to which this set of annotations will apply.\n"},
  {(char*)"SetSelection", PyvtkAnnotation_SetSelection, METH_VARARGS,
   (char*)"V.SetSelection(vtkSelection)\nC++: virtual void SetSelection(vtkSelection *selection)\n\nThe selection to which this set of annotations will apply.\n"},
  {(char*)"GetData", PyvtkAnnotation_GetData, METH_VARARGS | METH_STATIC,
   (char*)"V.GetData(vtkInformation) -> vtkAnnotation\nC++: static vtkAnnotation *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkAnnotation\nC++: static vtkAnnotation *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve a vtkAnnotation stored inside an information object.\n"},
  {(char*)"LABEL", PyvtkAnnotation_LABEL, METH_VARARGS | METH_STATIC,
   (char*)"V.LABEL() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *LABEL()\n\nThe label for this annotation.\n"},
  {(char*)"COLOR", PyvtkAnnotation_COLOR, METH_VARARGS | METH_STATIC,
   (char*)"V.COLOR() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *COLOR()\n\nThe color for this annotation. This is stored as an RGB triple\nwith values between 0 and 1.\n"},
  {(char*)"OPACITY", PyvtkAnnotation_OPACITY, METH_VARARGS | METH_STATIC,
   (char*)"V.OPACITY() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *OPACITY()\n\nThe color for this annotation. This is stored as a value between\n0 and 1.\n"},
  {(char*)"ICON_INDEX", PyvtkAnnotation_ICON_INDEX, METH_VARARGS | METH_STATIC,
   (char*)"V.ICON_INDEX() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ICON_INDEX()\n\nAn icon index for this annotation.\n"},
  {(char*)"ENABLE", PyvtkAnnotation_ENABLE, METH_VARARGS | METH_STATIC,
   (char*)"V.ENABLE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ENABLE()\n\nWhether or not this annotation is enabled. A value of 1 means\nenabled, 0 disabled.\n"},
  {(char*)"HIDE", PyvtkAnnotation_HIDE, METH_VARARGS | METH_STATIC,
   (char*)"V.HIDE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *HIDE()\n\nWhether or not this annotation is visible.\n"},
  {(char*)"DATA", PyvtkAnnotation_DATA, METH_VARARGS | METH_STATIC,
   (char*)"V.DATA() -> vtkInformationDataObjectKey\nC++: static vtkInformationDataObjectKey *DATA()\n\nAssociate a vtkDataObject with this annotation\n"},
  {(char*)"Initialize", PyvtkAnnotation_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nInitialize the annotation to an empty state.\n"},
  {(char*)"ShallowCopy", PyvtkAnnotation_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *other)\n\nMake this annotation have the same properties and have the same\nselection of another annotation.\n"},
  {(char*)"DeepCopy", PyvtkAnnotation_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *other)\n\nMake this annotation have the same properties and have a copy of\nthe selection of another annotation.\n"},
  {(char*)"GetMTime", PyvtkAnnotation_GetMTime, METH_VARARGS,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nGet the modified time of this object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAnnotation_StaticNew()
{
  return vtkAnnotation::New();
}

PyObject *PyVTKClass_vtkAnnotationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAnnotation_StaticNew,
    PyvtkAnnotation_Methods,
    "vtkAnnotation", modulename,
    NULL, NULL,
    PyvtkAnnotation_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkAnnotation_Doc()
{
  static const char *docstring[] = {
    "vtkAnnotation - Stores a collection of annotation artifacts.\n\n",
    "Superclass: vtkDataObject\n\n",
    "vtkAnnotation is a collection of annotation properties along with an\nassociated selection indicating the portion of data the annotation\nrefers to.\n\nThanks:\n\nTimothy M. Shead (tshead@sandia.gov) at Sandia National Laboratories\ncontributed code to this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAnnotation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAnnotationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAnnotation", o) != 0)
    {
    Py_DECREF(o);
    }

}

