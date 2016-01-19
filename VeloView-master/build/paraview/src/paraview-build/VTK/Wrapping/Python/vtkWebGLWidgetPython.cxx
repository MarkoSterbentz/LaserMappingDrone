// python wrapper for vtkWebGLWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkWebGLWidget.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkWebGLWidget(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkWebGLWidgetNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkWebGLObjectNew
extern "C" { PyObject *PyVTKClass_vtkWebGLObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkWebGLObjectNew
#endif

static const char **PyvtkWebGLWidget_Doc();


static PyObject *
PyvtkWebGLWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkWebGLWidget::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebGLWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkWebGLWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebGLWidget::NewInstance());

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
PyvtkWebGLWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkWebGLWidget *tempr = vtkWebGLWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLWidget_GenerateBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateBinaryData();
      }
    else
      {
      op->vtkWebGLWidget::GenerateBinaryData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLWidget_GetBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryData(temp0) :
      op->vtkWebGLWidget::GetBinaryData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLWidget_GetBinarySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinarySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBinarySize(temp0) :
      op->vtkWebGLWidget::GetBinarySize(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLWidget_GetNumberOfParts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfParts() :
      op->vtkWebGLWidget::GetNumberOfParts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWebGLWidget_GetDataFromColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataFromColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLWidget *op = static_cast<vtkWebGLWidget *>(vp);

  vtkActor2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor2D"))
    {
    if (ap.IsBound())
      {
      op->GetDataFromColorMap(temp0);
      }
    else
      {
      op->vtkWebGLWidget::GetDataFromColorMap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkWebGLWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkWebGLWidget_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWebGLWidget_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWebGLWidget_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkWebGLWidget\nC++: vtkWebGLWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWebGLWidget_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWebGLWidget\nC++: vtkWebGLWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GenerateBinaryData", PyvtkWebGLWidget_GenerateBinaryData, METH_VARARGS,
   (char*)"V.GenerateBinaryData()\nC++: void GenerateBinaryData()\n\n"},
  {(char*)"GetBinaryData", PyvtkWebGLWidget_GetBinaryData, METH_VARARGS,
   (char*)"V.GetBinaryData(int) -> (int, ...)\nC++: unsigned char *GetBinaryData(int part)\n\n"},
  {(char*)"GetBinarySize", PyvtkWebGLWidget_GetBinarySize, METH_VARARGS,
   (char*)"V.GetBinarySize(int) -> int\nC++: int GetBinarySize(int part)\n\n"},
  {(char*)"GetNumberOfParts", PyvtkWebGLWidget_GetNumberOfParts, METH_VARARGS,
   (char*)"V.GetNumberOfParts() -> int\nC++: int GetNumberOfParts()\n\n"},
  {(char*)"GetDataFromColorMap", PyvtkWebGLWidget_GetDataFromColorMap, METH_VARARGS,
   (char*)"V.GetDataFromColorMap(vtkActor2D)\nC++: void GetDataFromColorMap(vtkActor2D *actor)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWebGLWidget_StaticNew()
{
  return vtkWebGLWidget::New();
}

PyObject *PyVTKClass_vtkWebGLWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWebGLWidget_StaticNew,
    PyvtkWebGLWidget_Methods,
    "vtkWebGLWidget", modulename,
    NULL, NULL,
    PyvtkWebGLWidget_Doc(),
    PyVTKClass_vtkWebGLObjectNew(modulename));
  return cls;
}

const char **PyvtkWebGLWidget_Doc()
{
  static const char *docstring[] = {
    "vtkWebGLWidget\n\n",
    "Superclass: vtkWebGLObject\n\n",
    "Widget representation for WebGL.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWebGLWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWebGLWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWebGLWidget", o) != 0)
    {
    Py_DECREF(o);
    }

}

