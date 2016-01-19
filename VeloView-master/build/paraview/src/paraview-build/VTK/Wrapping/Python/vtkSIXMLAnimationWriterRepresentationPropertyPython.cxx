// python wrapper for vtkSIXMLAnimationWriterRepresentationProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSIXMLAnimationWriterRepresentationProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSIXMLAnimationWriterRepresentationProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSIXMLAnimationWriterRepresentationPropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIInputPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSIInputPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIInputPropertyNew
#endif

static const char **PyvtkSIXMLAnimationWriterRepresentationProperty_Doc();


static PyObject *
PyvtkSIXMLAnimationWriterRepresentationProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIXMLAnimationWriterRepresentationProperty *op = static_cast<vtkSIXMLAnimationWriterRepresentationProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSIXMLAnimationWriterRepresentationProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIXMLAnimationWriterRepresentationProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIXMLAnimationWriterRepresentationProperty *op = static_cast<vtkSIXMLAnimationWriterRepresentationProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIXMLAnimationWriterRepresentationProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSIXMLAnimationWriterRepresentationProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIXMLAnimationWriterRepresentationProperty *op = static_cast<vtkSIXMLAnimationWriterRepresentationProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSIXMLAnimationWriterRepresentationProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIXMLAnimationWriterRepresentationProperty::NewInstance());

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
PyvtkSIXMLAnimationWriterRepresentationProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSIXMLAnimationWriterRepresentationProperty *tempr = vtkSIXMLAnimationWriterRepresentationProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSIXMLAnimationWriterRepresentationProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSIXMLAnimationWriterRepresentationProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSIXMLAnimationWriterRepresentationProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSIXMLAnimationWriterRepresentationProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSIXMLAnimationWriterRepresentationProperty\nC++: vtkSIXMLAnimationWriterRepresentationProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSIXMLAnimationWriterRepresentationProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkSIXMLAnimationWriterRepresentationProperty\nC++: vtkSIXMLAnimationWriterRepresentationProperty *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSIXMLAnimationWriterRepresentationProperty_StaticNew()
{
  return vtkSIXMLAnimationWriterRepresentationProperty::New();
}

PyObject *PyVTKClass_vtkSIXMLAnimationWriterRepresentationPropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSIXMLAnimationWriterRepresentationProperty_StaticNew,
    PyvtkSIXMLAnimationWriterRepresentationProperty_Methods,
    "vtkSIXMLAnimationWriterRepresentationProperty", modulename,
    NULL, NULL,
    PyvtkSIXMLAnimationWriterRepresentationProperty_Doc(),
    PyVTKClass_vtkSIInputPropertyNew(modulename));
  return cls;
}

const char **PyvtkSIXMLAnimationWriterRepresentationProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSIXMLAnimationWriterRepresentationProperty\n\n",
    "Superclass: vtkSIInputProperty\n\n",
    "vtkSIXMLAnimationWriterRepresentationProperty extends\nvtkSIInputProperty to add push-API specific to\nvtkXMLPVAnimationWriter to add representations while assigning them\nunique names consistently across all processes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSIXMLAnimationWriterRepresentationProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSIXMLAnimationWriterRepresentationPropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSIXMLAnimationWriterRepresentationProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

