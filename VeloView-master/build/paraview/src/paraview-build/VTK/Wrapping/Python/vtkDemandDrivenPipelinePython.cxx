// python wrapper for vtkDemandDrivenPipeline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkDemandDrivenPipeline.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkDemandDrivenPipeline(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkDemandDrivenPipelineNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkExecutiveNew
extern "C" { PyObject *PyVTKClass_vtkExecutiveNew(const char *); }
#define DECLARED_PyVTKClass_vtkExecutiveNew
#endif

static const char **PyvtkDemandDrivenPipeline_Doc();


static PyObject *
PyvtkDemandDrivenPipeline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkDemandDrivenPipeline::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDemandDrivenPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkDemandDrivenPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDemandDrivenPipeline::NewInstance());

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
PyvtkDemandDrivenPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkDemandDrivenPipeline *tempr = vtkDemandDrivenPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Update() :
      op->vtkDemandDrivenPipeline::Update());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDemandDrivenPipeline_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->Update(temp0) :
      op->vtkDemandDrivenPipeline::Update(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDemandDrivenPipeline_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDemandDrivenPipeline_Update_s1(self, args);
    case 1:
      return PyvtkDemandDrivenPipeline_Update_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return NULL;
}



static PyObject *
PyvtkDemandDrivenPipeline_GetPipelineMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPipelineMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    unsigned long tempr = (ap.IsBound() ?
      op->GetPipelineMTime() :
      op->vtkDemandDrivenPipeline::GetPipelineMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_SetReleaseDataFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReleaseDataFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->SetReleaseDataFlag(temp0, temp1) :
      op->vtkDemandDrivenPipeline::SetReleaseDataFlag(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_GetReleaseDataFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReleaseDataFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetReleaseDataFlag(temp0) :
      op->vtkDemandDrivenPipeline::GetReleaseDataFlag(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_UpdatePipelineMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipelineMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->UpdatePipelineMTime() :
      op->vtkDemandDrivenPipeline::UpdatePipelineMTime());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_UpdateDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->UpdateDataObject() :
      op->vtkDemandDrivenPipeline::UpdateDataObject());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_UpdateInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->UpdateInformation() :
      op->vtkDemandDrivenPipeline::UpdateInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_UpdateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDemandDrivenPipeline *op = static_cast<vtkDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->UpdateData(temp0) :
      op->vtkDemandDrivenPipeline::UpdateData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_REQUEST_DATA_OBJECT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_DATA_OBJECT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationRequestKey *tempr = vtkDemandDrivenPipeline::REQUEST_DATA_OBJECT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_REQUEST_INFORMATION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_INFORMATION");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationRequestKey *tempr = vtkDemandDrivenPipeline::REQUEST_INFORMATION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_REQUEST_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_DATA");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationRequestKey *tempr = vtkDemandDrivenPipeline::REQUEST_DATA();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_REQUEST_DATA_NOT_GENERATED(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_DATA_NOT_GENERATED");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationRequestKey *tempr = vtkDemandDrivenPipeline::REQUEST_DATA_NOT_GENERATED();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_RELEASE_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RELEASE_DATA");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDemandDrivenPipeline::RELEASE_DATA();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_DATA_NOT_GENERATED(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_NOT_GENERATED");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkDemandDrivenPipeline::DATA_NOT_GENERATED();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDemandDrivenPipeline_NewDataObject(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NewDataObject");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject *tempr = vtkDemandDrivenPipeline::NewDataObject(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDemandDrivenPipeline_Methods[] = {
  {(char*)"GetClassName", PyvtkDemandDrivenPipeline_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDemandDrivenPipeline_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDemandDrivenPipeline_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkDemandDrivenPipeline\nC++: vtkDemandDrivenPipeline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDemandDrivenPipeline_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDemandDrivenPipeline\nC++: vtkDemandDrivenPipeline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkDemandDrivenPipeline_Update, METH_VARARGS,
   (char*)"V.Update() -> int\nC++: virtual int Update()\nV.Update(int) -> int\nC++: virtual int Update(int port)\n\nBring the algorithm's outputs up-to-date.  Returns 1 for success\nand 0 for failure.\n"},
  {(char*)"GetPipelineMTime", PyvtkDemandDrivenPipeline_GetPipelineMTime, METH_VARARGS,
   (char*)"V.GetPipelineMTime() -> int\nC++: unsigned long GetPipelineMTime()\n\nGet the PipelineMTime for this exective.\n"},
  {(char*)"SetReleaseDataFlag", PyvtkDemandDrivenPipeline_SetReleaseDataFlag, METH_VARARGS,
   (char*)"V.SetReleaseDataFlag(int, int) -> int\nC++: virtual int SetReleaseDataFlag(int port, int n)\n\nSet whether the given output port releases data when it is\nconsumed.  Returns 1 if the the value changes and 0 otherwise.\n"},
  {(char*)"GetReleaseDataFlag", PyvtkDemandDrivenPipeline_GetReleaseDataFlag, METH_VARARGS,
   (char*)"V.GetReleaseDataFlag(int) -> int\nC++: virtual int GetReleaseDataFlag(int port)\n\nGet whether the given output port releases data when it is\nconsumed.\n"},
  {(char*)"UpdatePipelineMTime", PyvtkDemandDrivenPipeline_UpdatePipelineMTime, METH_VARARGS,
   (char*)"V.UpdatePipelineMTime() -> int\nC++: virtual int UpdatePipelineMTime()\n\nBring the PipelineMTime up to date.\n"},
  {(char*)"UpdateDataObject", PyvtkDemandDrivenPipeline_UpdateDataObject, METH_VARARGS,
   (char*)"V.UpdateDataObject() -> int\nC++: virtual int UpdateDataObject()\n\nBring the output data object's existence up to date.  This does\nnot actually produce data, but does create the data object that\nwill store data produced during the UpdateData step.\n"},
  {(char*)"UpdateInformation", PyvtkDemandDrivenPipeline_UpdateInformation, METH_VARARGS,
   (char*)"V.UpdateInformation() -> int\nC++: virtual int UpdateInformation()\n\nBring the output information up to date.\n"},
  {(char*)"UpdateData", PyvtkDemandDrivenPipeline_UpdateData, METH_VARARGS,
   (char*)"V.UpdateData(int) -> int\nC++: virtual int UpdateData(int outputPort)\n\nBring the output data up to date.  This should be called only\nwhen information is up to date.  Use the Update method if it is\nnot known that the information is up to date.\n"},
  {(char*)"REQUEST_DATA_OBJECT", PyvtkDemandDrivenPipeline_REQUEST_DATA_OBJECT, METH_VARARGS | METH_STATIC,
   (char*)"V.REQUEST_DATA_OBJECT() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_DATA_OBJECT()\n\nKey defining a request to make sure the output data objects\nexist.@ingroup InformationKeys\n"},
  {(char*)"REQUEST_INFORMATION", PyvtkDemandDrivenPipeline_REQUEST_INFORMATION, METH_VARARGS | METH_STATIC,
   (char*)"V.REQUEST_INFORMATION() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_INFORMATION()\n\nKey defining a request to make sure the output information is up\nto date.@ingroup InformationKeys\n"},
  {(char*)"REQUEST_DATA", PyvtkDemandDrivenPipeline_REQUEST_DATA, METH_VARARGS | METH_STATIC,
   (char*)"V.REQUEST_DATA() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_DATA()\n\nKey defining a request to make sure the output data are up to\ndate.@ingroup InformationKeys\n"},
  {(char*)"REQUEST_DATA_NOT_GENERATED", PyvtkDemandDrivenPipeline_REQUEST_DATA_NOT_GENERATED, METH_VARARGS | METH_STATIC,
   (char*)"V.REQUEST_DATA_NOT_GENERATED() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_DATA_NOT_GENERATED()\n\nKey defining a request to mark outputs that will NOT be generated\nduring a REQUEST_DATA.@ingroup InformationKeys\n"},
  {(char*)"RELEASE_DATA", PyvtkDemandDrivenPipeline_RELEASE_DATA, METH_VARARGS | METH_STATIC,
   (char*)"V.RELEASE_DATA() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *RELEASE_DATA()\n\nKey to specify in pipeline information the request that data be\nreleased after it is used.@ingroup InformationKeys\n"},
  {(char*)"DATA_NOT_GENERATED", PyvtkDemandDrivenPipeline_DATA_NOT_GENERATED, METH_VARARGS | METH_STATIC,
   (char*)"V.DATA_NOT_GENERATED() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_NOT_GENERATED()\n\nKey to store a mark for an output that will not be generated.\nAlgorithms use this to tell the executive that they will not\ngenerate certain outputs for a REQUEST_DATA.@ingroup\nInformationKeys\n"},
  {(char*)"NewDataObject", PyvtkDemandDrivenPipeline_NewDataObject, METH_VARARGS | METH_STATIC,
   (char*)"V.NewDataObject(string) -> vtkDataObject\nC++: static vtkDataObject *NewDataObject(const char *type)\n\nCreate (New) and return a data object of the given type. This is\nhere for backwards compatibility. Use\nvtkDataObjectTypes::NewDataObject() instead.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDemandDrivenPipeline_StaticNew()
{
  return vtkDemandDrivenPipeline::New();
}

PyObject *PyVTKClass_vtkDemandDrivenPipelineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDemandDrivenPipeline_StaticNew,
    PyvtkDemandDrivenPipeline_Methods,
    "vtkDemandDrivenPipeline", modulename,
    NULL, NULL,
    PyvtkDemandDrivenPipeline_Doc(),
    PyVTKClass_vtkExecutiveNew(modulename));
  return cls;
}

const char **PyvtkDemandDrivenPipeline_Doc()
{
  static const char *docstring[] = {
    "vtkDemandDrivenPipeline - Executive supporting on-demand execution.\n\n",
    "Superclass: vtkExecutive\n\n",
    "vtkDemandDrivenPipeline is an executive that will execute an\nalgorithm only when its outputs are out-of-date with respect to its\ninputs.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDemandDrivenPipeline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDemandDrivenPipelineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDemandDrivenPipeline", o) != 0)
    {
    Py_DECREF(o);
    }

}

