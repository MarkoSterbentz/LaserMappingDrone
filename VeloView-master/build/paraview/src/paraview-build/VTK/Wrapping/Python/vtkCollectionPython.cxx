// python wrapper for vtkCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkCollection.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkCollection(PyObject *, const char *); }

static const char **PyvtkCollectionElement_Doc();

static PyMethodDef PyvtkCollectionElement_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkCollectionElement_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkCollectionElement_Type;
#define DECLARED_PyvtkCollectionElement_Type
#endif


static PyObject *
PyvtkCollectionElement_vtkCollectionElement(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkCollectionElement");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkCollectionElement *op = new vtkCollectionElement();

    result = PyVTKSpecialObject_New("vtkCollectionElement", op);
    }

  return result;
}

static PyMethodDef PyvtkCollectionElement_vtkCollectionElement_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkCollectionElement_NewMethod = \
{ (char*)"vtkCollectionElement", PyvtkCollectionElement_vtkCollectionElement, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkCollectionElement_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkCollectionElement_vtkCollectionElement(NULL, args);
}
#endif

static void PyvtkCollectionElement_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkCollectionElement *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkCollectionElement_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkCollectionElement_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkCollectionElement", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkCollectionElement_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkCollectionElement_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkCollectionElement_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkCollectionElement_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkCollectionElement_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkCollectionElement(*static_cast<const vtkCollectionElement*>(obj));
    }
  return 0;
}

static PyObject *PyvtkCollectionElement_TypeNew(const char *)
{
  PyObject *cls = PyVTKSpecialType_New(
    &PyvtkCollectionElement_Type,
    PyvtkCollectionElement_Methods,
    PyvtkCollectionElement_vtkCollectionElement_Methods,
    &PyvtkCollectionElement_NewMethod,
    PyvtkCollectionElement_Doc(), &PyvtkCollectionElement_CCopy);

  return cls;
}

const char **PyvtkCollectionElement_Doc()
{
  static const char *docstring[] = {
    "vtkCollection - create and manipulate unsorted lists of objects\n\n",
    "vtkCollection is a general object for creating and manipulating lists\nof objects. The lists are unsorted and allow duplicate entries.\nvtkCollection also serves as a base class for lists of specific types\nof objects.\n\nSee Also:\n\nvtkActorCollection vtkAssemblyPaths vtkDataSetCollection\nvtkImplicitFunctionCollection vtkLightCollection\nvtkPolyDataCollection vtkRenderWindowCollection vtkRendererCollect",
    "ion\nvtkStructuredPointsCollection vtkTransformCollection\nvtkVolumeCollection\n\n",
    "V.vtkCollectionElement()\nC++: vtkCollectionElement()\n",
    NULL
  };

  return docstring;
}

extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkCollectionNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCollection_Doc();


static PyObject *
PyvtkCollection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkCollection::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCollection::NewInstance());

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
PyvtkCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkCollection *tempr = vtkCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->AddItem(temp0);
      }
    else
      {
      op->vtkCollection::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollection_InsertItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  int temp0;
  vtkObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->InsertItem(temp0, temp1);
      }
    else
      {
      op->vtkCollection::InsertItem(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollection_ReplaceItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  int temp0;
  vtkObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->ReplaceItem(temp0, temp1);
      }
    else
      {
      op->vtkCollection::ReplaceItem(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollection_RemoveItem_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveItem(temp0);
      }
    else
      {
      op->vtkCollection::RemoveItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCollection_RemoveItem_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->RemoveItem(temp0);
      }
    else
      {
      op->vtkCollection::RemoveItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCollection_RemoveItem_Methods[] = {
  {NULL, PyvtkCollection_RemoveItem_s1, METH_VARARGS,
   (char*)"@i"},
  {NULL, PyvtkCollection_RemoveItem_s2, METH_VARARGS,
   (char*)"@O *vtkObject"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCollection_RemoveItem(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCollection_RemoveItem_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveItem");
  return NULL;
}



static PyObject *
PyvtkCollection_RemoveAllItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllItems();
      }
    else
      {
      op->vtkCollection::RemoveAllItems();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollection_IsItemPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsItemPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    int tempr = (ap.IsBound() ?
      op->IsItemPresent(temp0) :
      op->vtkCollection::IsItemPresent(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollection_GetNumberOfItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfItems() :
      op->vtkCollection::GetNumberOfItems());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollection_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkCollection::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollection_GetNextItemAsObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItemAsObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetNextItemAsObject() :
      op->vtkCollection::GetNextItemAsObject());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollection_GetItemAsObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItemAsObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetItemAsObject(temp0) :
      op->vtkCollection::GetItemAsObject(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollection_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollection *op = static_cast<vtkCollection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkCollectionIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkCollection::NewIterator());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCollection_Methods[] = {
  {(char*)"GetClassName", PyvtkCollection_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCollection_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCollection_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkCollection\nC++: vtkCollection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCollection_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCollection\nC++: vtkCollection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddItem", PyvtkCollection_AddItem, METH_VARARGS,
   (char*)"V.AddItem(vtkObject)\nC++: void AddItem(vtkObject *)\n\nAdd an object to the list. Does not prevent duplicate entries.\n"},
  {(char*)"InsertItem", PyvtkCollection_InsertItem, METH_VARARGS,
   (char*)"V.InsertItem(int, vtkObject)\nC++: void InsertItem(int i, vtkObject *)\n\nInsert item into the list after the i'th item. Does not prevent\nduplicate entries. If i < 0 the item is placed at the top of the\nlist.\n"},
  {(char*)"ReplaceItem", PyvtkCollection_ReplaceItem, METH_VARARGS,
   (char*)"V.ReplaceItem(int, vtkObject)\nC++: void ReplaceItem(int i, vtkObject *)\n\nReplace the i'th item in the collection with a\n"},
  {(char*)"RemoveItem", PyvtkCollection_RemoveItem, METH_VARARGS,
   (char*)"V.RemoveItem(int)\nC++: void RemoveItem(int i)\nV.RemoveItem(vtkObject)\nC++: void RemoveItem(vtkObject *)\n\nRemove the i'th item in the list. Be careful if using this\nfunction during traversal of the list using GetNextItemAsObject\n(or GetNextItem in derived class).  The list WILL be shortened if\na valid index is given!  If this->Current is equal to the element\nbeing removed, have it point to then next element in the list.\n"},
  {(char*)"RemoveAllItems", PyvtkCollection_RemoveAllItems, METH_VARARGS,
   (char*)"V.RemoveAllItems()\nC++: void RemoveAllItems()\n\nRemove all objects from the list.\n"},
  {(char*)"IsItemPresent", PyvtkCollection_IsItemPresent, METH_VARARGS,
   (char*)"V.IsItemPresent(vtkObject) -> int\nC++: int IsItemPresent(vtkObject *a)\n\nSearch for an object and return location in list. If the return\nvalue is 0, the object was not found. If the object was found,\nthe location is the return value-1.\n"},
  {(char*)"GetNumberOfItems", PyvtkCollection_GetNumberOfItems, METH_VARARGS,
   (char*)"V.GetNumberOfItems() -> int\nC++: int GetNumberOfItems()\n\nReturn the number of objects in the list.\n"},
  {(char*)"InitTraversal", PyvtkCollection_InitTraversal, METH_VARARGS,
   (char*)"V.InitTraversal()\nC++: void InitTraversal()\n\nInitialize the traversal of the collection. This means the data\npointer is set at the beginning of the list.\n"},
  {(char*)"GetNextItemAsObject", PyvtkCollection_GetNextItemAsObject, METH_VARARGS,
   (char*)"V.GetNextItemAsObject() -> vtkObject\nC++: vtkObject *GetNextItemAsObject()\n\nGet the next item in the collection. NULL is returned if the\ncollection is exhausted.\n"},
  {(char*)"GetItemAsObject", PyvtkCollection_GetItemAsObject, METH_VARARGS,
   (char*)"V.GetItemAsObject(int) -> vtkObject\nC++: vtkObject *GetItemAsObject(int i)\n\nGet the i'th item in the collection. NULL is returned if i is out\nof range\n"},
  {(char*)"NewIterator", PyvtkCollection_NewIterator, METH_VARARGS,
   (char*)"V.NewIterator() -> vtkCollectionIterator\nC++: vtkCollectionIterator *NewIterator()\n\nGet an iterator to traverse the objects in this collection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCollection_StaticNew()
{
  return vtkCollection::New();
}

PyObject *PyVTKClass_vtkCollectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCollection_StaticNew,
    PyvtkCollection_Methods,
    "vtkCollection", modulename,
    NULL, NULL,
    PyvtkCollection_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCollection_Doc()
{
  static const char *docstring[] = {
    "vtkCollection - create and manipulate unsorted lists of objects\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCollection is a general object for creating and manipulating lists\nof objects. The lists are unsorted and allow duplicate entries.\nvtkCollection also serves as a base class for lists of specific types\nof objects.\n\nSee Also:\n\nvtkActorCollection vtkAssemblyPaths vtkDataSetCollection\nvtkImplicitFunctionCollection vtkLightCollection\nvtkPolyDataCollection vtkRenderWindowCollection vtkRendererCollect",
    "ion\nvtkStructuredPointsCollection vtkTransformCollection\nvtkVolumeCollection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCollection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyvtkCollectionElement_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCollectionElement", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyVTKClass_vtkCollectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCollection", o) != 0)
    {
    Py_DECREF(o);
    }

}

