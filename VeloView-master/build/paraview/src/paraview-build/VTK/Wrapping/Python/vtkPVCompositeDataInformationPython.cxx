// python wrapper for vtkPVCompositeDataInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkPVCompositeDataInformation.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkPVCompositeDataInformation(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkPVCompositeDataInformationNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkPVInformationNew
extern "C" { PyObject *PyVTKClass_vtkPVInformationNew(const char *); }
#define DECLARED_PyVTKClass_vtkPVInformationNew
#endif

static const char **PyvtkPVCompositeDataInformation_Doc();


static PyObject *
PyvtkPVCompositeDataInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkPVCompositeDataInformation::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCompositeDataInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkPVCompositeDataInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCompositeDataInformation::NewInstance());

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
PyvtkPVCompositeDataInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkPVCompositeDataInformation *tempr = vtkPVCompositeDataInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    if (ap.IsBound())
      {
      op->CopyFromObject(temp0);
      }
    else
      {
      op->vtkPVCompositeDataInformation::CopyFromObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  vtkPVInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
    {
    if (ap.IsBound())
      {
      op->AddInformation(temp0);
      }
    else
      {
      op->vtkPVCompositeDataInformation::AddInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_CopyToStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyToStream(temp0);
      }
    else
      {
      op->vtkPVCompositeDataInformation::CopyToStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_CopyFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  vtkClientServerStream *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientServerStream"))
    {
    if (ap.IsBound())
      {
      op->CopyFromStream(temp0);
      }
    else
      {
      op->vtkPVCompositeDataInformation::CopyFromStream(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPVCompositeDataInformation::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfChildren() :
      op->vtkPVCompositeDataInformation::GetNumberOfChildren());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_GetDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetDataInformation(temp0) :
      op->vtkPVCompositeDataInformation::GetDataInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetName(temp0) :
      op->vtkPVCompositeDataInformation::GetName(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_GetDataIsMultiPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataIsMultiPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataIsMultiPiece() :
      op->vtkPVCompositeDataInformation::GetDataIsMultiPiece());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPVCompositeDataInformation_GetDataIsComposite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataIsComposite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataInformation *op = static_cast<vtkPVCompositeDataInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetDataIsComposite() :
      op->vtkPVCompositeDataInformation::GetDataIsComposite());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPVCompositeDataInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkPVCompositeDataInformation_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPVCompositeDataInformation_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPVCompositeDataInformation_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkPVCompositeDataInformation\nC++: vtkPVCompositeDataInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPVCompositeDataInformation_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPVCompositeDataInformation\nC++: vtkPVCompositeDataInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CopyFromObject", PyvtkPVCompositeDataInformation_CopyFromObject, METH_VARARGS,
   (char*)"V.CopyFromObject(vtkObject)\nC++: virtual void CopyFromObject(vtkObject *)\n\nTransfer information about a single object into this object.\n"},
  {(char*)"AddInformation", PyvtkPVCompositeDataInformation_AddInformation, METH_VARARGS,
   (char*)"V.AddInformation(vtkPVInformation)\nC++: virtual void AddInformation(vtkPVInformation *)\n\nMerge another information object.\n"},
  {(char*)"CopyToStream", PyvtkPVCompositeDataInformation_CopyToStream, METH_VARARGS,
   (char*)"V.CopyToStream(vtkClientServerStream)\nC++: virtual void CopyToStream(vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"CopyFromStream", PyvtkPVCompositeDataInformation_CopyFromStream, METH_VARARGS,
   (char*)"V.CopyFromStream(vtkClientServerStream)\nC++: virtual void CopyFromStream(const vtkClientServerStream *)\n\nManage a serialized version of the information.\n"},
  {(char*)"Initialize", PyvtkPVCompositeDataInformation_Initialize, METH_VARARGS,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nClears all internal data structures.\n"},
  {(char*)"GetNumberOfChildren", PyvtkPVCompositeDataInformation_GetNumberOfChildren, METH_VARARGS,
   (char*)"V.GetNumberOfChildren() -> int\nC++: unsigned int GetNumberOfChildren()\n\nReturns the number of children.\n"},
  {(char*)"GetDataInformation", PyvtkPVCompositeDataInformation_GetDataInformation, METH_VARARGS,
   (char*)"V.GetDataInformation(int) -> vtkPVDataInformation\nC++: vtkPVDataInformation *GetDataInformation(unsigned int idx)\n\nReturns the information for the data object at the given index.\nIf the child is a composite dataset itself, then the return\nvtkPVDataInformation will have the CompositeDataInformation set\nappropriately.\n"},
  {(char*)"GetName", PyvtkPVCompositeDataInformation_GetName, METH_VARARGS,
   (char*)"V.GetName(int) -> string\nC++: const char *GetName(unsigned int idx)\n\nReturn the name of the child node at the given index, if any.\nThis is the value for the key vtkCompositeDataSet::NAME() in the\nmeta-data associated with the node.\n"},
  {(char*)"GetDataIsMultiPiece", PyvtkPVCompositeDataInformation_GetDataIsMultiPiece, METH_VARARGS,
   (char*)"V.GetDataIsMultiPiece() -> int\nC++: int GetDataIsMultiPiece()\n\nGet/Set if the data is multipiece. If so, then\nGetDataInformation() will always return NULL. For\nvtkMultiblockDataSet, we don't collect information about\nindividual pieces. One can however, query the number of pieces by\nusing GetNumberOfChildren().\n"},
  {(char*)"GetDataIsComposite", PyvtkPVCompositeDataInformation_GetDataIsComposite, METH_VARARGS,
   (char*)"V.GetDataIsComposite() -> int\nC++: int GetDataIsComposite()\n\nReturns if the dataset is a composite dataset.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPVCompositeDataInformation_StaticNew()
{
  return vtkPVCompositeDataInformation::New();
}

PyObject *PyVTKClass_vtkPVCompositeDataInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPVCompositeDataInformation_StaticNew,
    PyvtkPVCompositeDataInformation_Methods,
    "vtkPVCompositeDataInformation", modulename,
    NULL, NULL,
    PyvtkPVCompositeDataInformation_Doc(),
    PyVTKClass_vtkPVInformationNew(modulename));
  return cls;
}

const char **PyvtkPVCompositeDataInformation_Doc()
{
  static const char *docstring[] = {
    "vtkPVCompositeDataInformation - Light object for holding composite\ndata information.\n\n",
    "Superclass: vtkPVInformation\n\n",
    "vtkPVCompositeDataInformation is used to copy the meta information of\na composite dataset from server to client. It holds a\nvtkPVDataInformation for each block of the composite dataset.\n\nSee Also:\n\nvtkHierarchicalBoxDataSet vtkPVDataInformation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPVCompositeDataInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPVCompositeDataInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPVCompositeDataInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

