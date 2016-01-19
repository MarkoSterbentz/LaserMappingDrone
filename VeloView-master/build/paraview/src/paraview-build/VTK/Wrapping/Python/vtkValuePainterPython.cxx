// python wrapper for vtkValuePainter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkValuePainter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkValuePainter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkValuePainterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkStandardPolyDataPainterNew
extern "C" { PyObject *PyVTKClass_vtkStandardPolyDataPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkStandardPolyDataPainterNew
#endif

static const char **PyvtkValuePainter_Doc();


static PyObject *
PyvtkValuePainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePainter *op = static_cast<vtkValuePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkValuePainter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkValuePainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePainter *op = static_cast<vtkValuePainter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkValuePainter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkValuePainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePainter *op = static_cast<vtkValuePainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkValuePainter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkValuePainter::NewInstance());

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
PyvtkValuePainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkValuePainter *tempr = vtkValuePainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkValuePainter_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePainter *op = static_cast<vtkValuePainter *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1);
      }
    else
      {
      op->vtkValuePainter::SetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkValuePainter_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePainter *op = static_cast<vtkValuePainter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1);
      }
    else
      {
      op->vtkValuePainter::SetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkValuePainter_SetInputArrayToProcess_Methods[] = {
  {NULL, PyvtkValuePainter_SetInputArrayToProcess_s1, METH_VARARGS,
   (char*)"@iz"},
  {NULL, PyvtkValuePainter_SetInputArrayToProcess_s2, METH_VARARGS,
   (char*)"@ii"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkValuePainter_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkValuePainter_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return NULL;
}



static PyObject *
PyvtkValuePainter_SetInputComponentToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputComponentToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePainter *op = static_cast<vtkValuePainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputComponentToProcess(temp0);
      }
    else
      {
      op->vtkValuePainter::SetInputComponentToProcess(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkValuePainter_SetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePainter *op = static_cast<vtkValuePainter *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetScalarRange(temp0, temp1);
      }
    else
      {
      op->vtkValuePainter::SetScalarRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkValuePainter_SCALAR_MODE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SCALAR_MODE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkValuePainter::SCALAR_MODE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkValuePainter_SCALAR_RANGE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SCALAR_RANGE");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationDoubleVectorKey *tempr = vtkValuePainter::SCALAR_RANGE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkValuePainter_ARRAY_ID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ARRAY_ID");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkValuePainter::ARRAY_ID();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkValuePainter_ARRAY_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ARRAY_NAME");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationStringKey *tempr = vtkValuePainter::ARRAY_NAME();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkValuePainter_ARRAY_COMPONENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ARRAY_COMPONENT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkValuePainter::ARRAY_COMPONENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkValuePainter_ValueToColor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ValueToColor");

  double temp0;
  double temp1;
  double temp2;
  unsigned char *temp3 = NULL;
  unsigned char *save3 = NULL;
  unsigned char small3[8];
  int size3 = 0;
  PyObject *result = NULL;

  size3 = ap.GetArgSize(3);
  temp3 = small3;
  if (size3 > 4)
    {
    temp3 = new unsigned char[2*size3];
    }
  save3 = &temp3[size3];

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp3, save3, size3);

    vtkValuePainter::ValueToColor(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp3 && temp3 != small3)
    {
    delete [] temp3;
    }

  return result;
}


static PyObject *
PyvtkValuePainter_ColorToValue(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ColorToValue");

  unsigned char *temp0 = NULL;
  unsigned char *save0 = NULL;
  unsigned char small0[8];
  int size0 = 0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  size0 = ap.GetArgSize(0);
  temp0 = small0;
  if (size0 > 4)
    {
    temp0 = new unsigned char[2*size0];
    }
  save0 = &temp0[size0];

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    vtkValuePainter::ColorToValue(temp0, temp1, temp2, temp3);

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyMethodDef PyvtkValuePainter_Methods[] = {
  {(char*)"GetClassName", PyvtkValuePainter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkValuePainter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkValuePainter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkValuePainter\nC++: vtkValuePainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkValuePainter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkValuePainter\nC++: vtkValuePainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInputArrayToProcess", PyvtkValuePainter_SetInputArrayToProcess, METH_VARARGS,
   (char*)"V.SetInputArrayToProcess(int, string)\nC++: void SetInputArrayToProcess(int fieldAssociation,\n    const char *name)\nV.SetInputArrayToProcess(int, int)\nC++: void SetInputArrayToProcess(int fieldAssociation,\n    int fieldAttributeType)\n\nSet the array to be drawn. By default point scalars are used.\nArguments are same as those passed to\nvtkAlgorithm::SetInputArrayToProcess except the first 3 arguments\ni.e. idx, port, connection.\n"},
  {(char*)"SetInputComponentToProcess", PyvtkValuePainter_SetInputComponentToProcess, METH_VARARGS,
   (char*)"V.SetInputComponentToProcess(int)\nC++: void SetInputComponentToProcess(int comp)\n\nSet the component (0..numcomponents-1) of the specified array to\nbe drawn. If input array is not a multicomponent array or\ncomponent is otherwise out of range the painter uses the 0'th\ncomponent instead.\n"},
  {(char*)"SetScalarRange", PyvtkValuePainter_SetScalarRange, METH_VARARGS,
   (char*)"V.SetScalarRange(float, float)\nC++: void SetScalarRange(double min, double max)\n\nUse the provided scalar range instead of the range of the input\ndata array.\n"},
  {(char*)"SCALAR_MODE", PyvtkValuePainter_SCALAR_MODE, METH_VARARGS | METH_STATIC,
   (char*)"V.SCALAR_MODE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *SCALAR_MODE()\n\nOptionally passed down from RenderPass pipeline to controls what\ndata array to draw.\n"},
  {(char*)"SCALAR_RANGE", PyvtkValuePainter_SCALAR_RANGE, METH_VARARGS | METH_STATIC,
   (char*)"V.SCALAR_RANGE() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *SCALAR_RANGE()\n\nOptionally passed down from RenderPass pipeline to controls what\ndata array to draw.\n"},
  {(char*)"ARRAY_ID", PyvtkValuePainter_ARRAY_ID, METH_VARARGS | METH_STATIC,
   (char*)"V.ARRAY_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ARRAY_ID()\n\nOptionally passed down from RenderPass pipeline to controls what\ndata array to draw.\n"},
  {(char*)"ARRAY_NAME", PyvtkValuePainter_ARRAY_NAME, METH_VARARGS | METH_STATIC,
   (char*)"V.ARRAY_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *ARRAY_NAME()\n\nOptionally passed down from RenderPass pipeline to controls what\ndata array to draw.\n"},
  {(char*)"ARRAY_COMPONENT", PyvtkValuePainter_ARRAY_COMPONENT, METH_VARARGS | METH_STATIC,
   (char*)"V.ARRAY_COMPONENT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ARRAY_COMPONENT()\n\nOptionally passed down from RenderPass pipeline to controls what\ndata array to draw.\n"},
  {(char*)"ValueToColor", PyvtkValuePainter_ValueToColor, METH_VARARGS | METH_STATIC,
   (char*)"V.ValueToColor(float, float, float, [int, ...])\nC++: static void ValueToColor(double value, double min,\n    double scale, unsigned char *color)\n\nInternal convenience method to convert a value to a color TODO:\nmake this templated and programmable\n"},
  {(char*)"ColorToValue", PyvtkValuePainter_ColorToValue, METH_VARARGS | METH_STATIC,
   (char*)"V.ColorToValue([int, ...], float, float, float)\nC++: static void ColorToValue(unsigned char *color, double min,\n    double scale, double &value)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkValuePainter_StaticNew()
{
  return vtkValuePainter::New();
}

PyObject *PyVTKClass_vtkValuePainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkValuePainter_StaticNew,
    PyvtkValuePainter_Methods,
    "vtkValuePainter", modulename,
    NULL, NULL,
    PyvtkValuePainter_Doc(),
    PyVTKClass_vtkStandardPolyDataPainterNew(modulename));
  return cls;
}

const char **PyvtkValuePainter_Doc()
{
  static const char *docstring[] = {
    "vtkValuePainter - painter that renders arrays encoded into\n\n",
    "Superclass: vtkStandardPolyDataPainter\n\n",
    "vtkValuePainter renders polygonal geometry where data values are\nencoded into 24 bit integers and send to the screen. The pixel colors\ncan then be read and converted back into values later.\n\nSee Also:\n\nvtkValuePass, vtkValuePasses\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkValuePainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkValuePainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkValuePainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

