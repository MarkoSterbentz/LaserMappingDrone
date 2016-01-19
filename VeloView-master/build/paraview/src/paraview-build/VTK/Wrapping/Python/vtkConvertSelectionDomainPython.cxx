// python wrapper for vtkConvertSelectionDomain
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkConvertSelectionDomain.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkConvertSelectionDomain(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkConvertSelectionDomainNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkConvertSelectionDomain_Doc();


static PyObject *
PyvtkConvertSelectionDomain_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelectionDomain *op = static_cast<vtkConvertSelectionDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkConvertSelectionDomain::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelectionDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelectionDomain *op = static_cast<vtkConvertSelectionDomain *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConvertSelectionDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkConvertSelectionDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelectionDomain *op = static_cast<vtkConvertSelectionDomain *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkConvertSelectionDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConvertSelectionDomain::NewInstance());

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
PyvtkConvertSelectionDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkConvertSelectionDomain *tempr = vtkConvertSelectionDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkConvertSelectionDomain_Methods[] = {
  {(char*)"GetClassName", PyvtkConvertSelectionDomain_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkConvertSelectionDomain_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkConvertSelectionDomain_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkConvertSelectionDomain\nC++: vtkConvertSelectionDomain *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkConvertSelectionDomain_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkConvertSelectionDomain\nC++: vtkConvertSelectionDomain *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkConvertSelectionDomain_StaticNew()
{
  return vtkConvertSelectionDomain::New();
}

PyObject *PyVTKClass_vtkConvertSelectionDomainNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkConvertSelectionDomain_StaticNew,
    PyvtkConvertSelectionDomain_Methods,
    "vtkConvertSelectionDomain", modulename,
    NULL, NULL,
    PyvtkConvertSelectionDomain_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkConvertSelectionDomain_Doc()
{
  static const char *docstring[] = {
    "vtkConvertSelectionDomain - Convert a selection from one domain to\nanother\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "vtkConvertSelectionDomain converts a selection from one domain to\nanother using known domain mappings. The domain mappings are\ndescribed by a vtkMultiBlockDataSet containing one or more vtkTables.\n\nThe first input port is for the input selection (or collection of\nannotations in a vtkAnnotationLayers object), while the second port\nis for the multi-block of mappings, and the third port is for the\nda",
    "ta that is being selected on.\n\nIf the second or third port is not set, this filter will pass the\nselection/annotation to the output unchanged.\n\nThe second output is the selection associated with the \"current\nannotation\" normally representing the current interactive selection.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkConvertSelectionDomain(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkConvertSelectionDomainNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkConvertSelectionDomain", o) != 0)
    {
    Py_DECREF(o);
    }

}

