// python wrapper for vtkGenericAttribute
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkGenericAttribute.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkGenericAttribute(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkGenericAttributeNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGenericAttribute_Doc();


static PyObject *
PyvtkGenericAttribute_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkGenericAttribute::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericAttribute::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkGenericAttribute *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericAttribute::NewInstance());

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
PyvtkGenericAttribute_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkGenericAttribute *tempr = vtkGenericAttribute::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    const char *tempr = op->GetName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetNumberOfComponents();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetCentering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCentering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetCentering();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetType();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetComponentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    int tempr = op->GetComponentType();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    vtkIdType tempr = op->GetSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    unsigned long tempr = op->GetActualMemorySize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  int temp0 = 0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    double *tempr = op->GetRange(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericAttribute_GetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    op->GetRange(temp0, temp1);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericAttribute_GetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
    case 1:
      return PyvtkGenericAttribute_GetRange_s1(self, args);
    case 2:
      return PyvtkGenericAttribute_GetRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRange");
  return NULL;
}



static PyObject *
PyvtkGenericAttribute_GetMaxNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNorm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    double tempr = op->GetMaxNorm();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericAdaptorCell *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell"))
    {
    double *tempr = op->GetTuple(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericAttribute_GetTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericAdaptorCell *temp0 = NULL;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    op->GetTuple(temp0, temp1);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkGenericAttribute_GetTuple_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericCellIterator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericCellIterator"))
    {
    double *tempr = op->GetTuple(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericAttribute_GetTuple_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericCellIterator *temp0 = NULL;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGenericCellIterator") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    op->GetTuple(temp0, temp1);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkGenericAttribute_GetTuple_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericPointIterator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericPointIterator"))
    {
    double *tempr = op->GetTuple(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericAttribute_GetTuple_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericPointIterator *temp0 = NULL;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = ap.GetArgSize(1);
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGenericPointIterator") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    op->GetTuple(temp0, temp1);

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyMethodDef PyvtkGenericAttribute_GetTuple_Methods[] = {
  {NULL, PyvtkGenericAttribute_GetTuple_s1, METH_VARARGS,
   (char*)"@O *vtkGenericAdaptorCell"},
  {NULL, PyvtkGenericAttribute_GetTuple_s2, METH_VARARGS,
   (char*)"@OO *vtkGenericAdaptorCell *d"},
  {NULL, PyvtkGenericAttribute_GetTuple_s3, METH_VARARGS,
   (char*)"@O *vtkGenericCellIterator"},
  {NULL, PyvtkGenericAttribute_GetTuple_s4, METH_VARARGS,
   (char*)"@OO *vtkGenericCellIterator *d"},
  {NULL, PyvtkGenericAttribute_GetTuple_s5, METH_VARARGS,
   (char*)"@O *vtkGenericPointIterator"},
  {NULL, PyvtkGenericAttribute_GetTuple_s6, METH_VARARGS,
   (char*)"@OO *vtkGenericPointIterator *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkGenericAttribute_GetTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGenericAttribute_GetTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTuple");
  return NULL;
}



static PyObject *
PyvtkGenericAttribute_GetComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  int temp0;
  vtkGenericCellIterator *temp1 = NULL;
  double *temp2 = NULL;
  double *save2 = NULL;
  double small2[8];
  int size2 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size2 = ap.GetArgSize(2);
    temp2 = small2;
    if (size2 > 4)
      {
      temp2 = new double[2*size2];
      }
    save2 = &temp2[size2];
    }

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCellIterator") &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    op->GetComponent(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp2 && temp2 != small2)
    {
    delete [] temp2;
    }

  return result;
}

static PyObject *
PyvtkGenericAttribute_GetComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  int temp0;
  vtkGenericPointIterator *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericPointIterator"))
    {
    double tempr = op->GetComponent(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericAttribute_GetComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkGenericAttribute_GetComponent_s1(self, args);
    case 2:
      return PyvtkGenericAttribute_GetComponent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetComponent");
  return NULL;
}



static PyObject *
PyvtkGenericAttribute_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericAttribute *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttribute"))
    {
    op->DeepCopy(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericAttribute_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericAttribute *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttribute"))
    {
    op->ShallowCopy(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericAttribute_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericAttribute_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericAttribute_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericAttribute_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkGenericAttribute\nC++: vtkGenericAttribute *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericAttribute_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericAttribute\nC++: vtkGenericAttribute *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetName", PyvtkGenericAttribute_GetName, METH_VARARGS,
   (char*)"V.GetName() -> string\nC++: virtual const char *GetName()\n\nName of the attribute. (e.g. \"velocity\")\n\\post result_may_not_exist: result!=0 || result==0\n"},
  {(char*)"GetNumberOfComponents", PyvtkGenericAttribute_GetNumberOfComponents, METH_VARARGS,
   (char*)"V.GetNumberOfComponents() -> int\nC++: virtual int GetNumberOfComponents()\n\nDimension of the attribute. (1 for scalar, 3 for velocity)\n\\post positive_result: result>=0\n\\post GetType()==VTK_SCALARS implies result==1\n\\post\n    (GetType()==VTK_VECTORS||(GetType()==VTK_NORMALS)||(GetType()=\n    =VTK_TCOORDS) implies result==3\n\\post GetType()==VTK_TENSORS implies result==6\n"},
  {(char*)"GetCentering", PyvtkGenericAttribute_GetCentering, METH_VARARGS,
   (char*)"V.GetCentering() -> int\nC++: virtual int GetCentering()\n\nIs the attribute centered either on points, cells or boundaries?\n\\post valid_result:\n    (result==vtkPointCentered)||(result==vtkCellCentered)\n"},
  {(char*)"GetType", PyvtkGenericAttribute_GetType, METH_VARARGS,
   (char*)"V.GetType() -> int\nC++: virtual int GetType()\n\nType of the attribute: scalar, vector, normal, texture\ncoordinate, tensor\n\\post valid_result: (result==vtkDataSetAttributes::SCALARS)\n                  ||(result==vtkDataSetAttributes::VECTORS)\n                  ||(result==vtkDataSetAttributes::NORMALS)\n                  ||(result==vtkDataSetAttributes::TCOORDS)\n                  ||(result==vtkDataSetAttributes::TENSORS)\n"},
  {(char*)"GetComponentType", PyvtkGenericAttribute_GetComponentType, METH_VARARGS,
   (char*)"V.GetComponentType() -> int\nC++: virtual int GetComponentType()\n\nType of the components of the attribute: int, float, double\n\\post valid_result: (result==VTK_BIT)          \n    ||(result==VTK_CHAR)\n                  ||(result==VTK_UNSIGNED_CHAR)\n||(result==VTK_SHORT)\n                 \n||(result==VTK_UNSIGNED_SHORT)||(result==VTK_INT)\n                  ||(result==VTK_UNSIGNED_INT) \n||(result==VTK_LONG)\n                  ||(result==VTK_UNSIGNED_LONG)\n||(result==VTK_FLOAT)\n                  ||(result==VTK_DOUBLE)       \n||(result==VTK_ID_TYPE)\n"},
  {(char*)"GetSize", PyvtkGenericAttribute_GetSize, METH_VARARGS,
   (char*)"V.GetSize() -> int\nC++: virtual vtkIdType GetSize()\n\nNumber of tuples.\n\\post valid_result: result>=0\n"},
  {(char*)"GetActualMemorySize", PyvtkGenericAttribute_GetActualMemorySize, METH_VARARGS,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nSize in kilobytes taken by the attribute.\n"},
  {(char*)"GetRange", PyvtkGenericAttribute_GetRange, METH_VARARGS,
   (char*)"V.GetRange(int) -> (float, ...)\nC++: virtual double *GetRange(int component=0)\nV.GetRange(int, [float, float])\nC++: virtual void GetRange(int component, double range[2])\n\nRange of the attribute component `component'. If `component'==-1,\nit returns the range of the magnitude (euclidean norm). It\nreturns double, even if GetType()==VTK_INT. NOT THREAD SAFE\n\\pre valid_component:\n    (component>=-1)&&(component<GetNumberOfComponents())\n\\post result_exists: result!=0\n"},
  {(char*)"GetMaxNorm", PyvtkGenericAttribute_GetMaxNorm, METH_VARARGS,
   (char*)"V.GetMaxNorm() -> float\nC++: virtual double GetMaxNorm()\n\nReturn the maximum euclidean norm for the tuples.\n\\post positive_result: result>=0\n"},
  {(char*)"GetTuple", PyvtkGenericAttribute_GetTuple, METH_VARARGS,
   (char*)"V.GetTuple(vtkGenericAdaptorCell) -> (float, ...)\nC++: virtual double *GetTuple(vtkGenericAdaptorCell *c)\nV.GetTuple(vtkGenericAdaptorCell, [float, ...])\nC++: virtual void GetTuple(vtkGenericAdaptorCell *c,\n    double *tuple)\nV.GetTuple(vtkGenericCellIterator) -> (float, ...)\nC++: virtual double *GetTuple(vtkGenericCellIterator *c)\nV.GetTuple(vtkGenericCellIterator, [float, ...])\nC++: virtual void GetTuple(vtkGenericCellIterator *c,\n    double *tuple)\nV.GetTuple(vtkGenericPointIterator) -> (float, ...)\nC++: virtual double *GetTuple(vtkGenericPointIterator *p)\nV.GetTuple(vtkGenericPointIterator, [float, ...])\nC++: virtual void GetTuple(vtkGenericPointIterator *p,\n    double *tuple)\n\nAttribute at all points of cell `c'.\n\\pre c_exists: c!=0\n\\pre c_valid: !c->IsAtEnd()\n\\post result_exists: result!=0\n\\post valid_result:\n    sizeof(result)==GetNumberOfComponents()*c->GetCell()->GetNumbe\n    rOfPoints()\n"},
  {(char*)"GetComponent", PyvtkGenericAttribute_GetComponent, METH_VARARGS,
   (char*)"V.GetComponent(int, vtkGenericCellIterator, [float, ...])\nC++: virtual void GetComponent(int i, vtkGenericCellIterator *c,\n    double *values)\nV.GetComponent(int, vtkGenericPointIterator) -> float\nC++: virtual double GetComponent(int i,\n    vtkGenericPointIterator *p)\n\nPut component `i' of the attribute at all points of cell `c' in\n`values'.\n\\pre valid_component: (i>=0) && (i<GetNumberOfComponents())\n\\pre c_exists: c!=0\n\\pre c_valid: !c->IsAtEnd()\n\\pre values_exist: values!=0\n\\pre valid_values:\n    sizeof(values)>=c->GetCell()->GetNumberOfPoints()\n"},
  {(char*)"DeepCopy", PyvtkGenericAttribute_DeepCopy, METH_VARARGS,
   (char*)"V.DeepCopy(vtkGenericAttribute)\nC++: virtual void DeepCopy(vtkGenericAttribute *other)\n\nRecursive duplication of `other' in `this'.\n\\pre other_exists: other!=0\n\\pre not_self: other!=this\n"},
  {(char*)"ShallowCopy", PyvtkGenericAttribute_ShallowCopy, METH_VARARGS,
   (char*)"V.ShallowCopy(vtkGenericAttribute)\nC++: virtual void ShallowCopy(vtkGenericAttribute *other)\n\nUpdate `this' using fields of `other'.\n\\pre other_exists: other!=0\n\\pre not_self: other!=this\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGenericAttributeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGenericAttribute_Methods,
    "vtkGenericAttribute", modulename,
    NULL, NULL,
    PyvtkGenericAttribute_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGenericAttribute_Doc()
{
  static const char *docstring[] = {
    "vtkGenericAttribute - abstract class defined API for attribute data\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGenericAttribute is an abstract class that defines an API for\nattribute data. Attribute data is data associated with the topology\nor geometry of a dataset (i.e., points, cells, etc.).\nvtkGenericAttribute is part of the adaptor framework (see\nGenericFiltering/README.html).\n\nvtkGenericAttribute provides a more general interface to attribute\ndata than its counterpart vtkDataArray (which assumes a ",
    "linear,\ncontiguous array). It adopts an iterator interface, and allows\nattributes to be associated with points, edges, faces, or edges.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericAttribute(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericAttributeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericAttribute", o) != 0)
    {
    Py_DECREF(o);
    }

  for (int c = 0; c < 3; c++)
    {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "vtkPointCentered", vtkPointCentered },
        { "vtkCellCentered", vtkCellCentered },
        { "vtkBoundaryCentered", vtkBoundaryCentered },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
      {
      PyDict_SetItemString(dict, (char *)constants[c].name, o);
      Py_DECREF(o);
      }
    }

}

