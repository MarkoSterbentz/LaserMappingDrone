// python wrapper for vtkSMDimensionsDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSMDimensionsDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSMDimensionsDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSMDimensionsDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSMIntRangeDomainNew
extern "C" { PyObject *PyVTKClass_vtkSMIntRangeDomainNew(const char *); }
#define DECLARED_PyVTKClass_vtkSMIntRangeDomainNew
#endif

static const char **PyvtkSMDimensionsDomain_Doc();


static PyObject *
PyvtkSMDimensionsDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDimensionsDomain *op = static_cast<vtkSMDimensionsDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSMDimensionsDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDimensionsDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDimensionsDomain *op = static_cast<vtkSMDimensionsDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDimensionsDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDimensionsDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDimensionsDomain *op = static_cast<vtkSMDimensionsDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSMDimensionsDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDimensionsDomain::NewInstance());

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
PyvtkSMDimensionsDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSMDimensionsDomain *tempr = vtkSMDimensionsDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSMDimensionsDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDimensionsDomain *op = static_cast<vtkSMDimensionsDomain *>(vp);

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
      op->vtkSMDimensionsDomain::Update(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSMDimensionsDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkSMDimensionsDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSMDimensionsDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSMDimensionsDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSMDimensionsDomain\nC++: vtkSMDimensionsDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSMDimensionsDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSMDimensionsDomain\nC++: vtkSMDimensionsDomain *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkSMDimensionsDomain_Update, METH_VARARGS,
   (char*)"V.Update(vtkSMProperty)\nC++: virtual void Update(vtkSMProperty *)\n\nUpdate the domain using the \"unchecked\" values (if available) for\nall required properties.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSMDimensionsDomain_StaticNew()
{
  return vtkSMDimensionsDomain::New();
}

PyObject *PyVTKClass_vtkSMDimensionsDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSMDimensionsDomain_StaticNew,
    PyvtkSMDimensionsDomain_Methods,
    "vtkSMDimensionsDomain", modulename,
    NULL, NULL,
    PyvtkSMDimensionsDomain_Doc(),
    PyVTKClass_vtkSMIntRangeDomainNew(modulename));
  return cls;
}

const char **PyvtkSMDimensionsDomain_Doc()
{
  static const char *docstring[] = {
    "vtkSMDimensionsDomain - int range domain based on the data dimensions.\n\n",
    "Superclass: vtkSMIntRangeDomain\n\n",
    "vtkSMDimensionsDomain is a subclass of vtkSMIntRangeDomain. It relies\non two required properties: \"Input\", \"Direction\". \"Input\" is\ngenerally an vtkSMInputProperty which provides the information about\nthe data extents. \"Direction\" is an option required property which\nhelps determine the direction (VTK_XY_PLANE, VTK_YZ_PLANE or\nVTK_XZ_PLANE). If \"Direction\" is not provided then the property must\nbe ",
    "a 3 element property while when Direction is provided the property\nmust be a 1 element property.\n\nSupported Required-Property functions:\n\\li Input : points to a property that provides the data producer.\n\\li Direction: points to a property that provides the value for the\n                  selected direction.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSMDimensionsDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSMDimensionsDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSMDimensionsDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

