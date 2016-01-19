// python wrapper for vtkSMCompositeTreeDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMCompositeTreeDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMCompositeTreeDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMCompositeTreeDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMDomainNew
#endif

static const char **PyvtkSMCompositeTreeDomain_Doc();


static PyObject *
PyvtkSMCompositeTreeDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMCompositeTreeDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCompositeTreeDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMCompositeTreeDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCompositeTreeDomain::NewInstance());

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
PyvtkSMCompositeTreeDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMCompositeTreeDomain *tempr = vtkSMCompositeTreeDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    if (ap.IsBound())
      {
      op->Update(temp0);
      }
    else
      {
      op->vtkSMCompositeTreeDomain::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetInformation() :
      op->vtkSMCompositeTreeDomain::GetInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMSourceProxy *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkSMCompositeTreeDomain::GetSource());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_GetSourcePort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourcePort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetSourcePort() :
      op->vtkSMCompositeTreeDomain::GetSourcePort());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_IsInDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
    {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMCompositeTreeDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkSMCompositeTreeDomain::GetMode());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMode(temp0);
      }
    else
      {
      op->vtkSMCompositeTreeDomain::SetMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSMCompositeTreeDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCompositeTreeDomain *op = static_cast<vtkSMCompositeTreeDomain *>(vp);

  vtkSMProperty *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMCompositeTreeDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSMCompositeTreeDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMCompositeTreeDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMCompositeTreeDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMCompositeTreeDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMCompositeTreeDomain\nC++: vtkSMCompositeTreeDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMCompositeTreeDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMCompositeTreeDomain\nC++: vtkSMCompositeTreeDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkSMCompositeTreeDomain_Update, METH_VARARGS,
   (char*)"V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *input)\n\nCalled when the 'required-property' is modified. The property\nmust be a vtkSMInputProperty. This will obtain the composite data\ninformation for the input source and then determine the valid\nrange for the flat-index.\n"},
  {(char*)"GetInformation", PyvtkSMCompositeTreeDomain_GetInformation, METH_VARARGS,
   (char*)"V.GetInformation() -> vtkPVDataInformation\nC++: vtkPVDataInformation *GetInformation()\n\nGet the vtkPVDataInformation which provides the tree structure\nfor the composite dataset.\n"},
  {(char*)"GetSource", PyvtkSMCompositeTreeDomain_GetSource, METH_VARARGS,
   (char*)"V.GetSource() -> vtkSMSourceProxy\nC++: vtkSMSourceProxy *GetSource()\n\nReturns the source proxy whose data information is returned by\nGetInformation().\n"},
  {(char*)"GetSourcePort", PyvtkSMCompositeTreeDomain_GetSourcePort, METH_VARARGS,
   (char*)"V.GetSourcePort() -> int\nC++: int GetSourcePort()\n\nReturns the port for the source proxy from which the data\ninformation is obtained by GetInformation().\n"},
  {(char*)"IsInDomain", PyvtkSMCompositeTreeDomain_IsInDomain, METH_VARARGS,
   (char*)"V.IsInDomain(vtkSMProperty) -> int\nC++: virtual int IsInDomain(vtkSMProperty *property)\n\nIs the (unchecked) value of the property in the domain?\nOverwritten by sub-classes.\n"},
  {(char*)"GetMode", PyvtkSMCompositeTreeDomain_GetMode, METH_VARARGS,
   (char*)"V.GetMode() -> int\nC++: int GetMode()\n\nMode indicates if the property is interested in all nodes, leaves\nonly or non-leaves only. Can be configured in XML using the\n\"mode\" attribute. Values can be \"all\", \"leaves\", \"non-leaves\".\nDefault is all nodes.\n"},
  {(char*)"SetMode", PyvtkSMCompositeTreeDomain_SetMode, METH_VARARGS,
   (char*)"V.SetMode(int)\nC++: void SetMode(int a)\n\nMode indicates if the property is interested in all nodes, leaves\nonly or non-leaves only. Can be configured in XML using the\n\"mode\" attribute. Values can be \"all\", \"leaves\", \"non-leaves\".\nDefault is all nodes.\n"},
  {(char*)"SetDefaultValues", PyvtkSMCompositeTreeDomain_SetDefaultValues, METH_VARARGS,
   (char*)"V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: virtual int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values)\n\nA vtkSMProperty is often defined with a default value in the XML\nitself. However, many times, the default value must be determined\nat run time. To facilitate this, domains can override this method\nto compute and set the default value for the property. Note that\nunlike the compile-time default values, the application must\nexplicitly call this method to initialize the property. Returns 1\nif the domain updated the property.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMCompositeTreeDomain_StaticNew()
{
  return vtkSMCompositeTreeDomain::New();
}

PyObject *PyVTKClass_vtkSMCompositeTreeDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMCompositeTreeDomain_StaticNew,
    PyvtkSMCompositeTreeDomain_Methods,
    "vtkSMCompositeTreeDomain", modulename,
    NULL, NULL,
    PyvtkSMCompositeTreeDomain_Doc(),
    PyVTKClass_vtkSMDomainNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "ALL", vtkSMCompositeTreeDomain::ALL },
          { "LEAVES", vtkSMCompositeTreeDomain::LEAVES },
          { "NON_LEAVES", vtkSMCompositeTreeDomain::NON_LEAVES },
          { "NONE", vtkSMCompositeTreeDomain::NONE },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkSMCompositeTreeDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMCompositeTreeDomain - domain used to restrict an\n\n",
    "Superclass: vtkSMDomain\n\n",
    "vtkSMCompositeTreeDomain can be added to a vtkSMIntVectorProperty.\nThis domain requires a vtkSMInputProperty which is used to provide\nthe input to the filter. This domain obtains data information from\nthe input selected on the required input property and then decides\nthe range for the flat-index. A flat index for a tree is obtained by\nperforming a pre-order traversal of the tree eg. A ( B ( D, E),",
    " C (F,\nG)) becomes: [A,B,D,E,C,F,G], so flat-index of A is 0, while\nflat-index of C is 4.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMCompositeTreeDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMCompositeTreeDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMCompositeTreeDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

