// python wrapper for vtkTesting
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkTesting.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkTesting(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkTestingNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTesting_Doc();

#ifndef DECLARED_PyvtkTesting_ReturnValue_Type
extern VTK_PYTHON_EXPORT PyTypeObject PyvtkTesting_ReturnValue_Type;
#define DECLARED_PyvtkTesting_ReturnValue_Type
#endif

PyTypeObject PyvtkTesting_ReturnValue_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"ReturnValue", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  0, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  0, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  0, // tp_hash
  0, // tp_call
  0, // tp_str
  0, // tp_getattro
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
  0, // tp_iter
  0, // tp_iternext
  0, // tp_methods
  0, // tp_members
  0, // tp_getset
  &PyInt_Type, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  0, // tp_new
  PyObject_Del, // tp_free
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

PyObject *PyvtkTesting_ReturnValue_FromEnum(int val)
{
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkTesting_ReturnValue_Type);
  self->ob_ival = val;
  return (PyObject *)self;
}


static PyObject *
PyvtkTesting_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkTesting::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTesting::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTesting *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTesting::NewInstance());

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
PyvtkTesting_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkTesting *tempr = vtkTesting::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_SetFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrontBuffer(temp0);
      }
    else
      {
      op->vtkTesting::SetFrontBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetFrontBufferMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontBufferMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFrontBufferMinValue() :
      op->vtkTesting::GetFrontBufferMinValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetFrontBufferMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontBufferMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFrontBufferMaxValue() :
      op->vtkTesting::GetFrontBufferMaxValue());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_FrontBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrontBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FrontBufferOn();
      }
    else
      {
      op->vtkTesting::FrontBufferOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_FrontBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrontBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FrontBufferOff();
      }
    else
      {
      op->vtkTesting::FrontBufferOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetFrontBuffer() :
      op->vtkTesting::GetFrontBuffer());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_RegressionTest_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegressionTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->RegressionTest(temp0) :
      op->vtkTesting::RegressionTest(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTesting_RegressionTest_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegressionTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  std::string temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->RegressionTest(temp0, temp1) :
      op->vtkTesting::RegressionTest(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTesting_RegressionTest_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegressionTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  vtkAlgorithm *temp0 = NULL;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm") &&
      ap.GetValue(temp1))
    {
    int tempr = (ap.IsBound() ?
      op->RegressionTest(temp0, temp1) :
      op->vtkTesting::RegressionTest(temp0, temp1));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTesting_RegressionTest_Methods[] = {
  {NULL, PyvtkTesting_RegressionTest_s2, METH_VARARGS,
   (char*)"@sd"},
  {NULL, PyvtkTesting_RegressionTest_s3, METH_VARARGS,
   (char*)"@Od *vtkAlgorithm"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTesting_RegressionTest(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTesting_RegressionTest_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkTesting_RegressionTest_s1(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RegressionTest");
  return NULL;
}



static PyObject *
PyvtkTesting_CompareAverageOfL2Norm_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompareAverageOfL2Norm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  vtkDataSet *temp0 = NULL;
  vtkDataSet *temp1 = NULL;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->CompareAverageOfL2Norm(temp0, temp1, temp2) :
      op->vtkTesting::CompareAverageOfL2Norm(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTesting_CompareAverageOfL2Norm_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompareAverageOfL2Norm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
    {
    int tempr = (ap.IsBound() ?
      op->CompareAverageOfL2Norm(temp0, temp1, temp2) :
      op->vtkTesting::CompareAverageOfL2Norm(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTesting_CompareAverageOfL2Norm_Methods[] = {
  {NULL, PyvtkTesting_CompareAverageOfL2Norm_s1, METH_VARARGS,
   (char*)"@OOd *vtkDataSet *vtkDataSet"},
  {NULL, PyvtkTesting_CompareAverageOfL2Norm_s2, METH_VARARGS,
   (char*)"@OOd *vtkDataArray *vtkDataArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTesting_CompareAverageOfL2Norm(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTesting_CompareAverageOfL2Norm_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CompareAverageOfL2Norm");
  return NULL;
}



static PyObject *
PyvtkTesting_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetRenderWindow(temp0);
      }
    else
      {
      op->vtkTesting::SetRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkTesting::GetRenderWindow());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_SetValidImageFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidImageFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValidImageFileName(temp0);
      }
    else
      {
      op->vtkTesting::SetValidImageFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetValidImageFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidImageFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetValidImageFileName() :
      op->vtkTesting::GetValidImageFileName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetImageDifference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDifference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetImageDifference() :
      op->vtkTesting::GetImageDifference());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_AddArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddArgument(temp0);
      }
    else
      {
      op->vtkTesting::AddArgument(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    char *tempr = (ap.IsBound() ?
      op->GetArgument(temp0) :
      op->vtkTesting::GetArgument(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_CleanArguments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanArguments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CleanArguments();
      }
    else
      {
      op->vtkTesting::CleanArguments();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetDataRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetDataRoot() :
      op->vtkTesting::GetDataRoot());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_SetDataRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataRoot(temp0);
      }
    else
      {
      op->vtkTesting::SetDataRoot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetTempDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTempDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetTempDirectory() :
      op->vtkTesting::GetTempDirectory());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_SetTempDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTempDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTempDirectory(temp0);
      }
    else
      {
      op->vtkTesting::SetTempDirectory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_IsValidImageSpecified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValidImageSpecified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsValidImageSpecified() :
      op->vtkTesting::IsValidImageSpecified());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_IsInteractiveModeSpecified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInteractiveModeSpecified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->IsInteractiveModeSpecified() :
      op->vtkTesting::IsInteractiveModeSpecified());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_IsFlagSpecified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFlagSpecified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsFlagSpecified(temp0) :
      op->vtkTesting::IsFlagSpecified(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_SetBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBorderOffset(temp0);
      }
    else
      {
      op->vtkTesting::SetBorderOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetBorderOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetBorderOffset() :
      op->vtkTesting::GetBorderOffset());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_SetVerbose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerbose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVerbose(temp0);
      }
    else
      {
      op->vtkTesting::SetVerbose(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTesting_GetVerbose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerbose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTesting *op = static_cast<vtkTesting *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    int tempr = (ap.IsBound() ?
      op->GetVerbose() :
      op->vtkTesting::GetVerbose());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTesting_Methods[] = {
  {(char*)"GetClassName", PyvtkTesting_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTesting_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTesting_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkTesting\nC++: vtkTesting *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTesting_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTesting\nC++: vtkTesting *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFrontBuffer", PyvtkTesting_SetFrontBuffer, METH_VARARGS,
   (char*)"V.SetFrontBuffer(int)\nC++: void SetFrontBuffer(int)\n\nUse the front buffer first for regression test comparisons. By\ndefault use back buffer first, then try the front buffer if the\ntest fails when comparing to the back buffer.\n"},
  {(char*)"GetFrontBufferMinValue", PyvtkTesting_GetFrontBufferMinValue, METH_VARARGS,
   (char*)"V.GetFrontBufferMinValue() -> int\nC++: int GetFrontBufferMinValue()\n\nUse the front buffer first for regression test comparisons. By\ndefault use back buffer first, then try the front buffer if the\ntest fails when comparing to the back buffer.\n"},
  {(char*)"GetFrontBufferMaxValue", PyvtkTesting_GetFrontBufferMaxValue, METH_VARARGS,
   (char*)"V.GetFrontBufferMaxValue() -> int\nC++: int GetFrontBufferMaxValue()\n\nUse the front buffer first for regression test comparisons. By\ndefault use back buffer first, then try the front buffer if the\ntest fails when comparing to the back buffer.\n"},
  {(char*)"FrontBufferOn", PyvtkTesting_FrontBufferOn, METH_VARARGS,
   (char*)"V.FrontBufferOn()\nC++: void FrontBufferOn()\n\nUse the front buffer first for regression test comparisons. By\ndefault use back buffer first, then try the front buffer if the\ntest fails when comparing to the back buffer.\n"},
  {(char*)"FrontBufferOff", PyvtkTesting_FrontBufferOff, METH_VARARGS,
   (char*)"V.FrontBufferOff()\nC++: void FrontBufferOff()\n\nUse the front buffer first for regression test comparisons. By\ndefault use back buffer first, then try the front buffer if the\ntest fails when comparing to the back buffer.\n"},
  {(char*)"GetFrontBuffer", PyvtkTesting_GetFrontBuffer, METH_VARARGS,
   (char*)"V.GetFrontBuffer() -> int\nC++: int GetFrontBuffer()\n\nUse the front buffer first for regression test comparisons. By\ndefault use back buffer first, then try the front buffer if the\ntest fails when comparing to the back buffer.\n"},
  {(char*)"RegressionTest", PyvtkTesting_RegressionTest, METH_VARARGS,
   (char*)"V.RegressionTest(float) -> int\nC++: virtual int RegressionTest(double thresh)\nV.RegressionTest(string, float) -> int\nC++: virtual int RegressionTest(const std::string &pngFileName,\n    double thresh)\nV.RegressionTest(vtkAlgorithm, float) -> int\nC++: virtual int RegressionTest(vtkAlgorithm *imageSource,\n    double thresh)\n\nPerform the test and return the result. Delegates to\nRegressionTestAndCaptureOutput, sending the output to cout.\n"},
  {(char*)"CompareAverageOfL2Norm", PyvtkTesting_CompareAverageOfL2Norm, METH_VARARGS,
   (char*)"V.CompareAverageOfL2Norm(vtkDataSet, vtkDataSet, float) -> int\nC++: int CompareAverageOfL2Norm(vtkDataSet *pdA, vtkDataSet *pdB,\n    double tol)\nV.CompareAverageOfL2Norm(vtkDataArray, vtkDataArray, float) -> int\nC++: int CompareAverageOfL2Norm(vtkDataArray *daA,\n    vtkDataArray *daB, double tol)\n\nCompute the average L2 norm between all point data data arrays of\ntypes float and double present in the data sets \"dsA\" and \"dsB\"\n(this includes instances of vtkPoints) Compare the result of each\nL2 comutation to \"tol\".\n"},
  {(char*)"SetRenderWindow", PyvtkTesting_SetRenderWindow, METH_VARARGS,
   (char*)"V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *rw)\n\nSet and get the render window that will be used for regression\ntesting.\n"},
  {(char*)"GetRenderWindow", PyvtkTesting_GetRenderWindow, METH_VARARGS,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nSet and get the render window that will be used for regression\ntesting.\n"},
  {(char*)"SetValidImageFileName", PyvtkTesting_SetValidImageFileName, METH_VARARGS,
   (char*)"V.SetValidImageFileName(string)\nC++: void SetValidImageFileName(char *)\n\nSet/Get the name of the valid image file\n"},
  {(char*)"GetValidImageFileName", PyvtkTesting_GetValidImageFileName, METH_VARARGS,
   (char*)"V.GetValidImageFileName() -> string\nC++: const char *GetValidImageFileName()\n\nSet/Get the name of the valid image file\n"},
  {(char*)"GetImageDifference", PyvtkTesting_GetImageDifference, METH_VARARGS,
   (char*)"V.GetImageDifference() -> float\nC++: double GetImageDifference()\n\nGet the image difference.\n"},
  {(char*)"AddArgument", PyvtkTesting_AddArgument, METH_VARARGS,
   (char*)"V.AddArgument(string)\nC++: void AddArgument(const char *argv)\n\nPass the command line arguments into this class to be processed.\nMany of the Get methods such as GetValidImage and GetBaselineRoot\nrely on the arguments to be passed in prior to retrieving these\nvalues. Just call AddArgument for each argument that was passed\ninto the command line\n"},
  {(char*)"GetArgument", PyvtkTesting_GetArgument, METH_VARARGS,
   (char*)"V.GetArgument(string) -> string\nC++: char *GetArgument(const char *arg)\n\nSearch for a specific argument by name and return its value\n(assumed to be the next on the command tail). Up to caller to\ndelete the returned string.\n"},
  {(char*)"CleanArguments", PyvtkTesting_CleanArguments, METH_VARARGS,
   (char*)"V.CleanArguments()\nC++: void CleanArguments()\n\n"},
  {(char*)"GetDataRoot", PyvtkTesting_GetDataRoot, METH_VARARGS,
   (char*)"V.GetDataRoot() -> string\nC++: const char *GetDataRoot()\n\nGet some parameters from the command line arguments, env, or\ndefaults\n"},
  {(char*)"SetDataRoot", PyvtkTesting_SetDataRoot, METH_VARARGS,
   (char*)"V.SetDataRoot(string)\nC++: void SetDataRoot(char *)\n\nGet some parameters from the command line arguments, env, or\ndefaults\n"},
  {(char*)"GetTempDirectory", PyvtkTesting_GetTempDirectory, METH_VARARGS,
   (char*)"V.GetTempDirectory() -> string\nC++: const char *GetTempDirectory()\n\nGet some parameters from the command line arguments, env, or\ndefaults\n"},
  {(char*)"SetTempDirectory", PyvtkTesting_SetTempDirectory, METH_VARARGS,
   (char*)"V.SetTempDirectory(string)\nC++: void SetTempDirectory(char *)\n\nGet some parameters from the command line arguments, env, or\ndefaults\n"},
  {(char*)"IsValidImageSpecified", PyvtkTesting_IsValidImageSpecified, METH_VARARGS,
   (char*)"V.IsValidImageSpecified() -> int\nC++: int IsValidImageSpecified()\n\nIs a valid image specified on the command line areguments?\n"},
  {(char*)"IsInteractiveModeSpecified", PyvtkTesting_IsInteractiveModeSpecified, METH_VARARGS,
   (char*)"V.IsInteractiveModeSpecified() -> int\nC++: int IsInteractiveModeSpecified()\n\nIs the interactive mode specified?\n"},
  {(char*)"IsFlagSpecified", PyvtkTesting_IsFlagSpecified, METH_VARARGS,
   (char*)"V.IsFlagSpecified(string) -> int\nC++: int IsFlagSpecified(const char *flag)\n\nIs some arbitrary user flag (\"-X\", \"-Z\" etc) specified\n"},
  {(char*)"SetBorderOffset", PyvtkTesting_SetBorderOffset, METH_VARARGS,
   (char*)"V.SetBorderOffset(int)\nC++: void SetBorderOffset(int a)\n\nNumber of pixels added as borders to avoid problems with window\ndecorations added by some window managers.\n"},
  {(char*)"GetBorderOffset", PyvtkTesting_GetBorderOffset, METH_VARARGS,
   (char*)"V.GetBorderOffset() -> int\nC++: int GetBorderOffset()\n\nNumber of pixels added as borders to avoid problems with window\ndecorations added by some window managers.\n"},
  {(char*)"SetVerbose", PyvtkTesting_SetVerbose, METH_VARARGS,
   (char*)"V.SetVerbose(int)\nC++: void SetVerbose(int a)\n\nGet/Set verbosity level. A level of 0 is quiet.\n"},
  {(char*)"GetVerbose", PyvtkTesting_GetVerbose, METH_VARARGS,
   (char*)"V.GetVerbose() -> int\nC++: int GetVerbose()\n\nGet/Set verbosity level. A level of 0 is quiet.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTesting_StaticNew()
{
  return vtkTesting::New();
}

PyObject *PyVTKClass_vtkTestingNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTesting_StaticNew,
    PyvtkTesting_Methods,
    "vtkTesting", modulename,
    NULL, NULL,
    PyvtkTesting_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    PyType_Ready(&PyvtkTesting_ReturnValue_Type);
    PyvtkTesting_ReturnValue_Type.tp_new = NULL;

    o = (PyObject *)&PyvtkTesting_ReturnValue_Type;
    if (o && PyDict_SetItemString(d, (char *)"ReturnValue", o) != 0)
      {
      Py_DECREF(o);
      }

    for (int c = 0; c < 4; c++)
      {
      typedef vtkTesting::ReturnValue cxx_enum_type;

      static const struct { const char *name; cxx_enum_type value; }
        constants[4] = {
          { "FAILED", vtkTesting::FAILED },
          { "PASSED", vtkTesting::PASSED },
          { "NOT_RUN", vtkTesting::NOT_RUN },
          { "DO_INTERACTOR", vtkTesting::DO_INTERACTOR },
        };

      o = PyvtkTesting_ReturnValue_FromEnum(constants[c].value);
      if (o)
        {
        PyDict_SetItemString(d, (char *)constants[c].name, o);
        Py_DECREF(o);
        }
      }

    }

  return cls;
}

const char **PyvtkTesting_Doc()
{
  static const char *docstring[] = {
    "vtkTesting - a unified VTK regression testing framework\n\n",
    "Superclass: vtkObject\n\n",
    "This is a VTK regression testing framework. Looks like this:\n\n\n vtkTesting* t = vtkTesting::New();\n\n\n Two options for setting arguments\n\n\n Option 1:\n for ( cc = 1; cc < argc; cc ++ )\n   {\n   t->AddArgument(argv[cc]);\n   }\n\n\n Option 2:\n t->AddArgument(\"-D\");\n t->AddArgument(my_data_dir);\n t->AddArgument(\"-V\");\n t->AddArgument(my_valid_image);\n\n\n ...\n\n\n Two options of doing testing:\n\n\n Option 1:\n t-",
    ">SetRenderWindow(renWin);\n int res = t->RegressionTest(threshold);\n\n\n Option 2:\n int res = t->RegressionTest(test_image, threshold);\n\n\n ...\n\n\n if (res == vtkTesting::PASSED)\n   {\n   Test passed\n   }\n else\n   {\n   Test failed\n   }\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTesting(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTestingNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTesting", o) != 0)
    {
    Py_DECREF(o);
    }

}

