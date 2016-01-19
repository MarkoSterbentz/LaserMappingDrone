// python wrapper for vtkPVCompositeOrthographicSliceRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVCompositeOrthographicSliceRepresentation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVCompositeOrthographicSliceRepresentation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVCompositeOrthographicSliceRepresentationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVCompositeRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkPVCompositeRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVCompositeRepresentationNew
#endif

static const char **PyvtkPVCompositeOrthographicSliceRepresentation_Doc();


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVCompositeOrthographicSliceRepresentation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCompositeOrthographicSliceRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVCompositeOrthographicSliceRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCompositeOrthographicSliceRepresentation::NewInstance());

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
PyvtkPVCompositeOrthographicSliceRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVCompositeOrthographicSliceRepresentation *tempr = vtkPVCompositeOrthographicSliceRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_SetSliceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  int temp0;
  vtkPVDataRepresentation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVDataRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetSliceRepresentation(temp0, temp1);
      }
    else
      {
      op->vtkPVCompositeOrthographicSliceRepresentation::SetSliceRepresentation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVisibility(temp0);
      }
    else
      {
      op->vtkPVCompositeOrthographicSliceRepresentation::SetVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkPVCompositeOrthographicSliceRepresentation::SetInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0);
      }
    else
      {
      op->vtkPVCompositeOrthographicSliceRepresentation::SetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPVCompositeOrthographicSliceRepresentation_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkPVCompositeOrthographicSliceRepresentation_SetInputConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return NULL;
}



static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_AddInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkPVCompositeOrthographicSliceRepresentation::AddInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_AddInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddInputConnection(temp0);
      }
    else
      {
      op->vtkPVCompositeOrthographicSliceRepresentation::AddInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_AddInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPVCompositeOrthographicSliceRepresentation_AddInputConnection_s1(self, args);
    case 1:
      return PyvtkPVCompositeOrthographicSliceRepresentation_AddInputConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInputConnection");
  return NULL;
}



static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->RemoveInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkPVCompositeOrthographicSliceRepresentation::RemoveInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RemoveInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkPVCompositeOrthographicSliceRepresentation::RemoveInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection_Methods[] = {
  {NULL, PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection_s1, METH_VARARGS,
   (char*)"@iO *vtkAlgorithmOutput"},
  {NULL, PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection_s2, METH_VARARGS,
   (char*)"@ii"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveInputConnection");
  return NULL;
}



static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MarkModified();
      }
    else
      {
      op->vtkPVCompositeOrthographicSliceRepresentation::MarkModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeOrthographicSliceRepresentation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeOrthographicSliceRepresentation *op = static_cast<vtkPVCompositeOrthographicSliceRepresentation *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->Initialize(temp0, temp1) :
      op->vtkPVCompositeOrthographicSliceRepresentation::Initialize(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVCompositeOrthographicSliceRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVCompositeOrthographicSliceRepresentation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVCompositeOrthographicSliceRepresentation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVCompositeOrthographicSliceRepresentation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVCompositeOrthographicSliceRepresentation\nC++: vtkPVCompositeOrthographicSliceRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVCompositeOrthographicSliceRepresentation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkPVCompositeOrthographicSliceRepresentation\nC++: vtkPVCompositeOrthographicSliceRepresentation *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetSliceRepresentation", PyvtkPVCompositeOrthographicSliceRepresentation_SetSliceRepresentation, METH_VARARGS,
   (char*)"V.SetSliceRepresentation(int, vtkPVDataRepresentation)\nC++: void SetSliceRepresentation(int index,\n    vtkPVDataRepresentation *)\n\n"},
  {(char*)"SetVisibility", PyvtkPVCompositeOrthographicSliceRepresentation_SetVisibility, METH_VARARGS,
   (char*)"V.SetVisibility(bool)\nC++: virtual void SetVisibility(bool visible)\n\nSet visibility of the representation. Overridden to update the\ncube-axes and selection visibilities.\n"},
  {(char*)"SetInputConnection", PyvtkPVCompositeOrthographicSliceRepresentation_SetInputConnection, METH_VARARGS,
   (char*)"V.SetInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {(char*)"AddInputConnection", PyvtkPVCompositeOrthographicSliceRepresentation_AddInputConnection, METH_VARARGS,
   (char*)"V.AddInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void AddInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.AddInputConnection(vtkAlgorithmOutput)\nC++: virtual void AddInputConnection(vtkAlgorithmOutput *input)\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {(char*)"RemoveInputConnection", PyvtkPVCompositeOrthographicSliceRepresentation_RemoveInputConnection, METH_VARARGS,
   (char*)"V.RemoveInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void RemoveInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.RemoveInputConnection(int, int)\nC++: virtual void RemoveInputConnection(int port, int index)\n\nOverridden to simply pass the input to the internal\nrepresentations. We won't need this if vtkDataRepresentation\ncorrectly respected in the arguments passed to it during\nProcessRequest() etc.\n"},
  {(char*)"MarkModified", PyvtkPVCompositeOrthographicSliceRepresentation_MarkModified, METH_VARARGS,
   (char*)"V.MarkModified()\nC++: virtual void MarkModified()\n\nPropagate the modification to all internal representations.\n"},
  {(char*)"Initialize", PyvtkPVCompositeOrthographicSliceRepresentation_Initialize, METH_VARARGS,
   (char*)"V.Initialize(int, int) -> int\nC++: virtual unsigned int Initialize(unsigned int minIdAvailable,\n    unsigned int maxIdAvailable)\n\nOverride because of internal composite representations that need\nto be initilized as well.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVCompositeOrthographicSliceRepresentation_StaticNew()
{
  return vtkPVCompositeOrthographicSliceRepresentation::New();
}

PyObject *PyVTKClass_vtkPVCompositeOrthographicSliceRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVCompositeOrthographicSliceRepresentation_StaticNew,
    PyvtkPVCompositeOrthographicSliceRepresentation_Methods,
    "vtkPVCompositeOrthographicSliceRepresentation", modulename,
    NULL, NULL,
    PyvtkPVCompositeOrthographicSliceRepresentation_Doc(),
    PyVTKClass_vtkPVCompositeRepresentationNew(modulename));
  return cls;
}

const char **PyvtkPVCompositeOrthographicSliceRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkPVCompositeOrthographicSliceRepresentation\n\n",
    "Superclass: vtkPVCompositeRepresentation\n\n",
    "vtkPVCompositeOrthographicSliceRepresentation is designed for use\nwith vtkPVOrthographicSliceView. Similar to how we add cube-axes\nrepresentation etc. to vtkPVCompositeRepresentation, we add 3\nvtkGeometrySliceRepresentation instances to render the 3 slices in\nvtkPVOrthographicSliceView's orthographic views.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVCompositeOrthographicSliceRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVCompositeOrthographicSliceRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVCompositeOrthographicSliceRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

