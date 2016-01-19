// python wrapper for vtkXMLPVAnimationWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkXMLPVAnimationWriter.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkXMLPVAnimationWriter(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkXMLPVAnimationWriterNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkXMLPVDWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLPVDWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPVDWriterNew
#endif

static const char **PyvtkXMLPVAnimationWriter_Doc();


static PyObject *
PyvtkXMLPVAnimationWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVAnimationWriter *op = static_cast<vtkXMLPVAnimationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkXMLPVAnimationWriter::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPVAnimationWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVAnimationWriter *op = static_cast<vtkXMLPVAnimationWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPVAnimationWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPVAnimationWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVAnimationWriter *op = static_cast<vtkXMLPVAnimationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkXMLPVAnimationWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPVAnimationWriter::NewInstance());

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
PyvtkXMLPVAnimationWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkXMLPVAnimationWriter *tempr = vtkXMLPVAnimationWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPVAnimationWriter_AddRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVAnimationWriter *op = static_cast<vtkXMLPVAnimationWriter *>(vp);

  vtkAlgorithm *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddRepresentation(temp0, temp1);
      }
    else
      {
      op->vtkXMLPVAnimationWriter::AddRepresentation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPVAnimationWriter_RemoveAllRepresentations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRepresentations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVAnimationWriter *op = static_cast<vtkXMLPVAnimationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllRepresentations();
      }
    else
      {
      op->vtkXMLPVAnimationWriter::RemoveAllRepresentations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPVAnimationWriter_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVAnimationWriter *op = static_cast<vtkXMLPVAnimationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Start();
      }
    else
      {
      op->vtkXMLPVAnimationWriter::Start();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPVAnimationWriter_WriteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVAnimationWriter *op = static_cast<vtkXMLPVAnimationWriter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->WriteTime(temp0);
      }
    else
      {
      op->vtkXMLPVAnimationWriter::WriteTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPVAnimationWriter_Finish(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finish");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPVAnimationWriter *op = static_cast<vtkXMLPVAnimationWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finish();
      }
    else
      {
      op->vtkXMLPVAnimationWriter::Finish();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPVAnimationWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPVAnimationWriter_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPVAnimationWriter_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPVAnimationWriter_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkXMLPVAnimationWriter\nC++: vtkXMLPVAnimationWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPVAnimationWriter_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPVAnimationWriter\nC++: vtkXMLPVAnimationWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddRepresentation", PyvtkXMLPVAnimationWriter_AddRepresentation, METH_VARARGS,
   (char*)"V.AddRepresentation(vtkAlgorithm, string)\nC++: void AddRepresentation(vtkAlgorithm *, const char *groupname)\n\nAdd/Remove representations.\n"},
  {(char*)"RemoveAllRepresentations", PyvtkXMLPVAnimationWriter_RemoveAllRepresentations, METH_VARARGS,
   (char*)"V.RemoveAllRepresentations()\nC++: void RemoveAllRepresentations()\n\nAdd/Remove representations.\n"},
  {(char*)"Start", PyvtkXMLPVAnimationWriter_Start, METH_VARARGS,
   (char*)"V.Start()\nC++: void Start()\n\nStart a new animation with the current set of inputs.\n"},
  {(char*)"WriteTime", PyvtkXMLPVAnimationWriter_WriteTime, METH_VARARGS,
   (char*)"V.WriteTime(float)\nC++: void WriteTime(double time)\n\nWrite the current time step.\n"},
  {(char*)"Finish", PyvtkXMLPVAnimationWriter_Finish, METH_VARARGS,
   (char*)"V.Finish()\nC++: void Finish()\n\nFinish an animation by writing the collection file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPVAnimationWriter_StaticNew()
{
  return vtkXMLPVAnimationWriter::New();
}

PyObject *PyVTKClass_vtkXMLPVAnimationWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPVAnimationWriter_StaticNew,
    PyvtkXMLPVAnimationWriter_Methods,
    "vtkXMLPVAnimationWriter", modulename,
    NULL, NULL,
    PyvtkXMLPVAnimationWriter_Doc(),
    PyVTKClass_vtkXMLPVDWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPVAnimationWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPVAnimationWriter - Data writer for ParaView\n\n",
    "Superclass: vtkXMLPVDWriter\n\n",
    "vtkXMLPVAnimationWriter is used to save all parts of a current source\nto a file with pieces spread across ther server processes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPVAnimationWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPVAnimationWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPVAnimationWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

