// python wrapper for vtkPolyDataPainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPolyDataPainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPolyDataPainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPolyDataPainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPainterNew
extern "C" { PyObject *PyVTKClass_vtkPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPainterNew
#endif

static const char **PyvtkPolyDataPainter_Doc();


static PyObject *
PyvtkPolyDataPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPainter *op = static_cast<vtkPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPolyDataPainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPainter *op = static_cast<vtkPolyDataPainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataPainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPainter *op = static_cast<vtkPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyDataPainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataPainter::NewInstance());

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
PyvtkPolyDataPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPolyDataPainter *tempr = vtkPolyDataPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPainter_GetInputAsPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAsPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPainter *op = static_cast<vtkPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInputAsPolyData() :
      op->vtkPolyDataPainter::GetInputAsPolyData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPainter_GetOutputAsPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputAsPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPainter *op = static_cast<vtkPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetOutputAsPolyData() :
      op->vtkPolyDataPainter::GetOutputAsPolyData());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPainter_BUILD_NORMALS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BUILD_NORMALS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkPolyDataPainter::BUILD_NORMALS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPainter_DISABLE_SCALAR_COLOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DISABLE_SCALAR_COLOR");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkPolyDataPainter::DISABLE_SCALAR_COLOR();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPainter_DATA_ARRAY_TO_VERTEX_ATTRIBUTE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_ARRAY_TO_VERTEX_ATTRIBUTE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationObjectBaseKey *tempr = vtkPolyDataPainter::DATA_ARRAY_TO_VERTEX_ATTRIBUTE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPainter_SHADER_DEVICE_ADAPTOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SHADER_DEVICE_ADAPTOR");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationObjectBaseKey *tempr = vtkPolyDataPainter::SHADER_DEVICE_ADAPTOR();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPainter_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPainter *op = static_cast<vtkPolyDataPainter *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  unsigned long temp2;
  bool temp3 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPolyDataPainter::Render(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataPainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyDataPainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyDataPainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPolyDataPainter\nC++: vtkPolyDataPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolyDataPainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyDataPainter\nC++: vtkPolyDataPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInputAsPolyData", PyvtkPolyDataPainter_GetInputAsPolyData, METH_VARARGS,
   (char*)"V.GetInputAsPolyData() -> vtkPolyData\nC++: vtkPolyData *GetInputAsPolyData()\n\nGet/set the poly data to render.\n"},
  {(char*)"GetOutputAsPolyData", PyvtkPolyDataPainter_GetOutputAsPolyData, METH_VARARGS,
   (char*)"V.GetOutputAsPolyData() -> vtkPolyData\nC++: vtkPolyData *GetOutputAsPolyData()\n\nGet the output polydata from this Painter. The default\nimplementation forwards the input polydata as the output.\n"},
  {(char*)"BUILD_NORMALS", PyvtkPolyDataPainter_BUILD_NORMALS, METH_VARARGS | METH_STATIC,
   (char*)"V.BUILD_NORMALS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *BUILD_NORMALS()\n\nKeys used to specify control the behaviour of the painter. When\non, the painter creates normals when none are available in the\npolydata. On by default.\n"},
  {(char*)"DISABLE_SCALAR_COLOR", PyvtkPolyDataPainter_DISABLE_SCALAR_COLOR, METH_VARARGS | METH_STATIC,
   (char*)"V.DISABLE_SCALAR_COLOR() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DISABLE_SCALAR_COLOR()\n\nKey added to disable any scalar coloring for the current pass.\n"},
  {(char*)"DATA_ARRAY_TO_VERTEX_ATTRIBUTE", PyvtkPolyDataPainter_DATA_ARRAY_TO_VERTEX_ATTRIBUTE, METH_VARARGS | METH_STATIC,
   (char*)"V.DATA_ARRAY_TO_VERTEX_ATTRIBUTE() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *DATA_ARRAY_TO_VERTEX_ATTRIBUTE(\n    )\n\n"},
  {(char*)"SHADER_DEVICE_ADAPTOR", PyvtkPolyDataPainter_SHADER_DEVICE_ADAPTOR, METH_VARARGS | METH_STATIC,
   (char*)"V.SHADER_DEVICE_ADAPTOR() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *SHADER_DEVICE_ADAPTOR()\n\nKey to store the shader device adaptor.\n"},
  {(char*)"Render", PyvtkPolyDataPainter_Render, METH_VARARGS,
   (char*)"V.Render(vtkRenderer, vtkActor, int, bool)\nC++: virtual void Render(vtkRenderer *renderer, vtkActor *actor,\n    unsigned long typeflags, bool forceCompileOnly)\n\nOverridden to stop the render call if input polydata is not set,\nsince PolyDataPainter cannot paint without any polydata input.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPolyDataPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPolyDataPainter_Methods,
    "vtkPolyDataPainter", modulename,
    NULL, NULL,
    PyvtkPolyDataPainter_Doc(),
    PyVTKClass_vtkPainterNew(modulename));
  return cls;
}

const char **PyvtkPolyDataPainter_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataPainter - Abstract class for drawing poly data.\n\n",
    "Superclass: vtkPainter\n\n",
    "vtkPolyDataPainter encapsulates a method of drawing poly data.  This\nis a subset of what a mapper does.  The painter does no maintenance\nof the rendering state (camera, lights, etc.).  It is solely\nresponsible for issuing rendering commands that build graphics\nprimitives.\n\nTo simplify coding, an implementation of vtkPolyDataPainter is\nallowed to support only certain types of poly data or certain t",
    "ypes\nof primitives.\n\nSee Also:\n\nvtkDefaultPainter vtkStandardPainter vtkPainterDeviceAdapter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

