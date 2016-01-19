// python wrapper for vtkExecutive
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkInformationVector.h"
#include "vtkExecutive.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkExecutive(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkExecutiveNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkExecutive_Doc();


static PyObject *
PyvtkExecutive_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkExecutive::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExecutive::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkExecutive *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExecutive::NewInstance());

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
PyvtkExecutive_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkExecutive *tempr = vtkExecutive::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_GetAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetAlgorithm() :
      op->vtkExecutive::GetAlgorithm());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_UpdateInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->UpdateInformation() :
      op->vtkExecutive::UpdateInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Update() :
      op->vtkExecutive::Update());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->Update(temp0) :
      op->vtkExecutive::Update(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkExecutive_Update_s1(self, args);
    case 1:
      return PyvtkExecutive_Update_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return NULL;
}



static PyObject *
PyvtkExecutive_GetNumberOfInputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInputPorts() :
      op->vtkExecutive::GetNumberOfInputPorts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_GetNumberOfOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfOutputPorts() :
      op->vtkExecutive::GetNumberOfOutputPorts());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_GetNumberOfInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInputConnections(temp0) :
      op->vtkExecutive::GetNumberOfInputConnections(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_GetOutputInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetOutputInformation(temp0) :
      op->vtkExecutive::GetOutputInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_GetOutputInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkInformationVector *tempr = (ap.IsBound() ?
      op->GetOutputInformation() :
      op->vtkExecutive::GetOutputInformation());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_GetOutputInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkExecutive_GetOutputInformation_s1(self, args);
    case 0:
      return PyvtkExecutive_GetOutputInformation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputInformation");
  return NULL;
}



static PyObject *
PyvtkExecutive_GetInputInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInputInformation(temp0, temp1) :
      op->vtkExecutive::GetInputInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_GetInputInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkInformationVector *tempr = (ap.IsBound() ?
      op->GetInputInformation(temp0) :
      op->vtkExecutive::GetInputInformation(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_GetInputInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkExecutive_GetInputInformation_s1(self, args);
    case 1:
      return PyvtkExecutive_GetInputInformation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInputInformation");
  return NULL;
}



static PyObject *
PyvtkExecutive_GetInputExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkExecutive *tempr = (ap.IsBound() ?
      op->GetInputExecutive(temp0, temp1) :
      op->vtkExecutive::GetInputExecutive(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_GetOutputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutputData(temp0) :
      op->vtkExecutive::GetOutputData(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_SetOutputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  vtkInformation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SetOutputData(temp0, temp1, temp2);
      }
    else
      {
      op->vtkExecutive::SetOutputData(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_SetOutputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetOutputData(temp0, temp1);
      }
    else
      {
      op->vtkExecutive::SetOutputData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExecutive_SetOutputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkExecutive_SetOutputData_s1(self, args);
    case 2:
      return PyvtkExecutive_SetOutputData_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputData");
  return NULL;
}



static PyObject *
PyvtkExecutive_GetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInputData(temp0, temp1) :
      op->vtkExecutive::GetInputData(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_SetSharedOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSharedOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutive *op = static_cast<vtkExecutive *>(vp);

  vtkInformationVector *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVector"))
    {
    if (ap.IsBound())
      {
      op->SetSharedOutputInformation(temp0);
      }
    else
      {
      op->vtkExecutive::SetSharedOutputInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_PRODUCER(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PRODUCER");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationExecutivePortKey *tempr = vtkExecutive::PRODUCER();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_CONSUMERS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CONSUMERS");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationExecutivePortVectorKey *tempr = vtkExecutive::CONSUMERS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_FROM_OUTPUT_PORT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FROM_OUTPUT_PORT");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkExecutive::FROM_OUTPUT_PORT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_ALGORITHM_BEFORE_FORWARD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ALGORITHM_BEFORE_FORWARD");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkExecutive::ALGORITHM_BEFORE_FORWARD();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_ALGORITHM_AFTER_FORWARD(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ALGORITHM_AFTER_FORWARD");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkExecutive::ALGORITHM_AFTER_FORWARD();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_ALGORITHM_DIRECTION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ALGORITHM_DIRECTION");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkExecutive::ALGORITHM_DIRECTION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_FORWARD_DIRECTION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FORWARD_DIRECTION");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationIntegerKey *tempr = vtkExecutive::FORWARD_DIRECTION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutive_KEYS_TO_COPY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "KEYS_TO_COPY");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkInformationKeyVectorKey *tempr = vtkExecutive::KEYS_TO_COPY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExecutive_Methods[] = {
  {(char*)"GetClassName", PyvtkExecutive_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExecutive_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExecutive_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkExecutive\nC++: vtkExecutive *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExecutive_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExecutive\nC++: vtkExecutive *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetAlgorithm", PyvtkExecutive_GetAlgorithm, METH_VARARGS,
   (char*)"V.GetAlgorithm() -> vtkAlgorithm\nC++: vtkAlgorithm *GetAlgorithm()\n\nGet the algorithm to which this executive has been assigned.\n"},
  {(char*)"UpdateInformation", PyvtkExecutive_UpdateInformation, METH_VARARGS,
   (char*)"V.UpdateInformation() -> int\nC++: virtual int UpdateInformation()\n\nBring the output information up to date.\n"},
  {(char*)"Update", PyvtkExecutive_Update, METH_VARARGS,
   (char*)"V.Update() -> int\nC++: virtual int Update()\nV.Update(int) -> int\nC++: virtual int Update(int port)\n\nBring the algorithm's outputs up-to-date.  Returns 1 for success\nand 0 for failure.\n"},
  {(char*)"GetNumberOfInputPorts", PyvtkExecutive_GetNumberOfInputPorts, METH_VARARGS,
   (char*)"V.GetNumberOfInputPorts() -> int\nC++: int GetNumberOfInputPorts()\n\nGet the number of input/output ports for the algorithm associated\nwith this executive.  Returns 0 if no algorithm is set.\n"},
  {(char*)"GetNumberOfOutputPorts", PyvtkExecutive_GetNumberOfOutputPorts, METH_VARARGS,
   (char*)"V.GetNumberOfOutputPorts() -> int\nC++: int GetNumberOfOutputPorts()\n\nGet the number of input/output ports for the algorithm associated\nwith this executive.  Returns 0 if no algorithm is set.\n"},
  {(char*)"GetNumberOfInputConnections", PyvtkExecutive_GetNumberOfInputConnections, METH_VARARGS,
   (char*)"V.GetNumberOfInputConnections(int) -> int\nC++: int GetNumberOfInputConnections(int port)\n\nGet the number of input connections on the given port.\n"},
  {(char*)"GetOutputInformation", PyvtkExecutive_GetOutputInformation, METH_VARARGS,
   (char*)"V.GetOutputInformation(int) -> vtkInformation\nC++: virtual vtkInformation *GetOutputInformation(int port)\nV.GetOutputInformation() -> vtkInformationVector\nC++: vtkInformationVector *GetOutputInformation()\n\nGet the pipeline information object for the given output port.\n"},
  {(char*)"GetInputInformation", PyvtkExecutive_GetInputInformation, METH_VARARGS,
   (char*)"V.GetInputInformation(int, int) -> vtkInformation\nC++: vtkInformation *GetInputInformation(int port, int connection)\nV.GetInputInformation(int) -> vtkInformationVector\nC++: vtkInformationVector *GetInputInformation(int port)\n\nGet the pipeline information for the given input connection.\n"},
  {(char*)"GetInputExecutive", PyvtkExecutive_GetInputExecutive, METH_VARARGS,
   (char*)"V.GetInputExecutive(int, int) -> vtkExecutive\nC++: vtkExecutive *GetInputExecutive(int port, int connection)\n\nGet the executive managing the given input connection.\n"},
  {(char*)"GetOutputData", PyvtkExecutive_GetOutputData, METH_VARARGS,
   (char*)"V.GetOutputData(int) -> vtkDataObject\nC++: virtual vtkDataObject *GetOutputData(int port)\n\nGet/Set the data object for an output port of the algorithm.\n"},
  {(char*)"SetOutputData", PyvtkExecutive_SetOutputData, METH_VARARGS,
   (char*)"V.SetOutputData(int, vtkDataObject, vtkInformation)\nC++: virtual void SetOutputData(int port, vtkDataObject *,\n    vtkInformation *info)\nV.SetOutputData(int, vtkDataObject)\nC++: virtual void SetOutputData(int port, vtkDataObject *)\n\nGet/Set the data object for an output port of the algorithm.\n"},
  {(char*)"GetInputData", PyvtkExecutive_GetInputData, METH_VARARGS,
   (char*)"V.GetInputData(int, int) -> vtkDataObject\nC++: virtual vtkDataObject *GetInputData(int port, int connection)\n\nGet the data object for an input port of the algorithm.\n"},
  {(char*)"SetSharedOutputInformation", PyvtkExecutive_SetSharedOutputInformation, METH_VARARGS,
   (char*)"V.SetSharedOutputInformation(vtkInformationVector)\nC++: void SetSharedOutputInformation(\n    vtkInformationVector *outInfoVec)\n\nSet a pointer to an outside instance of input or output\ninformation vectors.  No references are held to the given\nvectors, and setting this does not change the executive object\nmodification time.  This is a preliminary interface to use in\nimplementing filters with internal pipelines, and may change\nwithout notice when a future interface is created.\n"},
  {(char*)"PRODUCER", PyvtkExecutive_PRODUCER, METH_VARARGS | METH_STATIC,
   (char*)"V.PRODUCER() -> vtkInformationExecutivePortKey\nC++: static vtkInformationExecutivePortKey *PRODUCER()\n\nInformation key to store the executive/port number producing an\ninformation object.\n"},
  {(char*)"CONSUMERS", PyvtkExecutive_CONSUMERS, METH_VARARGS | METH_STATIC,
   (char*)"V.CONSUMERS() -> vtkInformationExecutivePortVectorKey\nC++: static vtkInformationExecutivePortVectorKey *CONSUMERS()\n\nInformation key to store the executive/port number pairs\nconsuming an information object.\n"},
  {(char*)"FROM_OUTPUT_PORT", PyvtkExecutive_FROM_OUTPUT_PORT, METH_VARARGS | METH_STATIC,
   (char*)"V.FROM_OUTPUT_PORT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FROM_OUTPUT_PORT()\n\nInformation key to store the output port number from which a\nrequest is made.\n"},
  {(char*)"ALGORITHM_BEFORE_FORWARD", PyvtkExecutive_ALGORITHM_BEFORE_FORWARD, METH_VARARGS | METH_STATIC,
   (char*)"V.ALGORITHM_BEFORE_FORWARD() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ALGORITHM_BEFORE_FORWARD()\n\nKeys to program vtkExecutive::ProcessRequest with the default\nbehavior for unknown requests.\n"},
  {(char*)"ALGORITHM_AFTER_FORWARD", PyvtkExecutive_ALGORITHM_AFTER_FORWARD, METH_VARARGS | METH_STATIC,
   (char*)"V.ALGORITHM_AFTER_FORWARD() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ALGORITHM_AFTER_FORWARD()\n\nKeys to program vtkExecutive::ProcessRequest with the default\nbehavior for unknown requests.\n"},
  {(char*)"ALGORITHM_DIRECTION", PyvtkExecutive_ALGORITHM_DIRECTION, METH_VARARGS | METH_STATIC,
   (char*)"V.ALGORITHM_DIRECTION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ALGORITHM_DIRECTION()\n\nKeys to program vtkExecutive::ProcessRequest with the default\nbehavior for unknown requests.\n"},
  {(char*)"FORWARD_DIRECTION", PyvtkExecutive_FORWARD_DIRECTION, METH_VARARGS | METH_STATIC,
   (char*)"V.FORWARD_DIRECTION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FORWARD_DIRECTION()\n\nKeys to program vtkExecutive::ProcessRequest with the default\nbehavior for unknown requests.\n"},
  {(char*)"KEYS_TO_COPY", PyvtkExecutive_KEYS_TO_COPY, METH_VARARGS | METH_STATIC,
   (char*)"V.KEYS_TO_COPY() -> vtkInformationKeyVectorKey\nC++: static vtkInformationKeyVectorKey *KEYS_TO_COPY()\n\nKeys to program vtkExecutive::ProcessRequest with the default\nbehavior for unknown requests.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkExecutiveNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkExecutive_Methods,
    "vtkExecutive", modulename,
    NULL, NULL,
    PyvtkExecutive_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 4; c++)
      {
      static const struct { const char *name; int value; }
        constants[4] = {
          { "RequestUpstream", vtkExecutive::RequestUpstream },
          { "RequestDownstream", vtkExecutive::RequestDownstream },
          { "BeforeForward", vtkExecutive::BeforeForward },
          { "AfterForward", vtkExecutive::AfterForward },
        };

      o = PyInt_FromLong(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkExecutive_Doc()
{
  static const char *docstring[] = {
    "vtkExecutive - Superclass for all pipeline executives in VTK.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkExecutive is the superclass for all pipeline executives in VTK. A\nVTK executive is responsible for controlling one instance of\nvtkAlgorithm.  A pipeline consists of one or more executives that\ncontrol data flow.  Every reader, source, writer, or data processing\nalgorithm in the pipeline is implemented in an instance of\nvtkAlgorithm.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExecutive(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExecutiveNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExecutive", o) != 0)
    {
    Py_DECREF(o);
    }

}

