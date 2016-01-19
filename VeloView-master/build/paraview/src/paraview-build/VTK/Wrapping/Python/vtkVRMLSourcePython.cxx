// python wrapper for vtkVRMLSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkVRMLSource.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkVRMLSource(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkVRMLSourceNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkVRMLSource_Doc();


static PyObject *
PyvtkVRMLSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkVRMLSource::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVRMLSource::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVRMLSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVRMLSource::NewInstance());

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
PyvtkVRMLSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkVRMLSource *tempr = vtkVRMLSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLSource_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkVRMLSource::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLSource_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkVRMLSource::GetFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLSource_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0);
      }
    else
      {
      op->vtkVRMLSource::SetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLSource_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkVRMLSource::GetColor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLSource_ColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorOn();
      }
    else
      {
      op->vtkVRMLSource::ColorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLSource_ColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorOff();
      }
    else
      {
      op->vtkVRMLSource::ColorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLSource_SetAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAppend(temp0);
      }
    else
      {
      op->vtkVRMLSource::SetAppend(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLSource_GetAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetAppend() :
      op->vtkVRMLSource::GetAppend());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLSource_AppendOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AppendOn();
      }
    else
      {
      op->vtkVRMLSource::AppendOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLSource_AppendOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVRMLSource *op = static_cast<vtkVRMLSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AppendOff();
      }
    else
      {
      op->vtkVRMLSource::AppendOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVRMLSource_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = vtkVRMLSource::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVRMLSource_Methods[] = {
  {(char*)"GetClassName", PyvtkVRMLSource_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVRMLSource_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVRMLSource_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkVRMLSource\nC++: vtkVRMLSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVRMLSource_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVRMLSource\nC++: vtkVRMLSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkVRMLSource_SetFileName, METH_VARARGS,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nVRML file name.  Set\n"},
  {(char*)"GetFileName", PyvtkVRMLSource_GetFileName, METH_VARARGS,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nVRML file name.  Set\n"},
  {(char*)"SetColor", PyvtkVRMLSource_SetColor, METH_VARARGS,
   (char*)"V.SetColor(int)\nC++: void SetColor(int a)\n\nDescided whether to generate color arrays or not.\n"},
  {(char*)"GetColor", PyvtkVRMLSource_GetColor, METH_VARARGS,
   (char*)"V.GetColor() -> int\nC++: int GetColor()\n\nDescided whether to generate color arrays or not.\n"},
  {(char*)"ColorOn", PyvtkVRMLSource_ColorOn, METH_VARARGS,
   (char*)"V.ColorOn()\nC++: void ColorOn()\n\nDescided whether to generate color arrays or not.\n"},
  {(char*)"ColorOff", PyvtkVRMLSource_ColorOff, METH_VARARGS,
   (char*)"V.ColorOff()\nC++: void ColorOff()\n\nDescided whether to generate color arrays or not.\n"},
  {(char*)"SetAppend", PyvtkVRMLSource_SetAppend, METH_VARARGS,
   (char*)"V.SetAppend(int)\nC++: void SetAppend(int a)\n\nThis method allows all parts to be put into a single output. By\ndefault this flag is on.\n"},
  {(char*)"GetAppend", PyvtkVRMLSource_GetAppend, METH_VARARGS,
   (char*)"V.GetAppend() -> int\nC++: int GetAppend()\n\nThis method allows all parts to be put into a single output. By\ndefault this flag is on.\n"},
  {(char*)"AppendOn", PyvtkVRMLSource_AppendOn, METH_VARARGS,
   (char*)"V.AppendOn()\nC++: void AppendOn()\n\nThis method allows all parts to be put into a single output. By\ndefault this flag is on.\n"},
  {(char*)"AppendOff", PyvtkVRMLSource_AppendOff, METH_VARARGS,
   (char*)"V.AppendOff()\nC++: void AppendOff()\n\nThis method allows all parts to be put into a single output. By\ndefault this flag is on.\n"},
  {(char*)"CanReadFile", PyvtkVRMLSource_CanReadFile, METH_VARARGS | METH_STATIC,
   (char*)"V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVRMLSource_StaticNew()
{
  return vtkVRMLSource::New();
}

PyObject *PyVTKClass_vtkVRMLSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVRMLSource_StaticNew,
    PyvtkVRMLSource_Methods,
    "vtkVRMLSource", modulename,
    NULL, NULL,
    PyvtkVRMLSource_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVRMLSource_Doc()
{
  static const char *docstring[] = {
    "vtkVRMLSource - Converts importer to a source.\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "Since paraview can only use vtkSources, I am wrapping the VRML\nimporter as a source.  I will loose lights, texture maps and colors,\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVRMLSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVRMLSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVRMLSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

