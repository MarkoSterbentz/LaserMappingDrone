// python wrapper for vtkSelectionSerializer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSelectionSerializer.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSelectionSerializer(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSelectionSerializerNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSelectionSerializer_Doc();


static PyObject *
PyvtkSelectionSerializer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSerializer *op = static_cast<vtkSelectionSerializer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSelectionSerializer::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSerializer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSerializer *op = static_cast<vtkSelectionSerializer *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectionSerializer::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSerializer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSerializer *op = static_cast<vtkSelectionSerializer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSelectionSerializer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectionSerializer::NewInstance());

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
PyvtkSelectionSerializer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSelectionSerializer *tempr = vtkSelectionSerializer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSerializer_PrintXML(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PrintXML");

  int temp0;
  vtkSelection *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSelection"))
    {
    vtkSelectionSerializer::PrintXML(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSerializer_Parse(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Parse");

  char *temp0 = NULL;
  vtkSelection *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSelection"))
    {
    vtkSelectionSerializer::Parse(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionSerializer_ORIGINAL_SOURCE_ID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ORIGINAL_SOURCE_ID");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkSelectionSerializer::ORIGINAL_SOURCE_ID();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSelectionSerializer_Methods[] = {
  {(char*)"GetClassName", PyvtkSelectionSerializer_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSelectionSerializer_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSelectionSerializer_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSelectionSerializer\nC++: vtkSelectionSerializer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSelectionSerializer_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSelectionSerializer\nC++: vtkSelectionSerializer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PrintXML", PyvtkSelectionSerializer_PrintXML, METH_VARARGS | METH_STATIC,
   (char*)"V.PrintXML(int, vtkSelection)\nC++: static void PrintXML(int printData, vtkSelection *selection)\n\nSerialize the selection tree to a stream as xml. For now, only\nkeys of type vtkInformationIntegerKey are supported.\n"},
  {(char*)"Parse", PyvtkSelectionSerializer_Parse, METH_VARARGS | METH_STATIC,
   (char*)"V.Parse(string, vtkSelection)\nC++: static void Parse(const char *xml, vtkSelection *root)\n\nParse an xml string to create a new selection tree. Currently,\nthis supports only a subset of properties: CONTENT_TYPE,\nSOURCE_ID, PROP_ID, PROCESS_ID\n"},
  {(char*)"ORIGINAL_SOURCE_ID", PyvtkSelectionSerializer_ORIGINAL_SOURCE_ID, METH_VARARGS | METH_STATIC,
   (char*)"V.ORIGINAL_SOURCE_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ORIGINAL_SOURCE_ID()\n\nID of the dataset or algorithm that the selection belongs to.\nWhat ID means is application specific.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSelectionSerializer_StaticNew()
{
  return vtkSelectionSerializer::New();
}

PyObject *PyVTKClass_vtkSelectionSerializerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSelectionSerializer_StaticNew,
    PyvtkSelectionSerializer_Methods,
    "vtkSelectionSerializer", modulename,
    NULL, NULL,
    PyvtkSelectionSerializer_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSelectionSerializer_Doc()
{
  static const char *docstring[] = {
    "vtkSelectionSerializer - Serialize/deserialize vtkSelection to/from\nxml\n\n",
    "Superclass: vtkObject\n\n",
    "vtkSelectionSerializer is a helper class that can\nserialize/deserialize vtkSelection to/from xml. Currently, it\nsupports only a subset of properties: CONTENT_TYPE, SOURCE_ID,\nPROP_ID, PROCESS_ID, ORIGINAL_SOURCE_ID\n\nSee Also:\n\nvtkSelection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSelectionSerializer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSelectionSerializerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSelectionSerializer", o) != 0)
    {
    Py_DECREF(o);
    }

}

