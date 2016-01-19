// python wrapper for vtkRendererCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkRendererCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkRendererCollection(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkRendererCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkRendererCollection_Doc();


static PyObject *
PyvtkRendererCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererCollection *op = static_cast<vtkRendererCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkRendererCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererCollection *op = static_cast<vtkRendererCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRendererCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererCollection *op = static_cast<vtkRendererCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRendererCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRendererCollection::NewInstance());

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
PyvtkRendererCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkRendererCollection *tempr = vtkRendererCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererCollection *op = static_cast<vtkRendererCollection *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkRendererCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererCollection *op = static_cast<vtkRendererCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkRendererCollection::GetNextItem());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRendererCollection_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererCollection *op = static_cast<vtkRendererCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkRendererCollection::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRendererCollection_GetFirstRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererCollection *op = static_cast<vtkRendererCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetFirstRenderer() :
      op->vtkRendererCollection::GetFirstRenderer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRendererCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkRendererCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRendererCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRendererCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkRendererCollection\nC++: vtkRendererCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRendererCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRendererCollection\nC++: vtkRendererCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkRendererCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkRenderer)\nC++: void AddItem(vtkRenderer *a)\n\nAdd a Renderer to the list.\n"},
  {(char*)"GetNextItem", PyvtkRendererCollection_GetNextItem, METH_VARARGS,
   (char*)"V.GetNextItem() -> vtkRenderer\nC++: vtkRenderer *GetNextItem()\n\nGet the next Renderer in the list. Return NULL when at the end of\nthe list.\n"},
  {(char*)"Render", PyvtkRendererCollection_Render, METH_VARARGS,
   (char*)"V.Render()\nC++: void Render()\n\nForward the Render() method to each renderer in the list.\n"},
  {(char*)"GetFirstRenderer", PyvtkRendererCollection_GetFirstRenderer, METH_VARARGS,
   (char*)"V.GetFirstRenderer() -> vtkRenderer\nC++: vtkRenderer *GetFirstRenderer()\n\nGet the first Renderer in the list. Return NULL when at the end\nof the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRendererCollection_StaticNew()
{
  return vtkRendererCollection::New();
}

PyObject *PyVTKClass_vtkRendererCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRendererCollection_StaticNew,
    PyvtkRendererCollection_Methods,
    "vtkRendererCollection", modulename,
    NULL, NULL,
    PyvtkRendererCollection_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkRendererCollection_Doc()
{
  static const char *docstring[] = {
    "vtkRendererCollection - a list of renderers\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkRendererCollection represents and provides methods to manipulate a\nlist of renderers (i.e., vtkRenderer and subclasses). The list is\nunsorted and duplicate entries are not prevented.\n\nSee Also:\n\nvtkRenderer vtkCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRendererCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRendererCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRendererCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

