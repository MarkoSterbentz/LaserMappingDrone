// python wrapper for vtkSubGroup
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSubGroup.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSubGroup(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSubGroupNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSubGroup_Doc();


static PyObject *
PyvtkSubGroup_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSubGroup::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSubGroup::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSubGroup *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSubGroup::NewInstance());

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
PyvtkSubGroup_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSubGroup *tempr = vtkSubGroup::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkCommunicator *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkCommunicator"))
    {
    int tempr = (ap.IsBound() ?
      op->Initialize(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSubGroup::Initialize(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_Gather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::Gather(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkSubGroup_Gather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::Gather(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSubGroup_Gather_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  float *temp0 = NULL;
  float *save0 = NULL;
  float small0[8];
  int size0 = 0;
  float *temp1 = NULL;
  float *save1 = NULL;
  float small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new float[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new float[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::Gather(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkSubGroup_Gather_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType *save0 = NULL;
  vtkIdType small0[8];
  int size0 = 0;
  vtkIdType *temp1 = NULL;
  vtkIdType *save1 = NULL;
  vtkIdType small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new vtkIdType[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::Gather(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyMethodDef PyvtkSubGroup_Gather_Methods[] = {
  {NULL, PyvtkSubGroup_Gather_s1, METH_VARARGS,
   (char*)"@OOii *i *i"},
  {NULL, PyvtkSubGroup_Gather_s2, METH_VARARGS,
   (char*)"@zzii"},
  {NULL, PyvtkSubGroup_Gather_s3, METH_VARARGS,
   (char*)"@OOii *f *f"},
  {NULL, PyvtkSubGroup_Gather_s4, METH_VARARGS,
   (char*)"@OOii *L *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSubGroup_Gather(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSubGroup_Gather_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Gather");
  return NULL;
}



static PyObject *
PyvtkSubGroup_Broadcast_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkSubGroup::Broadcast(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkSubGroup_Broadcast_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkSubGroup::Broadcast(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkSubGroup_Broadcast_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  char *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkSubGroup::Broadcast(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSubGroup_Broadcast_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  vtkIdType *temp0 = NULL;
  vtkIdType *save0 = NULL;
  vtkIdType small0[8];
  int size0 = 0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new vtkIdType[2*size0];
      }
    save0 = &temp0[size0];
    }

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkSubGroup::Broadcast(temp0, temp1, temp2));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyMethodDef PyvtkSubGroup_Broadcast_Methods[] = {
  {NULL, PyvtkSubGroup_Broadcast_s1, METH_VARARGS,
   (char*)"@Oii *d"},
  {NULL, PyvtkSubGroup_Broadcast_s2, METH_VARARGS,
   (char*)"@Oii *i"},
  {NULL, PyvtkSubGroup_Broadcast_s3, METH_VARARGS,
   (char*)"@zii"},
  {NULL, PyvtkSubGroup_Broadcast_s4, METH_VARARGS,
   (char*)"@Oii *L"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSubGroup_Broadcast(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSubGroup_Broadcast_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Broadcast");
  return NULL;
}



static PyObject *
PyvtkSubGroup_ReduceSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReduceSum(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::ReduceSum(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}


static PyObject *
PyvtkSubGroup_ReduceMax_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReduceMax(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::ReduceMax(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkSubGroup_ReduceMax_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReduceMax(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::ReduceMax(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyMethodDef PyvtkSubGroup_ReduceMax_Methods[] = {
  {NULL, PyvtkSubGroup_ReduceMax_s1, METH_VARARGS,
   (char*)"@OOii *d *d"},
  {NULL, PyvtkSubGroup_ReduceMax_s2, METH_VARARGS,
   (char*)"@OOii *i *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSubGroup_ReduceMax(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSubGroup_ReduceMax_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ReduceMax");
  return NULL;
}



static PyObject *
PyvtkSubGroup_ReduceMin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  double *temp0 = NULL;
  double *save0 = NULL;
  double small0[8];
  int size0 = 0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReduceMin(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::ReduceMin(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkSubGroup_ReduceMin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  int *temp0 = NULL;
  int *save0 = NULL;
  int small0[8];
  int size0 = 0;
  int *temp1 = NULL;
  int *save1 = NULL;
  int small1[8];
  int size1 = 0;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op)
    {
    size0 = ap.GetArgSize(0);
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new int[2*size0];
      }
    save0 = &temp0[size0];
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new int[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReduceMin(temp0, temp1, temp2, temp3) :
      op->vtkSubGroup::ReduceMin(temp0, temp1, temp2, temp3));

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }
  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyMethodDef PyvtkSubGroup_ReduceMin_Methods[] = {
  {NULL, PyvtkSubGroup_ReduceMin_s1, METH_VARARGS,
   (char*)"@OOii *d *d"},
  {NULL, PyvtkSubGroup_ReduceMin_s2, METH_VARARGS,
   (char*)"@OOii *i *i"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSubGroup_ReduceMin(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSubGroup_ReduceMin_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ReduceMin");
  return NULL;
}



static PyObject *
PyvtkSubGroup_setGatherPattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "setGatherPattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->setGatherPattern(temp0, temp1);
      }
    else
      {
      op->vtkSubGroup::setGatherPattern(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_getLocalRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "getLocalRank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->getLocalRank(temp0) :
      op->vtkSubGroup::getLocalRank(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->Barrier() :
      op->vtkSubGroup::Barrier());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_PrintSubGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintSubGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrintSubGroup();
      }
    else
      {
      op->vtkSubGroup::PrintSubGroup();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSubGroup_Methods[] = {
  {(char*)"GetClassName", PyvtkSubGroup_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSubGroup_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSubGroup_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSubGroup\nC++: vtkSubGroup *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSubGroup_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSubGroup\nC++: vtkSubGroup *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkSubGroup_Initialize, METH_VARARGS,
   (char*)"V.Initialize(int, int, int, int, vtkCommunicator) -> int\nC++: int Initialize(int p0, int p1, int me, int tag,\n    vtkCommunicator *c)\n\nInitialize a communication subgroup for the processes\n   with rank p0 through p1 of the given communicator.  (So\n   vtkSubGroup is limited to working with subgroups that\n   are identified by a contiguous set of rank IDs.)\n   The third argument is the callers rank, which must\n   in the range from p0 through p1.\n"},
  {(char*)"Gather", PyvtkSubGroup_Gather, METH_VARARGS,
   (char*)"V.Gather([int, ...], [int, ...], int, int) -> int\nC++: int Gather(int *data, int *to, int length, int root)\nV.Gather(string, string, int, int) -> int\nC++: int Gather(char *data, char *to, int length, int root)\nV.Gather([float, ...], [float, ...], int, int) -> int\nC++: int Gather(float *data, float *to, int length, int root)\nV.Gather([int, ...], [int, ...], int, int) -> int\nC++: int Gather(vtkIdType *data, vtkIdType *to, int length,\n    int root)\n\n"},
  {(char*)"Broadcast", PyvtkSubGroup_Broadcast, METH_VARARGS,
   (char*)"V.Broadcast([float, ...], int, int) -> int\nC++: int Broadcast(double *data, int length, int root)\nV.Broadcast([int, ...], int, int) -> int\nC++: int Broadcast(int *data, int length, int root)\nV.Broadcast(string, int, int) -> int\nC++: int Broadcast(char *data, int length, int root)\nV.Broadcast([int, ...], int, int) -> int\nC++: int Broadcast(vtkIdType *data, int length, int root)\n\n"},
  {(char*)"ReduceSum", PyvtkSubGroup_ReduceSum, METH_VARARGS,
   (char*)"V.ReduceSum([int, ...], [int, ...], int, int) -> int\nC++: int ReduceSum(int *data, int *to, int length, int root)\n\n"},
  {(char*)"ReduceMax", PyvtkSubGroup_ReduceMax, METH_VARARGS,
   (char*)"V.ReduceMax([float, ...], [float, ...], int, int) -> int\nC++: int ReduceMax(double *data, double *to, int length, int root)\nV.ReduceMax([int, ...], [int, ...], int, int) -> int\nC++: int ReduceMax(int *data, int *to, int length, int root)\n\n"},
  {(char*)"ReduceMin", PyvtkSubGroup_ReduceMin, METH_VARARGS,
   (char*)"V.ReduceMin([float, ...], [float, ...], int, int) -> int\nC++: int ReduceMin(double *data, double *to, int length, int root)\nV.ReduceMin([int, ...], [int, ...], int, int) -> int\nC++: int ReduceMin(int *data, int *to, int length, int root)\n\n"},
  {(char*)"setGatherPattern", PyvtkSubGroup_setGatherPattern, METH_VARARGS,
   (char*)"V.setGatherPattern(int, int)\nC++: void setGatherPattern(int root, int length)\n\n"},
  {(char*)"getLocalRank", PyvtkSubGroup_getLocalRank, METH_VARARGS,
   (char*)"V.getLocalRank(int) -> int\nC++: int getLocalRank(int processID)\n\n"},
  {(char*)"Barrier", PyvtkSubGroup_Barrier, METH_VARARGS,
   (char*)"V.Barrier() -> int\nC++: int Barrier()\n\n"},
  {(char*)"PrintSubGroup", PyvtkSubGroup_PrintSubGroup, METH_VARARGS,
   (char*)"V.PrintSubGroup()\nC++: void PrintSubGroup()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSubGroup_StaticNew()
{
  return vtkSubGroup::New();
}

PyObject *PyVTKClass_vtkSubGroupNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSubGroup_StaticNew,
    PyvtkSubGroup_Methods,
    "vtkSubGroup", modulename,
    NULL, NULL,
    PyvtkSubGroup_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    for (int c = 0; c < 3; c++)
      {
      static const struct { const char *name; int value; }
        constants[3] = {
          { "MINOP", vtkSubGroup::MINOP },
          { "MAXOP", vtkSubGroup::MAXOP },
          { "SUMOP", vtkSubGroup::SUMOP },
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

const char **PyvtkSubGroup_Doc()
{
  static const char *docstring[] = {
    "vtkSubGroup - scalable collective communication for a\n\n",
    "Superclass: vtkObject\n\n",
    "This class provides scalable broadcast, reduce, etc. using\n    only a vtkMultiProcessController. It does not require MPI.\n    Users are vtkPKdTree and vtkDistributedDataFilter.\n\nNote:\n\nThis class will be deprecated soon.  Instead of using this class, use\nthe collective and subgrouping operations now built into\nvtkMultiProcessController.  The only reason this class is not\ndeprecated already is beca",
    "use vtkPKdTree relies heavily on this class\nin ways that are not easy to work around.  Since vtkPKdTree is due\nfor a major overhaul anyway, we are leaving things the way they are\nfor now.\n\nSee Also:\n\n\n     vtkPKdTree vtkDistributedDataFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSubGroup(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSubGroupNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSubGroup", o) != 0)
    {
    Py_DECREF(o);
    }

}

