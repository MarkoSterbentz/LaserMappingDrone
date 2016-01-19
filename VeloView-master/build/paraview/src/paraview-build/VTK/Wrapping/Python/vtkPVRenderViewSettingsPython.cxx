// python wrapper for vtkPVRenderViewSettings
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVRenderViewSettings.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVRenderViewSettings(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVRenderViewSettingsNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPVRenderViewSettings_Doc();


static PyObject *
PyvtkPVRenderViewSettings_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVRenderViewSettings::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVRenderViewSettings::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVRenderViewSettings *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVRenderViewSettings::NewInstance());

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
PyvtkPVRenderViewSettings_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVRenderViewSettings *tempr = vtkPVRenderViewSettings::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkPVRenderViewSettings *tempr = vtkPVRenderViewSettings::GetInstance();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_SetUseDisplayLists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDisplayLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDisplayLists(temp0);
      }
    else
      {
      op->vtkPVRenderViewSettings::SetUseDisplayLists(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_SetResolveCoincidentTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolveCoincidentTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResolveCoincidentTopology(temp0);
      }
    else
      {
      op->vtkPVRenderViewSettings::SetResolveCoincidentTopology(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_SetPolygonOffsetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolygonOffsetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPolygonOffsetParameters(temp0, temp1);
      }
    else
      {
      op->vtkPVRenderViewSettings::SetPolygonOffsetParameters(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_SetZShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZShift(temp0);
      }
    else
      {
      op->vtkPVRenderViewSettings::SetZShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_SetOutlineThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutlineThreshold(temp0);
      }
    else
      {
      op->vtkPVRenderViewSettings::SetOutlineThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVRenderViewSettings_GetOutlineThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRenderViewSettings *op = static_cast<vtkPVRenderViewSettings *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetOutlineThreshold() :
      op->vtkPVRenderViewSettings::GetOutlineThreshold());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVRenderViewSettings_Methods[] = {
  {(char*)"GetClassName", PyvtkPVRenderViewSettings_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVRenderViewSettings_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVRenderViewSettings_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVRenderViewSettings\nC++: vtkPVRenderViewSettings *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVRenderViewSettings_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVRenderViewSettings\nC++: vtkPVRenderViewSettings *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInstance", PyvtkPVRenderViewSettings_GetInstance, METH_VARARGS | METH_STATIC,
   (char*)"V.GetInstance() -> vtkPVRenderViewSettings\nC++: static vtkPVRenderViewSettings *GetInstance()\n\nAccess the singleton.\n"},
  {(char*)"SetUseDisplayLists", PyvtkPVRenderViewSettings_SetUseDisplayLists, METH_VARARGS,
   (char*)"V.SetUseDisplayLists(bool)\nC++: void SetUseDisplayLists(bool val)\n\nGet/Set use display lists.\n"},
  {(char*)"SetResolveCoincidentTopology", PyvtkPVRenderViewSettings_SetResolveCoincidentTopology, METH_VARARGS,
   (char*)"V.SetResolveCoincidentTopology(int)\nC++: void SetResolveCoincidentTopology(int mode)\n\nvtkMapper settings.\n"},
  {(char*)"SetPolygonOffsetParameters", PyvtkPVRenderViewSettings_SetPolygonOffsetParameters, METH_VARARGS,
   (char*)"V.SetPolygonOffsetParameters(float, float)\nC++: void SetPolygonOffsetParameters(double factor, double units)\n\nvtkMapper settings.\n"},
  {(char*)"SetZShift", PyvtkPVRenderViewSettings_SetZShift, METH_VARARGS,
   (char*)"V.SetZShift(float)\nC++: void SetZShift(double a)\n\nvtkMapper settings.\n"},
  {(char*)"SetOutlineThreshold", PyvtkPVRenderViewSettings_SetOutlineThreshold, METH_VARARGS,
   (char*)"V.SetOutlineThreshold(int)\nC++: void SetOutlineThreshold(vtkIdType a)\n\nSet the number of cells (in millions) when the representations\nshow try to use outline by default.\n"},
  {(char*)"GetOutlineThreshold", PyvtkPVRenderViewSettings_GetOutlineThreshold, METH_VARARGS,
   (char*)"V.GetOutlineThreshold() -> int\nC++: vtkIdType GetOutlineThreshold()\n\nSet the number of cells (in millions) when the representations\nshow try to use outline by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVRenderViewSettings_StaticNew()
{
  return vtkPVRenderViewSettings::New();
}

PyObject *PyVTKClass_vtkPVRenderViewSettingsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVRenderViewSettings_StaticNew,
    PyvtkPVRenderViewSettings_Methods,
    "vtkPVRenderViewSettings", modulename,
    NULL, NULL,
    PyvtkPVRenderViewSettings_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "DO_NOTHING", vtkPVRenderViewSettings::DO_NOTHING },
          { "OFFSET_FACES", vtkPVRenderViewSettings::OFFSET_FACES },
          { "OFFSET_LINES_AND_VERTS", vtkPVRenderViewSettings::OFFSET_LINES_AND_VERTS },
          { "ZSHIFT", vtkPVRenderViewSettings::ZSHIFT },
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

const char **PyvtkPVRenderViewSettings_Doc()
{
  static const char *docstring[] = {
    "vtkPVRenderViewSettings - singleton used to keep track of options for\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPVRenderViewSettings is a singleton used to keep track of\nselections for various configurable parameters used by\nvtkPVRenderView. All class to vtkPVRenderViewSettings::New() returns\na reference to the singleton instance.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVRenderViewSettings(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVRenderViewSettingsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVRenderViewSettings", o) != 0)
    {
    Py_DECREF(o);
    }

}

