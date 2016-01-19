// python wrapper for vtkAbstractPropPicker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAbstractPropPicker.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAbstractPropPicker(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAbstractPropPickerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkAbstractPickerNew
extern "C" { PyObject *PyVTKClass_vtkAbstractPickerNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractPickerNew
#endif

static const char **PyvtkAbstractPropPicker_Doc();


static PyObject *
PyvtkAbstractPropPicker_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAbstractPropPicker::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractPropPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractPropPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractPropPicker::NewInstance());

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
PyvtkAbstractPropPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAbstractPropPicker *tempr = vtkAbstractPropPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_SetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  vtkAssemblyPath *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPath"))
    {
    if (ap.IsBound())
      {
      op->SetPath(temp0);
      }
    else
      {
      op->vtkAbstractPropPicker::SetPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->GetPath() :
      op->vtkAbstractPropPicker::GetPath());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp *tempr = (ap.IsBound() ?
      op->GetViewProp() :
      op->vtkAbstractPropPicker::GetViewProp());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->GetProp3D() :
      op->vtkAbstractPropPicker::GetProp3D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetActor() :
      op->vtkAbstractPropPicker::GetActor());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetActor2D() :
      op->vtkAbstractPropPicker::GetActor2D());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkVolume *tempr = (ap.IsBound() ?
      op->GetVolume() :
      op->vtkAbstractPropPicker::GetVolume());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetAssembly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssembly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAssembly *tempr = (ap.IsBound() ?
      op->GetAssembly() :
      op->vtkAbstractPropPicker::GetAssembly());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetPropAssembly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropAssembly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPropAssembly *tempr = (ap.IsBound() ?
      op->GetPropAssembly() :
      op->vtkAbstractPropPicker::GetPropAssembly());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractPropPicker_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractPropPicker_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractPropPicker_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractPropPicker_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAbstractPropPicker\nC++: vtkAbstractPropPicker *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAbstractPropPicker_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAbstractPropPicker\nC++: vtkAbstractPropPicker *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPath", PyvtkAbstractPropPicker_SetPath, METH_VARARGS,
   (char*)"V.SetPath(vtkAssemblyPath)\nC++: virtual void SetPath(vtkAssemblyPath *)\n\nReturn the vtkAssemblyPath that has been picked. The assembly\npath lists all the vtkProps that form an assembly. If no assembly\nis present, then the assembly path will have one node (which is\nthe picked prop). The set method is used internally to set the\npath. (Note: the structure of an assembly path is a collection of\nvtkAssemblyNode, each node pointing to a vtkProp and (possibly) a\ntransformation matrix.)\n"},
  {(char*)"GetPath", PyvtkAbstractPropPicker_GetPath, METH_VARARGS,
   (char*)"V.GetPath() -> vtkAssemblyPath\nC++: vtkAssemblyPath *GetPath()\n\nReturn the vtkAssemblyPath that has been picked. The assembly\npath lists all the vtkProps that form an assembly. If no assembly\nis present, then the assembly path will have one node (which is\nthe picked prop). The set method is used internally to set the\npath. (Note: the structure of an assembly path is a collection of\nvtkAssemblyNode, each node pointing to a vtkProp and (possibly) a\ntransformation matrix.)\n"},
  {(char*)"GetViewProp", PyvtkAbstractPropPicker_GetViewProp, METH_VARARGS,
   (char*)"V.GetViewProp() -> vtkProp\nC++: virtual vtkProp *GetViewProp()\n\nReturn the vtkProp that has been picked. If NULL, nothing was\npicked. If anything at all was picked, this method will return\nsomething.\n"},
  {(char*)"GetProp3D", PyvtkAbstractPropPicker_GetProp3D, METH_VARARGS,
   (char*)"V.GetProp3D() -> vtkProp3D\nC++: virtual vtkProp3D *GetProp3D()\n\nReturn the vtkProp that has been picked. If NULL, no vtkProp3D\nwas picked.\n"},
  {(char*)"GetActor", PyvtkAbstractPropPicker_GetActor, METH_VARARGS,
   (char*)"V.GetActor() -> vtkActor\nC++: virtual vtkActor *GetActor()\n\nReturn the vtkActor that has been picked. If NULL, no actor was\npicked.\n"},
  {(char*)"GetActor2D", PyvtkAbstractPropPicker_GetActor2D, METH_VARARGS,
   (char*)"V.GetActor2D() -> vtkActor2D\nC++: virtual vtkActor2D *GetActor2D()\n\nReturn the vtkActor2D that has been picked. If NULL, no actor2D\nwas picked.\n"},
  {(char*)"GetVolume", PyvtkAbstractPropPicker_GetVolume, METH_VARARGS,
   (char*)"V.GetVolume() -> vtkVolume\nC++: virtual vtkVolume *GetVolume()\n\nReturn the vtkVolume that has been picked. If NULL, no volume was\npicked.\n"},
  {(char*)"GetAssembly", PyvtkAbstractPropPicker_GetAssembly, METH_VARARGS,
   (char*)"V.GetAssembly() -> vtkAssembly\nC++: virtual vtkAssembly *GetAssembly()\n\nReturn the vtkAssembly that has been picked. If NULL, no assembly\nwas picked. (Note: the returned assembly is the first node in the\nassembly path. If the path is one node long, then the assembly\nand the prop are the same, assuming that the first node is a\nvtkAssembly.)\n"},
  {(char*)"GetPropAssembly", PyvtkAbstractPropPicker_GetPropAssembly, METH_VARARGS,
   (char*)"V.GetPropAssembly() -> vtkPropAssembly\nC++: virtual vtkPropAssembly *GetPropAssembly()\n\nReturn the vtkPropAssembly that has been picked. If NULL, no prop\nassembly was picked. (Note: the returned prop assembly is the\nfirst node in the assembly path. If the path is one node long,\nthen the prop assembly and the prop are the same, assuming that\nthe first node is a vtkPropAssembly.)\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractPropPickerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractPropPicker_Methods,
    "vtkAbstractPropPicker", modulename,
    NULL, NULL,
    PyvtkAbstractPropPicker_Doc(),
    PyVTKClass_vtkAbstractPickerNew(modulename));
  return cls;
}

const char **PyvtkAbstractPropPicker_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractPropPicker - abstract API for pickers that can pick an\ninstance of vtkProp\n\n",
    "Superclass: vtkAbstractPicker\n\n",
    "vtkAbstractPropPicker is an abstract superclass for pickers that can\npick an instance of vtkProp. Some pickers, like vtkWorldPointPicker\n(not a subclass of this class), cannot identify the prop that is\npicked. Subclasses of vtkAbstractPropPicker return a prop in the form\nof a vtkAssemblyPath when a pick is invoked. Note that an\nvtkAssemblyPath contain a list of vtkAssemblyNodes, each of which in\nt",
    "urn contains a reference to a vtkProp and a 4x4 transformation\nmatrix. The path fully describes the entire pick path, so you can\npick assemblies or portions of assemblies, or just grab the tail end\nof the vtkAssemblyPath (which is the picked prop).\n\nCaveats:\n\nBecause a vtkProp can be placed into different assemblies, or even in\ndifferent leaf positions of the same assembly, the vtkAssemblyPath is\n",
    "used to fully qualify exactly which use of the vtkProp was picked,\nincluding its position (since vtkAssemblyPath includes a\ntransformation matrix per node).\n\nThe class returns information about picked actors, props, etc. Note\nthat what is returned by these methods is the top level of the\nassembly path. This can cause a lot of confusion! For example, if you\npick a vtkAssembly, and the returned vtkA",
    "ssemblyPath has as a leaf a\nvtkActor, then if you invoke GetActor(), you will get NULL, even\nthough an actor was indeed picked. (GetAssembly() will return\nsomething.) Note that the safest thing to do is to do a\nGetViewProp(), which will always return something if something was\npicked. A better way to manage picking is to work with\nvtkAssemblyPath, since this completely defines the pick path from t",
    "op\nto bottom in a assembly hierarchy, and avoids confusion when the same\nprop is used in different assemblies.\n\nThe returned assembly paths refer to assembly nodes that in turn\nrefer to vtkProp and vtkMatrix. This association to vtkProp is not a\nreference counted association, meaning that dangling references are\npossible if you do a pick, get an assembly path, and then delete a\nvtkProp. (Reason: a",
    "ssembly paths create many self-referencing loops\nthat destroy reference counting.)\n\nSee Also:\n\nvtkPropPicker vtkPicker vtkWorldPointPicker vtkCellPicker\nvtkPointPicker vtkAssemblyPath vtkAssemblyNode vtkAssemblyPaths\nvtkAbstractPicker vtkRenderer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractPropPicker(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractPropPickerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractPropPicker", o) != 0)
    {
    Py_DECREF(o);
    }

}

