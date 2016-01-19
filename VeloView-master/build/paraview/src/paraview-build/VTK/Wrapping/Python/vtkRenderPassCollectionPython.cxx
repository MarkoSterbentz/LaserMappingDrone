// python wrapper for vtkRenderPassCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRenderPassCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRenderPassCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRenderPassCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkRenderPassCollection_Doc();


static PyObject *
PyvtkRenderPassCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPassCollection *op = static_cast<vtkRenderPassCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRenderPassCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderPassCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPassCollection *op = static_cast<vtkRenderPassCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderPassCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderPassCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPassCollection *op = static_cast<vtkRenderPassCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderPassCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderPassCollection::NewInstance());

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
PyvtkRenderPassCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRenderPassCollection *tempr = vtkRenderPassCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderPassCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPassCollection *op = static_cast<vtkRenderPassCollection *>(vp);

  vtkRenderPass *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkRenderPassCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderPassCollection_GetNextRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPassCollection *op = static_cast<vtkRenderPassCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetNextRenderPass() :
      op->vtkRenderPassCollection::GetNextRenderPass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderPassCollection_GetLastRenderPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRenderPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderPassCollection *op = static_cast<vtkRenderPassCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetLastRenderPass() :
      op->vtkRenderPassCollection::GetLastRenderPass());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderPassCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderPassCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderPassCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderPassCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRenderPassCollection\nC++: vtkRenderPassCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderPassCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderPassCollection\nC++: vtkRenderPassCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkRenderPassCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkRenderPass)\nC++: void AddItem(vtkRenderPass *pass)\n\nAdd an RenderPass to the list.\n"},
  {(char*)"GetNextRenderPass", PyvtkRenderPassCollection_GetNextRenderPass, METH_VARARGS,
   (char*)"V.GetNextRenderPass() -> vtkRenderPass\nC++: vtkRenderPass *GetNextRenderPass()\n\nGet the next RenderPass in the list.\n"},
  {(char*)"GetLastRenderPass", PyvtkRenderPassCollection_GetLastRenderPass, METH_VARARGS,
   (char*)"V.GetLastRenderPass() -> vtkRenderPass\nC++: vtkRenderPass *GetLastRenderPass()\n\nGet the last RenderPass in the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderPassCollection_StaticNew()
{
  return vtkRenderPassCollection::New();
}

PyObject *PyVTKClass_vtkRenderPassCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderPassCollection_StaticNew,
    PyvtkRenderPassCollection_Methods,
    "vtkRenderPassCollection", modulename,
    NULL, NULL,
    PyvtkRenderPassCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkRenderPassCollection_Doc()
{
  static const char *docstring[] = {
    "vtkRenderPassCollection - a list of RenderPasses\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkRenderPassCollection represents a list of RenderPasses (i.e.,\nvtkRenderPass and subclasses) and provides methods to manipulate the\nlist. The list is unsorted and duplicate entries are not prevented.\n\nSee Also:\n\nvtkRenderPass vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderPassCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderPassCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderPassCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

