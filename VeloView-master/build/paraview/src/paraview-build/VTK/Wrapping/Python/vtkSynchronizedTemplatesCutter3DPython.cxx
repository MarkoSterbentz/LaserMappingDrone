// python wrapper for vtkSynchronizedTemplatesCutter3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSynchronizedTemplatesCutter3D.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSynchronizedTemplatesCutter3D(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSynchronizedTemplatesCutter3DNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSynchronizedTemplates3DNew
extern "C" { PyObject *PyVTKClass_vtkSynchronizedTemplates3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkSynchronizedTemplates3DNew
#endif

static const char **PyvtkSynchronizedTemplatesCutter3D_Doc();


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSynchronizedTemplatesCutter3D::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSynchronizedTemplatesCutter3D::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSynchronizedTemplatesCutter3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSynchronizedTemplatesCutter3D::NewInstance());

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
PyvtkSynchronizedTemplatesCutter3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSynchronizedTemplatesCutter3D *tempr = vtkSynchronizedTemplatesCutter3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_ThreadedExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreadedExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  vtkImageData *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ThreadedExecute(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSynchronizedTemplatesCutter3D::ThreadedExecute(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_SetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetCutFunction(temp0);
      }
    else
      {
      op->vtkSynchronizedTemplatesCutter3D::SetCutFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_GetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetCutFunction() :
      op->vtkSynchronizedTemplatesCutter3D::GetCutFunction());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPointsPrecision(temp0);
      }
    else
      {
      op->vtkSynchronizedTemplatesCutter3D::SetOutputPointsPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkSynchronizedTemplatesCutter3D::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkSynchronizedTemplatesCutter3D::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplatesCutter3D_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplatesCutter3D *op = static_cast<vtkSynchronizedTemplatesCutter3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkSynchronizedTemplatesCutter3D::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSynchronizedTemplatesCutter3D_Methods[] = {
  {(char*)"GetClassName", PyvtkSynchronizedTemplatesCutter3D_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSynchronizedTemplatesCutter3D_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSynchronizedTemplatesCutter3D_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSynchronizedTemplatesCutter3D\nC++: vtkSynchronizedTemplatesCutter3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSynchronizedTemplatesCutter3D_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSynchronizedTemplatesCutter3D\nC++: vtkSynchronizedTemplatesCutter3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ThreadedExecute", PyvtkSynchronizedTemplatesCutter3D_ThreadedExecute, METH_VARARGS,
   (char*)"V.ThreadedExecute(vtkImageData, vtkInformation, int)\nC++: void ThreadedExecute(vtkImageData *data,\n    vtkInformation *outInfo, int)\n\nNeeded by templated functions.\n"},
  {(char*)"SetCutFunction", PyvtkSynchronizedTemplatesCutter3D_SetCutFunction, METH_VARARGS,
   (char*)"V.SetCutFunction(vtkImplicitFunction)\nC++: virtual void SetCutFunction(vtkImplicitFunction *)\n\n"},
  {(char*)"GetCutFunction", PyvtkSynchronizedTemplatesCutter3D_GetCutFunction, METH_VARARGS,
   (char*)"V.GetCutFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetCutFunction()\n\n"},
  {(char*)"SetOutputPointsPrecision", PyvtkSynchronizedTemplatesCutter3D_SetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.SetOutputPointsPrecision(int)\nC++: void SetOutputPointsPrecision(int)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecisionMinValue", PyvtkSynchronizedTemplatesCutter3D_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecisionMinValue() -> int\nC++: int GetOutputPointsPrecisionMinValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecisionMaxValue", PyvtkSynchronizedTemplatesCutter3D_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecisionMaxValue() -> int\nC++: int GetOutputPointsPrecisionMaxValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {(char*)"GetOutputPointsPrecision", PyvtkSynchronizedTemplatesCutter3D_GetOutputPointsPrecision, METH_VARARGS,
   (char*)"V.GetOutputPointsPrecision() -> int\nC++: int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSynchronizedTemplatesCutter3D_StaticNew()
{
  return vtkSynchronizedTemplatesCutter3D::New();
}

PyObject *PyVTKClass_vtkSynchronizedTemplatesCutter3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSynchronizedTemplatesCutter3D_StaticNew,
    PyvtkSynchronizedTemplatesCutter3D_Methods,
    "vtkSynchronizedTemplatesCutter3D", modulename,
    NULL, NULL,
    PyvtkSynchronizedTemplatesCutter3D_Doc(),
    PyVTKClass_vtkSynchronizedTemplates3DNew(modulename));
  return cls;
}

const char **PyvtkSynchronizedTemplatesCutter3D_Doc()
{
  static const char *docstring[] = {
    "vtkSynchronizedTemplatesCutter3D - generate cut surface from\nstructured points\n\n",
    "Superclass: vtkSynchronizedTemplates3D\n\n",
    "vtkSynchronizedTemplatesCutter3D is an implementation of the\nsynchronized template algorithm. Note that vtkCutFilter will\nautomatically use this class when appropriate.\n\nSee Also:\n\nvtkContourFilter vtkSynchronizedTemplates3D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSynchronizedTemplatesCutter3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSynchronizedTemplatesCutter3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSynchronizedTemplatesCutter3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

