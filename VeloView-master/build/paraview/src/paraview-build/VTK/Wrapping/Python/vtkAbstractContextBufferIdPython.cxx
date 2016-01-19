// python wrapper for vtkAbstractContextBufferId
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkAbstractContextBufferId.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkAbstractContextBufferId(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkAbstractContextBufferIdNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAbstractContextBufferId_Doc();


static PyObject *
PyvtkAbstractContextBufferId_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkAbstractContextBufferId::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractContextBufferId::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAbstractContextBufferId *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractContextBufferId::NewInstance());

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
PyvtkAbstractContextBufferId_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkAbstractContextBufferId *tempr = vtkAbstractContextBufferId::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkAbstractContextBufferId::GetWidth());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidth(temp0);
      }
    else
      {
      op->vtkAbstractContextBufferId::SetWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkAbstractContextBufferId::GetHeight());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeight(temp0);
      }
    else
      {
      op->vtkAbstractContextBufferId::SetHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    op->SetContext(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = op->GetContext();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    bool tempr = op->IsSupported();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Allocate();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_IsAllocated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAllocated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    bool tempr = op->IsAllocated();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_SetValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetValues(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_GetPickedItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkIdType tempr = op->GetPickedItem(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractContextBufferId_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractContextBufferId *op = static_cast<vtkAbstractContextBufferId *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources();
      }
    else
      {
      op->vtkAbstractContextBufferId::ReleaseGraphicsResources();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractContextBufferId_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractContextBufferId_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractContextBufferId_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractContextBufferId_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkAbstractContextBufferId\nC++: vtkAbstractContextBufferId *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAbstractContextBufferId_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAbstractContextBufferId\nC++: vtkAbstractContextBufferId *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetWidth", PyvtkAbstractContextBufferId_GetWidth, METH_VARARGS,
   (char*)"V.GetWidth() -> int\nC++: int GetWidth()\n\nNumber of columns. Initial value is 0.\n"},
  {(char*)"SetWidth", PyvtkAbstractContextBufferId_SetWidth, METH_VARARGS,
   (char*)"V.SetWidth(int)\nC++: void SetWidth(int a)\n\nSet the number of columns. Initial value is 0.\n"},
  {(char*)"GetHeight", PyvtkAbstractContextBufferId_GetHeight, METH_VARARGS,
   (char*)"V.GetHeight() -> int\nC++: int GetHeight()\n\nNumber of rows. Initial value is 0.\n"},
  {(char*)"SetHeight", PyvtkAbstractContextBufferId_SetHeight, METH_VARARGS,
   (char*)"V.SetHeight(int)\nC++: void SetHeight(int a)\n\nSet the number of rows. Initial value is 0.\n"},
  {(char*)"SetContext", PyvtkAbstractContextBufferId_SetContext, METH_VARARGS,
   (char*)"V.SetContext(vtkRenderWindow)\nC++: virtual void SetContext(vtkRenderWindow *context)\n\nSet/Get the OpenGL context owning the texture object resource.\n"},
  {(char*)"GetContext", PyvtkAbstractContextBufferId_GetContext, METH_VARARGS,
   (char*)"V.GetContext() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetContext()\n\nSet/Get the OpenGL context owning the texture object resource.\n"},
  {(char*)"IsSupported", PyvtkAbstractContextBufferId_IsSupported, METH_VARARGS,
   (char*)"V.IsSupported() -> bool\nC++: virtual bool IsSupported()\n\nReturns if the context supports the required extensions.\n\\pre context_is_set: this->GetContext()!=0\n"},
  {(char*)"Allocate", PyvtkAbstractContextBufferId_Allocate, METH_VARARGS,
   (char*)"V.Allocate()\nC++: virtual void Allocate()\n\nAllocate the memory for at least Width*Height elements.\n\\pre positive_width: GetWidth()>0\n\\pre positive_height: GetHeight()>0\n"},
  {(char*)"IsAllocated", PyvtkAbstractContextBufferId_IsAllocated, METH_VARARGS,
   (char*)"V.IsAllocated() -> bool\nC++: virtual bool IsAllocated()\n\nTell if the buffer has been allocated.\n"},
  {(char*)"SetValues", PyvtkAbstractContextBufferId_SetValues, METH_VARARGS,
   (char*)"V.SetValues(int, int)\nC++: virtual void SetValues(int srcXmin, int srcYmin)\n\nCopy the contents of the current read buffer to the internal\nstructure starting at lower left corner of the framebuffer\n(srcXmin,srcYmin).\n\\pre is_allocated: this->IsAllocated()\n"},
  {(char*)"GetPickedItem", PyvtkAbstractContextBufferId_GetPickedItem, METH_VARARGS,
   (char*)"V.GetPickedItem(int, int) -> int\nC++: virtual vtkIdType GetPickedItem(int x, int y)\n\nReturn item under abscissa x and ordinate y. Abscissa go from\nleft to right. Ordinate go from bottom to top. The return value\nis -1 if there is no item.\n\\pre is_allocated: IsAllocated()\n\\post valid_result: result>=-1\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAbstractContextBufferId_ReleaseGraphicsResources, METH_VARARGS,
   (char*)"V.ReleaseGraphicsResources()\nC++: virtual void ReleaseGraphicsResources()\n\nRelease any graphics resources that are being consumed by this\nobject. Default implementation is empty.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAbstractContextBufferId_StaticNew()
{
  return vtkAbstractContextBufferId::New();
}

PyObject *PyVTKClass_vtkAbstractContextBufferIdNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAbstractContextBufferId_StaticNew,
    PyvtkAbstractContextBufferId_Methods,
    "vtkAbstractContextBufferId", modulename,
    NULL, NULL,
    PyvtkAbstractContextBufferId_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAbstractContextBufferId_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractContextBufferId - 2D array of ids, used for picking.\n\n",
    "Superclass: vtkObject\n\n",
    "An 2D array where each element is the id of an entity drawn at the\ngiven pixel. The access is not specified in this class. The\neffective/concrete subclass vtkContextBufferId stores the whole\nbuffer in RAM. The access to a value is fast and independent of the\nOpenGL. However it requires to first fill the whole buffer by\ntransferring the buffer generated by OpenGL from the VRAM to the RAM.\nIt is ine",
    "fficient if the context of the scene changes during\ninteraction.\n\nThe effective/concrete subclass vtkOpenGLContextBufferId keeps the\nbuffer id on the VRAM in a texture image. The access to a value is\nslower than a simple read access to an array but it does not require\na large transfer of data from the VRAM to the RAM.\n\nSee Also:\n\nvtkContextBufferId, vtkOpenGLContextBufferId\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractContextBufferId(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractContextBufferIdNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractContextBufferId", o) != 0)
    {
    Py_DECREF(o);
    }

}

